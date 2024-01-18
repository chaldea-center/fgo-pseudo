void __fastcall DialogMessageEntity___ctor(DialogMessageEntity_o *this, const MethodInfo *method)
{
  if ( (byte_418940E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_418940E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
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
  System_Action_o *v22; // x22
  WebViewManager_o *v23; // x0
  System_String_o *message; // x19
  System_String_o *title; // x21
  CommonUI_o *v26; // x22
  System_Action_o *v27; // x23

  if ( (byte_418940D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, v6);
    sub_B2C35C(&Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, v7);
    sub_B2C35C(&DialogMessageEntity___c__DisplayClass15_0_TypeInfo, v8);
    byte_418940D = 1;
  }
  v9 = sub_B2C42C(DialogMessageEntity___c__DisplayClass15_0_TypeInfo);
  DialogMessageEntity___c__DisplayClass15_0___ctor((DialogMessageEntity___c__DisplayClass15_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_10;
  *(_QWORD *)(v9 + 16) = callback;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)callback, v12, v13, v14, v15, v16, v17);
  imageIds = this->fields.imageIds;
  if ( imageIds && *(_QWORD *)&imageIds->max_length )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v20 = this->fields.imageIds;
    v21 = (CommonUI_o *)Instance;
    v22 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v22, (Il2CppObject *)v9, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__0__, 0LL);
    if ( v21 )
    {
      CommonUI__OpenTutorialImageDialog_17997428(v21, v20, -1, 0, v22, 0LL, 0LL, 0LL);
      return;
    }
LABEL_10:
    sub_B2C434(v10, v11);
  }
  v23 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  title = this->fields.title;
  message = this->fields.message;
  v26 = (CommonUI_o *)v23;
  v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)v9, Method_DialogMessageEntity___c__DisplayClass15_0__Open_b__1__, 0LL);
  if ( !v26 )
    goto LABEL_10;
  CommonUI__OpenNotificationDialog(v26, title, message, v27, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
}


