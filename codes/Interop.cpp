// local variable allocation has failed, the output may be wrong!
int64_t __fastcall Interop__CheckIo(
        int64_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  const MethodInfo *v10; // x0
  const MethodInfo *v11; // x4
  Interop_ErrorInfo_o LastErrorInfo; // 0:x0.8

  if ( (byte_4B1D7EE & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_Sys_TypeInfo, path, isDirectory);
    byte_4B1D7EE = 1;
  }
  if ( (result & 0x8000000000000000LL) != 0 )
  {
    v10 = (const MethodInfo *)sub_1A15638(Interop_Sys_TypeInfo, path, isDirectory, errorRewriter, method);
    LastErrorInfo = Interop_Sys__GetLastErrorInfo(v10);
    Interop__ThrowExceptionForIoErrno(LastErrorInfo, path, isDirectory, errorRewriter, v11);
  }
  return result;
}


int32_t __fastcall Interop__CheckIo_61286612(
        int32_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  Interop__CheckIo(result, path, isDirectory, errorRewriter, method);
  return result;
}


// local variable allocation has failed, the output may be wrong!
System_Exception_o *__fastcall Interop__GetExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  bool IsNullOrEmpty; // w0
  __int64 v46; // x1
  const MethodInfo *v47; // x2
  __int64 v48; // x3
  System_IO_DirectoryNotFoundException_o *v49; // x0
  System_Exception_o *v50; // x20
  System_String_o *v51; // x1
  const MethodInfo *v52; // x1
  const MethodInfo *v53; // x2
  int32_t RawErrno; // w19
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_IO_IOException_o *v58; // x0
  int32_t v59; // w2
  System_String_o *v60; // x1
  System_Exception_o *IOException; // x21
  __int64 v62; // x1
  const MethodInfo *v63; // x2
  __int64 v64; // x3
  System_UnauthorizedAccessException_o *v65; // x0
  System_String_o *v66; // x1
  System_String_o *v67; // x19
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v72; // x1
  const MethodInfo *v73; // x2
  __int64 v74; // x3
  System_IO_PathTooLongException_o *v75; // x0
  System_String_o *v76; // x1
  __int64 *v77; // x8
  System_String_o *v78; // x19
  const MethodInfo *v79; // x1
  int32_t v80; // w21
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  System_String_o *v84; // x19
  __int64 v85; // x1
  __int64 v86; // x2
  __int64 v87; // x3
  System_String_o *v88; // x19
  __int64 v89; // x1
  __int64 v90; // x2
  __int64 v91; // x3
  System_String_o *v92; // x21
  __int64 v93; // x1
  __int64 v94; // x2
  __int64 v95; // x3
  Interop_ErrorInfo_o v96; // [xsp+8h] [xbp-28h] BYREF
  Interop_ErrorInfo_o v97; // 0:x0.8
  Interop_ErrorInfo_o v98; // 0:x0.8
  Interop_ErrorInfo_o v99; // 0:x0.8
  Interop_ErrorInfo_o v100; // 0:x0.8

  v96 = errorInfo;
  if ( (byte_4B1D7EF & 1) == 0 )
  {
    sub_1BCA7E0(&System_ArgumentOutOfRangeException_TypeInfo, path, isDirectory);
    sub_1BCA7E0(&System_IO_DirectoryNotFoundException_TypeInfo, v7, v8);
    sub_1BCA7E0(&System_IO_FileNotFoundException_TypeInfo, v9, v10);
    sub_1BCA7E0(&System_IO_IOException_TypeInfo, v11, v12);
    sub_1BCA7E0(&System_OperationCanceledException_TypeInfo, v13, v14);
    sub_1BCA7E0(&System_IO_PathTooLongException_TypeInfo, v15, v16);
    sub_1BCA7E0(&System_UnauthorizedAccessException_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_4893/*"Could not find file '{0}'."*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_24755/*"value"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_14253/*"The process cannot access the file '{0}' because it is being used by another process."*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_14254/*"The process cannot access the file because it is being used by another process."*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_4888/*"Could not find a part of the path."*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_2223/*"Access to the path is denied."*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_15068/*"Unable to find the specified file."*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_14326/*"The specified file name or path is too long, or a component of the specified path is too long."*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_13036/*"Specified file length was too large for the file system."*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_2222/*"Access to the path '{0}' is denied."*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_14243/*"The path '{0}' is too long, or a component of the specified path is too long."*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_4887/*"Could not find a part of the path '{0}'."*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_14128/*"The file '{0}' already exists."*/, v43, v44);
    byte_4B1D7EF = 1;
  }
  if ( errorInfo.fields._error > 65547 )
  {
    if ( errorInfo.fields._error > 65558 )
    {
      if ( errorInfo.fields._error == 65573 )
      {
        if ( System_String__IsNullOrEmpty(path, 0LL) )
        {
          v75 = (System_IO_PathTooLongException_o *)sub_1BCAA2C(System_IO_PathTooLongException_TypeInfo, v72, v73, v74);
          v50 = (System_Exception_o *)v75;
          v76 = (System_String_o *)StringLiteral_14326/*"The specified file name or path is too long, or a component of the specified path is too long."*/;
        }
        else
        {
          v84 = SR__Format_61286644((System_String_o *)StringLiteral_14243/*"The path '{0}' is too long, or a component of the specified path is too long."*/, (Il2CppObject *)path, v73);
          v75 = (System_IO_PathTooLongException_o *)sub_1BCAA2C(System_IO_PathTooLongException_TypeInfo, v85, v86, v87);
          v50 = (System_Exception_o *)v75;
          v76 = v84;
        }
        System_IO_PathTooLongException___ctor_62557996(v75, v76, 0LL);
        return v50;
      }
      if ( errorInfo.fields._error != 65602 )
      {
        if ( errorInfo.fields._error == 65581 )
        {
          IsNullOrEmpty = System_String__IsNullOrEmpty(path, 0LL);
          if ( isDirectory )
          {
            if ( IsNullOrEmpty )
            {
              v49 = (System_IO_DirectoryNotFoundException_o *)sub_1BCAA2C(
                                                                System_IO_DirectoryNotFoundException_TypeInfo,
                                                                v46,
                                                                v47,
                                                                v48);
              v50 = (System_Exception_o *)v49;
              v51 = (System_String_o *)StringLiteral_4888/*"Could not find a part of the path."*/;
            }
            else
            {
              v88 = SR__Format_61286644((System_String_o *)StringLiteral_4887/*"Could not find a part of the path '{0}'."*/, (Il2CppObject *)path, v47);
              v49 = (System_IO_DirectoryNotFoundException_o *)sub_1BCAA2C(
                                                                System_IO_DirectoryNotFoundException_TypeInfo,
                                                                v89,
                                                                v90,
                                                                v91);
              v50 = (System_Exception_o *)v49;
              v51 = v88;
            }
            System_IO_DirectoryNotFoundException___ctor_62541500(v49, v51, 0LL);
          }
          else if ( IsNullOrEmpty )
          {
            v50 = (System_Exception_o *)sub_1BCAA2C(System_IO_FileNotFoundException_TypeInfo, v46, v47, v48);
            System_IO_FileNotFoundException___ctor_62505708(
              (System_IO_FileNotFoundException_o *)v50,
              (System_String_o *)StringLiteral_15068/*"Unable to find the specified file."*/,
              0LL);
          }
          else
          {
            v92 = SR__Format_61286644((System_String_o *)StringLiteral_4893/*"Could not find file '{0}'."*/, (Il2CppObject *)path, v47);
            v50 = (System_Exception_o *)sub_1BCAA2C(System_IO_FileNotFoundException_TypeInfo, v93, v94, v95);
            System_IO_FileNotFoundException___ctor_62543476((System_IO_FileNotFoundException_o *)v50, v92, path, 0LL);
          }
          return v50;
        }
LABEL_27:
        v99 = errorInfo;
        return Interop__GetIOException(v99, (const MethodInfo *)path);
      }
LABEL_22:
      v98 = errorInfo;
      IOException = Interop__GetIOException(v98, (const MethodInfo *)path);
      if ( System_String__IsNullOrEmpty(path, 0LL) )
      {
        v65 = (System_UnauthorizedAccessException_o *)sub_1BCAA2C(
                                                        System_UnauthorizedAccessException_TypeInfo,
                                                        v62,
                                                        v63,
                                                        v64);
        v50 = (System_Exception_o *)v65;
        v66 = (System_String_o *)StringLiteral_2223/*"Access to the path is denied."*/;
      }
      else
      {
        v67 = SR__Format_61286644((System_String_o *)StringLiteral_2222/*"Access to the path '{0}' is denied."*/, (Il2CppObject *)path, v63);
        v65 = (System_UnauthorizedAccessException_o *)sub_1BCAA2C(
                                                        System_UnauthorizedAccessException_TypeInfo,
                                                        v68,
                                                        v69,
                                                        v70);
        v50 = (System_Exception_o *)v65;
        v66 = v67;
      }
      System_UnauthorizedAccessException___ctor_63338552(v65, v66, IOException, 0LL);
      return v50;
    }
    if ( errorInfo.fields._error != 65556 )
    {
      if ( errorInfo.fields._error != 65558 )
        goto LABEL_27;
      v50 = (System_Exception_o *)sub_1BCAA2C(System_ArgumentOutOfRangeException_TypeInfo, path, isDirectory, method);
      System_ArgumentOutOfRangeException___ctor_63002376(
        (System_ArgumentOutOfRangeException_o *)v50,
        (System_String_o *)StringLiteral_24755/*"value"*/,
        (System_String_o *)StringLiteral_13036/*"Specified file length was too large for the file system."*/,
        0LL);
      return v50;
    }
    if ( System_String__IsNullOrEmpty(path, 0LL) )
      goto LABEL_27;
    v77 = &StringLiteral_14128/*"The file '{0}' already exists."*/;
    goto LABEL_32;
  }
  if ( errorInfo.fields._error <= 65542 )
  {
    if ( errorInfo.fields._error == 65538 )
      goto LABEL_22;
    if ( errorInfo.fields._error != 65542 )
      goto LABEL_27;
    if ( System_String__IsNullOrEmpty(path, 0LL) )
    {
      v97 = (Interop_ErrorInfo_o)&v96;
      RawErrno = Interop_ErrorInfo__get_RawErrno(v97, v52);
      v58 = (System_IO_IOException_o *)sub_1BCAA2C(System_IO_IOException_TypeInfo, v55, v56, v57);
      v50 = (System_Exception_o *)v58;
      v59 = RawErrno;
      v60 = (System_String_o *)StringLiteral_14254/*"The process cannot access the file because it is being used by another process."*/;
LABEL_33:
      System_IO_IOException___ctor_62544772(v58, v60, v59, 0LL);
      return v50;
    }
    v77 = &StringLiteral_14253/*"The process cannot access the file '{0}' because it is being used by another process."*/;
LABEL_32:
    v78 = SR__Format_61286644((System_String_o *)*v77, (Il2CppObject *)path, v53);
    v100 = (Interop_ErrorInfo_o)&v96;
    v80 = Interop_ErrorInfo__get_RawErrno(v100, v79);
    v58 = (System_IO_IOException_o *)sub_1BCAA2C(System_IO_IOException_TypeInfo, v81, v82, v83);
    v50 = (System_Exception_o *)v58;
    v60 = v78;
    v59 = v80;
    goto LABEL_33;
  }
  if ( errorInfo.fields._error == 65544 )
    goto LABEL_22;
  if ( errorInfo.fields._error != 65547 )
    goto LABEL_27;
  v50 = (System_Exception_o *)sub_1BCAA2C(System_OperationCanceledException_TypeInfo, path, isDirectory, method);
  System_OperationCanceledException___ctor((System_OperationCanceledException_o *)v50, 0LL);
  return v50;
}


