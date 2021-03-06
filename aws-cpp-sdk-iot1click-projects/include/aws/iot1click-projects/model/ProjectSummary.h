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
#include <aws/iot1click-projects/IoT1ClickProjects_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoT1ClickProjects
{
namespace Model
{

  /**
   * <p>An object providing summary information for a particular project for an
   * associated AWS account and region.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot1click-projects-2018-05-14/ProjectSummary">AWS
   * API Reference</a></p>
   */
  class AWS_IOT1CLICKPROJECTS_API ProjectSummary
  {
  public:
    ProjectSummary();
    ProjectSummary(Aws::Utils::Json::JsonView jsonValue);
    ProjectSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the project being summarized.</p>
     */
    inline const Aws::String& GetProjectName() const{ return m_projectName; }

    /**
     * <p>The name of the project being summarized.</p>
     */
    inline void SetProjectName(const Aws::String& value) { m_projectNameHasBeenSet = true; m_projectName = value; }

    /**
     * <p>The name of the project being summarized.</p>
     */
    inline void SetProjectName(Aws::String&& value) { m_projectNameHasBeenSet = true; m_projectName = std::move(value); }

    /**
     * <p>The name of the project being summarized.</p>
     */
    inline void SetProjectName(const char* value) { m_projectNameHasBeenSet = true; m_projectName.assign(value); }

    /**
     * <p>The name of the project being summarized.</p>
     */
    inline ProjectSummary& WithProjectName(const Aws::String& value) { SetProjectName(value); return *this;}

    /**
     * <p>The name of the project being summarized.</p>
     */
    inline ProjectSummary& WithProjectName(Aws::String&& value) { SetProjectName(std::move(value)); return *this;}

    /**
     * <p>The name of the project being summarized.</p>
     */
    inline ProjectSummary& WithProjectName(const char* value) { SetProjectName(value); return *this;}


    /**
     * <p>The date when the project was originally created, in UNIX epoch time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date when the project was originally created, in UNIX epoch time
     * format.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date when the project was originally created, in UNIX epoch time
     * format.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date when the project was originally created, in UNIX epoch time
     * format.</p>
     */
    inline ProjectSummary& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date when the project was originally created, in UNIX epoch time
     * format.</p>
     */
    inline ProjectSummary& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The date when the project was last updated, in UNIX epoch time format. If the
     * project was not updated, then <code>createdDate</code> and
     * <code>updatedDate</code> are the same.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedDate() const{ return m_updatedDate; }

    /**
     * <p>The date when the project was last updated, in UNIX epoch time format. If the
     * project was not updated, then <code>createdDate</code> and
     * <code>updatedDate</code> are the same.</p>
     */
    inline void SetUpdatedDate(const Aws::Utils::DateTime& value) { m_updatedDateHasBeenSet = true; m_updatedDate = value; }

    /**
     * <p>The date when the project was last updated, in UNIX epoch time format. If the
     * project was not updated, then <code>createdDate</code> and
     * <code>updatedDate</code> are the same.</p>
     */
    inline void SetUpdatedDate(Aws::Utils::DateTime&& value) { m_updatedDateHasBeenSet = true; m_updatedDate = std::move(value); }

    /**
     * <p>The date when the project was last updated, in UNIX epoch time format. If the
     * project was not updated, then <code>createdDate</code> and
     * <code>updatedDate</code> are the same.</p>
     */
    inline ProjectSummary& WithUpdatedDate(const Aws::Utils::DateTime& value) { SetUpdatedDate(value); return *this;}

    /**
     * <p>The date when the project was last updated, in UNIX epoch time format. If the
     * project was not updated, then <code>createdDate</code> and
     * <code>updatedDate</code> are the same.</p>
     */
    inline ProjectSummary& WithUpdatedDate(Aws::Utils::DateTime&& value) { SetUpdatedDate(std::move(value)); return *this;}

  private:

    Aws::String m_projectName;
    bool m_projectNameHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    Aws::Utils::DateTime m_updatedDate;
    bool m_updatedDateHasBeenSet;
  };

} // namespace Model
} // namespace IoT1ClickProjects
} // namespace Aws
