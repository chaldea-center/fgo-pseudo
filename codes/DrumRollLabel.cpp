void DrumRollLabel___ctor(DrumRollLabel_o *this, const MethodInfo *method)
{
  this->fields.changetime = 0.3;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void DrumRollLabel__CancelFinishCallback(
        DrumRollLabel_o *this,
        DrumRollLabel_CompleteEventHandler_o *callEventToCancel,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  if ( !callEventToCancel
    || System_Delegate__op_Equality(
         (System_Delegate_o *)this->fields.callComplete,
         (System_Delegate_o *)callEventToCancel,
         0) )
  {
    this->fields.callComplete = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callComplete, 0, (int32_t)method, v3);
  }
}


void DrumRollLabel__ChangeParamNonAnimation(
        DrumRollLabel_o *this,
        int32_t nextParam,
        bool isAllChange,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x22
  Il2CppObject *v8; // x0
  DigitRollLabel_o *v9; // x0
  System_String_o *v10; // x1
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v12; // x21
  __int64 v13; // x22
  int v14; // w23
  int max_length; // w8
  const MethodInfo *v16; // x2
  struct DigitRollLabel_array *v17; // x8
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB79F9 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_25156/*"{0,3}"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB79F9 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63714696(gameObject, 0);
  this->fields.nowvalue = nextParam;
  this->fields.nextvalue = nextParam;
  v18 = nextParam;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v9 = (DigitRollLabel_o *)System_String__Format((System_String_o *)StringLiteral_25156/*"{0,3}"*/, v8, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_16:
    sub_1C6BC60(v9, v10);
  v12 = (System_String_o *)v9;
  v13 = 0;
  v14 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( v12 )
    {
      v9 = (DigitRollLabel_o *)System_String__Substring_64012732(v12, v14 + max_length, 1, 0);
      v17 = this->fields.diglabel;
      if ( v17 )
      {
        if ( (unsigned int)v13 >= LODWORD(v17->max_length) )
          sub_1C6BC68(v9);
        v10 = (System_String_o *)v9;
        v9 = v17->m_Items[v13];
        if ( v9 )
        {
          if ( isAllChange )
            DigitRollLabel__changeText(v9, v10, v16);
          else
            DigitRollLabel__endChange(v9, v10, v16);
          diglabel = this->fields.diglabel;
          ++v13;
          --v14;
          if ( diglabel )
            continue;
        }
      }
    }
    goto LABEL_16;
  }
}


void DrumRollLabel__SetLabelColor(DrumRollLabel_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  struct DigitRollLabel_array *diglabel; // x19
  int max_length; // w8
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  unsigned int v9; // w20
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_9;
  max_length = diglabel->max_length;
  if ( max_length >= 1 )
  {
    a = color.fields.a;
    b = color.fields.b;
    g = color.fields.g;
    r = color.fields.r;
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1C6BC68(this);
      this = (DrumRollLabel_o *)diglabel->m_Items[v9];
      if ( !this )
        break;
      v10.fields.r = r;
      v10.fields.g = g;
      v10.fields.b = b;
      v10.fields.a = a;
      DigitRollLabel__ChangeColor((DigitRollLabel_o *)this, v10, method);
      max_length = diglabel->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_9:
    sub_1C6BC60(this, method);
  }
}


void DrumRollLabel__add_callComplete(
        DrumRollLabel_o *this,
        DrumRollLabel_CompleteEventHandler_o *value,
        const MethodInfo *method)
{
  struct DrumRollLabel_CompleteEventHandler_o **p_callComplete; // x20
  System_Delegate_o *v6; // x21
  struct DrumRollLabel_CompleteEventHandler_o *callComplete; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DrumRollLabel_o *v11; // x0
  DrumRollLabel_CompleteEventHandler_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CB79F4 & 1) == 0 )
  {
    sub_1C6BA08(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CB79F4 = 1;
  }
  callComplete = this->fields.callComplete;
  p_callComplete = &this->fields.callComplete;
  v6 = (System_Delegate_o *)callComplete;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DrumRollLabel_CompleteEventHandler_c *)v8->klass != DrumRollLabel_CompleteEventHandler_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  DrumRollLabel__remove_callComplete(v11, v12, v13);
}