System_Exception_o *__fastcall Interop__GetIOException(Interop_ErrorInfo_o errorInfo, const MethodInfo *method)
{
  __int64 v2; // x2
  System_String_o *ErrorMessage; // x19
  const MethodInfo *v4; // x1
  int32_t RawErrno; // w20
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_IO_IOException_o *v9; // x21
  Interop_ErrorInfo_o v11; // [xsp+8h] [xbp-28h] BYREF
  Interop_ErrorInfo_o v12; // 0:x0.8
  Interop_ErrorInfo_o v13; // 0:x0.8

  v11 = errorInfo;
  if ( (byte_4B1D7F0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IO_IOException_TypeInfo, method, v2);
    byte_4B1D7F0 = 1;
  }
  v12 = (Interop_ErrorInfo_o)&v11;
  ErrorMessage = Interop_ErrorInfo__GetErrorMessage(v12, method);
  v13 = (Interop_ErrorInfo_o)&v11;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v13, v4);
  v9 = (System_IO_IOException_o *)sub_1BCAA2C(System_IO_IOException_TypeInfo, v6, v7, v8);
  System_IO_IOException___ctor_62544772(v9, ErrorMessage, RawErrno, 0LL);
  return (System_Exception_o *)v9;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Interop__GetRandomBytes(uint8_t *buffer, int32_t length, const MethodInfo *method)
{
  if ( (byte_4B1D7F1 & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_Sys_TypeInfo, *(_QWORD *)&length, method);
    byte_4B1D7F1 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, *(_QWORD *)&length);
  SystemNative_GetNonCryptographicallySecureRandomBytes(buffer, (unsigned int)length, method);
}


