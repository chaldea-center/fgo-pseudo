void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  System_Collections_Hashtable_o *v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19E96 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Collections_Hashtable_TypeInfo, method, v2);
    byte_4B19E96 = 1;
  }
  v5 = (System_Collections_Hashtable_o *)sub_1BCAA2C(System_Collections_Hashtable_TypeInfo, method, v2, v3);
  System_Collections_Hashtable___ctor_62980980(v5, 0LL);
  this->fields.table = v5;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v5, v6, v7, v8, v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_1BCAA3C(targetLb, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v44; // s9
  UnityEngine_GameObject_o *v45; // x20
  unsigned int localPosition; // s0
  float v47; // s8
  struct System_Collections_Hashtable_o *table; // x21
  struct System_Collections_Hashtable_o *v49; // x21
  struct System_Collections_Hashtable_o *v50; // x21
  struct System_Collections_Hashtable_o *v51; // x21
  struct System_Collections_Hashtable_o *v52; // x21
  struct System_Collections_Hashtable_o *v53; // x21
  __int64 v54; // x1
  System_Collections_Hashtable_o *v55; // x19
  int v56; // [xsp+4h] [xbp-5Ch] BYREF
  int v57; // [xsp+8h] [xbp-58h] BYREF
  int v58; // [xsp+Ch] [xbp-54h] BYREF
  float v59; // [xsp+28h] [xbp-38h] BYREF
  char v60[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4B19E95 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, parent, targetLb);
    sub_1BCA7E0(&iTween_LoopType_TypeInfo, v7, v8);
    sub_1BCA7E0(&float_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_24997/*"x"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_18949/*"easetype"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22500/*"onMoveComplete"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24178/*"time"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_22515/*"oncompletetarget"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_18739/*"delay"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_21443/*"looptype"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21345/*"linear"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_21024/*"isLocal"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22513/*"oncomplete"*/, v29, v30);
    this = (MoveLabelTextControl_o *)sub_1BCA7E0(&iTween_TypeInfo, v31, v32);
    byte_4B19E95 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v33);
  iTween__Stop_61049892(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.targetLb, (int64_t)targetLb, v35, v36, v37, v38, v39, v40);
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
  v44 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v44 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v47 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v60[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v60);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_21024/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v49 = v6->fields.table;
  v59 = v47 - v44;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v59);
  if ( !v49 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, Il2CppMethodPointer))v49->klass->vtable._23_Add.method)(
    v49,
    StringLiteral_24997/*"x"*/,
    this,
    v49->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_22513/*"oncomplete"*/,
    StringLiteral_22500/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v50 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v50 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v50->klass->vtable._23_Add.method)(
    v50,
    StringLiteral_22515/*"oncompletetarget"*/,
    this,
    v50->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18949/*"easetype"*/,
    StringLiteral_21345/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v51 = v6->fields.table;
  v58 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v58);
  if ( !v51 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v51->klass->vtable._23_Add.method)(
    v51,
    StringLiteral_24178/*"time"*/,
    this,
    v51->klass->vtable._24_Clear.methodPtr);
  v52 = v6->fields.table;
  v57 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v57);
  if ( !v52
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v52->klass->vtable._23_Add.method)(
          v52,
          StringLiteral_18739/*"delay"*/,
          this,
          v52->klass->vtable._24_Clear.methodPtr),
        v53 = v6->fields.table,
        v56 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v56),
        !v53) )
  {
LABEL_28:
    sub_1BCAA3C(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v53->klass->vtable._23_Add.method)(
    v53,
    StringLiteral_21443/*"looptype"*/,
    this,
    v53->klass->vtable._24_Clear.methodPtr);
  v55 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v54);
  iTween__MoveTo_60939552(v45, v55, 0LL);
}