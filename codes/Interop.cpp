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

  if ( (byte_4A62724 & 1) == 0 )
  {
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A62724 = 1;
  }
  if ( (result & 0x8000000000000000LL) != 0 )
  {
    v10 = (const MethodInfo *)sub_19D72D8(Interop_Sys_TypeInfo, path, isDirectory, errorRewriter, method);
    LastErrorInfo = Interop_Sys__GetLastErrorInfo(v10);
    Interop__ThrowExceptionForIoErrno(LastErrorInfo, path, isDirectory, errorRewriter, v11);
  }
  return result;
}


int32_t __fastcall Interop__CheckIo_60592424(
        int32_t result,
        System_String_o *path,
        bool isDirectory,
        System_Func_Interop_ErrorInfo__Interop_ErrorInfo__o *errorRewriter,
        const MethodInfo *method)
{
  Interop__CheckIo(result, path, isDirectory, errorRewriter, method);
  return result;
}


System_Exception_o *__fastcall Interop__GetExceptionForIoErrno(
        Interop_ErrorInfo_o errorInfo,
        System_String_o *path,
        bool isDirectory,
        const MethodInfo *method)
{
  bool IsNullOrEmpty; // w0
  const MethodInfo *v8; // x2
  System_IO_DirectoryNotFoundException_o *v9; // x0
  System_Exception_o *v10; // x20
  System_String_o *v11; // x1
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x2
  int32_t RawErrno; // w19
  System_IO_IOException_o *v15; // x0
  int32_t v16; // w2
  System_String_o *v17; // x1
  System_Exception_o *IOException; // x21
  const MethodInfo *v19; // x2
  System_UnauthorizedAccessException_o *v20; // x0
  System_String_o *v21; // x1
  System_String_o *v22; // x19
  const MethodInfo *v24; // x2
  System_IO_PathTooLongException_o *v25; // x0
  System_String_o *v26; // x1
  __int64 *v27; // x8
  System_String_o *v28; // x19
  const MethodInfo *v29; // x1
  int32_t v30; // w21
  System_String_o *v31; // x19
  System_String_o *v32; // x19
  System_String_o *v33; // x21
  Interop_ErrorInfo_o v34; // [xsp+8h] [xbp-28h] BYREF
  Interop_ErrorInfo_o v35; // 0:x0.8
  Interop_ErrorInfo_o v36; // 0:x0.8
  Interop_ErrorInfo_o v37; // 0:x0.8
  Interop_ErrorInfo_o v38; // 0:x0.8

  v34 = errorInfo;
  if ( (byte_4A62725 & 1) == 0 )
  {
    sub_1B885B0(&System_ArgumentOutOfRangeException_TypeInfo);
    sub_1B885B0(&System_IO_DirectoryNotFoundException_TypeInfo);
    sub_1B885B0(&System_IO_FileNotFoundException_TypeInfo);
    sub_1B885B0(&System_IO_IOException_TypeInfo);
    sub_1B885B0(&System_OperationCanceledException_TypeInfo);
    sub_1B885B0(&System_IO_PathTooLongException_TypeInfo);
    sub_1B885B0(&System_UnauthorizedAccessException_TypeInfo);
    sub_1B885B0(&StringLiteral_4825/*"Could not find file '{0}'."*/);
    sub_1B885B0(&StringLiteral_24501/*"value"*/);
    sub_1B885B0(&StringLiteral_14089/*"The process cannot access the file '{0}' because it is being used by another process."*/);
    sub_1B885B0(&StringLiteral_14090/*"The process cannot access the file because it is being used by another process."*/);
    sub_1B885B0(&StringLiteral_4820/*"Could not find a part of the path."*/);
    sub_1B885B0(&StringLiteral_2203/*"Access to the path is denied."*/);
    sub_1B885B0(&StringLiteral_14902/*"Unable to find the specified file."*/);
    sub_1B885B0(&StringLiteral_14162/*"The specified file name or path is too long, or a component of the specified path is too long."*/);
    sub_1B885B0(&StringLiteral_12876/*"Specified file length was too large for the file system."*/);
    sub_1B885B0(&StringLiteral_2202/*"Access to the path '{0}' is denied."*/);
    sub_1B885B0(&StringLiteral_14079/*"The path '{0}' is too long, or a component of the specified path is too long."*/);
    sub_1B885B0(&StringLiteral_4819/*"Could not find a part of the path '{0}'."*/);
    sub_1B885B0(&StringLiteral_13964/*"The file '{0}' already exists."*/);
    byte_4A62725 = 1;
  }
  if ( errorInfo.fields._error > 65547 )
  {
    if ( errorInfo.fields._error > 65558 )
    {
      if ( errorInfo.fields._error == 65573 )
      {
        if ( System_String__IsNullOrEmpty(path, 0LL) )
        {
          v25 = (System_IO_PathTooLongException_o *)sub_1B887FC(System_IO_PathTooLongException_TypeInfo);
          v10 = (System_Exception_o *)v25;
          v26 = (System_String_o *)StringLiteral_14162/*"The specified file name or path is too long, or a component of the specified path is too long."*/;
        }
        else
        {
          v31 = SR__Format_60592456((System_String_o *)StringLiteral_14079/*"The path '{0}' is too long, or a component of the specified path is too long."*/, (Il2CppObject *)path, v24);
          v25 = (System_IO_PathTooLongException_o *)sub_1B887FC(System_IO_PathTooLongException_TypeInfo);
          v10 = (System_Exception_o *)v25;
          v26 = v31;
        }
        System_IO_PathTooLongException___ctor_61863808(v25, v26, 0LL);
        return v10;
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
              v9 = (System_IO_DirectoryNotFoundException_o *)sub_1B887FC(System_IO_DirectoryNotFoundException_TypeInfo);
              v10 = (System_Exception_o *)v9;
              v11 = (System_String_o *)StringLiteral_4820/*"Could not find a part of the path."*/;
            }
            else
            {
              v32 = SR__Format_60592456((System_String_o *)StringLiteral_4819/*"Could not find a part of the path '{0}'."*/, (Il2CppObject *)path, v8);
              v9 = (System_IO_DirectoryNotFoundException_o *)sub_1B887FC(System_IO_DirectoryNotFoundException_TypeInfo);
              v10 = (System_Exception_o *)v9;
              v11 = v32;
            }
            System_IO_DirectoryNotFoundException___ctor_61847312(v9, v11, 0LL);
          }
          else if ( IsNullOrEmpty )
          {
            v10 = (System_Exception_o *)sub_1B887FC(System_IO_FileNotFoundException_TypeInfo);
            System_IO_FileNotFoundException___ctor_61811520(
              (System_IO_FileNotFoundException_o *)v10,
              (System_String_o *)StringLiteral_14902/*"Unable to find the specified file."*/,
              0LL);
          }
          else
          {
            v33 = SR__Format_60592456((System_String_o *)StringLiteral_4825/*"Could not find file '{0}'."*/, (Il2CppObject *)path, v8);
            v10 = (System_Exception_o *)sub_1B887FC(System_IO_FileNotFoundException_TypeInfo);
            System_IO_FileNotFoundException___ctor_61849288((System_IO_FileNotFoundException_o *)v10, v33, path, 0LL);
          }
          return v10;
        }
LABEL_27:
        v37 = errorInfo;
        return Interop__GetIOException(v37, (const MethodInfo *)path);
      }