void __fastcall __noreturn Interop__ThrowExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Exception_o *ExceptionForIoErrno; // x19
  __int64 v9; // x1
  __int64 v10; // x0
  Interop_ErrorInfo_o v11; // 0:x0.8

  v7 = (__int64)errorInfo;
  if ( errorRewriter )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))errorRewriter->fields.m_target)(
           errorRewriter->fields.original_method_info,
           errorInfo,
           *(_QWORD *)&errorRewriter->fields.extra_arg);
  v11 = (Interop_ErrorInfo_o)v7;
  ExceptionForIoErrno = Interop__GetExceptionForIoErrno(v11, path, isDirectory, (const MethodInfo *)errorRewriter);
  v10 = sub_1BCA7F4(&Method_Interop_ThrowExceptionForIoErrno__, v9);
  sub_1BCA908(ExceptionForIoErrno, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Interop_ErrorInfo___ctor(Interop_ErrorInfo_o this, int32_t errno, const MethodInfo *method)
{
  if ( (byte_4B1D7F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_Sys_TypeInfo, *(_QWORD *)&errno, method);
    byte_4B1D7F2 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, *(_QWORD *)&errno);
  *(_DWORD *)this.fields._error = SystemNative_ConvertErrorPlatformToPal((unsigned int)errno, *(_QWORD *)&errno, method);
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = errno;
}


void __fastcall Interop_ErrorInfo___ctor_61287308(Interop_ErrorInfo_o this, int32_t error, const MethodInfo *method)
{
  *(_DWORD *)this.fields._error = error;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = -1;
}


System_String_o *__fastcall Interop_ErrorInfo__GetErrorMessage(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  int32_t RawErrno; // w19
  Interop_ErrorInfo_o v7; // 0:x0.8

  if ( (byte_4B1D7F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_Sys_TypeInfo, method, v2);
    byte_4B1D7F4 = 1;
  }
  v7 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v7, method);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, v4);
  return Interop_Sys__StrError(RawErrno, v4);
}


System_String_o *__fastcall Interop_ErrorInfo__ToString(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x20
  Il2CppObject *v9; // x21
  const MethodInfo *v10; // x1
  Il2CppObject *ErrorMessage; // x0
  int v13; // [xsp+8h] [xbp-38h] BYREF
  int32_t RawErrno; // [xsp+Ch] [xbp-34h] BYREF
  Interop_ErrorInfo_o v15; // 0:x0.8
  Interop_ErrorInfo_o v16; // 0:x0.8

  if ( (byte_4B1D7F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_Error_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_11296/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/, v6, v7);
    byte_4B1D7F5 = 1;
  }
  v15 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v15, method);
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &RawErrno);
  v13 = *(_DWORD *)this.fields._error;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(Interop_Error_TypeInfo, &v13);
  v16 = this;
  ErrorMessage = (Il2CppObject *)Interop_ErrorInfo__GetErrorMessage(v16, v10);
  return System_String__Format_62415660((System_String_o *)StringLiteral_11296/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/, v8, v9, ErrorMessage, 0LL);
}


int32_t __fastcall Interop_ErrorInfo__get_Error(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  return *(_DWORD *)this.fields._error;
}


int32_t __fastcall Interop_ErrorInfo__get_RawErrno(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t result; // w0
  unsigned int v5; // w20

  if ( (byte_4B1D7F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_Sys_TypeInfo, method, v2);
    byte_4B1D7F3 = 1;
  }
  result = *(_DWORD *)(*(_QWORD *)&this + 4LL);
  if ( result == -1 )
  {
    v5 = *(_DWORD *)this.fields._error;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, method);
    result = SystemNative_ConvertErrorPalToPlatform(v5, method);
    *(_DWORD *)(*(_QWORD *)&this + 4LL) = result;
  }
  return result;
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__DeleteSecContext(
        uint32_t *minorStatus,
        intptr_t *contextHandle,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_PlatformNotSupportedException_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x0

  v3 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, contextHandle);
  v7 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_PlatformNotSupportedException___ctor(v7, 0LL);
  v9 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_DeleteSecContext__, v8);
  sub_1BCA908(v7, v9);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__DisplayMajorStatus(
        uint32_t *minorStatus,
        uint32_t statusValue,
        Interop_NetSecurityNative_GssBuffer_o *buffer,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  System_PlatformNotSupportedException_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x0

  v4 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, statusValue);
  v8 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v4, v5, v6, v7);
  System_PlatformNotSupportedException___ctor(v8, 0LL);
  v10 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_DisplayMajorStatus__, v9);
  sub_1BCA908(v8, v10);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__DisplayMinorStatus(
        uint32_t *minorStatus,
        uint32_t statusValue,
        Interop_NetSecurityNative_GssBuffer_o *buffer,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  System_PlatformNotSupportedException_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x0

  v4 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, statusValue);
  v8 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v4, v5, v6, v7);
  System_PlatformNotSupportedException___ctor(v8, 0LL);
  v10 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_DisplayMinorStatus__, v9);
  sub_1BCA908(v8, v10);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ImportPrincipalName(
        uint32_t *minorStatus,
        System_String_o *inputName,
        int32_t inputNameByteCount,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o **outputName,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_PlatformNotSupportedException_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x0

  v5 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, inputName);
  v9 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v5, v6, v7, v8);
  System_PlatformNotSupportedException___ctor(v9, 0LL);
  v11 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_ImportPrincipalName__, v10);
  sub_1BCA908(v9, v11);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ImportUserName(
        uint32_t *minorStatus,
        System_String_o *inputName,
        int32_t inputNameByteCount,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o **outputName,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  System_PlatformNotSupportedException_o *v9; // x19
  __int64 v10; // x1
  __int64 v11; // x0

  v5 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, inputName);
  v9 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v5, v6, v7, v8);
  System_PlatformNotSupportedException___ctor(v9, 0LL);
  v11 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_ImportUserName__, v10);
  sub_1BCA908(v9, v11);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__InitSecContext(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssCredHandle_o *initiatorCredHandle,
        Microsoft_Win32_SafeHandles_SafeGssContextHandle_o **contextHandle,
        bool isNtlmOnly,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o *targetName,
        uint32_t reqFlags,
        System_Byte_array *inputBytes,
        int32_t inputLength,
        Interop_NetSecurityNative_GssBuffer_o *token,
        uint32_t *retFlags,
        int32_t *isNtlmUsed,
        const MethodInfo *method)
{
  __int64 v12; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  System_PlatformNotSupportedException_o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x0

  v12 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, initiatorCredHandle);
  v16 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v12, v13, v14, v15);
  System_PlatformNotSupportedException___ctor(v16, 0LL);
  v18 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_InitSecContext__, v17);
  sub_1BCA908(v16, v18);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__InitiateCredSpNego(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o *desiredName,
        Microsoft_Win32_SafeHandles_SafeGssCredHandle_o **outputCredHandle,
        const MethodInfo *method)
{
  __int64 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  System_PlatformNotSupportedException_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x0

  v4 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, desiredName);
  v8 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v4, v5, v6, v7);
  System_PlatformNotSupportedException___ctor(v8, 0LL);
  v10 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_InitiateCredSpNego__, v9);
  sub_1BCA908(v8, v10);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__InitiateCredWithPassword(
        uint32_t *minorStatus,
        bool isNtlm,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o *desiredName,
        System_String_o *password,
        int32_t passwordLen,
        Microsoft_Win32_SafeHandles_SafeGssCredHandle_o **outputCredHandle,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_PlatformNotSupportedException_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x0

  v7 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, isNtlm);
  v11 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v7, v8, v9, v10);
  System_PlatformNotSupportedException___ctor(v11, 0LL);
  v13 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_InitiateCredWithPassword__, v12);
  sub_1BCA908(v11, v13);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ReleaseCred(
        uint32_t *minorStatus,
        intptr_t *credHandle,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_PlatformNotSupportedException_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x0

  v3 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, credHandle);
  v7 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_PlatformNotSupportedException___ctor(v7, 0LL);
  v9 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_ReleaseCred__, v8);
  sub_1BCA908(v7, v9);
}


