void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Hashtable_o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42E745C & 1) == 0 )
  {
    sub_B5D5C4(&System_Collections_Hashtable_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E745C = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_B5D694(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_39706016(v5, 0LL);
  this->fields.table = v5;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.table, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_B5D69C(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0LL);
}


void __fastcall MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  UnityEngine_GameObject_o *gameObject; // x22
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  struct System_String_o *mText; // x8
  int32_t m_stringLength; // w22
  int32_t mFontSize; // w24
  float v56; // s9
  UnityEngine_GameObject_o *v57; // x20
  unsigned int localPosition; // s0
  float v59; // s8
  struct System_Collections_Hashtable_o *table; // x21
  struct System_Collections_Hashtable_o *v61; // x21
  struct System_Collections_Hashtable_o *v62; // x21
  struct System_Collections_Hashtable_o *v63; // x21
  struct System_Collections_Hashtable_o *v64; // x21
  struct System_Collections_Hashtable_o *v65; // x21
  System_Collections_Hashtable_o *v66; // x19
  int v67; // [xsp+Ch] [xbp-54h] BYREF
  int v68; // [xsp+10h] [xbp-50h] BYREF
  int v69; // [xsp+14h] [xbp-4Ch] BYREF
  float v70; // [xsp+18h] [xbp-48h] BYREF
  char v71[4]; // [xsp+1Ch] [xbp-44h] BYREF

  v6 = this;
  if ( (byte_42E745B & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, (_DWORD)parent, (_DWORD)targetLb, method);
    sub_B5D5C4(&iTween_LoopType_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&float_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23627/*"x"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_18341/*"easetype"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_21530/*"onMoveComplete"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_22982/*"time"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_21544/*"oncompletetarget"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_18173/*"delay"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_20585/*"looptype"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_20492/*"linear"*/, v34, v35, v36);
    sub_B5D5C4(&StringLiteral_20191/*"isLocal"*/, v37, v38, v39);
    sub_B5D5C4(&StringLiteral_21542/*"oncomplete"*/, v40, v41, v42);
    this = (MoveLabelTextControl_o *)sub_B5D5C4(&iTween_TypeInfo, v43, v44, v45);
    byte_42E745B = 1;
  }
  if ( !targetLb )
    goto LABEL_30;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_43300928(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v6->fields.targetLb,
    (System_Int32_array **)targetLb,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
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
  v56 = (float)(mFontSize * m_stringLength);
  if ( v6->fields.parentSize.fields.x >= v56 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_30;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  v59 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v71[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v71);
  if ( !table )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_20191/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v61 = v6->fields.table;
  v70 = v59 - v56;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v70);
  if ( !v61 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v61->klass->vtable._23_Add.method)(
    v61,
    StringLiteral_23627/*"x"*/,
    this,
    v61->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_21542/*"oncomplete"*/,
    StringLiteral_21530/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v62 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v62 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v62->klass->vtable._23_Add.method)(
    v62,
    StringLiteral_21544/*"oncompletetarget"*/,
    this,
    v62->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_30;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18341/*"easetype"*/,
    StringLiteral_20492/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v63 = v6->fields.table;
  v69 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v69);
  if ( !v63 )
    goto LABEL_30;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v63->klass->vtable._23_Add.method)(
    v63,
    StringLiteral_22982/*"time"*/,
    this,
    v63->klass->vtable._24_Clear.methodPtr);
  v64 = v6->fields.table;
  v68 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v68);
  if ( !v64
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v64->klass->vtable._23_Add.method)(
          v64,
          StringLiteral_18173/*"delay"*/,
          this,
          v64->klass->vtable._24_Clear.methodPtr),
        v65 = v6->fields.table,
        v67 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v67),
        !v65) )
  {
LABEL_30:
    sub_B5D69C(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v65->klass->vtable._23_Add.method)(
    v65,
    StringLiteral_20585/*"looptype"*/,
    this,
    v65->klass->vtable._24_Clear.methodPtr);
  v66 = v6->fields.table;
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_43183064(v57, v66, 0LL);
}