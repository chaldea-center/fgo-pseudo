void __fastcall ClassBoardEffectPlayer___ctor(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ClassBoardEffectPlayer___ctor_28066828(
        ClassBoardEffectPlayer_o *this,
        System_String_o *playerName,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._Name_k__BackingField = playerName;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)playerName, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardEffectPlayer__End(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *endCallback; // x0
  BattleServantConfConponent_o *p_endCallback; // x19

  p_endCallback = (BattleServantConfConponent_o *)&this->fields.endCallback;
  endCallback = this->fields.endCallback;
  if ( endCallback )
    System_Action__Invoke(endCallback, 0LL);
  p_endCallback->klass = 0LL;
  sub_B16F98(p_endCallback, 0LL, v2, v3, v4, v5, v6, v7);
}


bool __fastcall ClassBoardEffectPlayer__GetData_bool_(ClassBoardEffectPlayer_o *this, const MethodInfo_18BBF40 *method)
{
  Il2CppObject *data; // x20
  Il2CppClass *_0_T; // x19
  ClassBoardEffectPlayer_o *v5; // x0
  const MethodInfo_18BBFA4 *v6; // x1

  data = this->fields.data;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  if ( !data )
    sub_B170D4();
  if ( data->klass->_1.element_class == _0_T->_1.element_class )
    return *(_BYTE *)j_il2cpp_object_unbox_0(data);
  v5 = (ClassBoardEffectPlayer_o *)sub_B173C8(data);
  return ClassBoardEffectPlayer__GetData_int_(v5, v6);
}


int32_t __fastcall ClassBoardEffectPlayer__GetData_int_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_18BBFA4 *method)
{
  Il2CppObject *data; // x20
  Il2CppClass *_0_T; // x19
  ClassBoardEffectPlayer_o *v5; // x0
  const MethodInfo_18BC008 *v6; // x1

  data = this->fields.data;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  if ( !data )
    sub_B170D4();
  if ( data->klass->_1.element_class == _0_T->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(data);
  v5 = (ClassBoardEffectPlayer_o *)sub_B173C8(data);
  return (unsigned int)ClassBoardEffectPlayer__GetData_object_(v5, v6);
}


Il2CppObject *__fastcall ClassBoardEffectPlayer__GetData_object_(
        ClassBoardEffectPlayer_o *this,
        const MethodInfo_18BC008 *method)
{
  Il2CppObject *data; // x20
  Il2CppClass *_0_T; // x19
  Il2CppObject *result; // x0

  data = this->fields.data;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  if ( data )
  {
    result = (Il2CppObject *)sub_B170BC(data, _0_T);
    if ( result )
      return result;
    sub_B173C8(data);
  }
  return 0LL;
}


void __fastcall ClassBoardEffectPlayer__Play(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  System_Action_o *playCallback; // x0

  playCallback = this->fields.playCallback;
  if ( playCallback )
    System_Action__Invoke(playCallback, 0LL);
}


void __fastcall ClassBoardEffectPlayer__SetData_bool_(
        ClassBoardEffectPlayer_o *this,
        bool obj,
        const MethodInfo_18BC060 *method)
{
  Il2CppClass *_0_T; // x20
  Il2CppObject *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  char v12[4]; // [xsp+Ch] [xbp-14h] BYREF

  v12[0] = obj;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(_0_T, v12);
  this->fields.data = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.data, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
}


void __fastcall ClassBoardEffectPlayer__SetData_int_(
        ClassBoardEffectPlayer_o *this,
        int32_t obj,
        const MethodInfo_18BC0C0 *method)
{
  Il2CppClass *_0_T; // x20
  Il2CppObject *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = obj;
  _0_T = method->rgctx_data->_0_T;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T);
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(_0_T, &v12);
  this->fields.data = v5;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.data, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
}


void __fastcall ClassBoardEffectPlayer__SetData_object_(
        ClassBoardEffectPlayer_o *this,
        Il2CppObject *obj,
        const MethodInfo_18BC11C *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.data = obj;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.data,
    (System_Int32_array **)obj,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardEffectPlayer__SetEndEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.endCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.endCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ClassBoardEffectPlayer__SetPlayEvent(
        ClassBoardEffectPlayer_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.playCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.playCallback,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


System_String_o *__fastcall ClassBoardEffectPlayer__get_Name(ClassBoardEffectPlayer_o *this, const MethodInfo *method)
{
  return this->fields._Name_k__BackingField;
}