void __fastcall __noreturn Interop_NetSecurityNative__ReleaseGssBuffer(
        intptr_t bufferPtr,
        uint64_t length,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_PlatformNotSupportedException_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x0

  v3 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, length);
  v7 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_PlatformNotSupportedException___ctor(v7, 0LL);
  v9 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_ReleaseGssBuffer__, v8);
  sub_1BCA908(v7, v9);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ReleaseName(
        uint32_t *minorStatus,
        intptr_t *inputName,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  System_PlatformNotSupportedException_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x0

  v3 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, inputName);
  v7 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v3, v4, v5, v6);
  System_PlatformNotSupportedException___ctor(v7, 0LL);
  v9 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_ReleaseName__, v8);
  sub_1BCA908(v7, v9);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__Unwrap(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssContextHandle_o *contextHandle,
        System_Byte_array *inputBytes,
        int32_t offset,
        int32_t count,
        Interop_NetSecurityNative_GssBuffer_o *outBuffer,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  System_PlatformNotSupportedException_o *v11; // x19
  __int64 v12; // x1
  __int64 v13; // x0

  v7 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, contextHandle);
  v11 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v7, v8, v9, v10);
  System_PlatformNotSupportedException___ctor(v11, 0LL);
  v13 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_Unwrap__, v12);
  sub_1BCA908(v11, v13);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__UnwrapBuffer(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssContextHandle_o *contextHandle,
        System_Byte_array *inputBytes,
        int32_t offset,
        int32_t count,
        Interop_NetSecurityNative_GssBuffer_o *outBuffer,
        const MethodInfo *method)
{
  Interop_NetSecurityNative__Unwrap(minorStatus, contextHandle, inputBytes, offset, count, outBuffer, method);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__Wrap(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssContextHandle_o *contextHandle,
        bool isEncrypt,
        System_Byte_array *inputBytes,
        int32_t offset,
        int32_t count,
        Interop_NetSecurityNative_GssBuffer_o *outBuffer,
        const MethodInfo *method)
{
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_PlatformNotSupportedException_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x0

  v8 = sub_1BCA7F4(&System_PlatformNotSupportedException_TypeInfo, contextHandle);
  v12 = (System_PlatformNotSupportedException_o *)sub_1BCAA2C(v8, v9, v10, v11);
  System_PlatformNotSupportedException___ctor(v12, 0LL);
  v14 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_Wrap__, v13);
  sub_1BCA908(v12, v14);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__WrapBuffer(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssContextHandle_o *contextHandle,
        bool isEncrypt,
        System_Byte_array *inputBytes,
        int32_t offset,
        int32_t count,
        Interop_NetSecurityNative_GssBuffer_o *outBuffer,
        const MethodInfo *method)
{
  Interop_NetSecurityNative__Wrap(minorStatus, contextHandle, 0, inputBytes, offset, count, outBuffer, method);
}


void __fastcall Interop_NetSecurityNative_GssApiException___ctor(
        Interop_NetSecurityNative_GssApiException_o *this,
        System_String_o *message,
        const MethodInfo *method)
{
  if ( (byte_4B1FBF3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Exception_TypeInfo, message, method);
    byte_4B1FBF3 = 1;
  }
  if ( !System_Exception_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Exception_TypeInfo, message);
  System_Exception___ctor_63442328((System_Exception_o *)this, message, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Interop_NetSecurityNative_GssApiException___ctor_65127460(
        Interop_NetSecurityNative_GssApiException_o *this,
        uint32_t majorStatus,
        uint32_t minorStatus,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_String_o *GssApiDisplayStatus; // x22

  if ( (byte_4B1FBF4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Exception_TypeInfo, *(_QWORD *)&majorStatus, *(_QWORD *)&minorStatus);
    byte_4B1FBF4 = 1;
  }
  GssApiDisplayStatus = Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus(
                          majorStatus,
                          minorStatus,
                          0LL,
                          method);
  if ( !System_Exception_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Exception_TypeInfo, v7);
  System_Exception___ctor_63442328((System_Exception_o *)this, GssApiDisplayStatus, 0LL);
  this->fields._HResult = majorStatus;
  *(&this->fields.caught_in_unmanaged + 1) = minorStatus;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus(
        uint32_t majorStatus,
        uint32_t minorStatus,
        System_String_o *helpText,
        const MethodInfo *method)
{
  uint32_t v6; // w21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_String_o *GssApiDisplayStatus_65128076; // x0
  const MethodInfo *v20; // x2
  Il2CppObject *v21; // x22
  System_String_o *v22; // x0
  Il2CppObject *v23; // x2
  Il2CppObject *v24; // x1
  System_String_o *v25; // x0
  Il2CppObject *v26; // x1
  System_String_o *v27; // x0
  System_Enum_o *v28; // x0
  System_String_o *v29; // x21
  System_Enum_o *v30; // x0
  System_String_o *v31; // x0
  System_Enum_o *v32; // x0
  System_String_o *v33; // x20
  uint32_t v35; // [xsp+4h] [xbp-3Ch] BYREF
  uint32_t v36; // [xsp+8h] [xbp-38h] BYREF
  uint32_t v37; // [xsp+Ch] [xbp-34h] BYREF

  v6 = majorStatus;
  if ( (byte_4B1FBF5 & 1) == 0 )
  {
    sub_1BCA7E0(&Interop_NetSecurityNative_Status_TypeInfo, *(_QWORD *)&minorStatus, helpText);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v7, v8);
    sub_1BCA7E0(&StringLiteral_7066/*"GSSAPI operation failed with status: {0} (Minor status: {1})."*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_12368/*"SSAPI operation failed with status: {0}."*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_7065/*"GSSAPI operation failed with error - {0}."*/, v15, v16);
    majorStatus = sub_1BCA7E0(&StringLiteral_7064/*"GSSAPI operation failed with error - {0} ({1})."*/, v17, v18);
    byte_4B1FBF5 = 1;
  }
  GssApiDisplayStatus_65128076 = Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus_65128076(
                                   majorStatus,
                                   0,
                                   (const MethodInfo *)helpText);
  v21 = (Il2CppObject *)GssApiDisplayStatus_65128076;
  if ( minorStatus )
  {
    v22 = Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus_65128076(
            (uint32_t)GssApiDisplayStatus_65128076,
            1,
            v20);
    if ( v21 && (v23 = (Il2CppObject *)v22) != 0LL )
    {
      v24 = v21;
      v25 = (System_String_o *)StringLiteral_7064/*"GSSAPI operation failed with error - {0} ({1})."*/;
    }
    else
    {
      v37 = v6;
      v28 = (System_Enum_o *)j_il2cpp_value_box_0(Interop_NetSecurityNative_Status_TypeInfo, &v37);
      v29 = System_Enum__ToString_63436868(v28, (System_String_o *)StringLiteral_24997/*"x"*/, 0LL);
      v36 = minorStatus;
      v30 = (System_Enum_o *)j_il2cpp_value_box_0(Interop_NetSecurityNative_Status_TypeInfo, &v36);
      v23 = (Il2CppObject *)System_Enum__ToString_63436868(v30, (System_String_o *)StringLiteral_24997/*"x"*/, 0LL);
      v24 = (Il2CppObject *)v29;
      v25 = (System_String_o *)StringLiteral_7066/*"GSSAPI operation failed with status: {0} (Minor status: {1})."*/;
    }
    v31 = SR__Format_61290556(v25, v24, v23, 0LL);
  }
  else
  {
    if ( GssApiDisplayStatus_65128076 )
    {
      v26 = (Il2CppObject *)GssApiDisplayStatus_65128076;
      v27 = (System_String_o *)StringLiteral_7065/*"GSSAPI operation failed with error - {0}."*/;
    }
    else
    {
      v35 = v6;
      v32 = (System_Enum_o *)j_il2cpp_value_box_0(Interop_NetSecurityNative_Status_TypeInfo, &v35);
      v26 = (Il2CppObject *)System_Enum__ToString_63436868(v32, (System_String_o *)StringLiteral_24997/*"x"*/, 0LL);
      v27 = (System_String_o *)StringLiteral_12368/*"SSAPI operation failed with status: {0}."*/;
    }
    v31 = SR__Format_61286644(v27, v26, 0LL);
  }
  v33 = v31;
  if ( !System_String__IsNullOrEmpty(helpText, 0LL) )
    return System_String__Concat_62412480(v33, (System_String_o *)StringLiteral_116/*" "*/, helpText, 0LL);
  return v33;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus_65128076(
        uint32_t status,
        bool isMinor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *result; // x0

  if ( (byte_4B1FBF6 & 1) == 0 )
  {
    *(_QWORD *)&status = sub_1BCA7E0(&System_Runtime_InteropServices_Marshal_TypeInfo, isMinor, method);
    byte_4B1FBF6 = 1;
  }
  if ( isMinor )
    Interop_NetSecurityNative__DisplayMinorStatus(
      *(uint32_t **)&status,
      isMinor,
      (Interop_NetSecurityNative_GssBuffer_o *)method,
      v3);
  Interop_NetSecurityNative__DisplayMajorStatus(
    *(uint32_t **)&status,
    isMinor,
    (Interop_NetSecurityNative_GssBuffer_o *)method,
    v3);
  return result;
}


int32_t __fastcall Interop_NetSecurityNative_GssBuffer__Copy(
        Interop_NetSecurityNative_GssBuffer_o this,
        System_Byte_array *destination,
        int32_t offset,
        const MethodInfo *method)
{
  int32_t v4; // w19
  System_Byte_array *v5; // x20
  uint64_t *length; // x21
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  uint64_t v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  int v13; // w8
  uint64_t v14; // x21
  int v16; // w21
  __int64 v17; // x0
  Il2CppObject *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x0
  Il2CppObject *v21; // x19
  __int64 v22; // x1
  System_String_o *v23; // x0
  System_String_o *v24; // x19
  __int64 v25; // x1
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  Interop_NetSecurityNative_GssApiException_o *v30; // x20
  const MethodInfo *v31; // x2
  __int64 v32; // x1
  __int64 v33; // x0
  int v34; // [xsp+8h] [xbp-28h] BYREF
  int v35; // [xsp+Ch] [xbp-24h] BYREF

  v4 = (int)destination;
  v5 = *(System_Byte_array **)&this.fields._data;
  length = (uint64_t *)this.fields._length;
  if ( (byte_4B1FBF7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, *(_QWORD *)&this.fields._data, destination);
    sub_1BCA7E0(&System_Runtime_InteropServices_Marshal_TypeInfo, v7, v8);
    byte_4B1FBF7 = 1;
  }
  if ( System_IntPtr__op_Equality(length[1], 0, 0LL) )
  {
    LODWORD(v10) = 0;
  }
  else
  {
    v10 = *length;
    if ( *length )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
      v11 = System_Convert__ToInt32_63057620(v10, 0LL);
      if ( !v5 )
        sub_1BCAA3C(v11, v12);
      LODWORD(v10) = v11;
      v13 = v5->max_length - v4;
      if ( (int)v11 > v13 )
      {
        v35 = v11;
        v16 = v13;
        v17 = sub_1BCA7F4(&int_TypeInfo, v12);
        v18 = (Il2CppObject *)j_il2cpp_value_box_0(v17, &v35);
        v34 = v16;
        v20 = sub_1BCA7F4(&int_TypeInfo, v19);
        v21 = (Il2CppObject *)j_il2cpp_value_box_0(v20, &v34);
        v23 = (System_String_o *)sub_1BCA7F4(&StringLiteral_7770/*"Insufficient buffer space. Required: {0} Actual: {1}."*/, v22);
        v24 = SR__Format_61290556(v23, v18, v21, 0LL);
        v26 = sub_1BCA7F4(&Interop_NetSecurityNative_GssApiException_TypeInfo, v25);
        v30 = (Interop_NetSecurityNative_GssApiException_o *)sub_1BCAA2C(v26, v27, v28, v29);
        Interop_NetSecurityNative_GssApiException___ctor(v30, v24, v31);
        v33 = sub_1BCA7F4(&Method_Interop_NetSecurityNative_GssBuffer_Copy__, v32);
        sub_1BCA908(v30, v33);
      }
      v14 = length[1];
      if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v12);
      System_Runtime_InteropServices_Marshal__Copy_62289080(v14, v5, v4, v10, 0LL);
    }
  }
  return v10;
}


void __fastcall Interop_NetSecurityNative_GssBuffer__Dispose(
        Interop_NetSecurityNative_GssBuffer_o this,
        const MethodInfo *method)
{
  _QWORD *length; // x19
  _BOOL4 v3; // w0
  uint64_t v4; // x1
  const MethodInfo *v5; // x2

  length = (_QWORD *)this.fields._length;
  v3 = System_IntPtr__op_Inequality(*(_QWORD *)(this.fields._length + 8), 0, 0LL);
  if ( v3 )
    Interop_NetSecurityNative__ReleaseGssBuffer(v3, v4, v5);
  *length = 0LL;
}


System_Byte_array *__fastcall Interop_NetSecurityNative_GssBuffer__ToByteArray(
        Interop_NetSecurityNative_GssBuffer_o this,
        const MethodInfo *method)
{
  uint64_t *length; // x19
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  uint64_t v10; // x20
  unsigned int v11; // w20
  __int64 v12; // x0
  __int64 v13; // x1
  uint64_t v14; // x21
  System_Byte_array *v15; // x19
  _QWORD *v16; // x19
  __int64 v17; // x8
  __int64 v18; // x0
  __int64 v19; // x0

  length = (uint64_t *)this.fields._length;
  if ( (byte_4B1FBF8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_byte___, *(_QWORD *)&this.fields._data, method);
    sub_1BCA7E0(&byte___TypeInfo, v3, v4);
    sub_1BCA7E0(&System_Convert_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Runtime_InteropServices_Marshal_TypeInfo, v7, v8);
    byte_4B1FBF8 = 1;
  }
  if ( System_IntPtr__op_Equality(length[1], 0, 0LL) || (v10 = *length) == 0 )
  {
    v16 = Method_System_Array_Empty_byte___;
    v17 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v17 )
    {
      sub_1C1C718(Method_System_Array_Empty_byte___);
      v17 = v16[7];
    }
    v18 = *(_QWORD *)(v17 + 16);
    if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
      v18 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v18 + 224) )
      j_il2cpp_runtime_class_init_0(v18, v9);
    v19 = *(_QWORD *)(v16[7] + 16LL);
    if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
      v19 = sub_1C1C6BC();
    return **(System_Byte_array ***)(v19 + 184);
  }
  else
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v9);
    v11 = System_Convert__ToInt32_63057620(v10, 0LL);
    v12 = sub_1BCA888(byte___TypeInfo, v11);
    v14 = length[1];
    v15 = (System_Byte_array *)v12;
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v13);
    System_Runtime_InteropServices_Marshal__Copy_62289080(v14, v15, 0, v11, 0LL);
  }
  return v15;
}