System_Int32_array_array *__fastcall DialogMessageEntity__getTargets(
        DialogMessageEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct System_String_array *targetIds; // x8
  System_String_o *v13; // x0
  System_String_o *v14; // x1
  struct System_String_array *v15; // x8
  System_Int32_array_array *v16; // x20
  __int64 v17; // x25
  BattleServantConfConponent_o *p_monitor; // x21
  int max_length; // w9
  System_String_o *v20; // x22
  System_String_array *v21; // x0
  DialogMessageEntity___c_c *v22; // x8
  System_String_array *v23; // x22
  struct DialogMessageEntity___c_StaticFields *static_fields; // x9
  System_Converter_BattleActionData_HealData__int__o *_9__10_0; // x23
  Il2CppObject *v26; // x24
  struct DialogMessageEntity___c_StaticFields *v27; // x0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Int32_array **v40; // x22
  __int64 v42; // x0
  __int64 v43; // x0

  if ( (byte_418940B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Array_ConvertAll_string__int___, method);
    sub_B2C35C(&char___TypeInfo, v3);
    sub_B2C35C(&Method_System_Converter_string__int___ctor__, v4);
    sub_B2C35C(&System_Converter_string__int__TypeInfo, v5);
    sub_B2C35C(&int_____TypeInfo, v6);
    sub_B2C35C(&Method_DialogMessageEntity___c__getTargets_b__10_0__, v7);
    sub_B2C35C(&DialogMessageEntity___c_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_15634/*"["*/, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    sub_B2C35C(&StringLiteral_15870/*"]"*/, v11);
    byte_418940B = 1;
  }
  targetIds = this->fields.targetIds;
  if ( !targetIds )
    return (System_Int32_array_array *)sub_B2C374(int_____TypeInfo, 1LL);
  v13 = (System_String_o *)sub_B2C374(int_____TypeInfo, targetIds->max_length);
  v15 = this->fields.targetIds;
  if ( !v15 )
LABEL_26:
    sub_B2C434(v13, v14);
  v16 = (System_Int32_array_array *)v13;
  v17 = 0LL;
  p_monitor = (BattleServantConfConponent_o *)&v13[1].monitor;
  while ( 1 )
  {
    max_length = v15->max_length;
    if ( (int)v17 >= max_length )
      return v16;
    if ( (unsigned int)v17 >= max_length )
      goto LABEL_29;
    v13 = v15->m_Items[v17];
    if ( v13 )
    {
      v13 = System_String__Replace_44312768(
              v13,
              (System_String_o *)StringLiteral_15634/*"["*/,
              (System_String_o *)StringLiteral_1/*""*/,
              0LL);
      if ( v13 )
      {
        v20 = System_String__Replace_44312768(
                v13,
                (System_String_o *)StringLiteral_15870/*"]"*/,
                (System_String_o *)StringLiteral_1/*""*/,
                0LL);
        v13 = (System_String_o *)sub_B2C374(char___TypeInfo, 1LL);
        if ( v13 )
        {
          v14 = v13;
          if ( !LODWORD(v13[1].klass) )
            goto LABEL_29;
          LOWORD(v13[1].monitor) = 44;
          if ( v20 )
          {
            v21 = System_String__Split(v20, (System_Char_array *)v13, 0LL);
            v22 = DialogMessageEntity___c_TypeInfo;
            v23 = v21;
            if ( (BYTE3(DialogMessageEntity___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DialogMessageEntity___c_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DialogMessageEntity___c_TypeInfo);
              v22 = DialogMessageEntity___c_TypeInfo;
            }
            static_fields = v22->static_fields;
            _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)static_fields->__9__10_0;
            if ( !_9__10_0 )
            {
              if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v22);
                static_fields = DialogMessageEntity___c_TypeInfo->static_fields;
              }
              v26 = (Il2CppObject *)static_fields->__9;
              _9__10_0 = (System_Converter_BattleActionData_HealData__int__o *)sub_B2C42C(System_Converter_string__int__TypeInfo);
              System_Converter_BattleActionData_HealData__int____ctor(
                _9__10_0,
                v26,
                Method_DialogMessageEntity___c__getTargets_b__10_0__,
                (const MethodInfo_24E026C *)Method_System_Converter_string__int___ctor__);
              v27 = DialogMessageEntity___c_TypeInfo->static_fields;
              v27->__9__10_0 = (struct System_Converter_string__int__o *)_9__10_0;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v27->__9__10_0,
                (System_Int32_array **)_9__10_0,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33);
            }
            v13 = (System_String_o *)System_Array__ConvertAll_string__int_(
                                       v23,
                                       (System_Converter_TInput__TOutput__o *)_9__10_0,
                                       (const MethodInfo_1FFB1FC *)Method_System_Array_ConvertAll_string__int___);
            if ( v16 )
            {
              v40 = (System_Int32_array **)v13;
              if ( v13 )
              {
                v13 = (System_String_o *)sub_B2C41C(v13, v16->obj.klass->_1.element_class);
                if ( !v13 )
                {
                  v43 = sub_B2C454(0LL);
                  sub_B2C400(v43, 0LL);
                }
              }
              if ( (unsigned int)v17 >= v16->max_length )
              {
LABEL_29:
                v42 = sub_B2C460(v13);
                sub_B2C400(v42, 0LL);
              }
              p_monitor->klass = (BattleServantConfConponent_c *)v40;
              sub_B2C2F8(p_monitor, v40, v34, v35, v36, v37, v38, v39);
              v15 = this->fields.targetIds;
              ++v17;
              p_monitor = (BattleServantConfConponent_o *)((char *)p_monitor + 8);
              if ( v15 )
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
  if ( (byte_418940C & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, now);
    byte_418940C = 1;
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
  Il2CppObject *v2; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_41864E9 & 1) == 0 )
  {
    sub_B2C35C(&DialogMessageEntity___c_TypeInfo, v1);
    byte_41864E9 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(DialogMessageEntity___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = (BattleServantConfConponent_o *)DialogMessageEntity___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v2;
  sub_B2C2F8(static_fields, (System_Int32_array **)v2, v4, v5, v6, v7, v8, v9);
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
    sub_B2C434(0LL, method);
  System_Action__Invoke(callback, 0LL);
}


void __fastcall DialogMessageEntity___c__DisplayClass15_0___Open_b__1(
        DialogMessageEntity___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Action_o *callback; // x0

  callback = this->fields.callback;
  if ( !callback )
    sub_B2C434(0LL, method);
  System_Action__Invoke(callback, 0LL);
}