void DrumRollLabel__changeParam(
        DrumRollLabel_o *this,
        int32_t nextparam,
        bool isRapid,
        DrumRollLabel_CompleteEventHandler_o *callevent,
        float delay,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v11; // x22
  DigitRollLabel_o *v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Object_array *v16; // x23
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  Il2CppObject *v20; // x24
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x24
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x1
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x1
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x24
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x1
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  Il2CppObject *v50; // x24
  System_Collections_Hashtable_o *v51; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x2
  struct DigitRollLabel_array *diglabel; // x8
  int v56; // w20
  __int64 v57; // x21
  int max_length; // w9
  __int64 v59; // x0
  float v60; // [xsp+0h] [xbp-60h] BYREF
  float changetime; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v62; // [xsp+8h] [xbp-58h] BYREF
  int32_t nowvalue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB79F6 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&object___TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&StringLiteral_19755/*"from"*/);
    sub_1C6BA08(&StringLiteral_24169/*"time"*/);
    sub_1C6BA08(&StringLiteral_22526/*"onupdate"*/);
    sub_1C6BA08(&StringLiteral_18582/*"delay"*/);
    sub_1C6BA08(&StringLiteral_24208/*"to"*/);
    sub_1C6BA08(&StringLiteral_18211/*"completeValues"*/);
    sub_1C6BA08(&StringLiteral_24547/*"updateValues"*/);
    sub_1C6BA08(&StringLiteral_22518/*"oncomplete"*/);
    sub_1C6BA08(&iTween_TypeInfo);
    byte_4CB79F6 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63714696(gameObject, 0);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12 = (DigitRollLabel_o *)sub_1C6BAB0(object___TypeInfo, 12);
  if ( !v12 )
LABEL_64:
    sub_1C6BC60(v12, v13);
  v16 = (System_Object_array *)v12;
  v12 = (DigitRollLabel_o *)StringLiteral_19755/*"from"*/;
  if ( StringLiteral_19755/*"from"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_19755/*"from"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v17 = StringLiteral_19755/*"from"*/;
  }
  else
  {
    v17 = 0;
  }
  if ( !LODWORD(v16->max_length) )
    goto LABEL_66;
  v16->m_Items[0] = (Il2CppObject *)v17;
  sub_1C6B9AC((CGThumbnailListItem_o *)v16->m_Items, v17, v14, v15);
  nowvalue = this->fields.nowvalue;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &nowvalue);
  v20 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_66;
  v16->m_Items[1] = v20;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[1], (int32_t)v20, v18, v19);
  v12 = (DigitRollLabel_o *)StringLiteral_24208/*"to"*/;
  if ( StringLiteral_24208/*"to"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_24208/*"to"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v23 = StringLiteral_24208/*"to"*/;
  }
  else
  {
    v23 = 0;
  }
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_66;
  v16->m_Items[2] = (Il2CppObject *)v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[2], v23, v21, v22);
  v62 = nextparam;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v62);
  v26 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v16->max_length) <= 3 )
    goto LABEL_66;
  v16->m_Items[3] = v26;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[3], (int32_t)v26, v24, v25);
  v12 = (DigitRollLabel_o *)StringLiteral_22526/*"onupdate"*/;
  if ( StringLiteral_22526/*"onupdate"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_22526/*"onupdate"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v29 = StringLiteral_22526/*"onupdate"*/;
  }
  else
  {
    v29 = 0;
  }
  if ( LODWORD(v16->max_length) <= 4 )
    goto LABEL_66;
  v16->m_Items[4] = (Il2CppObject *)v29;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[4], v29, v27, v28);
  v12 = (DigitRollLabel_o *)StringLiteral_24547/*"updateValues"*/;
  if ( StringLiteral_24547/*"updateValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_24547/*"updateValues"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v32 = StringLiteral_24547/*"updateValues"*/;
  }
  else
  {
    v32 = 0;
  }
  if ( LODWORD(v16->max_length) <= 5 )
    goto LABEL_66;
  v16->m_Items[5] = (Il2CppObject *)v32;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[5], v32, v30, v31);
  v12 = (DigitRollLabel_o *)StringLiteral_22518/*"oncomplete"*/;
  if ( StringLiteral_22518/*"oncomplete"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_22518/*"oncomplete"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v35 = StringLiteral_22518/*"oncomplete"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v16->max_length) <= 6 )
    goto LABEL_66;
  v16->m_Items[6] = (Il2CppObject *)v35;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[6], v35, v33, v34);
  v12 = (DigitRollLabel_o *)StringLiteral_18211/*"completeValues"*/;
  if ( StringLiteral_18211/*"completeValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_18211/*"completeValues"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v38 = StringLiteral_18211/*"completeValues"*/;
  }
  else
  {
    v38 = 0;
  }
  if ( LODWORD(v16->max_length) <= 7 )
    goto LABEL_66;
  v16->m_Items[7] = (Il2CppObject *)v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[7], v38, v36, v37);
  v12 = (DigitRollLabel_o *)StringLiteral_24169/*"time"*/;
  if ( StringLiteral_24169/*"time"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_24169/*"time"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v41 = StringLiteral_24169/*"time"*/;
  }
  else
  {
    v41 = 0;
  }
  if ( LODWORD(v16->max_length) <= 8 )
    goto LABEL_66;
  v16->m_Items[8] = (Il2CppObject *)v41;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[8], v41, v39, v40);
  changetime = this->fields.changetime;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &changetime);
  v44 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v16->max_length) <= 9 )
    goto LABEL_66;
  v16->m_Items[9] = v44;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[9], (int32_t)v44, v42, v43);
  v12 = (DigitRollLabel_o *)StringLiteral_18582/*"delay"*/;
  if ( StringLiteral_18582/*"delay"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(StringLiteral_18582/*"delay"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v47 = StringLiteral_18582/*"delay"*/;
  }
  else
  {
    v47 = 0;
  }
  if ( LODWORD(v16->max_length) <= 0xA )
    goto LABEL_66;
  v16->m_Items[10] = (Il2CppObject *)v47;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[10], v47, v45, v46);
  v60 = delay;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &v60);
  v50 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C6BB44(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_67:
      v59 = sub_1C6BC84(v12);
      sub_1C6BB30(v59, 0);
    }
  }
  if ( LODWORD(v16->max_length) <= 0xB )