void __fastcall Interop_Sys___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1D7FB & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1BCA7E0(&Interop_Sys_TypeInfo, v1, v2);
    byte_4B1D7FB = 1;
  }
  Interop_Sys_TypeInfo->static_fields->CanSetHiddenFlag = (unsigned int)SystemNative_LChflagsCanSetHiddenFlag(method) != 0;
}


int32_t __fastcall Interop_Sys__CloseDir(intptr_t dir, const MethodInfo *method)
{
  int32_t v2; // w19

  v2 = SystemNative_CloseDir(dir, method);
  sub_1BCA790();
  return v2;
}


int32_t __fastcall Interop_Sys__CopyFile(
        Microsoft_Win32_SafeHandles_SafeFileHandle_o *source,
        Microsoft_Win32_SafeHandles_SafeFileHandle_o *destination,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w21
  const char *v8; // x0
  __int64 exception_argument_null_0; // x0
  bool v10; // [xsp+8h] [xbp-28h] BYREF
  bool success; // [xsp+Ch] [xbp-24h] BYREF

  if ( !source )
  {
    v8 = "source";
    goto LABEL_10;
  }
  success = 0;
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(
    (System_Runtime_InteropServices_SafeHandle_o *)source,
    &success,
    0LL);
  if ( !destination )
  {
    v8 = "destination";
LABEL_10:
    exception_argument_null_0 = j_il2cpp_get_exception_argument_null_0(v8, destination, method);
    sub_1BCA908(exception_argument_null_0, 0LL);
  }
  v5 = *(_QWORD *)&source->fields.handle;
  v10 = 0;
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(
    (System_Runtime_InteropServices_SafeHandle_o *)destination,
    &v10,
    0LL);
  v6 = SystemNative_CopyFile(v5, *(_QWORD *)&destination->fields.handle);
  sub_1BCA790();
  if ( success )
    System_Runtime_InteropServices_SafeHandle__DangerousRelease(
      (System_Runtime_InteropServices_SafeHandle_o *)source,
      0LL);
  if ( v10 )
    System_Runtime_InteropServices_SafeHandle__DangerousRelease(
      (System_Runtime_InteropServices_SafeHandle_o *)destination,
      0LL);
  return v6;
}