LABEL_22:
      v36 = errorInfo;
      IOException = Interop__GetIOException(v36, (const MethodInfo *)path);
      if ( System_String__IsNullOrEmpty(path, 0LL) )
      {
        v20 = (System_UnauthorizedAccessException_o *)sub_1B887FC(System_UnauthorizedAccessException_TypeInfo);
        v10 = (System_Exception_o *)v20;
        v21 = (System_String_o *)StringLiteral_2203/*"Access to the path is denied."*/;
      }
      else
      {
        v22 = SR__Format_60592456((System_String_o *)StringLiteral_2202/*"Access to the path '{0}' is denied."*/, (Il2CppObject *)path, v19);
        v20 = (System_UnauthorizedAccessException_o *)sub_1B887FC(System_UnauthorizedAccessException_TypeInfo);
        v10 = (System_Exception_o *)v20;
        v21 = v22;
      }
      System_UnauthorizedAccessException___ctor_62644036(v20, v21, IOException, 0LL);
      return v10;
    }
    if ( errorInfo.fields._error != 65556 )
    {
      if ( errorInfo.fields._error != 65558 )
        goto LABEL_27;
      v10 = (System_Exception_o *)sub_1B887FC(System_ArgumentOutOfRangeException_TypeInfo);
      System_ArgumentOutOfRangeException___ctor_62307860(
        (System_ArgumentOutOfRangeException_o *)v10,
        (System_String_o *)StringLiteral_24501/*"value"*/,
        (System_String_o *)StringLiteral_12876/*"Specified file length was too large for the file system."*/,
        0LL);
      return v10;
    }
    if ( System_String__IsNullOrEmpty(path, 0LL) )
      goto LABEL_27;
    v27 = &StringLiteral_13964/*"The file '{0}' already exists."*/;
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
      v35 = (Interop_ErrorInfo_o)&v34;
      RawErrno = Interop_ErrorInfo__get_RawErrno(v35, v12);
      v15 = (System_IO_IOException_o *)sub_1B887FC(System_IO_IOException_TypeInfo);
      v10 = (System_Exception_o *)v15;
      v16 = RawErrno;
      v17 = (System_String_o *)StringLiteral_14090/*"The process cannot access the file because it is being used by another process."*/;
LABEL_33:
      System_IO_IOException___ctor_61850584(v15, v17, v16, 0LL);
      return v10;
    }
    v27 = &StringLiteral_14089/*"The process cannot access the file '{0}' because it is being used by another process."*/;
LABEL_32:
    v28 = SR__Format_60592456((System_String_o *)*v27, (Il2CppObject *)path, v13);
    v38 = (Interop_ErrorInfo_o)&v34;
    v30 = Interop_ErrorInfo__get_RawErrno(v38, v29);
    v15 = (System_IO_IOException_o *)sub_1B887FC(System_IO_IOException_TypeInfo);
    v10 = (System_Exception_o *)v15;
    v17 = v28;
    v16 = v30;
    goto LABEL_33;
  }
  if ( errorInfo.fields._error == 65544 )
    goto LABEL_22;
  if ( errorInfo.fields._error != 65547 )
    goto LABEL_27;
  v10 = (System_Exception_o *)sub_1B887FC(System_OperationCanceledException_TypeInfo);
  System_OperationCanceledException___ctor((System_OperationCanceledException_o *)v10, 0LL);
  return v10;
}


System_Exception_o *__fastcall Interop__GetIOException(Interop_ErrorInfo_o errorInfo, const MethodInfo *method)
{
  System_String_o *ErrorMessage; // x19
  const MethodInfo *v3; // x1
  int32_t RawErrno; // w20
  System_IO_IOException_o *v5; // x21
  Interop_ErrorInfo_o v7; // [xsp+8h] [xbp-28h] BYREF
  Interop_ErrorInfo_o v8; // 0:x0.8
  Interop_ErrorInfo_o v9; // 0:x0.8

  v7 = errorInfo;
  if ( (byte_4A62726 & 1) == 0 )
  {
    sub_1B885B0(&System_IO_IOException_TypeInfo);
    byte_4A62726 = 1;
  }
  v8 = (Interop_ErrorInfo_o)&v7;
  ErrorMessage = Interop_ErrorInfo__GetErrorMessage(v8, method);
  v9 = (Interop_ErrorInfo_o)&v7;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v9, v3);
  v5 = (System_IO_IOException_o *)sub_1B887FC(System_IO_IOException_TypeInfo);
  System_IO_IOException___ctor_61850584(v5, ErrorMessage, RawErrno, 0LL);
  return (System_Exception_o *)v5;
}