LABEL_66:
    sub_1C6BC68(v12);
  v16->m_Items[11] = v50;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v16->m_Items[11], (int32_t)v50, v48, v49);
  v51 = iTween__Hash(v16, 0);
  iTween__ValueTo(v11, v51, 0);
  this->fields.callComplete = callevent;
  this->fields.nextvalue = nextparam;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.callComplete, (int32_t)callevent, v52, v53);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_64;
  v56 = 0;
  v57 = 0;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v57 >= max_length )
      break;
    if ( (unsigned int)v57 >= max_length )
      goto LABEL_66;
    v12 = diglabel->m_Items[v57];
    if ( v12 )
    {
      DigitRollLabel__changeSpeed(v12, v56 + max_length, v54);
      diglabel = this->fields.diglabel;
      ++v57;
      --v56;
      if ( diglabel )
        continue;
    }
    goto LABEL_64;
  }
}


void DrumRollLabel__completeValues(DrumRollLabel_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  System_String_o *v4; // x0
  __int64 v5; // x1
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v7; // x20
  __int64 v8; // x22
  int v9; // w23
  int max_length; // w9
  DigitRollLabel_o *v11; // x21
  const MethodInfo *v12; // x2
  struct DrumRollLabel_CompleteEventHandler_o *callComplete; // x8
  int32_t nextvalue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB79F8 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_25156/*"{0,3}"*/);
    byte_4CB79F8 = 1;
  }
  nextvalue = this->fields.nextvalue;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nextvalue);
  v4 = System_String__Format((System_String_o *)StringLiteral_25156/*"{0,3}"*/, v3, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_10:
    sub_1C6BC60(v4, v5);
  v7 = v4;
  v8 = 0;
  v9 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C6BC68(v4);
    if ( v7 )
    {
      v11 = diglabel->m_Items[v8];
      v4 = System_String__Substring_64012732(v7, v9 + max_length, 1, 0);
      if ( v11 )
      {
        DigitRollLabel__endChange(v11, v4, v12);
        diglabel = this->fields.diglabel;
        ++v8;
        --v9;
        if ( diglabel )
          continue;
      }
    }
    goto LABEL_10;
  }
  callComplete = this->fields.callComplete;
  this->fields.nowvalue = this->fields.nextvalue;
  if ( callComplete )
    ((void (__fastcall *)(intptr_t, intptr_t))callComplete->fields.invoke_impl)(
      callComplete->fields.method_code,
      callComplete->fields.method);
}


int32_t DrumRollLabel__getCount(DrumRollLabel_o *this, const MethodInfo *method)
{
  return this->fields.nowvalue;
}