Interop_ErrorInfo_o __fastcall Interop_Sys__GetLastErrorInfo(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  int32_t LastWin32Error; // w1
  const MethodInfo *v4; // x2
  Interop_ErrorInfo_o v6; // [xsp+8h] [xbp-18h] BYREF
  Interop_ErrorInfo_o v7; // 0:x0.8

  if ( (byte_4B1D7F6 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Runtime_InteropServices_Marshal_TypeInfo, v1, v2);
    byte_4B1D7F6 = 1;
  }
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v1);
  LastWin32Error = System_Runtime_InteropServices_Marshal__GetLastWin32Error(0LL);
  v7 = (Interop_ErrorInfo_o)&v6;
  v6 = 0LL;
  Interop_ErrorInfo___ctor(v7, LastWin32Error, v4);
  return v6;
}


int32_t __fastcall Interop_Sys__LStat(
        System_String_o *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  Interop_Sys_FileStatus_o *v8; // x19
  __int64 v9; // x20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = output;
  v9 = sub_1BCAD98((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  LODWORD(v8) = SystemNative_LStat2(v9, v8);
  sub_1BCA790();
  sub_1BCADB0(v9);
  return (int)v8;
}


int32_t __fastcall Interop_Sys__LStat_61289516(
        uint8_t *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_LStat2(path, output);
  sub_1BCA790();
  return v3;
}


int32_t __fastcall Interop_Sys__LStat_61289544(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo_2F8F108 *v10; // x1
  __int64 v11; // x1
  uint8_t *Reference_byte; // x20
  int32_t v13; // w19
  const MethodInfo *v14; // x2
  _BYTE v16[256]; // [xsp-100h] [xbp-120h] BYREF
  __int64 v17[4]; // [xsp+0h] [xbp-20h] BYREF
  System_Span_T__o v18; // 0:x0.8
  System_Span_byte__o v19; // 0:x2.8
  System_ReadOnlySpan_char__o v20; // 0:x2.8
  System_Text_ValueUtf8Converter_o v21; // 0:x0.16
  System_Text_ValueUtf8Converter_o v22; // 0:x0.16
  System_Text_ValueUtf8Converter_o v23; // 0:x0.16

  v17[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B1D7FA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____76917392, output, method);
    sub_1BCA7E0(&Method_System_Span_byte___ctor___76822864, v6, v7);
    sub_1BCA7E0(&Interop_Sys_TypeInfo, v8, v9);
    byte_4B1D7FA = 1;
  }
  memset(v17, 0, 24);
  memset(v16, 0, sizeof(v16));
  v21.fields._arrayToReturnToPool = (struct System_Byte_array *)v17;
  v19 = (System_Span_byte__o)256LL;
  v21.fields._bytes = (struct System_Span_byte__o)v16;
  System_Text_ValueUtf8Converter___ctor(v21, v19, 0LL);
  v22.fields._arrayToReturnToPool = (struct System_Byte_array *)v17;
  v22.fields._bytes = (struct System_Span_byte__o)path;
  v20 = (System_ReadOnlySpan_char__o)output;
  v18 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(v22, v20, 0LL);
  Reference_byte = System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(v18, v10);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, v11);
  v13 = SystemNative_LStat2(Reference_byte, method);
  sub_1BCA790();
  v23.fields._arrayToReturnToPool = (struct System_Byte_array *)v17;
  v23.fields._bytes = 0LL;
  System_Text_ValueUtf8Converter__Dispose(v23, v14);
  return v13;
}


