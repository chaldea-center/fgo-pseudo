System_String_array *DirectoryInfoExtentions__BashCommandExecute(
        System_String_o *workingDirectory,
        System_String_o *arguments,
        const MethodInfo *method)
{
  System_Diagnostics_ProcessStartInfo_o *v3; // x0
  const MethodInfo *v4; // x0
  System_String_array *result; // x0

  if ( (byte_4C58E7F & 1) == 0 )
  {
    sub_1C3E564(&System_Diagnostics_DataReceivedEventHandler_TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Diagnostics_ProcessStartInfo_TypeInfo);
    sub_1C3E564(&System_Text_StringBuilder_TypeInfo);
    sub_1C3E564(&Method_DirectoryInfoExtentions___c__DisplayClass2_0__BashCommandExecute_b__0__);
    sub_1C3E564(&DirectoryInfoExtentions___c__DisplayClass2_0_TypeInfo);
    byte_4C58E7F = 1;
  }
  v3 = (System_Diagnostics_ProcessStartInfo_o *)sub_1C3E7B0(System_Diagnostics_ProcessStartInfo_TypeInfo);
  System_Diagnostics_ProcessStartInfo___ctor(v3, 0);
  DirectoryInfoExtentions__GetBashPath(v4);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_DirectoryInfo__o *DirectoryInfoExtentions__CreateDirectoryInfoIterator(
        System_IO_DirectoryInfo_o *directoryInfo,
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  System_String_o *Arguments; // x0
  __int64 appended; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  System_String_array *v13; // x0
  long double inited; // q0
  _QWORD *v15; // x21
  System_String_array *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  unsigned __int64 i; // x24
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  System_IO_DirectoryInfo_o *v26; // x23

  if ( (byte_4C58E81 & 1) == 0 )
  {
    sub_1C3E564(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_Append_DirectoryInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Empty_DirectoryInfo___);
    sub_1C3E564(&System_IO_Path_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_957/*"-c 'find . -type d "*/);
    sub_1C3E564(&StringLiteral_524/*"'"*/);
    byte_4C58E81 = 1;
  }
  Arguments = DirectoryInfoExtentions__GetFindArguments(
                searchPattern,
                searchOption,
                *(const MethodInfo **)&searchOption);
  appended = (__int64)System_String__Concat_63674716(
                        (System_String_o *)StringLiteral_957/*"-c 'find . -type d "*/,
                        Arguments,
                        (System_String_o *)StringLiteral_524/*"'"*/,
                        0);
  if ( !directoryInfo )
    goto LABEL_24;
  v10 = (System_String_o *)appended;
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                             directoryInfo,
                             directoryInfo->klass->vtable._8_get_FullName.method);
  v13 = DirectoryInfoExtentions__BashCommandExecute(v11, v10, v12);
  v15 = Method_System_Linq_Enumerable_Empty_DirectoryInfo___;
  v16 = v13;
  v17 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_DirectoryInfo___ + 7);
  if ( !v17 )
  {
    sub_1C8ECD4(Method_System_Linq_Enumerable_Empty_DirectoryInfo___);
    v17 = v15[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  appended = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(appended + 309) & 1) == 0 )
    appended = sub_1C8EC78(inited);
  if ( !v16 )
