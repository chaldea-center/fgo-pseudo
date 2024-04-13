void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA953 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_int___ctor__, (_DWORD)method, v2, v3);
    byte_42EA953 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23FACBC *)Method_DataEntityBase_int___ctor__);
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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Int32_array *imageIds; // x8
  WebViewManager_o *Instance; // x0
  System_Int32_array *v29; // x19
  CommonUI_o *v30; // x21
  System_Action_o *v31; // x22
  WebViewManager_o *v32; // x0
  System_String_o *message; // x19
  System_String_o *title; // x21
  CommonUI_o *v35; // x22
  System_Action_o *v36; // x23

  if ( (byte_42EA952 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    sub_B5D5C4(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, v9, v10, v11);
    sub_B5D5C4(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, v12, v13, v14);
    sub_B5D5C4(&DialogMessageEntity___c__DisplayClass15_0_TypeInfo, v15, v16, v17);
    byte_42EA952 = 1;
  }
  v18 = sub_B5D694(DialogMessageEntity___c__DisplayClass15_0_TypeInfo);
  DialogMessageEntity___c__DisplayClass15_0___ctor((DialogMessageEntity___c__DisplayClass15_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_10;
  *(_QWORD *)(v18 + 16) = callback;
  sub_B5D560((BattleServantConfConponent_o *)(v18 + 16), (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v29 = this->fields.imageIds;
    v30 = (CommonUI_o *)Instance;
    v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v31, (Il2CppObject *)v18, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, 0LL);
    if ( v30 )
    {
      CommonUI__OpenTutorialImageDialog_18228308(v30, v29, -1, 0, v31, 0LL, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B5D69C(v19, v20);
  }
  v32 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v35 = (CommonUI_o *)v32;
  v36 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v18, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, 0LL);
  if ( !v35 )
    goto LABEL_10;
  CommonUI__OpenNotificationDialog(v35, title, message, v36, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


System_Int32_array_array *__fastcall DialogMessageEntity__getTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  struct System_String_array *targetIds; // x8
  System_String_o *v33; // x0
  System_String_o *v34; // x1
  struct System_String_array *v35; // x8
  System_Int32_array_array *v36; // x20
  __int64 v37; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v40; // x22
  System_String_array *v41; // x0
  DialogMessageEntity___c_c *v42; // x8
  System_String_array *v43; // x22
  struct DialogMessageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x23
  Il2CppObject *v46; // x24
  struct DialogMessageEntity___c_StaticFields *v47; // x0
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  System_Int32_array **v60; // x22
  __int64 v62; // x0
  __int64 v63; // x0

  if ( (byte_42EA950 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_ConvertAll_string__int___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&char___TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_System_Converter_string__int___ctor__, v8, v9, v10);
    sub_B5D5C4(&System_Converter_string__int__TypeInfo, v11, v12, v13);
    sub_B5D5C4(&int_____TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_DialogMessageEntity___c__getTargets_b__10_0__, v17, v18, v19);
    sub_B5D5C4(&DialogMessageEntity___c_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_15824/*"["*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_16061/*"]"*/, v29, v30, v31);
    byte_42EA950 = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B5D5DC(int_____TypeInfo, 1LL);
  v33 = (System_String_o *)sub_B5D5DC(int_____TypeInfo, targetIds->max_length);
  v35 = this->fields.targetIds;
  if ( !v35 )
LABEL_26:
    sub_B5D69C(v33, v34);
  v36 = (System_Int32_array_array *)v33;
  v37 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v33[1].monitor;
  while ( 1 )
  {
    max_length = v35->max_length;
    if ( (int)v37 >= max_length )
      return v36;
    if ( (unsigned int)v37 >= max_length )
      goto LABEL_29;
    v33 = v35->m_Items[v37];
    if ( v33 )
    {
      v33 = System_String__Replace_44585024(
              v33,
              (System_String_o *)StringLiteral_15824/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v33 )
      {
        v40 = System_String__Replace_44585024(
                v33,
                (System_String_o *)StringLiteral_16061/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v33 = (System_String_o *)sub_B5D5DC(char___TypeInfo, 1LL);
        if ( v33 )
        {
          v34 = v33;
          if ( !LODWORD(v33[1].klass) )
            goto LABEL_29;
          LOWORD(v33[1].monitor) = 44;
          if ( v40 )
          {
            v41 = System_String__Split(v40, (System_Char_array *)v33, 0LL);
            v42 = DialogMessageEntity___c_TypeInfo;
            v43 = v41;
            if ( (BYTE3(DialogMessageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
              v42 = DialogMessageEntity___c_TypeInfo;
            }
            static_fields = v42->static_fields;
            _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
            if ( !_9__10_0 )
            {
              if ( (BYTE3(v42->vtable._0_Equals.methodPtr) & 4) != 0 && !v42->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v42);
                static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
              }
              v46 = (Il2CppObject *)static_fields->__9;
              _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B5D694(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__10_0,
                v46,
                Method_DialogMessageEntity___c__getTargets_b__10_0__,
                (const MethodInfo_23F6FAC *)Method_System_Converter_string__int___ctor__);
              v47 = DialogMessageEntity___c_TypeInfo->static_fields;
              v47->__9__10_0 = (struct System_Converter_string__int__o *)_9__10_0;
              sub_B5D560(
                (BattleServantConfConponent_o *)&v47->__9__10_0,
                (System_Int32_array **)_9__10_0,
                v48,
                v49,
                v50,
                v51,
                v52,
                v53);
            }
            v33 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v43,
                                       (System_Converter_TInput__TOutput__o *)_9__10_0,
                                       (const MethodInfo_1FBF43C *)Method_System_Array_ConvertAll_string__int___);
            if ( v36 )
            {
              v60 = (System_Int32_array **)v33;
              if ( v33 )
              {
                v33 = (System_String_o *)sub_B5D684(v33, v36->obj.klass->_1.element_class);
                if ( !v33 )
                {
                  v63 = sub_B5D6BC(0LL);
                  sub_B5D668(v63, 0LL);
                }
              }
              if ( (unsigned int)v37 >= v36->max_length )
              {
LABEL_29:
                v62 = sub_B5D6C8(v33);
                sub_B5D668(v62, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v60;
              sub_B5D560(p_monitor, v60, v54, v55, v56, v57, v58, v59);
              v35 = this->fields.targetIds;
              ++v37;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v35 )
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
  __int64 v3; // x3
  int64_t Time; // x20

  Time = now;
  if ( (byte_42EA951 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, now, (_DWORD)method, v3);
    byte_42EA951 = 1;
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E6D8E & 1) == 0 )
  {
    sub_B5D5C4(&DialogMessageEntity___c_TypeInfo, v1, v2, v3);
    byte_42E6D8E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(0LL, method);
  System_Action__Invoke(callback, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__1(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B5D69C(0LL, method);
  System_Action__Invoke(callback, 0LL);
}