int32_t __fastcall Interop_Sys__Link(System_String_o *source, System_String_o *link, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  char *v9; // x20
  int v10; // w1
  int v11; // w2
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7
  char *v17; // x19
  int32_t v18; // w21
  int v20; // [xsp+0h] [xbp-20h]
  int v21; // [xsp+0h] [xbp-20h]
  char v22; // [xsp+8h] [xbp-18h]
  char v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+10h] [xbp-10h]
  int v25; // [xsp+10h] [xbp-10h]
  void *v26; // [xsp+18h] [xbp-8h]
  void *v27; // [xsp+18h] [xbp-8h]

  v8 = (int)link;
  v9 = (char *)sub_1BCAD98((int)source, (int)link, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1BCAD98(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Link(v9, v17);
  sub_1BCA790();
  sub_1BCADB0(v9);
  sub_1BCADB0(v17);
  return v18;
}


int32_t __fastcall Interop_Sys__MkDir(System_String_o *path, int32_t mode, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __mode_t v8; // w19
  char *v9; // x20
  int32_t v10; // w19
  int v12; // [xsp+0h] [xbp-20h]
  char v13; // [xsp+8h] [xbp-18h]
  int v14; // [xsp+10h] [xbp-10h]
  void *v15; // [xsp+18h] [xbp-8h]

  v8 = mode;
  v9 = (char *)sub_1BCAD98((int)path, mode, (int)method, v3, v4, v5, v6, v7, v12, v13, v14, v15);
  v10 = SystemNative_MkDir(v9, v8);
  sub_1BCA790();
  sub_1BCADB0(v9);
  return v10;
}


intptr_t __fastcall Interop_Sys__OpenDir(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __int64 v8; // x19
  intptr_t v9; // w20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = sub_1BCAD98((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_OpenDir();
  sub_1BCA790();
  sub_1BCADB0(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__ReadLink(
        System_String_o *path,
        System_Byte_array *buffer,
        int32_t bufferSize,
        const MethodInfo *method)
{
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  __int64 v10; // x0
  int v11; // w1
  __int64 v12; // x21
  int32_t Link; // w19
  int v15; // [xsp+0h] [xbp-20h]
  char v16; // [xsp+8h] [xbp-18h]
  int v17; // [xsp+10h] [xbp-10h]
  void *v18; // [xsp+18h] [xbp-8h]

  v10 = sub_1BCAD98((int)path, (int)buffer, bufferSize, (int)method, v4, v5, v6, v7, v15, v16, v17, v18);
  if ( buffer )
    v11 = (_DWORD)buffer + 32;
  else
    v11 = 0;
  v12 = v10;
  Link = SystemNative_ReadLink(v10, v11, bufferSize);
  sub_1BCA790();
  sub_1BCADB0(v12);
  return Link;
}


System_String_o *__fastcall Interop_Sys__ReadLink_61287964(System_String_o *path, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  unsigned int v8; // w20
  _QWORD *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x3
  System_Byte_array *v18; // x21
  __int64 Link; // x0
  __int64 v20; // x1
  unsigned int v21; // w21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v23; // x1
  System_String_o *v24; // x21
  __int64 v26[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v27; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B1D7F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Buffers_ArrayPool_byte__get_Shared__, method, v2);
    sub_1BCA7E0(&System_Buffers_ArrayPool_byte__TypeInfo, v4, v5);
    sub_1BCA7E0(&Interop_Sys_TypeInfo, v6, v7);
    byte_4B1D7F8 = 1;
  }
  v8 = 256;
  v27 = 0LL;
  while ( 1 )
  {
    if ( !System_Buffers_ArrayPool_byte__TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Buffers_ArrayPool_byte__TypeInfo, method);
    v9 = Method_System_Buffers_ArrayPool_byte__get_Shared__;
    v10 = *((_QWORD *)Method_System_Buffers_ArrayPool_byte__get_Shared__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C1C6BC();
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 8LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v11 + 224) )
      j_il2cpp_runtime_class_init_0(v11, method);
    v12 = v9[4];
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C1C6BC();
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 8LL);
    if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
      v13 = sub_1C1C6BC();
    v14 = **(_QWORD **)(v13 + 184);
    if ( !v14 )
      sub_1BCAA3C(0LL, method);
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v14 + 376LL))(
            v14,
            v8,
            *(_QWORD *)(*(_QWORD *)v14 + 384LL));
    v26[1] = (__int64)&v27;
    v27 = v15;
    v26[0] = 0LL;
    if ( !v15 )
      sub_1BCAA3C(0LL, v16);
    v18 = (System_Byte_array *)v15;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, v16);
    Link = Interop_Sys__ReadLink(path, v18, v18->max_length, v17);
    v21 = Link;
    if ( (Link & 0x80000000) != 0 )
    {
      v24 = 0LL;
      goto LABEL_29;
    }
    if ( !v27 )
      sub_1BCAA3C(Link, v20);
    if ( (int)Link < *(_DWORD *)(v27 + 24) )
      break;
    sub_1B6AD30(v26);
    v8 *= 2;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCAA3C(0LL, v23);
  v24 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))UTF8->klass->vtable._37_GetString.method)(
                             UTF8,
                             v27,
                             0LL,
                             v21,
                             UTF8->klass->vtable._38_GetBestFitUnicodeToBytesData.methodPtr);
LABEL_29:
  sub_1B6AD30(v26);
  return v24;
}


