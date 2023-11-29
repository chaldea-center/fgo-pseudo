void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_Collections_Hashtable_o *v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F7D7A & 1) == 0 )
  {
    sub_B16FFC(&System_Collections_Hashtable_TypeInfo, method);
    byte_40F7D7A = 1;
  }
  v6 = (System_Collections_Hashtable_o *)sub_B170CC(System_Collections_Hashtable_TypeInfo, method, v2, v3, v4);
  System_Collections_Hashtable___ctor_38240048(v6, 0LL);
  this->fields.table = v6;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v6, v7, v8, v9, v10, v11, v12);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0
  UnityEngine_Transform_o *transform; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (transform = UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_Transform__set_localPosition(transform, this->fields.lbStartPosition, 0LL);
}


void __fastcall MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_String_o *mText; // x8
  int32_t m_stringLength; // w22
  int32_t mFontSize; // w24
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v31; // x0
  UnityEngine_Transform_o *v32; // x0
  float v33; // s9
  UnityEngine_GameObject_o *v34; // x20
  UnityEngine_Transform_o *v35; // x0
  unsigned int localPosition; // s0
  struct System_Collections_Hashtable_o *table; // x0
  float v38; // s8
  struct System_Collections_Hashtable_o *v39; // x21
  __int64 v40; // x0
  struct System_Collections_Hashtable_o *v41; // x21
  __int64 v42; // x0
  struct System_Collections_Hashtable_o *v43; // x0
  struct System_Collections_Hashtable_o *v44; // x21
  UnityEngine_GameObject_o *v45; // x0
  struct System_Collections_Hashtable_o *v46; // x0
  struct System_Collections_Hashtable_o *v47; // x21
  __int64 v48; // x0
  struct System_Collections_Hashtable_o *v49; // x21
  __int64 v50; // x0
  struct System_Collections_Hashtable_o *v51; // x21
  __int64 v52; // x0
  System_Collections_Hashtable_o *v53; // x19
  int v54; // [xsp+Ch] [xbp-54h] BYREF
  int v55; // [xsp+10h] [xbp-50h] BYREF
  int v56; // [xsp+14h] [xbp-4Ch] BYREF
  float v57; // [xsp+18h] [xbp-48h] BYREF
  char v58[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_40F7D79 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, parent);
    sub_B16FFC(&iTween_LoopType_TypeInfo, v7);
    sub_B16FFC(&float_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23222, v9);
    sub_B16FFC(&StringLiteral_18046, v10);
    sub_B16FFC(&StringLiteral_21161, v11);
    sub_B16FFC(&StringLiteral_22584, v12);
    sub_B16FFC(&StringLiteral_21175, v13);
    sub_B16FFC(&StringLiteral_17881, v14);
    sub_B16FFC(&StringLiteral_20243, v15);
    sub_B16FFC(&StringLiteral_20152, v16);
    sub_B16FFC(&StringLiteral_19856, v17);
    sub_B16FFC(&StringLiteral_21173, v18);
    sub_B16FFC(&iTween_TypeInfo, v19);
    byte_40F7D79 = 1;
  }
  if ( !targetLb )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_18552136(gameObject, 0LL);
  this->fields.targetLb = targetLb;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.targetLb,
    (System_Int32_array **)targetLb,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  mText = targetLb->fields.mText;
  if ( !mText )
    goto LABEL_30;
  if ( !parent )
    goto LABEL_30;
  m_stringLength = mText->fields.m_stringLength;
  mFontSize = targetLb->fields.mFontSize;
  this->fields.parentSize = UIPanel__GetViewSize(parent, 0LL);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !transform )
    goto LABEL_30;
  this->fields.lbStartPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
  v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !v31 )
    goto LABEL_30;
  if ( COERCE_FLOAT(UnityEngine_Transform__get_localPosition(v31, 0LL)) != this->fields.lbStartPosition.fields.x )
  {
    v32 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
    if ( !v32 )
      goto LABEL_30;
    UnityEngine_Transform__set_localPosition(v32, this->fields.lbStartPosition, 0LL);
  }
  v33 = (float)(mFontSize * m_stringLength);
  if ( this->fields.parentSize.fields.x >= v33 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  v35 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !v35 )
    goto LABEL_30;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition(v35, 0LL);
  table = this->fields.table;
  if ( !table )
    goto LABEL_30;
  v38 = *(float *)&localPosition;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, Il2CppMethodPointer))table->klass->vtable._24_Clear.method)(
    table,
    table->klass->vtable._25_Clone.methodPtr);
  v39 = this->fields.table;
  v58[0] = 1;
  v40 = j_il2cpp_value_box_0(bool_TypeInfo, v58);
  if ( !v39 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v39->klass->vtable._23_Add.method)(
    v39,
    StringLiteral_19856,
    v40,
    v39->klass->vtable._24_Clear.methodPtr);
  v41 = this->fields.table;
  v57 = v38 - v33;
  v42 = j_il2cpp_value_box_0(float_TypeInfo, &v57);
  if ( !v41 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v41->klass->vtable._23_Add.method)(
    v41,
    StringLiteral_23222,
    v42,
    v41->klass->vtable._24_Clear.methodPtr);
  v43 = this->fields.table;
  if ( !v43 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v43->klass->vtable._23_Add.method)(
    v43,
    StringLiteral_21173,
    StringLiteral_21161,
    v43->klass->vtable._24_Clear.methodPtr);
  v44 = this->fields.table;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v44 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
    v44,
    StringLiteral_21175,
    v45,
    v44->klass->vtable._24_Clear.methodPtr);
  v46 = this->fields.table;
  if ( !v46 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v46->klass->vtable._23_Add.method)(
    v46,
    StringLiteral_18046,
    StringLiteral_20152,
    v46->klass->vtable._24_Clear.methodPtr);
  v47 = this->fields.table;
  v56 = 1092616192;
  v48 = j_il2cpp_value_box_0(float_TypeInfo, &v56);
  if ( !v47 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
    v47,
    StringLiteral_22584,
    v48,
    v47->klass->vtable._24_Clear.methodPtr);
  v49 = this->fields.table;
  v55 = 0x40000000;
  v50 = j_il2cpp_value_box_0(float_TypeInfo, &v55);
  if ( !v49
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
          v49,
          StringLiteral_17881,
          v50,
          v49->klass->vtable._24_Clear.methodPtr),
        v51 = this->fields.table,
        v54 = 1,
        v52 = j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v54),
        !v51) )
  {
LABEL_30:
    sub_B170D4();
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, __int64, Il2CppMethodPointer))v51->klass->vtable._23_Add.method)(
    v51,
    StringLiteral_20243,
    v52,
    v51->klass->vtable._24_Clear.methodPtr);
  v53 = this->fields.table;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_18434272(v34, v53, 0LL);
}