LABEL_24:
    sub_1C3E7C0(appended, v9);
  max_length = v16->max_length;
  v20 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(appended + 184);
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C3E7C8(appended, v9);
      v22 = v16->m_Items[i];
      appended = System_String__op_Inequality(v22, string_TypeInfo->static_fields->Empty, 0);
      if ( (appended & 1) != 0 )
      {
        appended = ((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                     directoryInfo,
                     directoryInfo->klass->vtable._8_get_FullName.method);
        v23 = (System_String_o *)appended;
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        if ( !v22 )
          goto LABEL_24;
        v24 = System_String__Replace(v22, 0x2Fu, System_IO_Path_TypeInfo->static_fields->DirectorySeparatorChar, 0);
        v25 = System_IO_Path__Combine(v23, v24, 0);
        v26 = (System_IO_DirectoryInfo_o *)sub_1C3E7B0(System_IO_DirectoryInfo_TypeInfo);
        System_IO_DirectoryInfo___ctor(v26, v25, 0);
        appended = (__int64)System_Linq_Enumerable__Append_object_(
                              v20,
                              (Il2CppObject *)v26,
                              (const MethodInfo_3107C5C *)Method_System_Linq_Enumerable_Append_DirectoryInfo___);
        v20 = (System_Collections_Generic_IEnumerable_TSource__o *)appended;
      }
      LODWORD(max_length) = v16->max_length;
    }
  }
  return (System_Collections_Generic_IEnumerable_DirectoryInfo__o *)v20;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_FileInfo__o *DirectoryInfoExtentions__CreateFileInfoIterator(
        System_IO_DirectoryInfo_o *directoryInfo,
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  System_String_o *Arguments; // x0
  __int64 appended; // x0
  __int64 v9; // x1
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  const MethodInfo *v12; // x2
  System_String_array *v13; // x0
  long double inited; // q0
  _QWORD *v15; // x21
  System_String_array *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x21
  unsigned __int64 i; // x24
  System_String_o *v22; // x22
  System_String_o *v23; // x23
  System_String_o *v24; // x0
  System_String_o *v25; // x22
  System_IO_FileInfo_o *v26; // x23

  if ( (byte_4C58E80 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_Append_FileInfo___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Empty_FileInfo___);
    sub_1C3E564(&System_IO_FileInfo_TypeInfo);
    sub_1C3E564(&System_IO_Path_TypeInfo);
    sub_1C3E564(&string_TypeInfo);
    sub_1C3E564(&StringLiteral_958/*"-c 'find . -type f "*/);
    sub_1C3E564(&StringLiteral_524/*"'"*/);
    byte_4C58E80 = 1;
  }
  Arguments = DirectoryInfoExtentions__GetFindArguments(
                searchPattern,
                searchOption,
                *(const MethodInfo **)&searchOption);
  appended = (__int64)System_String__Concat_63674716(
                        (System_String_o *)StringLiteral_958/*"-c 'find . -type f "*/,
                        Arguments,
                        (System_String_o *)StringLiteral_524/*"'"*/,
                        0);
  if ( !directoryInfo )
    goto LABEL_24;
  v10 = (System_String_o *)appended;
  v11 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                             directoryInfo,
                             directoryInfo->klass->vtable._8_get_FullName.method);
  v13 = DirectoryInfoExtentions__BashCommandExecute(v11, v10, v12);
  v15 = Method_System_Linq_Enumerable_Empty_FileInfo___;
  v16 = v13;
  v17 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_FileInfo___ + 7);
  if ( !v17 )
  {
    sub_1C8ECD4(Method_System_Linq_Enumerable_Empty_FileInfo___);
    v17 = v15[7];
  }
  v18 = *(_QWORD *)(v17 + 16);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8EC78(inited);
  if ( !*(_DWORD *)(v18 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v18);
  appended = *(_QWORD *)(v15[7] + 16LL);
  if ( (*(_BYTE *)(appended + 309) & 1) == 0 )
    appended = sub_1C8EC78(inited);
  if ( !v16 )
LABEL_24:
    sub_1C3E7C0(appended, v9);
  max_length = v16->max_length;
  v20 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(appended + 184);
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C3E7C8(appended, v9);
      v22 = v16->m_Items[i];
      appended = System_String__op_Inequality(v22, string_TypeInfo->static_fields->Empty, 0);
      if ( (appended & 1) != 0 )
      {
        appended = ((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                     directoryInfo,
                     directoryInfo->klass->vtable._8_get_FullName.method);
        v23 = (System_String_o *)appended;
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        if ( !v22 )
          goto LABEL_24;
        v24 = System_String__Replace(v22, 0x2Fu, System_IO_Path_TypeInfo->static_fields->DirectorySeparatorChar, 0);
        v25 = System_IO_Path__Combine(v23, v24, 0);
        v26 = (System_IO_FileInfo_o *)sub_1C3E7B0(System_IO_FileInfo_TypeInfo);
        System_IO_FileInfo___ctor_64511052(v26, v25, 0);
        appended = (__int64)System_Linq_Enumerable__Append_object_(
                              v20,
                              (Il2CppObject *)v26,
                              (const MethodInfo_3107C5C *)Method_System_Linq_Enumerable_Append_FileInfo___);
        v20 = (System_Collections_Generic_IEnumerable_TSource__o *)appended;
      }
      LODWORD(max_length) = v16->max_length;
    }
  }
  return (System_Collections_Generic_IEnumerable_FileInfo__o *)v20;
}


