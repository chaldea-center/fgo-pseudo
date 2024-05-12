void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_438A3D7 & 1) == 0 )
  {
    sub_B775C4(&System_Collections_Hashtable_TypeInfo);
    byte_438A3D7 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_B77694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39511352(v3, 0LL);
  this->fields.table = v3;
  sub_B77560((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_B7769C(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0LL);
}


void __fastcall MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
  UnityEngine_GameObject_o *gameObject; // x22
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_String_o *mText; // x8
  int32_t m_stringLength; // w22
  int32_t mFontSize; // w24
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x20
  unsigned int localPosition; // s0
  float v20; // s8
  struct System_Collections_Hashtable_o *table; // x21
  __int64 v22; // x2
  struct System_Collections_Hashtable_o *v23; // x21
  __int64 v24; // x2
  struct System_Collections_Hashtable_o *v25; // x21
  struct System_Collections_Hashtable_o *v26; // x21
  __int64 v27; // x2
  struct System_Collections_Hashtable_o *v28; // x21
  __int64 v29; // x2
  struct System_Collections_Hashtable_o *v30; // x21
  __int64 v31; // x2
  System_Collections_Hashtable_o *v32; // x19
  int v33; // [xsp+Ch] [xbp-54h] BYREF
  int v34; // [xsp+10h] [xbp-50h] BYREF
  int v35; // [xsp+14h] [xbp-4Ch] BYREF
  float v36; // [xsp+18h] [xbp-48h] BYREF
  char v37[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_438A3D6 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    sub_B775C4(&iTween_LoopType_TypeInfo);
    sub_B775C4(&float_TypeInfo);
    sub_B775C4(&StringLiteral_23801/*"x"*/);
    sub_B775C4(&StringLiteral_18476/*"easetype"*/);
    sub_B775C4(&StringLiteral_21690/*"onMoveComplete"*/);
    sub_B775C4(&StringLiteral_23154/*"time"*/);
    sub_B775C4(&StringLiteral_21704/*"oncompletetarget"*/);
    sub_B775C4(&StringLiteral_18308/*"delay"*/);
    sub_B775C4(&StringLiteral_20741/*"looptype"*/);
    sub_B775C4(&StringLiteral_20647/*"linear"*/);
    sub_B775C4(&StringLiteral_20345/*"isLocal"*/);
    sub_B775C4(&StringLiteral_21702/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_B775C4(&iTween_TypeInfo);
    byte_438A3D6 = 1;
  }
  if ( !targetLb )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43295052(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_B77560(
    (BattleServantConfConponent_o *)&v6->fields.targetLb,
    (System_Int32_array **)targetLb,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  mText = targetLb->fields.mText;
  if ( !mText )
    goto LABEL_30;
  if ( !parent )
    goto LABEL_30;
  m_stringLength = mText->fields.m_stringLength;
  mFontSize = targetLb->fields.mFontSize;
  v6->fields.parentSize = UIPanel__GetViewSize(parent, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_30;
  v6->fields.lbStartPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_30;
  if ( COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL)) != v6->fields.lbStartPosition.fields.x )
  {
    this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
    if ( !this )
      goto LABEL_30;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v6->fields.lbStartPosition, 0LL);
  }
  v17 = (float)(mFontSize * m_stringLength);
  if ( v6->fields.parentSize.fields.x >= v17 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_30;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  v20 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v37[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v37, v22);
  if ( !table )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_20345/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v23 = v6->fields.table;
  v36 = v20 - v17;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v36, v24);
  if ( !v23 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v23->klass->vtable._23_Add.method)(
    v23,
    StringLiteral_23801/*"x"*/,
    this,
    v23->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_21702/*"oncomplete"*/,
    StringLiteral_21690/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v25 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v25 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_21704/*"oncompletetarget"*/,
    this,
    v25->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18476/*"easetype"*/,
    StringLiteral_20647/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v26 = v6->fields.table;
  v35 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v35, v27);
  if ( !v26 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v26->klass->vtable._23_Add.method)(
    v26,
    StringLiteral_23154/*"time"*/,
    this,
    v26->klass->vtable._24_Clear.methodPtr);
  v28 = v6->fields.table;
  v34 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v34, v29);
  if ( !v28
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v28->klass->vtable._23_Add.method)(
          v28,
          StringLiteral_18308/*"delay"*/,
          this,
          v28->klass->vtable._24_Clear.methodPtr),
        v30 = v6->fields.table,
        v33 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v33, v31),
        !v30) )
  {
LABEL_30:
    sub_B7769C(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_20741/*"looptype"*/,
    this,
    v30->klass->vtable._24_Clear.methodPtr);
  v32 = v6->fields.table;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43177188(v18, v32, 0LL);
}