int32_t DrumRollLabel__getFinalCount(DrumRollLabel_o *this, const MethodInfo *method)
{
  return this->fields.nextvalue;
}


void DrumRollLabel__remove_callComplete(
        DrumRollLabel_o *this,
        DrumRollLabel_CompleteEventHandler_o *value,
        const MethodInfo *method)
{
  struct DrumRollLabel_CompleteEventHandler_o **p_callComplete; // x20
  System_Delegate_o *v6; // x21
  struct DrumRollLabel_CompleteEventHandler_o *callComplete; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DrumRollLabel_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4CB79F5 & 1) == 0 )
  {
    sub_1C6BA08(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CB79F5 = 1;
  }
  callComplete = this->fields.callComplete;
  p_callComplete = &this->fields.callComplete;
  v6 = (System_Delegate_o *)callComplete;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DrumRollLabel_CompleteEventHandler_c *)v8->klass != DrumRollLabel_CompleteEventHandler_TypeInfo )
        break;
    }
    v9 = sub_1CC77DC(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C6BFFC(v8);
  DrumRollLabel__setParam(v11, v12, v13);
}


void DrumRollLabel__setParam(DrumRollLabel_o *this, int32_t param, const MethodInfo *method)
{
  this->fields.nowvalue = param;
  this->fields.nextvalue = param;
}


// local variable allocation has failed, the output may be wrong!
void DrumRollLabel__updateValues(DrumRollLabel_o *this, int32_t value, const MethodInfo *method)
{
  int32_t v3; // w21
  DrumRollLabel_o *v4; // x19
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v6; // x0
  System_String_o *v7; // x20
  Il2CppObject *v8; // x0
  struct DigitRollLabel_array *v9; // x8
  DrumRollLabel_o *v10; // x20
  __int64 v11; // x21
  int v12; // w22
  int v13; // w8
  const MethodInfo *v14; // x2
  struct DigitRollLabel_array *v15; // x8
  int32_t v16; // [xsp+8h] [xbp-38h] BYREF
  int max_length; // [xsp+Ch] [xbp-34h] BYREF

  v3 = value;
  v4 = this;
  if ( (byte_4CB79F7 & 1) == 0 )
  {
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&StringLiteral_25368/*"}"*/);
    this = (DrumRollLabel_o *)sub_1C6BA08(&StringLiteral_25153/*"{0,"*/);
    byte_4CB79F7 = 1;
  }
  diglabel = v4->fields.diglabel;
  if ( !diglabel )
    goto LABEL_12;
  max_length = diglabel->max_length;
  v6 = System_Int32__ToString((int32_t)&max_length, 0);
  v7 = System_String__Concat_64005056(
         (System_String_o *)StringLiteral_25153/*"{0,"*/,
         v6,
         (System_String_o *)StringLiteral_25368/*"}"*/,
         0);
  v16 = v3;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  this = (DrumRollLabel_o *)System_String__Format(v7, v8, 0);
  v9 = v4->fields.diglabel;
  v4->fields.nowvalue = v3;
  if ( !v9 )
LABEL_12:
    sub_1C6BC60(this, *(_QWORD *)&value);
  v10 = this;
  v11 = 0;
  v12 = -1;
  while ( 1 )
  {
    v13 = v9->max_length;
    if ( (int)v11 >= v13 )
      break;
    if ( v10 )
    {
      this = (DrumRollLabel_o *)System_String__Substring_64012732((System_String_o *)v10, v12 + v13, 1, 0);
      v15 = v4->fields.diglabel;
      if ( v15 )
      {
        if ( (unsigned int)v11 >= LODWORD(v15->max_length) )
          sub_1C6BC68(this);
        *(_QWORD *)&value = this;
        this = (DrumRollLabel_o *)v15->m_Items[v11];
        if ( this )
        {
          DigitRollLabel__startChange((DigitRollLabel_o *)this, *(System_String_o **)&value, v14);
          v9 = v4->fields.diglabel;
          ++v11;
          --v12;
          if ( v9 )
            continue;
        }
      }
    }
    goto LABEL_12;
  }
}


void DrumRollLabel_CompleteEventHandler___ctor(
        DrumRollLabel_CompleteEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AA2BE4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA2BA4;
}


System_IAsyncResult_o *DrumRollLabel_CompleteEventHandler__BeginInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void DrumRollLabel_CompleteEventHandler__EndInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void DrumRollLabel_CompleteEventHandler__Invoke(DrumRollLabel_CompleteEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}