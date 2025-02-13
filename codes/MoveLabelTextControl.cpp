void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE02E2 & 1) == 0 )
  {
    sub_1C21E38(&System_Collections_Hashtable_TypeInfo);
    byte_4BE02E2 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_1C22084(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_63695236(v3, 0LL);
  this->fields.table = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.table, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_1C22094(targetLb, method);
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
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v17; // s9
  UnityEngine_GameObject_o *v18; // x20
  unsigned int localPosition; // s0
  float v20; // s8
  struct System_Collections_Hashtable_o *table; // x21
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  struct System_Collections_Hashtable_o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct System_Collections_Hashtable_o *v29; // x21
  struct System_Collections_Hashtable_o *v30; // x21
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct System_Collections_Hashtable_o *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct System_Collections_Hashtable_o *v38; // x21
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  System_Collections_Hashtable_o *v42; // x19
  int v43; // [xsp+4h] [xbp-5Ch] BYREF
  int v44; // [xsp+8h] [xbp-58h] BYREF
  int v45; // [xsp+Ch] [xbp-54h] BYREF
  float v46; // [xsp+28h] [xbp-38h] BYREF
  char v47[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_4BE02E1 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    sub_1C21E38(&iTween_LoopType_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&StringLiteral_25185/*"x"*/);
    sub_1C21E38(&StringLiteral_19078/*"easetype"*/);
    sub_1C21E38(&StringLiteral_22667/*"onMoveComplete"*/);
    sub_1C21E38(&StringLiteral_24360/*"time"*/);
    sub_1C21E38(&StringLiteral_22682/*"oncompletetarget"*/);
    sub_1C21E38(&StringLiteral_18865/*"delay"*/);
    sub_1C21E38(&StringLiteral_21595/*"looptype"*/);
    sub_1C21E38(&StringLiteral_21497/*"linear"*/);
    sub_1C21E38(&StringLiteral_21175/*"isLocal"*/);
    sub_1C21E38(&StringLiteral_22680/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_1C21E38(&iTween_TypeInfo);
    byte_4BE02E1 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_61763404(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v6->fields.targetLb, (int64_t)targetLb, v8, v9, v10, v11, v12, v13);
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
  v17 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v17 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v20 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v47[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v47, v22, v23, v24);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_21175/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v25 = v6->fields.table;
  v46 = v20 - v17;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v46, v26, v27, v28);
  if ( !v25 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, Il2CppMethodPointer))v25->klass->vtable._23_Add.method)(
    v25,
    StringLiteral_25185/*"x"*/,
    this,
    v25->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_22680/*"oncomplete"*/,
    StringLiteral_22667/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v29 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v29 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v29->klass->vtable._23_Add.method)(
    v29,
    StringLiteral_22682/*"oncompletetarget"*/,
    this,
    v29->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_19078/*"easetype"*/,
    StringLiteral_21497/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v30 = v6->fields.table;
  v45 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v45, v31, v32, v33);
  if ( !v30 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v30->klass->vtable._23_Add.method)(
    v30,
    StringLiteral_24360/*"time"*/,
    this,
    v30->klass->vtable._24_Clear.methodPtr);
  v34 = v6->fields.table;
  v44 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v44, v35, v36, v37);
  if ( !v34
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
          v34,
          StringLiteral_18865/*"delay"*/,
          this,
          v34->klass->vtable._24_Clear.methodPtr),
        v38 = v6->fields.table,
        v43 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v43, v39, v40, v41),
        !v38) )
  {
LABEL_28:
    sub_1C22094(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
    v38,
    StringLiteral_21595/*"looptype"*/,
    this,
    v38->klass->vtable._24_Clear.methodPtr);
  v42 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_61653064(v18, v42, 0LL);
}