void __fastcall Interop__GetRandomBytes(uint8_t *buffer, int32_t length, const MethodInfo *method)
{
  if ( (byte_4A62727 & 1) == 0 )
  {
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A62727 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
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
  __int64 v9; // x0
  Interop_ErrorInfo_o v10; // 0:x0.8

  v7 = (__int64)errorInfo;
  if ( errorRewriter )
    v7 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))errorRewriter->fields.m_target)(
           errorRewriter->fields.original_method_info,
           errorInfo,
           *(_QWORD *)&errorRewriter->fields.extra_arg);
  v10 = (Interop_ErrorInfo_o)v7;
  ExceptionForIoErrno = Interop__GetExceptionForIoErrno(v10, path, isDirectory, (const MethodInfo *)errorRewriter);
  v9 = sub_1B885C4(&Method_Interop_ThrowExceptionForIoErrno__);
  sub_1B886D8(ExceptionForIoErrno, v9);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Interop_ErrorInfo___ctor(Interop_ErrorInfo_o this, int32_t errno, const MethodInfo *method)
{
  if ( (byte_4A62728 & 1) == 0 )
  {
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A62728 = 1;
  }
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  *(_DWORD *)this.fields._error = SystemNative_ConvertErrorPlatformToPal((unsigned int)errno, *(_QWORD *)&errno, method);
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = errno;
}


void __fastcall Interop_ErrorInfo___ctor_60593120(Interop_ErrorInfo_o this, int32_t error, const MethodInfo *method)
{
  *(_DWORD *)this.fields._error = error;
  *(_DWORD *)(*(_QWORD *)&this + 4LL) = -1;
}


System_String_o *__fastcall Interop_ErrorInfo__GetErrorMessage(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  int32_t RawErrno; // w19
  Interop_ErrorInfo_o v6; // 0:x0.8

  if ( (byte_4A6272A & 1) == 0 )
  {
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A6272A = 1;
  }
  v6 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v6, method);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  return Interop_Sys__StrError(RawErrno, v3);
}


System_String_o *__fastcall Interop_ErrorInfo__ToString(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  Il2CppObject *v4; // x21
  const MethodInfo *v5; // x1
  Il2CppObject *ErrorMessage; // x0
  int v8; // [xsp+8h] [xbp-38h] BYREF
  int32_t RawErrno; // [xsp+Ch] [xbp-34h] BYREF
  Interop_ErrorInfo_o v10; // 0:x0.8
  Interop_ErrorInfo_o v11; // 0:x0.8

  if ( (byte_4A6272B & 1) == 0 )
  {
    sub_1B885B0(&Interop_Error_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_11159/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/);
    byte_4A6272B = 1;
  }
  v10 = this;
  RawErrno = Interop_ErrorInfo__get_RawErrno(v10, method);
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &RawErrno);
  v8 = *(_DWORD *)this.fields._error;
  v4 = (Il2CppObject *)j_il2cpp_value_box_0(Interop_Error_TypeInfo, &v8);
  v11 = this;
  ErrorMessage = (Il2CppObject *)Interop_ErrorInfo__GetErrorMessage(v11, v5);
  return System_String__Format_61721472((System_String_o *)StringLiteral_11159/*"RawErrno: {0} Error: {1} GetErrorMessage: {2}"*/, v3, v4, ErrorMessage, 0LL);
}


int32_t __fastcall Interop_ErrorInfo__get_Error(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  return *(_DWORD *)this.fields._error;
}


