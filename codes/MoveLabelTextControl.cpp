void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_4187389 & 1) == 0 )
  {
    sub_B2C35C(&System_Collections_Hashtable_TypeInfo, method);
    byte_4187389 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_B2C42C(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_38345656(v3, 0LL);
  this->fields.table = v3;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_B2C434(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0LL);
}


void __fastcall MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
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
  float v30; // s9
  UnityEngine_GameObject_o *v31; // x20
  unsigned int localPosition; // s0
  float v33; // s8
  struct System_Collections_Hashtable_o *table; // x21
  struct System_Collections_Hashtable_o *v35; // x21
  struct System_Collections_Hashtable_o *v36; // x21
  struct System_Collections_Hashtable_o *v37; // x21
  struct System_Collections_Hashtable_o *v38; // x21
  struct System_Collections_Hashtable_o *v39; // x21
  System_Collections_Hashtable_o *v40; // x19
  int v41; // [xsp+Ch] [xbp-54h] BYREF
  int v42; // [xsp+10h] [xbp-50h] BYREF
  int v43; // [xsp+14h] [xbp-4Ch] BYREF
  float v44; // [xsp+18h] [xbp-48h] BYREF
  char v45[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_4187388 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, parent);
    sub_B2C35C(&iTween_LoopType_TypeInfo, v7);
    sub_B2C35C(&float_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_23316/*"x"*/, v9);
    sub_B2C35C(&StringLiteral_18114/*"easetype"*/, v10);
    sub_B2C35C(&StringLiteral_21251/*"onMoveComplete"*/, v11);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v12);
    sub_B2C35C(&StringLiteral_21265/*"oncompletetarget"*/, v13);
    sub_B2C35C(&StringLiteral_17949/*"delay"*/, v14);
    sub_B2C35C(&StringLiteral_20326/*"looptype"*/, v15);
    sub_B2C35C(&StringLiteral_20235/*"linear"*/, v16);
    sub_B2C35C(&StringLiteral_19938/*"isLocal"*/, v17);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v18);
    this = (MoveLabelTextControl_o *)sub_B2C35C(&iTween_TypeInfo, v19);
    byte_4187388 = 1;
  }
  if ( !targetLb )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_42850528(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v6->fields.targetLb,
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
  v30 = (float)(mFontSize * m_stringLength);
  if ( v6->fields.parentSize.fields.x >= v30 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_30;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  v33 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v45[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v45);
  if ( !table )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_19938/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v35 = v6->fields.table;
  v44 = v33 - v30;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v44);
  if ( !v35 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v35->klass->vtable._23_Add.method)(
    v35,
    StringLiteral_23316/*"x"*/,
    this,
    v35->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_21263/*"oncomplete"*/,
    StringLiteral_21251/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v36 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v36 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v36->klass->vtable._23_Add.method)(
    v36,
    StringLiteral_21265/*"oncompletetarget"*/,
    this,
    v36->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18114/*"easetype"*/,
    StringLiteral_20235/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v37 = v6->fields.table;
  v43 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v43);
  if ( !v37 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v37->klass->vtable._23_Add.method)(
    v37,
    StringLiteral_22677/*"time"*/,
    this,
    v37->klass->vtable._24_Clear.methodPtr);
  v38 = v6->fields.table;
  v42 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v42);
  if ( !v38
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
          v38,
          StringLiteral_17949/*"delay"*/,
          this,
          v38->klass->vtable._24_Clear.methodPtr),
        v39 = v6->fields.table,
        v41 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v41),
        !v39) )
  {
LABEL_30:
    sub_B2C434(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v39->klass->vtable._23_Add.method)(
    v39,
    StringLiteral_20326/*"looptype"*/,
    this,
    v39->klass->vtable._24_Clear.methodPtr);
  v40 = v6->fields.table;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_42732664(v31, v40, 0LL);
}