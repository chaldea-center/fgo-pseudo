void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_40FBC76 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataEntityBase_int___ctor__, method);
    byte_40FBC76 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_266F234 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall DialogMessageEntity__CreatePrimaryKey(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.id;
}


int32_t __fastcall DialogMessageEntity__GetOpenType(DialogMessageEntity_o *this, const MethodInfo *method)
{
  return this->fields.dialogOpenType;
}


void __fastcall DialogMessageEntity__Open(
        DialogMessageEntity_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v20; // x19
  CommonUI_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  System_Action_o *v26; // x22
  WebViewManager_o *v27; // x0
  System_String_o *message; // x19
  System_String_o *title; // x21
  CommonUI_o *v30; // x22
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x23

  if ( (byte_40FBC75 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, v8);
    sub_B16FFC(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, v9);
    sub_B16FFC(&DialogMessageEntity___c__DisplayClass15_0_TypeInfo, v10);
    byte_40FBC75 = 1;
  }
  v11 = sub_B170CC(DialogMessageEntity___c__DisplayClass15_0_TypeInfo, callback, method, v3, v4);
  DialogMessageEntity___c__DisplayClass15_0___ctor((DialogMessageEntity___c__DisplayClass15_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_QWORD *)(v11 + 16) = callback;
  sub_B16F98((BattleServantConfConponent_o *)(v11 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = this->fields.imageIds;
    v21 = (CommonUI_o *)Instance;
    v26 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v22, v23, v24, v25);
    System_Action___ctor(v26, (Il2CppObject *)v11, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, 0LL);
    if ( v21 )
    {
      CommonUI__OpenTutorialImageDialog_18263664(v21, v20, -1, 0, v26, 0LL, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B170D4();
  }
  v27 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v30 = (CommonUI_o *)v27;
  v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)v11, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, 0LL);
  if ( !v30 )
    goto LABEL_10;
  CommonUI__OpenNotificationDialog(v30, title, message, v35, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


System_Int32_array_array *__fastcall DialogMessageEntity__getTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_String_array *targetIds; // x8
  System_Char_array *v14; // x0
  System_Char_array *v15; // x1
  System_String_array **v16; // x2
  struct System_String_array *v17; // x8
  System_Int32_array_array *v18; // x20
  __int64 v19; // x25
  BattleServantConfConponent_o *v20; // x21
  int max_length; // w9
  System_String_o *v22; // x0
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  __int64 v25; // x2
  System_String_array *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  DialogMessageEntity___c_c *v31; // x8
  System_String_array *v32; // x22
  struct DialogMessageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x23
  Il2CppObject *v35; // x24
  struct DialogMessageEntity___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Int32_array **v48; // x22

  if ( (byte_40FBC73 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B16FFC(&char___TypeInfo, v4);
    sub_B16FFC(&Method_System_Converter_string__int___ctor__, v5);
    sub_B16FFC(&System_Converter_string__int__TypeInfo, v6);
    sub_B16FFC(&int_____TypeInfo, v7);
    sub_B16FFC(&Method_DialogMessageEntity___c__getTargets_b__10_0__, v8);
    sub_B16FFC(&DialogMessageEntity___c_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_15571, v10);
    sub_B16FFC(&StringLiteral_1, v11);
    sub_B16FFC(&StringLiteral_15807, v12);
    byte_40FBC73 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B17014(int_____TypeInfo, 1LL, v2);
  v14 = (System_Char_array *)sub_B17014(int_____TypeInfo, targetIds->max_length, v2);
  v17 = this->fields.targetIds;
  if ( !v17 )
LABEL_26:
    sub_B170D4();
  v18 = (System_Int32_array_array *)v14;
  v19 = 0LL;
  v20 = (BattleServantConfConponent_o *)&v14->m_Items[2];
  while ( 1 )
  {
    max_length = v17->max_length;
    if ( (int)v19 >= max_length )
      return v18;
    if ( (unsigned int)v19 >= max_length )
      goto LABEL_29;
    v22 = v17->m_Items[v19];
    if ( v22 )
    {
      v23 = System_String__Replace_43750968(
              v22,
              (System_String_o *)StringLiteral_15571,
              (System_String_o *)StringLiteral_1,
              0LL);
      if ( v23 )
      {
        v24 = System_String__Replace_43750968(
                v23,
                (System_String_o *)StringLiteral_15807,
                (System_String_o *)StringLiteral_1,
                0LL);
        v14 = (System_Char_array *)sub_B17014(char___TypeInfo, 1LL, v25);
        if ( v14 )
        {
          v15 = v14;
          if ( !v14->max_length )
            goto LABEL_29;
          v14->m_Items[2] = 44;
          if ( v24 )
          {
            v26 = System_String__Split(v24, v14, 0LL);
            v31 = DialogMessageEntity___c_TypeInfo;
            v32 = v26;
            if ( (BYTE3(DialogMessageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
              v31 = DialogMessageEntity___c_TypeInfo;
            }
            static_fields = v31->static_fields;
            _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
            if ( !_9__10_0 )
            {
              if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v31);
                static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
              }
              v35 = (Il2CppObject *)static_fields->__9;
              _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B170CC(
                                                                                 System_Converter_string__int__TypeInfo,
                                                                                 v27,
                                                                                 v28,
                                                                                 v29,
                                                                                 v30);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__10_0,
                v35,
                Method_DialogMessageEntity___c__getTargets_b__10_0__,
                (const MethodInfo_266B524 *)Method_System_Converter_string__int___ctor__);
              v36 = DialogMessageEntity___c_TypeInfo->static_fields;
              v36->__9__10_0 = (struct System_Converter_string__int__o *)_9__10_0;
              sub_B16F98(
                (BattleServantConfConponent_o *)&v36->__9__10_0,
                (System_Int32_array **)_9__10_0,
                v37,
                v38,
                v39,
                v40,
                v41,
                v42);
            }
            v14 = (System_Char_array *)System_Array__ConvertAll_string__int_(
                                         v32,
                                         (System_Converter_TInput__TOutput__o *)_9__10_0,
                                         (const MethodInfo_2043230 *)Method_System_Array_ConvertAll_string__int___);
            if ( v18 )
            {
              v48 = (System_Int32_array **)v14;
              if ( v14 )
              {
                v14 = (System_Char_array *)sub_B170BC(v14, v18->obj.klass->_1.element_class);
                if ( !v14 )
                {
                  sub_B170F4(0LL);
                  sub_B170A0();
                }
              }
              if ( (unsigned int)v19 >= v18->max_length )
              {
LABEL_29:
                sub_B17100(v14, v15, v16);
                sub_B170A0();
              }
              v20->klass = (BattleServantConfConponent_c *)v48;
              sub_B16F98(v20, v48, v16, v43, v44, v45, v46, v47);
              v17 = this->fields.targetIds;
              ++v19;
              v20 = (BattleServantConfConponent_o *)((char *)v20 + 8);
              if ( v17 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_26;
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall DialogMessageEntity__isOpenCondition(
        DialogMessageEntity_o *this,
        int32_t ex1,
        int32_t ex2,
        int32_t ex3,
        int32_t ex4,
        const MethodInfo *method)
{
  DialogMessageEntity__getTargets(this, *(const MethodInfo **)&ex1);
  return this->fields.dialogOpenType == 1;
}


bool __fastcall DialogMessageEntity__isOpenTime(DialogMessageEntity_o *this, int64_t now, const MethodInfo *method)
{
  int64_t Time; // x20

  Time = now;
  if ( (byte_40FBC74 & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, now);
    byte_40FBC74 = 1;
  }
  if ( !Time )
  {
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Time = NetworkManager__getTime(0LL);
  }
  return Time >= this->fields.openedAt && Time < this->fields.closedAt;
}


void __fastcall DialogMessageEntity___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B58 & 1) == 0 )
  {
    sub_B16FFC(&DialogMessageEntity___c_TypeInfo, v1);
    byte_40F8B58 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(DialogMessageEntity___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
}


void __fastcall DialogMessageEntity___c___ctor(DialogMessageEntity___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall DialogMessageEntity___c___getTargets_b__10_0(
        DialogMessageEntity___c_o *this,
        System_String_o *input,
        const MethodInfo *method)
{
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( System_Int32__TryParse(input, &result, 0LL) )
    return result;
  else
    return 0;
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___ctor(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__0(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B170D4();
  System_Action__Invoke(callback, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__1(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B170D4();
  System_Action__Invoke(callback, 0LL);
}