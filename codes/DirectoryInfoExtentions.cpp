System_String_array *DirectoryInfoExtentions__BashCommandExecute(
        System_String_o *workingDirectory,
        System_String_o *arguments,
        const MethodInfo *method)
{
  System_Diagnostics_ProcessStartInfo_o *v3; // x0
  const MethodInfo *v4; // x0
  System_String_array *result; // x0

  if ( (byte_4C39AB9 & 1) == 0 )
  {
    sub_1C32C20(&System_Diagnostics_DataReceivedEventHandler_TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Diagnostics_ProcessStartInfo_TypeInfo);
    sub_1C32C20(&System_Text_StringBuilder_TypeInfo);
    sub_1C32C20(&Method_DirectoryInfoExtentions___c__DisplayClass2_0__BashCommandExecute_b__0__);
    sub_1C32C20(&DirectoryInfoExtentions___c__DisplayClass2_0_TypeInfo);
    byte_4C39AB9 = 1;
  }
  v3 = (System_Diagnostics_ProcessStartInfo_o *)sub_1C32E6C(System_Diagnostics_ProcessStartInfo_TypeInfo);
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
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  System_String_array *v12; // x0
  long double inited; // q0
  _QWORD *v14; // x21
  System_String_array *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  unsigned __int64 i; // x24
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  System_IO_DirectoryInfo_o *v25; // x23

  if ( (byte_4C39ABB & 1) == 0 )
  {
    sub_1C32C20(&System_IO_DirectoryInfo_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Append_DirectoryInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Empty_DirectoryInfo___);
    sub_1C32C20(&System_IO_Path_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_957/*"-c 'find . -type d "*/);
    sub_1C32C20(&StringLiteral_524/*"'"*/);
    byte_4C39ABB = 1;
  }
  Arguments = DirectoryInfoExtentions__GetFindArguments(
                searchPattern,
                searchOption,
                *(const MethodInfo **)&searchOption);
  appended = (__int64)System_String__Concat_63556792(
                        (System_String_o *)StringLiteral_957/*"-c 'find . -type d "*/,
                        Arguments,
                        (System_String_o *)StringLiteral_524/*"'"*/,
                        0);
  if ( !directoryInfo )
    goto LABEL_24;
  v9 = (System_String_o *)appended;
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                             directoryInfo,
                             directoryInfo->klass->vtable._8_get_FullName.method);
  v12 = DirectoryInfoExtentions__BashCommandExecute(v10, v9, v11);
  v14 = Method_System_Linq_Enumerable_Empty_DirectoryInfo___;
  v15 = v12;
  v16 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_DirectoryInfo___ + 7);
  if ( !v16 )
  {
    sub_1C83390(Method_System_Linq_Enumerable_Empty_DirectoryInfo___);
    v16 = v14[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  appended = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(appended + 309) & 1) == 0 )
    appended = sub_1C83334(inited);
  if ( !v15 )