System_String_o *__noreturn DirectoryInfoExtentions__GetBashPath(const MethodInfo *method)
{
  __int64 v1; // x0
  System_NotImplementedException_o *v2; // x19
  __int64 v3; // x0

  v1 = sub_1C3E578(&System_NotImplementedException_TypeInfo);
  v2 = (System_NotImplementedException_o *)sub_1C3E7B0(v1);
  System_NotImplementedException___ctor(v2, 0);
  v3 = sub_1C3E578(&Method_DirectoryInfoExtentions_GetBashPath__);
  sub_1C3E68C(v2, v3);
}


System_IO_DirectoryInfo_array *DirectoryInfoExtentions__GetDirectoriesEx(
        System_IO_DirectoryInfo_o *directoryInfo,
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  if ( !directoryInfo )
    sub_1C3E7C0(0, searchPattern);
  return System_IO_DirectoryInfo__GetDirectories(directoryInfo, searchPattern, searchOption, 0);
}


System_IO_FileInfo_array *DirectoryInfoExtentions__GetFilesEx(
        System_IO_DirectoryInfo_o *directoryInfo,
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  if ( !directoryInfo )
    sub_1C3E7C0(0, searchPattern);
  return System_IO_DirectoryInfo__GetFiles_64501052(directoryInfo, searchPattern, searchOption, 0);
}


System_String_o *DirectoryInfoExtentions__GetFindArguments(
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  System_String_o **v5; // x8

  if ( (byte_4C58E7E & 1) == 0 )
  {
    sub_1C3E564(&StringLiteral_156/*" -name \""*/);
    sub_1C3E564(&StringLiteral_965/*"-mindepth 1 -maxdepth 1"*/);
    sub_1C3E564(&StringLiteral_349/*"\" | sed -e \"s/^..//\""*/);
    sub_1C3E564(&StringLiteral_964/*"-mindepth 1"*/);
    byte_4C58E7E = 1;
  }
  if ( searchOption )
    v5 = (System_String_o **)&StringLiteral_964/*"-mindepth 1"*/;
  else
    v5 = (System_String_o **)&StringLiteral_965/*"-mindepth 1 -maxdepth 1"*/;
  return System_String__Concat_63676720(
           *v5,
           (System_String_o *)StringLiteral_156/*" -name \""*/,
           searchPattern,
           (System_String_o *)StringLiteral_349/*"\" | sed -e \"s/^..//\""*/,
           0);
}


void DirectoryInfoExtentions___c__DisplayClass2_0___ctor(
        DirectoryInfoExtentions___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DirectoryInfoExtentions___c__DisplayClass2_0___BashCommandExecute_b__0(
        DirectoryInfoExtentions___c__DisplayClass2_0_o *this,
        Il2CppObject *sender,
        System_Diagnostics_DataReceivedEventArgs_o *e,
        const MethodInfo *method)
{
  if ( !e )
    goto LABEL_6;
  sender = (Il2CppObject *)e->fields.data;
  if ( sender )
  {
    this = (DirectoryInfoExtentions___c__DisplayClass2_0_o *)this->fields.stdout;
    if ( this )
    {
      System_Text_StringBuilder__AppendLine_63722756((System_Text_StringBuilder_o *)this, (System_String_o *)sender, 0);
      return;
    }
LABEL_6:
    sub_1C3E7C0(this, sender);
  }
}