int32_t __fastcall Interop_Sys__Rename(System_String_o *oldPath, System_String_o *newPath, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  char *v9; // x20
  int v10; // w1
  int v11; // w2
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7
  char *v17; // x19
  int32_t v18; // w21
  int v20; // [xsp+0h] [xbp-20h]
  int v21; // [xsp+0h] [xbp-20h]
  char v22; // [xsp+8h] [xbp-18h]
  char v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+10h] [xbp-10h]
  int v25; // [xsp+10h] [xbp-10h]
  void *v26; // [xsp+18h] [xbp-8h]
  void *v27; // [xsp+18h] [xbp-8h]

  v8 = (int)newPath;
  v9 = (char *)sub_1BCAD98((int)oldPath, (int)newPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1BCAD98(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Rename(v9, v17);
  sub_1BCA790();
  sub_1BCADB0(v9);
  sub_1BCADB0(v17);
  return v18;
}


int32_t __fastcall Interop_Sys__RmDir(System_String_o *path, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v8; // x19
  int32_t v9; // w20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = (char *)sub_1BCAD98((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_RmDir(v8);
  sub_1BCA790();
  sub_1BCADB0(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__Stat(System_String_o *path, Interop_Sys_FileStatus_o *output, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v8; // x20
  int32_t v9; // w19
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = (char *)sub_1BCAD98((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Stat2(v8);
  sub_1BCA790();
  sub_1BCADB0(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__Stat_61289176(
        uint8_t *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_Stat2((char *)path);
  sub_1BCA790();
  return v3;
}


int32_t __fastcall Interop_Sys__Stat_61289204(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  const MethodInfo_2F8F108 *v9; // x1
  __int64 v10; // x1
  char *Reference_byte; // x20
  int32_t v12; // w19
  const MethodInfo *v13; // x2
  _BYTE v15[256]; // [xsp-100h] [xbp-120h] BYREF
  __int64 v16[4]; // [xsp+0h] [xbp-20h] BYREF
  System_Span_T__o v17; // 0:x0.8
  System_Span_byte__o v18; // 0:x2.8
  System_ReadOnlySpan_char__o v19; // 0:x2.8
  System_Text_ValueUtf8Converter_o v20; // 0:x0.16
  System_Text_ValueUtf8Converter_o v21; // 0:x0.16
  System_Text_ValueUtf8Converter_o v22; // 0:x0.16

  v16[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B1D7F9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____76917392, output, method);
    sub_1BCA7E0(&Method_System_Span_byte___ctor___76822864, v5, v6);
    sub_1BCA7E0(&Interop_Sys_TypeInfo, v7, v8);
    byte_4B1D7F9 = 1;
  }
  memset(v16, 0, 24);
  memset(v15, 0, sizeof(v15));
  v20.fields._arrayToReturnToPool = (struct System_Byte_array *)v16;
  v18 = (System_Span_byte__o)256LL;
  v20.fields._bytes = (struct System_Span_byte__o)v15;
  System_Text_ValueUtf8Converter___ctor(v20, v18, 0LL);
  v21.fields._arrayToReturnToPool = (struct System_Byte_array *)v16;
  v21.fields._bytes = (struct System_Span_byte__o)path;
  v19 = (System_ReadOnlySpan_char__o)output;
  v17 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(v21, v19, 0LL);
  Reference_byte = (char *)System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(v17, v9);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, v10);
  v12 = SystemNative_Stat2(Reference_byte);
  sub_1BCA790();
  v22.fields._arrayToReturnToPool = (struct System_Byte_array *)v16;
  v22.fields._bytes = 0LL;
  System_Text_ValueUtf8Converter__Dispose(v22, v13);
  return v12;
}


System_String_o *__fastcall Interop_Sys__StrError(int32_t platformErrno, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  long double inited; // q0
  _QWORD *v8; // x0
  __int64 v9; // x1
  intptr_t v10; // w19
  _QWORD v12[130]; // [xsp-400h] [xbp-410h] BYREF

  v12[129] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4B1D7F7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Runtime_InteropServices_Marshal_TypeInfo, method, v2);
    sub_1BCA7E0(&Interop_Sys_TypeInfo, v4, v5);
    byte_4B1D7F7 = 1;
  }
  memset(v12, 0, 0x400u);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo, v6);
  v8 = (_QWORD *)SystemNative_StrErrorR((unsigned int)platformErrno, v12, 1024LL, inited);
  if ( !v8 )
    v8 = v12;
  v10 = System_IntPtr__op_Explicit_63526888(v8, 0LL);
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v9);
  return System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v10, 0LL);
}


int32_t __fastcall Interop_Sys__Symlink(System_String_o *target, System_String_o *linkPath, const MethodInfo *method)
{
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w19
  __int64 v9; // x20
  int v10; // w1
  int v11; // w2
  int v12; // w3
  int v13; // w4
  int v14; // w5
  int v15; // w6
  int v16; // w7
  __int64 v17; // x19
  int32_t v18; // w21
  int v20; // [xsp+0h] [xbp-20h]
  int v21; // [xsp+0h] [xbp-20h]
  char v22; // [xsp+8h] [xbp-18h]
  char v23; // [xsp+8h] [xbp-18h]
  int v24; // [xsp+10h] [xbp-10h]
  int v25; // [xsp+10h] [xbp-10h]
  void *v26; // [xsp+18h] [xbp-8h]
  void *v27; // [xsp+18h] [xbp-8h]

  v8 = (int)linkPath;
  v9 = sub_1BCAD98((int)target, (int)linkPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = sub_1BCAD98(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Symlink(v9, v17);
  sub_1BCA790();
  sub_1BCADB0(v9);
  sub_1BCADB0(v17);
  return v18;
}


int32_t __fastcall Interop_Sys__Unlink(System_String_o *pathname, const MethodInfo *method)
{
  int v2; // w2
  int v3; // w3
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  char *v8; // x19
  int32_t v9; // w20
  int v11; // [xsp+0h] [xbp-20h]
  char v12; // [xsp+8h] [xbp-18h]
  int v13; // [xsp+10h] [xbp-10h]
  void *v14; // [xsp+18h] [xbp-8h]

  v8 = (char *)sub_1BCAD98((int)pathname, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Unlink(v8);
  sub_1BCA790();
  sub_1BCADB0(v8);
  return v9;
}


System_ReadOnlySpan_char__o __fastcall Interop_Sys_DirectoryEntry__GetName(
        Interop_Sys_DirectoryEntry_o this,
        System_Span_char__o buffer,
        const MethodInfo *method)
{
  System_Span_T__o v4; // x19
  uint8_t *Name; // x21
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned int v12; // w22
  __int64 v13; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v15; // x1
  unsigned int v16; // w21
  System_Span_T__o v18; // 0:x0.8

  v4 = *(System_Span_T__o *)&this.fields.NameLength;
  Name = this.fields.Name;
  if ( (byte_4B1D7FC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_MemoryExtensions_IndexOf_byte___, *(_QWORD *)&this.fields.NameLength, buffer);
    sub_1BCA7E0(&Method_System_ReadOnlySpan_byte___ctor___76821328, v6, v7);
    sub_1BCA7E0(&Method_System_Span_char__Slice___76823016, v8, v9);
    sub_1BCA7E0(&Method_System_Span_char__op_Implicit__, v10, v11);
    byte_4B1D7FC = 1;
  }
  v12 = *((_DWORD *)Name + 2);
  v13 = *(_QWORD *)Name;
  if ( v12 == -1 )
  {
    v12 = sub_3A83BB0(v13, 256LL, 0LL, Method_System_MemoryExtensions_IndexOf_byte___);
    if ( (v12 & 0x80000000) != 0 )
LABEL_5:
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0LL);
  }
  else if ( (v12 & 0x80000000) != 0 )
  {
    goto LABEL_5;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1BCAA3C(0LL, v15);
  v16 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, System_Span_T__o, System_Span_char__o, Il2CppMethodPointer))UTF8->klass->vtable._30_GetChars.method)(
          UTF8,
          v13,
          v12,
          v4,
          buffer,
          UTF8->klass->vtable._31_get_CodePage.methodPtr);
  if ( v16 > buffer.fields._pointer.fields._value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0LL);
  if ( (*(_BYTE *)(*((_QWORD *)Method_System_Span_char__Slice___76823016 + 4) + 309LL) & 1) == 0 )
    sub_1C1C6BC();
  v18 = v4;
  return *(System_ReadOnlySpan_char__o *)&System_Span_char___op_Implicit(v18, (const MethodInfo_37F0E0C *)v16);
}