int32_t __fastcall Interop_ErrorInfo__get_RawErrno(Interop_ErrorInfo_o this, const MethodInfo *method)
{
  int32_t result; // w0
  unsigned int v4; // w20

  if ( (byte_4A62729 & 1) == 0 )
  {
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A62729 = 1;
  }
  result = *(_DWORD *)(*(_QWORD *)&this + 4LL);
  if ( result == -1 )
  {
    v4 = *(_DWORD *)this.fields._error;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
    result = SystemNative_ConvertErrorPalToPlatform(v4, method);
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
  System_PlatformNotSupportedException_o *v4; // x19
  __int64 v5; // x0

  v3 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v4 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v3);
  System_PlatformNotSupportedException___ctor(v4, 0LL);
  v5 = sub_1B885C4(&Method_Interop_NetSecurityNative_DeleteSecContext__);
  sub_1B886D8(v4, v5);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__DisplayMajorStatus(
        uint32_t *minorStatus,
        uint32_t statusValue,
        Interop_NetSecurityNative_GssBuffer_o *buffer,
        const MethodInfo *method)
{
  __int64 v4; // x0
  System_PlatformNotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v4 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v5 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v4);
  System_PlatformNotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B885C4(&Method_Interop_NetSecurityNative_DisplayMajorStatus__);
  sub_1B886D8(v5, v6);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__DisplayMinorStatus(
        uint32_t *minorStatus,
        uint32_t statusValue,
        Interop_NetSecurityNative_GssBuffer_o *buffer,
        const MethodInfo *method)
{
  __int64 v4; // x0
  System_PlatformNotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v4 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v5 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v4);
  System_PlatformNotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B885C4(&Method_Interop_NetSecurityNative_DisplayMinorStatus__);
  sub_1B886D8(v5, v6);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ImportPrincipalName(
        uint32_t *minorStatus,
        System_String_o *inputName,
        int32_t inputNameByteCount,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o **outputName,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_PlatformNotSupportedException_o *v6; // x19
  __int64 v7; // x0

  v5 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v6 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v5);
  System_PlatformNotSupportedException___ctor(v6, 0LL);
  v7 = sub_1B885C4(&Method_Interop_NetSecurityNative_ImportPrincipalName__);
  sub_1B886D8(v6, v7);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ImportUserName(
        uint32_t *minorStatus,
        System_String_o *inputName,
        int32_t inputNameByteCount,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o **outputName,
        const MethodInfo *method)
{
  __int64 v5; // x0
  System_PlatformNotSupportedException_o *v6; // x19
  __int64 v7; // x0

  v5 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v6 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v5);
  System_PlatformNotSupportedException___ctor(v6, 0LL);
  v7 = sub_1B885C4(&Method_Interop_NetSecurityNative_ImportUserName__);
  sub_1B886D8(v6, v7);
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
  System_PlatformNotSupportedException_o *v13; // x19
  __int64 v14; // x0

  v12 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v13 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v12);
  System_PlatformNotSupportedException___ctor(v13, 0LL);
  v14 = sub_1B885C4(&Method_Interop_NetSecurityNative_InitSecContext__);
  sub_1B886D8(v13, v14);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__InitiateCredSpNego(
        uint32_t *minorStatus,
        Microsoft_Win32_SafeHandles_SafeGssNameHandle_o *desiredName,
        Microsoft_Win32_SafeHandles_SafeGssCredHandle_o **outputCredHandle,
        const MethodInfo *method)
{
  __int64 v4; // x0
  System_PlatformNotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v4 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v5 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v4);
  System_PlatformNotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B885C4(&Method_Interop_NetSecurityNative_InitiateCredSpNego__);
  sub_1B886D8(v5, v6);
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
  System_PlatformNotSupportedException_o *v8; // x19
  __int64 v9; // x0

  v7 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v8 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v7);
  System_PlatformNotSupportedException___ctor(v8, 0LL);
  v9 = sub_1B885C4(&Method_Interop_NetSecurityNative_InitiateCredWithPassword__);
  sub_1B886D8(v8, v9);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ReleaseCred(
        uint32_t *minorStatus,
        intptr_t *credHandle,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_PlatformNotSupportedException_o *v4; // x19
  __int64 v5; // x0

  v3 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v4 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v3);
  System_PlatformNotSupportedException___ctor(v4, 0LL);
  v5 = sub_1B885C4(&Method_Interop_NetSecurityNative_ReleaseCred__);
  sub_1B886D8(v4, v5);
}


void __fastcall __noreturn Interop_NetSecurityNative__ReleaseGssBuffer(
        intptr_t bufferPtr,
        uint64_t length,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_PlatformNotSupportedException_o *v4; // x19
  __int64 v5; // x0

  v3 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v4 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v3);
  System_PlatformNotSupportedException___ctor(v4, 0LL);
  v5 = sub_1B885C4(&Method_Interop_NetSecurityNative_ReleaseGssBuffer__);
  sub_1B886D8(v4, v5);
}


uint32_t __fastcall __noreturn Interop_NetSecurityNative__ReleaseName(
        uint32_t *minorStatus,
        intptr_t *inputName,
        const MethodInfo *method)
{
  __int64 v3; // x0
  System_PlatformNotSupportedException_o *v4; // x19
  __int64 v5; // x0

  v3 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v4 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v3);
  System_PlatformNotSupportedException___ctor(v4, 0LL);
  v5 = sub_1B885C4(&Method_Interop_NetSecurityNative_ReleaseName__);
  sub_1B886D8(v4, v5);
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
  System_PlatformNotSupportedException_o *v8; // x19
  __int64 v9; // x0

  v7 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v8 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v7);
  System_PlatformNotSupportedException___ctor(v8, 0LL);
  v9 = sub_1B885C4(&Method_Interop_NetSecurityNative_Unwrap__);
  sub_1B886D8(v8, v9);
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
  System_PlatformNotSupportedException_o *v9; // x19
  __int64 v10; // x0

  v8 = sub_1B885C4(&System_PlatformNotSupportedException_TypeInfo);
  v9 = (System_PlatformNotSupportedException_o *)sub_1B887FC(v8);
  System_PlatformNotSupportedException___ctor(v9, 0LL);
  v10 = sub_1B885C4(&Method_Interop_NetSecurityNative_Wrap__);
  sub_1B886D8(v9, v10);
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
  if ( (byte_4A64B2B & 1) == 0 )
  {
    sub_1B885B0(&System_Exception_TypeInfo);
    byte_4A64B2B = 1;
  }
  if ( !System_Exception_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Exception_TypeInfo);
  System_Exception___ctor_62747812((System_Exception_o *)this, message, 0LL);
}


void __fastcall Interop_NetSecurityNative_GssApiException___ctor_64432828(
        Interop_NetSecurityNative_GssApiException_o *this,
        uint32_t majorStatus,
        uint32_t minorStatus,
        const MethodInfo *method)
{
  System_String_o *GssApiDisplayStatus; // x22

  if ( (byte_4A64B2C & 1) == 0 )
  {
    sub_1B885B0(&System_Exception_TypeInfo);
    byte_4A64B2C = 1;
  }
  GssApiDisplayStatus = Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus(
                          majorStatus,
                          minorStatus,
                          0LL,
                          method);
  if ( !System_Exception_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Exception_TypeInfo);
  System_Exception___ctor_62747812((System_Exception_o *)this, GssApiDisplayStatus, 0LL);
  this->fields._HResult = majorStatus;
  *(&this->fields.caught_in_unmanaged + 1) = minorStatus;
}