LABEL_24:
    sub_1C32E7C(appended);
  max_length = v15->max_length;
  v19 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(appended + 184);
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C32E84(appended);
      v21 = v15->m_Items[i];
      appended = System_String__op_Inequality(v21, string_TypeInfo->static_fields->Empty, 0);
      if ( (appended & 1) != 0 )
      {
        appended = ((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                     directoryInfo,
                     directoryInfo->klass->vtable._8_get_FullName.method);
        v22 = (System_String_o *)appended;
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        if ( !v21 )
          goto LABEL_24;
        v23 = System_String__Replace(v21, 0x2Fu, System_IO_Path_TypeInfo->static_fields->DirectorySeparatorChar, 0);
        v24 = System_IO_Path__Combine(v22, v23, 0);
        v25 = (System_IO_DirectoryInfo_o *)sub_1C32E6C(System_IO_DirectoryInfo_TypeInfo);
        System_IO_DirectoryInfo___ctor(v25, v24, 0);
        appended = (__int64)System_Linq_Enumerable__Append_object_(
                              v19,
                              (Il2CppObject *)v25,
                              (const MethodInfo_30EB57C *)Method_System_Linq_Enumerable_Append_DirectoryInfo___);
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)appended;
      }
      LODWORD(max_length) = v15->max_length;
    }
  }
  return (System_Collections_Generic_IEnumerable_DirectoryInfo__o *)v19;
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
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  const MethodInfo *v11; // x2
  System_String_array *v12; // x0
  long double inited; // q0
  _QWORD *v14; // x21
  System_String_array *v15; // x20
  __int64 v16; // x8
  __int64 v17; // x0
  il2cpp_array_size_t max_length; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  unsigned __int64 i; // x24
  System_String_o *v21; // x22
  System_String_o *v22; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  System_IO_FileInfo_o *v25; // x23

  if ( (byte_4C39ABA & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Append_FileInfo___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Empty_FileInfo___);
    sub_1C32C20(&System_IO_FileInfo_TypeInfo);
    sub_1C32C20(&System_IO_Path_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_958/*"-c 'find . -type f "*/);
    sub_1C32C20(&StringLiteral_524/*"'"*/);
    byte_4C39ABA = 1;
  }
  Arguments = DirectoryInfoExtentions__GetFindArguments(
                searchPattern,
                searchOption,
                *(const MethodInfo **)&searchOption);
  appended = (__int64)System_String__Concat_63556792(
                        (System_String_o *)StringLiteral_958/*"-c 'find . -type f "*/,
                        Arguments,
                        (System_String_o *)StringLiteral_524/*"'"*/,
                        0);
  if ( !directoryInfo )
    goto LABEL_24;
  v9 = (System_String_o *)appended;
  v10 = (System_String_o *)((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                             directoryInfo,
                             directoryInfo->klass->vtable._8_get_FullName.method);
  v12 = DirectoryInfoExtentions__BashCommandExecute(v10, v9, v11);
  v14 = Method_System_Linq_Enumerable_Empty_FileInfo___;
  v15 = v12;
  v16 = *((_QWORD *)Method_System_Linq_Enumerable_Empty_FileInfo___ + 7);
  if ( !v16 )
  {
    sub_1C83390(Method_System_Linq_Enumerable_Empty_FileInfo___);
    v16 = v14[7];
  }
  v17 = *(_QWORD *)(v16 + 16);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C83334(inited);
  if ( !*(_DWORD *)(v17 + 224) )
    inited = j_il2cpp_runtime_class_init_0(v17);
  appended = *(_QWORD *)(v14[7] + 16LL);
  if ( (*(_BYTE *)(appended + 309) & 1) == 0 )
    appended = sub_1C83334(inited);
  if ( !v15 )
LABEL_24:
    sub_1C32E7C(appended);
  max_length = v15->max_length;
  v19 = **(System_Collections_Generic_IEnumerable_TSource__o ***)(appended + 184);
  if ( (int)max_length >= 1 )
  {
    for ( i = 0; (__int64)i < (int)max_length; ++i )
    {
      if ( i >= (unsigned int)max_length )
        sub_1C32E84(appended);
      v21 = v15->m_Items[i];
      appended = System_String__op_Inequality(v21, string_TypeInfo->static_fields->Empty, 0);
      if ( (appended & 1) != 0 )
      {
        appended = ((__int64 (__fastcall *)(System_IO_DirectoryInfo_o *, const MethodInfo *))directoryInfo->klass->vtable._8_get_FullName.methodPtr)(
                     directoryInfo,
                     directoryInfo->klass->vtable._8_get_FullName.method);
        v22 = (System_String_o *)appended;
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        if ( !v21 )
          goto LABEL_24;
        v23 = System_String__Replace(v21, 0x2Fu, System_IO_Path_TypeInfo->static_fields->DirectorySeparatorChar, 0);
        v24 = System_IO_Path__Combine(v22, v23, 0);
        v25 = (System_IO_FileInfo_o *)sub_1C32E6C(System_IO_FileInfo_TypeInfo);
        System_IO_FileInfo___ctor_64393128(v25, v24, 0);
        appended = (__int64)System_Linq_Enumerable__Append_object_(
                              v19,
                              (Il2CppObject *)v25,
                              (const MethodInfo_30EB57C *)Method_System_Linq_Enumerable_Append_FileInfo___);
        v19 = (System_Collections_Generic_IEnumerable_TSource__o *)appended;
      }
      LODWORD(max_length) = v15->max_length;
    }
  }
  return (System_Collections_Generic_IEnumerable_FileInfo__o *)v19;
}


System_String_o *__noreturn DirectoryInfoExtentions__GetBashPath(const MethodInfo *method)
{
  __int64 v1; // x0
  System_NotImplementedException_o *v2; // x19
  __int64 v3; // x0

  v1 = sub_1C32C34(&System_NotImplementedException_TypeInfo);
  v2 = (System_NotImplementedException_o *)sub_1C32E6C(v1);
  System_NotImplementedException___ctor(v2, 0);
  v3 = sub_1C32C34(&Method_DirectoryInfoExtentions_GetBashPath__);
  sub_1C32D48(v2, v3);
}


System_IO_DirectoryInfo_array *DirectoryInfoExtentions__GetDirectoriesEx(
        System_IO_DirectoryInfo_o *directoryInfo,
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  if ( !directoryInfo )
    sub_1C32E7C(0);
  return System_IO_DirectoryInfo__GetDirectories(directoryInfo, searchPattern, searchOption, 0);
}


System_IO_FileInfo_array *DirectoryInfoExtentions__GetFilesEx(
        System_IO_DirectoryInfo_o *directoryInfo,
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  if ( !directoryInfo )
    sub_1C32E7C(0);
  return System_IO_DirectoryInfo__GetFiles_64383128(directoryInfo, searchPattern, searchOption, 0);
}


System_String_o *DirectoryInfoExtentions__GetFindArguments(
        System_String_o *searchPattern,
        int32_t searchOption,
        const MethodInfo *method)
{
  System_String_o **v5; // x8

  if ( (byte_4C39AB8 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_156/*" -name \""*/);
    sub_1C32C20(&StringLiteral_965/*"-mindepth 1 -maxdepth 1"*/);
    sub_1C32C20(&StringLiteral_349/*"\" | sed -e \"s/^..//\""*/);
    sub_1C32C20(&StringLiteral_964/*"-mindepth 1"*/);
    byte_4C39AB8 = 1;
  }
  if ( searchOption )
    v5 = (System_String_o **)&StringLiteral_964/*"-mindepth 1"*/;
  else
    v5 = (System_String_o **)&StringLiteral_965/*"-mindepth 1 -maxdepth 1"*/;
  return System_String__Concat_63558796(
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
  System_String_o *data; // x1

  if ( !e )
    goto LABEL_6;
  data = e->fields.data;
  if ( data )
  {
    this = (DirectoryInfoExtentions___c__DisplayClass2_0_o *)this->fields.stdout;
    if ( this )
    {
      System_Text_StringBuilder__AppendLine_63604832((System_Text_StringBuilder_o *)this, data, 0);
      return;
    }
LABEL_6:
    sub_1C32E7C(this);
  }
}