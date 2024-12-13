void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4B3AE86 & 1) == 0 )
  {
    sub_1BD3458(&System_Collections_Hashtable_TypeInfo, method);
    byte_4B3AE86 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1BD36A4(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63105008(v3, 0LL);
  this->fields.table = v3;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_1BD36B4(targetLb, method);
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v30; // s9
  UnityEngine_GameObject_o *v31; // x20
  unsigned int localPosition; // s0
  float v33; // s8
  struct System_Collections_Hashtable_o *table; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct System_Collections_Hashtable_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Collections_Hashtable_o *v42; // x21
  struct System_Collections_Hashtable_o *v43; // x21
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  struct System_Collections_Hashtable_o *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  struct System_Collections_Hashtable_o *v51; // x21
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Collections_Hashtable_o *v55; // x19
  int v56; // [xsp+4h] [xbp-5Ch] BYREF
  int v57; // [xsp+8h] [xbp-58h] BYREF
  int v58; // [xsp+Ch] [xbp-54h] BYREF
  float v59; // [xsp+28h] [xbp-38h] BYREF
  char v60[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4B3AE85 & 1) == 0 )
  {
    sub_1BD3458(&bool_TypeInfo, parent);
    sub_1BD3458(&iTween_LoopType_TypeInfo, v7);
    sub_1BD3458(&float_TypeInfo, v8);
    sub_1BD3458(&StringLiteral_25032/*"x"*/, v9);
    sub_1BD3458(&StringLiteral_18978/*"easetype"*/, v10);
    sub_1BD3458(&StringLiteral_22533/*"onMoveComplete"*/, v11);
    sub_1BD3458(&StringLiteral_24213/*"time"*/, v12);
    sub_1BD3458(&StringLiteral_22548/*"oncompletetarget"*/, v13);
    sub_1BD3458(&StringLiteral_18767/*"delay"*/, v14);
    sub_1BD3458(&StringLiteral_21474/*"looptype"*/, v15);
    sub_1BD3458(&StringLiteral_21376/*"linear"*/, v16);
    sub_1BD3458(&StringLiteral_21055/*"isLocal"*/, v17);
    sub_1BD3458(&StringLiteral_22546/*"oncomplete"*/, v18);
    this = (MoveLabelTextControl_o *)sub_1BD3458(&iTween_TypeInfo, v19);
    byte_4B3AE85 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61173920(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v6->fields.targetLb, (int64_t)targetLb, v21, v22, v23, v24, v25, v26);
  mText = targetLb->fields.mText;
  if ( !mText )
    goto LABEL_28;
  if ( !parent )
    goto LABEL_28;
  stringLength = mText->fields._stringLength;
  mFontSize = targetLb->fields.mFontSize;
  v6->fields.parentSize = UIPanel__GetViewSize(parent, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  v6->fields.lbStartPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  if ( COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL)) != v6->fields.lbStartPosition.fields.x )
  {
    this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
    if ( !this )
      goto LABEL_28;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v6->fields.lbStartPosition, 0LL);
  }
  v30 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v30 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v33 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v60[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v60, v35, v36, v37);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_21055/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v38 = v6->fields.table;
  v59 = v33 - v30;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v59, v39, v40, v41);
  if ( !v38 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
    v38,
    StringLiteral_25032/*"x"*/,
    this,
    v38->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_22546/*"oncomplete"*/,
    StringLiteral_22533/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v42 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v42 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
    v42,
    StringLiteral_22548/*"oncompletetarget"*/,
    this,
    v42->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18978/*"easetype"*/,
    StringLiteral_21376/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v43 = v6->fields.table;
  v58 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v58, v44, v45, v46);
  if ( !v43 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v43->klass->vtable._23_Add.method)(
    v43,
    StringLiteral_24213/*"time"*/,
    this,
    v43->klass->vtable._24_Clear.methodPtr);
  v47 = v6->fields.table;
  v57 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v57, v48, v49, v50);
  if ( !v47
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v47->klass->vtable._23_Add.method)(
          v47,
          StringLiteral_18767/*"delay"*/,
          this,
          v47->klass->vtable._24_Clear.methodPtr),
        v51 = v6->fields.table,
        v56 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v56, v52, v53, v54),
        !v51) )
  {
LABEL_28:
    sub_1BD36B4(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v51->klass->vtable._23_Add.method)(
    v51,
    StringLiteral_21474/*"looptype"*/,
    this,
    v51->klass->vtable._24_Clear.methodPtr);
  v55 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61063580(v31, v55, 0LL);
}