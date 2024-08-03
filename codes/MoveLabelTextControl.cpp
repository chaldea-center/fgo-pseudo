void __fastcall MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  System_Collections_Hashtable_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FFE87 & 1) == 0 )
  {
    sub_1B640C8(&System_Collections_Hashtable_TypeInfo, method);
    byte_49FFE87 = 1;
  }
  v4 = (System_Collections_Hashtable_o *)sub_1B64314(System_Collections_Hashtable_TypeInfo, method, v2);
  System_Collections_Hashtable___ctor_61954820(v4, 0LL);
  this->fields.table = v4;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.table, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0LL)) == 0LL )
    sub_1B64324(targetLb);
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
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v26; // s9
  UnityEngine_GameObject_o *v27; // x20
  unsigned int localPosition; // s0
  float v29; // s8
  struct System_Collections_Hashtable_o *table; // x21
  struct System_Collections_Hashtable_o *v31; // x21
  struct System_Collections_Hashtable_o *v32; // x21
  struct System_Collections_Hashtable_o *v33; // x21
  struct System_Collections_Hashtable_o *v34; // x21
  struct System_Collections_Hashtable_o *v35; // x21
  System_Collections_Hashtable_o *v36; // x19
  int v37; // [xsp+4h] [xbp-5Ch] BYREF
  int v38; // [xsp+8h] [xbp-58h] BYREF
  int v39; // [xsp+Ch] [xbp-54h] BYREF
  float v40; // [xsp+28h] [xbp-38h] BYREF
  char v41[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_49FFE86 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, parent);
    sub_1B640C8(&iTween_LoopType_TypeInfo, v7);
    sub_1B640C8(&float_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_24644/*"x"*/, v9);
    sub_1B640C8(&StringLiteral_18682/*"easetype"*/, v10);
    sub_1B640C8(&StringLiteral_22172/*"onMoveComplete"*/, v11);
    sub_1B640C8(&StringLiteral_23830/*"time"*/, v12);
    sub_1B640C8(&StringLiteral_22187/*"oncompletetarget"*/, v13);
    sub_1B640C8(&StringLiteral_18479/*"delay"*/, v14);
    sub_1B640C8(&StringLiteral_21135/*"looptype"*/, v15);
    sub_1B640C8(&StringLiteral_21037/*"linear"*/, v16);
    sub_1B640C8(&StringLiteral_20716/*"isLocal"*/, v17);
    sub_1B640C8(&StringLiteral_22185/*"oncomplete"*/, v18);
    this = (MoveLabelTextControl_o *)sub_1B640C8(&iTween_TypeInfo, v19);
    byte_49FFE86 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_60023324(gameObject, 0LL);
  v6->fields.targetLb = targetLb;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.targetLb, (int32_t)targetLb, v21, v22);
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
  v26 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v26 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0LL);
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0LL);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0LL);
  if ( !this )
    goto LABEL_28;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  v29 = *(float *)&localPosition;
  ((void (__fastcall *)(MoveLabelTextControl_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
    this,
    this->klass[1].vtable._2_GetHashCode.methodPtr);
  table = v6->fields.table;
  v41[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(bool_TypeInfo, v41);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
    table,
    StringLiteral_20716/*"isLocal"*/,
    this,
    table->klass->vtable._24_Clear.methodPtr);
  v31 = v6->fields.table;
  v40 = v29 - v26;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v40);
  if ( !v31 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, Il2CppMethodPointer))v31->klass->vtable._23_Add.method)(
    v31,
    StringLiteral_24644/*"x"*/,
    this,
    v31->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_22185/*"oncomplete"*/,
    StringLiteral_22172/*"onMoveComplete"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v32 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0LL);
  if ( !v32 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v32->klass->vtable._23_Add.method)(
    v32,
    StringLiteral_22187/*"oncompletetarget"*/,
    this,
    v32->klass->vtable._24_Clear.methodPtr);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  ((void (__fastcall *)(MoveLabelTextControl_o *, __int64, __int64, Il2CppMethodPointer))this->klass[1].vtable._0_Equals.method)(
    this,
    StringLiteral_18682/*"easetype"*/,
    StringLiteral_21037/*"linear"*/,
    this->klass[1].vtable._1_Finalize.methodPtr);
  v33 = v6->fields.table;
  v39 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v39);
  if ( !v33 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v33->klass->vtable._23_Add.method)(
    v33,
    StringLiteral_23830/*"time"*/,
    this,
    v33->klass->vtable._24_Clear.methodPtr);
  v34 = v6->fields.table;
  v38 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(float_TypeInfo, &v38);
  if ( !v34
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
          v34,
          StringLiteral_18479/*"delay"*/,
          this,
          v34->klass->vtable._24_Clear.methodPtr),
        v35 = v6->fields.table,
        v37 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v37),
        !v35) )
  {
LABEL_28:
    sub_1B64324(this);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, Il2CppMethodPointer))v35->klass->vtable._23_Add.method)(
    v35,
    StringLiteral_21135/*"looptype"*/,
    this,
    v35->klass->vtable._24_Clear.methodPtr);
  v36 = v6->fields.table;
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__MoveTo_59912984(v27, v36, 0LL);
}