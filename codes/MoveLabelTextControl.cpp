void MoveLabelTextControl___ctor(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  System_Collections_Hashtable_o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A393 & 1) == 0 )
  {
    sub_2213A60(&System_Collections_Hashtable_TypeInfo);
    byte_596A393 = 1;
  }
  v3 = (System_Collections_Hashtable_o *)sub_2213CCC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_76845452(v3, 0);
  this->fields.table = v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.table, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MoveLabelTextControl__onMoveComplete(MoveLabelTextControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *targetLb; // x0

  targetLb = (UnityEngine_Component_o *)this->fields.targetLb;
  if ( !targetLb || (targetLb = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(targetLb, 0)) == 0 )
    sub_2213CDC(targetLb, method);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)targetLb, this->fields.lbStartPosition, 0);
}


void MoveLabelTextControl__setMoveTextOver(
        MoveLabelTextControl_o *this,
        UIPanel_o *parent,
        UILabel_o *targetLb,
        const MethodInfo *method)
{
  MoveLabelTextControl_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_GameObject_o *gameObject; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_String_o *mText; // x8
  int32_t stringLength; // w22
  int32_t mFontSize; // w24
  float v19; // s9
  UnityEngine_GameObject_o *v20; // x20
  float v21; // kr20_4
  struct System_Collections_Hashtable_o *table; // x21
  struct System_Collections_Hashtable_o *v23; // x21
  struct System_Collections_Hashtable_o *v24; // x21
  struct System_Collections_Hashtable_o *v25; // x21
  struct System_Collections_Hashtable_o *v26; // x21
  struct System_Collections_Hashtable_o *v27; // x21
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Hashtable_o *v30; // x19
  int v31; // [xsp+4h] [xbp-5Ch] BYREF
  int v32; // [xsp+8h] [xbp-58h] BYREF
  int v33; // [xsp+Ch] [xbp-54h] BYREF
  float v34; // [xsp+28h] [xbp-38h] BYREF
  char v35[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v6 = this;
  if ( (byte_596A392 & 1) == 0 )
  {
    sub_2213A60(&iTween_LoopType_TypeInfo);
    sub_2213A60(&StringLiteral_26242/*"x"*/);
    sub_2213A60(&StringLiteral_19609/*"easetype"*/);
    sub_2213A60(&StringLiteral_23550/*"onMoveComplete"*/);
    sub_2213A60(&StringLiteral_25366/*"time"*/);
    sub_2213A60(&StringLiteral_23567/*"oncompletetarget"*/);
    sub_2213A60(&StringLiteral_19390/*"delay"*/);
    sub_2213A60(&StringLiteral_22436/*"looptype"*/);
    sub_2213A60(&StringLiteral_22325/*"linear"*/);
    sub_2213A60(&StringLiteral_21946/*"isLocal"*/);
    sub_2213A60(&StringLiteral_23565/*"oncomplete"*/);
    this = (MoveLabelTextControl_o *)sub_2213A60(&iTween_TypeInfo);
    byte_596A392 = 1;
  }
  if ( !targetLb )
    goto LABEL_28;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v7, v8);
  iTween__Stop_75402912(gameObject, 0);
  v6->fields.targetLb = targetLb;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v6->fields.targetLb, (int32_t)targetLb, v10, v11, v12, v13, v14, v15);
  mText = targetLb->fields.mText;
  if ( !mText )
    goto LABEL_28;
  if ( !parent )
    goto LABEL_28;
  stringLength = mText->fields._stringLength;
  mFontSize = targetLb->fields.mFontSize;
  v6->fields.parentSize = UIPanel__GetViewSize(parent, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  v6->fields.lbStartPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  if ( COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0)) != v6->fields.lbStartPosition.fields.x )
  {
    this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
    if ( !this )
      goto LABEL_28;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v6->fields.lbStartPosition, 0);
  }
  v19 = (float)(mFontSize * stringLength);
  if ( v6->fields.parentSize.fields.x >= v19 )
    return;
  UILabel__AssumeNaturalSize(targetLb, 0);
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)targetLb, 0);
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetLb, 0);
  if ( !this )
    goto LABEL_28;
  LODWORD(v21) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
    this,
    this->klass[1].vtable._0_Equals.methodPtr);
  table = v6->fields.table;
  v35[0] = 1;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(qword_5984328, v35);
  if ( !table )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
    table,
    StringLiteral_21946/*"isLocal"*/,
    this,
    table->klass->vtable._22_Add.method);
  v23 = v6->fields.table;
  v34 = v21 - v19;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(qword_5984378, &v34);
  if ( !v23 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, void *, MoveLabelTextControl_o *, const MethodInfo *))v23->klass->vtable._22_Add.methodPtr)(
    v23,
    StringLiteral_26242/*"x"*/,
    this,
    v23->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_23565/*"oncomplete"*/,
    StringLiteral_23550/*"onMoveComplete"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v24 = v6->fields.table;
  this = (MoveLabelTextControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v6, 0);
  if ( !v24 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v24->klass->vtable._22_Add.methodPtr)(
    v24,
    StringLiteral_23567/*"oncompletetarget"*/,
    this,
    v24->klass->vtable._22_Add.method);
  this = (MoveLabelTextControl_o *)v6->fields.table;
  if ( !this )
    goto LABEL_28;
  (*(void (__fastcall **)(MoveLabelTextControl_o *, __int64, __int64, _QWORD))&this->klass[1]._2.field_count)(
    this,
    StringLiteral_19609/*"easetype"*/,
    StringLiteral_22325/*"linear"*/,
    *(_QWORD *)&this->klass[1]._2.interfaces_count);
  v25 = v6->fields.table;
  v33 = 1092616192;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(qword_5984378, &v33);
  if ( !v25 )
    goto LABEL_28;
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v25->klass->vtable._22_Add.methodPtr)(
    v25,
    StringLiteral_25366/*"time"*/,
    this,
    v25->klass->vtable._22_Add.method);
  v26 = v6->fields.table;
  v32 = 0x40000000;
  this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(qword_5984378, &v32);
  if ( !v26
    || (((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v26->klass->vtable._22_Add.methodPtr)(
          v26,
          StringLiteral_19390/*"delay"*/,
          this,
          v26->klass->vtable._22_Add.method),
        v27 = v6->fields.table,
        v31 = 1,
        this = (MoveLabelTextControl_o *)j_il2cpp_value_box_0(iTween_LoopType_TypeInfo, &v31),
        !v27) )
  {
LABEL_28:
    sub_2213CDC(this, parent);
  }
  ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, MoveLabelTextControl_o *, const MethodInfo *))v27->klass->vtable._22_Add.methodPtr)(
    v27,
    StringLiteral_22436/*"looptype"*/,
    this,
    v27->klass->vtable._22_Add.method);
  v30 = v6->fields.table;
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v28, v29);
  iTween__MoveTo_75293528(v20, v30, 0);
}