System_String_o *__fastcall Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus(
        uint32_t majorStatus,
        uint32_t minorStatus,
        System_String_o *helpText,
        const MethodInfo *method)
{
  uint32_t v6; // w21
  System_String_o *GssApiDisplayStatus_64433444; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *v9; // x22
  System_String_o *v10; // x0
  Il2CppObject *v11; // x2
  Il2CppObject *v12; // x1
  System_String_o *v13; // x0
  Il2CppObject *v14; // x1
  System_String_o *v15; // x0
  System_Enum_o *v16; // x0
  System_String_o *v17; // x21
  System_Enum_o *v18; // x0
  System_String_o *v19; // x0
  System_Enum_o *v20; // x0
  System_String_o *v21; // x20
  uint32_t v23; // [xsp+4h] [xbp-3Ch] BYREF
  uint32_t v24; // [xsp+8h] [xbp-38h] BYREF
  uint32_t v25; // [xsp+Ch] [xbp-34h] BYREF

  v6 = majorStatus;
  if ( (byte_4A64B2D & 1) == 0 )
  {
    sub_1B885B0(&Interop_NetSecurityNative_Status_TypeInfo);
    sub_1B885B0(&StringLiteral_24743/*"x"*/);
    sub_1B885B0(&StringLiteral_6943/*"GSSAPI operation failed with status: {0} (Minor status: {1})."*/);
    sub_1B885B0(&StringLiteral_117/*" "*/);
    sub_1B885B0(&StringLiteral_12212/*"SSAPI operation failed with status: {0}."*/);
    sub_1B885B0(&StringLiteral_6942/*"GSSAPI operation failed with error - {0}."*/);
    majorStatus = sub_1B885B0(&StringLiteral_6941/*"GSSAPI operation failed with error - {0} ({1})."*/);
    byte_4A64B2D = 1;
  }
  GssApiDisplayStatus_64433444 = Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus_64433444(
                                   majorStatus,
                                   0,
                                   (const MethodInfo *)helpText);
  v9 = (Il2CppObject *)GssApiDisplayStatus_64433444;
  if ( minorStatus )
  {
    v10 = Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus_64433444(
            (uint32_t)GssApiDisplayStatus_64433444,
            1,
            v8);
    if ( v9 && (v11 = (Il2CppObject *)v10) != 0LL )
    {
      v12 = v9;
      v13 = (System_String_o *)StringLiteral_6941/*"GSSAPI operation failed with error - {0} ({1})."*/;
    }
    else
    {
      v25 = v6;
      v16 = (System_Enum_o *)j_il2cpp_value_box_0(Interop_NetSecurityNative_Status_TypeInfo, &v25);
      v17 = System_Enum__ToString_62742352(v16, (System_String_o *)StringLiteral_24743/*"x"*/, 0LL);
      v24 = minorStatus;
      v18 = (System_Enum_o *)j_il2cpp_value_box_0(Interop_NetSecurityNative_Status_TypeInfo, &v24);
      v11 = (Il2CppObject *)System_Enum__ToString_62742352(v18, (System_String_o *)StringLiteral_24743/*"x"*/, 0LL);
      v12 = (Il2CppObject *)v17;
      v13 = (System_String_o *)StringLiteral_6943/*"GSSAPI operation failed with status: {0} (Minor status: {1})."*/;
    }
    v19 = SR__Format_60596368(v13, v12, v11, 0LL);
  }
  else
  {
    if ( GssApiDisplayStatus_64433444 )
    {
      v14 = (Il2CppObject *)GssApiDisplayStatus_64433444;
      v15 = (System_String_o *)StringLiteral_6942/*"GSSAPI operation failed with error - {0}."*/;
    }
    else
    {
      v23 = v6;
      v20 = (System_Enum_o *)j_il2cpp_value_box_0(Interop_NetSecurityNative_Status_TypeInfo, &v23);
      v14 = (Il2CppObject *)System_Enum__ToString_62742352(v20, (System_String_o *)StringLiteral_24743/*"x"*/, 0LL);
      v15 = (System_String_o *)StringLiteral_12212/*"SSAPI operation failed with status: {0}."*/;
    }
    v19 = SR__Format_60592456(v15, v14, 0LL);
  }
  v21 = v19;
  if ( !System_String__IsNullOrEmpty(helpText, 0LL) )
    return System_String__Concat_61718292(v21, (System_String_o *)StringLiteral_117/*" "*/, helpText, 0LL);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall Interop_NetSecurityNative_GssApiException__GetGssApiDisplayStatus_64433444(
        uint32_t status,
        bool isMinor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_String_o *result; // x0

  if ( (byte_4A64B2E & 1) == 0 )
  {
    *(_QWORD *)&status = sub_1B885B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4A64B2E = 1;
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
  uint64_t v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int v10; // w8
  uint64_t v11; // x21
  int v13; // w21
  __int64 v14; // x0
  Il2CppObject *v15; // x20
  __int64 v16; // x0
  Il2CppObject *v17; // x19
  System_String_o *v18; // x0
  System_String_o *v19; // x19
  __int64 v20; // x0
  Interop_NetSecurityNative_GssApiException_o *v21; // x20
  const MethodInfo *v22; // x2
  __int64 v23; // x0
  int v24; // [xsp+8h] [xbp-28h] BYREF
  int v25; // [xsp+Ch] [xbp-24h] BYREF

  v4 = (int)destination;
  v5 = *(System_Byte_array **)&this.fields._data;
  length = (uint64_t *)this.fields._length;
  if ( (byte_4A64B2F & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4A64B2F = 1;
  }
  if ( System_IntPtr__op_Equality(length[1], 0, 0LL) )
  {
    LODWORD(v7) = 0;
  }
  else
  {
    v7 = *length;
    if ( *length )
    {
      if ( !System_Convert_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
      v8 = System_Convert__ToInt32_62363104(v7, 0LL);
      if ( !v5 )
        sub_1B8880C(v8, v9);
      LODWORD(v7) = v8;
      v10 = v5->max_length - v4;
      if ( (int)v8 > v10 )
      {
        v25 = v8;
        v13 = v10;
        v14 = sub_1B885C4(&int_TypeInfo);
        v15 = (Il2CppObject *)j_il2cpp_value_box_0(v14, &v25);
        v24 = v13;
        v16 = sub_1B885C4(&int_TypeInfo);
        v17 = (Il2CppObject *)j_il2cpp_value_box_0(v16, &v24);
        v18 = (System_String_o *)sub_1B885C4(&StringLiteral_7645/*"Insufficient buffer space. Required: {0} Actual: {1}."*/);
        v19 = SR__Format_60596368(v18, v15, v17, 0LL);
        v20 = sub_1B885C4(&Interop_NetSecurityNative_GssApiException_TypeInfo);
        v21 = (Interop_NetSecurityNative_GssApiException_o *)sub_1B887FC(v20);
        Interop_NetSecurityNative_GssApiException___ctor(v21, v19, v22);
        v23 = sub_1B885C4(&Method_Interop_NetSecurityNative_GssBuffer_Copy__);
        sub_1B886D8(v21, v23);
      }
      v11 = length[1];
      if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
      System_Runtime_InteropServices_Marshal__Copy_61594892(v11, v5, v4, v7, 0LL);
    }
  }
  return v7;
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
  uint64_t v3; // x20
  unsigned int v4; // w20
  __int64 v5; // x0
  uint64_t v6; // x21
  System_Byte_array *v7; // x19
  _QWORD *v8; // x19
  __int64 v9; // x8
  __int64 v10; // x0
  __int64 v11; // x0

  length = (uint64_t *)this.fields._length;
  if ( (byte_4A64B30 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_byte___);
    sub_1B885B0(&byte___TypeInfo);
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4A64B30 = 1;
  }
  if ( System_IntPtr__op_Equality(length[1], 0, 0LL) || (v3 = *length) == 0 )
  {
    v8 = Method_System_Array_Empty_byte___;
    v9 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v9 )
    {
      sub_1BDA4E8();
      v9 = v8[7];
    }
    v10 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    if ( !*(_DWORD *)(v10 + 224) )
      j_il2cpp_runtime_class_init_0(v10);
    v11 = *(_QWORD *)(v8[7] + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    return **(System_Byte_array ***)(v11 + 184);
  }
  else
  {
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v4 = System_Convert__ToInt32_62363104(v3, 0LL);
    v5 = sub_1B88658(byte___TypeInfo, v4);
    v6 = length[1];
    v7 = (System_Byte_array *)v5;
    if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
    System_Runtime_InteropServices_Marshal__Copy_61594892(v6, v7, 0, v4, 0LL);
  }
  return v7;
}


void __fastcall Interop_Sys___cctor(const MethodInfo *method)
{
  if ( (byte_4A62731 & 1) == 0 )
  {
    method = (const MethodInfo *)sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A62731 = 1;
  }
  Interop_Sys_TypeInfo->static_fields->CanSetHiddenFlag = (unsigned int)SystemNative_LChflagsCanSetHiddenFlag(method) != 0;
}


int32_t __fastcall Interop_Sys__CloseDir(intptr_t dir, const MethodInfo *method)
{
  int32_t v2; // w19

  v2 = SystemNative_CloseDir(dir, method);
  sub_1B88560();
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
    sub_1B886D8(exception_argument_null_0, 0LL);
  }
  v5 = *(_QWORD *)&source->fields.handle;
  v10 = 0;
  System_Runtime_InteropServices_SafeHandle__DangerousAddRef(
    (System_Runtime_InteropServices_SafeHandle_o *)destination,
    &v10,
    0LL);
  v6 = SystemNative_CopyFile(v5, *(_QWORD *)&destination->fields.handle);
  sub_1B88560();
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
  int32_t LastWin32Error; // w1
  const MethodInfo *v2; // x2
  Interop_ErrorInfo_o v4; // [xsp+8h] [xbp-18h] BYREF
  Interop_ErrorInfo_o v5; // 0:x0.8

  if ( (byte_4A6272C & 1) == 0 )
  {
    sub_1B885B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4A6272C = 1;
  }
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  LastWin32Error = System_Runtime_InteropServices_Marshal__GetLastWin32Error(0LL);
  v5 = (Interop_ErrorInfo_o)&v4;
  v4 = 0LL;
  Interop_ErrorInfo___ctor(v5, LastWin32Error, v2);
  return v4;
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
  v9 = sub_1B88B68((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  LODWORD(v8) = SystemNative_LStat2(v9, v8);
  sub_1B88560();
  sub_1B88B80(v9);
  return (int)v8;
}


int32_t __fastcall Interop_Sys__LStat_60595328(
        uint8_t *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_LStat2(path, output);
  sub_1B88560();
  return v3;
}


int32_t __fastcall Interop_Sys__LStat_60595356(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  const MethodInfo_2EFB1C8 *v6; // x1
  uint8_t *Reference_byte; // x20
  int32_t v8; // w19
  const MethodInfo *v9; // x2
  _BYTE v11[256]; // [xsp-100h] [xbp-120h] BYREF
  __int64 v12[4]; // [xsp+0h] [xbp-20h] BYREF
  System_Span_T__o v13; // 0:x0.8
  System_Span_byte__o v14; // 0:x2.8
  System_ReadOnlySpan_char__o v15; // 0:x2.8
  System_Text_ValueUtf8Converter_o v16; // 0:x0.16
  System_Text_ValueUtf8Converter_o v17; // 0:x0.16
  System_Text_ValueUtf8Converter_o v18; // 0:x0.16

  v12[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A62730 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____76164824);
    sub_1B885B0(&Method_System_Span_byte___ctor___76071784);
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A62730 = 1;
  }
  memset(v12, 0, 24);
  memset(v11, 0, sizeof(v11));
  v16.fields._arrayToReturnToPool = (struct System_Byte_array *)v12;
  v14 = (System_Span_byte__o)256LL;
  v16.fields._bytes = (struct System_Span_byte__o)v11;
  System_Text_ValueUtf8Converter___ctor(v16, v14, 0LL);
  v17.fields._arrayToReturnToPool = (struct System_Byte_array *)v12;
  v17.fields._bytes = (struct System_Span_byte__o)path;
  v15 = (System_ReadOnlySpan_char__o)output;
  v13 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(v17, v15, 0LL);
  Reference_byte = System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(v13, v6);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v8 = SystemNative_LStat2(Reference_byte, method);
  sub_1B88560();
  v18.fields._arrayToReturnToPool = (struct System_Byte_array *)v12;
  v18.fields._bytes = 0LL;
  System_Text_ValueUtf8Converter__Dispose(v18, v9);
  return v8;
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
  v9 = (char *)sub_1B88B68((int)source, (int)link, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1B88B68(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Link(v9, v17);
  sub_1B88560();
  sub_1B88B80(v9);
  sub_1B88B80(v17);
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
  v9 = (char *)sub_1B88B68((int)path, mode, (int)method, v3, v4, v5, v6, v7, v12, v13, v14, v15);
  v10 = SystemNative_MkDir(v9, v8);
  sub_1B88560();
  sub_1B88B80(v9);
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

  v8 = sub_1B88B68((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_OpenDir();
  sub_1B88560();
  sub_1B88B80(v8);
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

  v10 = sub_1B88B68((int)path, (int)buffer, bufferSize, (int)method, v4, v5, v6, v7, v15, v16, v17, v18);
  if ( buffer )
    v11 = (_DWORD)buffer + 32;
  else
    v11 = 0;
  v12 = v10;
  Link = SystemNative_ReadLink(v10, v11, bufferSize);
  sub_1B88560();
  sub_1B88B80(v12);
  return Link;
}


System_String_o *__fastcall Interop_Sys__ReadLink_60593776(System_String_o *path, const MethodInfo *method)
{
  unsigned int v3; // w20
  _QWORD *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  System_Byte_array *v13; // x21
  __int64 Link; // x0
  __int64 v15; // x1
  unsigned int v16; // w21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v18; // x1
  System_String_o *v19; // x21
  __int64 v21[2]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v22; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4A6272E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Buffers_ArrayPool_byte__get_Shared__);
    sub_1B885B0(&System_Buffers_ArrayPool_byte__TypeInfo);
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A6272E = 1;
  }
  v3 = 256;
  v22 = 0LL;
  while ( 1 )
  {
    if ( !System_Buffers_ArrayPool_byte__TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Buffers_ArrayPool_byte__TypeInfo);
    v4 = Method_System_Buffers_ArrayPool_byte__get_Shared__;
    v5 = *((_QWORD *)Method_System_Buffers_ArrayPool_byte__get_Shared__ + 4);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1BDA48C(v5);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 8LL);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BDA48C(v6);
    if ( !*(_DWORD *)(v6 + 224) )
      j_il2cpp_runtime_class_init_0(v6);
    v7 = v4[4];
    if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
      v7 = sub_1BDA48C(v7);
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 8LL);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    v9 = **(_QWORD **)(v8 + 184);
    if ( !v9 )
      sub_1B8880C(0LL, method);
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 376LL))(
            v9,
            v3,
            *(_QWORD *)(*(_QWORD *)v9 + 384LL));
    v21[1] = (__int64)&v22;
    v22 = v10;
    v21[0] = 0LL;
    if ( !v10 )
      sub_1B8880C(0LL, v11);
    v13 = (System_Byte_array *)v10;
    if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
    Link = Interop_Sys__ReadLink(path, v13, v13->max_length, v12);
    v16 = Link;
    if ( (Link & 0x80000000) != 0 )
    {
      v19 = 0LL;
      goto LABEL_29;
    }
    if ( !v22 )
      sub_1B8880C(Link, v15);
    if ( (int)Link < *(_DWORD *)(v22 + 24) )
      break;
    sub_1B28B00(v21);
    v3 *= 2;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B8880C(0LL, v18);
  v19 = (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, _QWORD, Il2CppMethodPointer))UTF8->klass->vtable._37_GetString.method)(
                             UTF8,
                             v22,
                             0LL,
                             v16,
                             UTF8->klass->vtable._38_GetBestFitUnicodeToBytesData.methodPtr);
LABEL_29:
  sub_1B28B00(v21);
  return v19;
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
  v9 = (char *)sub_1B88B68((int)oldPath, (int)newPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = (char *)sub_1B88B68(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Rename(v9, v17);
  sub_1B88560();
  sub_1B88B80(v9);
  sub_1B88B80(v17);
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

  v8 = (char *)sub_1B88B68((int)path, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_RmDir(v8);
  sub_1B88560();
  sub_1B88B80(v8);
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

  v8 = (char *)sub_1B88B68((int)path, (int)output, (int)method, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Stat2(v8);
  sub_1B88560();
  sub_1B88B80(v8);
  return v9;
}


int32_t __fastcall Interop_Sys__Stat_60594988(
        uint8_t *path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  int32_t v3; // w19

  v3 = SystemNative_Stat2((char *)path);
  sub_1B88560();
  return v3;
}


int32_t __fastcall Interop_Sys__Stat_60595016(
        System_ReadOnlySpan_char__o path,
        Interop_Sys_FileStatus_o *output,
        const MethodInfo *method)
{
  const MethodInfo_2EFB1C8 *v5; // x1
  char *Reference_byte; // x20
  int32_t v7; // w19
  const MethodInfo *v8; // x2
  _BYTE v10[256]; // [xsp-100h] [xbp-120h] BYREF
  __int64 v11[4]; // [xsp+0h] [xbp-20h] BYREF
  System_Span_T__o v12; // 0:x0.8
  System_Span_byte__o v13; // 0:x2.8
  System_ReadOnlySpan_char__o v14; // 0:x2.8
  System_Text_ValueUtf8Converter_o v15; // 0:x0.16
  System_Text_ValueUtf8Converter_o v16; // 0:x0.16
  System_Text_ValueUtf8Converter_o v17; // 0:x0.16

  v11[3] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A6272F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Runtime_InteropServices_MemoryMarshal_GetReference_byte____76164824);
    sub_1B885B0(&Method_System_Span_byte___ctor___76071784);
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A6272F = 1;
  }
  memset(v11, 0, 24);
  memset(v10, 0, sizeof(v10));
  v15.fields._arrayToReturnToPool = (struct System_Byte_array *)v11;
  v13 = (System_Span_byte__o)256LL;
  v15.fields._bytes = (struct System_Span_byte__o)v10;
  System_Text_ValueUtf8Converter___ctor(v15, v13, 0LL);
  v16.fields._arrayToReturnToPool = (struct System_Byte_array *)v11;
  v16.fields._bytes = (struct System_Span_byte__o)path;
  v14 = (System_ReadOnlySpan_char__o)output;
  v12 = (System_Span_T__o)System_Text_ValueUtf8Converter__ConvertAndTerminateString(v16, v14, 0LL);
  Reference_byte = (char *)System_Runtime_InteropServices_MemoryMarshal__GetReference_byte_(v12, v5);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v7 = SystemNative_Stat2(Reference_byte);
  sub_1B88560();
  v17.fields._arrayToReturnToPool = (struct System_Byte_array *)v11;
  v17.fields._bytes = 0LL;
  System_Text_ValueUtf8Converter__Dispose(v17, v8);
  return v7;
}


System_String_o *__fastcall Interop_Sys__StrError(int32_t platformErrno, const MethodInfo *method)
{
  long double inited; // q0
  _QWORD *v4; // x0
  intptr_t v5; // w19
  _QWORD v7[130]; // [xsp-400h] [xbp-410h] BYREF

  v7[129] = *(_QWORD *)(_ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2)) + 40);
  if ( (byte_4A6272D & 1) == 0 )
  {
    sub_1B885B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    sub_1B885B0(&Interop_Sys_TypeInfo);
    byte_4A6272D = 1;
  }
  memset(v7, 0, 0x400u);
  if ( !Interop_Sys_TypeInfo->_2.cctor_finished )
    inited = j_il2cpp_runtime_class_init_0(Interop_Sys_TypeInfo);
  v4 = (_QWORD *)SystemNative_StrErrorR((unsigned int)platformErrno, v7, 1024LL, inited);
  if ( !v4 )
    v4 = v7;
  v5 = System_IntPtr__op_Explicit_62832256(v4, 0LL);
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  return System_Runtime_InteropServices_Marshal__PtrToStringAnsi(v5, 0LL);
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
  v9 = sub_1B88B68((int)target, (int)linkPath, (int)method, v3, v4, v5, v6, v7, v20, v22, v24, v26);
  v17 = sub_1B88B68(v8, v10, v11, v12, v13, v14, v15, v16, v21, v23, v25, v27);
  v18 = SystemNative_Symlink(v9, v17);
  sub_1B88560();
  sub_1B88B80(v9);
  sub_1B88B80(v17);
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

  v8 = (char *)sub_1B88B68((int)pathname, (int)method, v2, v3, v4, v5, v6, v7, v11, v12, v13, v14);
  v9 = SystemNative_Unlink(v8);
  sub_1B88560();
  sub_1B88B80(v8);
  return v9;
}


System_ReadOnlySpan_char__o __fastcall Interop_Sys_DirectoryEntry__GetName(
        Interop_Sys_DirectoryEntry_o this,
        System_Span_char__o buffer,
        const MethodInfo *method)
{
  System_Span_T__o v4; // x19
  uint8_t *Name; // x21
  unsigned int v6; // w22
  __int64 v7; // x21
  System_Text_Encoding_o *UTF8; // x0
  __int64 v9; // x1
  unsigned int v10; // w21
  __int64 v11; // x0
  System_Span_T__o v13; // 0:x0.8

  v4 = *(System_Span_T__o *)&this.fields.NameLength;
  Name = this.fields.Name;
  if ( (byte_4A62732 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_MemoryExtensions_IndexOf_byte___);
    sub_1B885B0(&Method_System_ReadOnlySpan_byte___ctor___76070248);
    sub_1B885B0(&Method_System_Span_char__Slice___76071936);
    sub_1B885B0(&Method_System_Span_char__op_Implicit__);
    byte_4A62732 = 1;
  }
  v6 = *((_DWORD *)Name + 2);
  v7 = *(_QWORD *)Name;
  if ( v6 == -1 )
  {
    v6 = sub_39DA404(v7, 256LL, 0LL, Method_System_MemoryExtensions_IndexOf_byte___);
    if ( (v6 & 0x80000000) != 0 )
LABEL_5:
      System_ThrowHelper__ThrowArgumentOutOfRangeException(0LL);
  }
  else if ( (v6 & 0x80000000) != 0 )
  {
    goto LABEL_5;
  }
  UTF8 = System_Text_Encoding__get_UTF8(0LL);
  if ( !UTF8 )
    sub_1B8880C(0LL, v9);
  v10 = ((__int64 (__fastcall *)(System_Text_Encoding_o *, __int64, _QWORD, System_Span_T__o, System_Span_char__o, Il2CppMethodPointer))UTF8->klass->vtable._30_GetChars.method)(
          UTF8,
          v7,
          v6,
          v4,
          buffer,
          UTF8->klass->vtable._31_get_CodePage.methodPtr);
  if ( v10 > buffer.fields._pointer.fields._value )
    System_ThrowHelper__ThrowArgumentOutOfRangeException(0LL);
  v11 = *((_QWORD *)Method_System_Span_char__Slice___76071936 + 4);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    sub_1BDA48C(v11);
  v13 = v4;
  return *(System_ReadOnlySpan_char__o *)&System_Span_char___op_Implicit(v13, (const MethodInfo_374C170 *)v10);
}