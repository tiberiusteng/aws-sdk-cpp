﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/cloudformation/model/StackInstance.h>
#include <aws/cloudformation/model/ResponseMetadata.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace CloudFormation
{
namespace Model
{
  class AWS_CLOUDFORMATION_API DescribeStackInstanceResult
  {
  public:
    DescribeStackInstanceResult();
    DescribeStackInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeStackInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline const StackInstance& GetStackInstance() const{ return m_stackInstance; }

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline void SetStackInstance(const StackInstance& value) { m_stackInstance = value; }

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline void SetStackInstance(StackInstance&& value) { m_stackInstance = std::move(value); }

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline DescribeStackInstanceResult& WithStackInstance(const StackInstance& value) { SetStackInstance(value); return *this;}

    /**
     * <p>The stack instance that matches the specified request parameters.</p>
     */
    inline DescribeStackInstanceResult& WithStackInstance(StackInstance&& value) { SetStackInstance(std::move(value)); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeStackInstanceResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeStackInstanceResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    StackInstance m_stackInstance;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
