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
    sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callComplete, 0, (int32_t)method, v3);
  }
}


void DrumRollLabel__ChangeParamNonAnimation(
        DrumRollLabel_o *this,
        int32_t nextParam,
        bool isAllChange,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x22
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  DigitRollLabel_o *v15; // x0
  System_String_o *v16; // x1
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v18; // x21
  __int64 v19; // x22
  int v20; // w23
  int max_length; // w8
  const MethodInfo *v22; // x2
  struct DigitRollLabel_array *v23; // x8
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C58489 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25066/*"{0,3}"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C58489 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63384372(gameObject, 0);
  this->fields.nowvalue = nextParam;
  this->fields.nextvalue = nextParam;
  v24 = nextParam;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v8, v9, v10, v11, v12, v13);
  v15 = (DigitRollLabel_o *)System_String__Format((System_String_o *)StringLiteral_25066/*"{0,3}"*/, v14, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_16:
    sub_1C3E7C0(v15, v16);
  v18 = (System_String_o *)v15;
  v19 = 0;
  v20 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v19 >= max_length )
      break;
    if ( v18 )
    {
      v15 = (DigitRollLabel_o *)System_String__Substring_63682392(v18, v20 + max_length, 1, 0);
      v23 = this->fields.diglabel;
      if ( v23 )
      {
        if ( (unsigned int)v19 >= LODWORD(v23->max_length) )
          sub_1C3E7C8(v15, v16);
        v16 = (System_String_o *)v15;
        v15 = v23->m_Items[v19];
        if ( v15 )
        {
          if ( isAllChange )
            DigitRollLabel__changeText(v15, v16, v22);
          else
            DigitRollLabel__endChange(v15, v16, v22);
          diglabel = this->fields.diglabel;
          ++v19;
          --v20;
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
        sub_1C3E7C8(this, method);
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
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C58484 & 1) == 0 )
  {
    sub_1C3E564(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4C58484 = 1;
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
    v9 = sub_1C787BC(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
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
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *v25; // x24
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  Il2CppObject *v36; // x24
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  __int64 v47; // x2
  __int64 v48; // x3
  __int64 v49; // x4
  __int64 v50; // x5
  __int64 v51; // x6
  __int64 v52; // x7
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  Il2CppObject *v55; // x24
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  Il2CppObject *v66; // x24
  System_Collections_Hashtable_o *v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  const MethodInfo *v70; // x2
  struct DigitRollLabel_array *diglabel; // x8
  int v72; // w20
  __int64 v73; // x21
  int max_length; // w9
  __int64 v75; // x0
  float v76; // [xsp+0h] [xbp-60h] BYREF
  float changetime; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v78; // [xsp+8h] [xbp-58h] BYREF
  int32_t nowvalue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C58486 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&object___TypeInfo);
    sub_1C3E564(&float_TypeInfo);
    sub_1C3E564(&StringLiteral_19710/*"from"*/);
    sub_1C3E564(&StringLiteral_24091/*"time"*/);
    sub_1C3E564(&StringLiteral_22456/*"onupdate"*/);
    sub_1C3E564(&StringLiteral_18572/*"delay"*/);
    sub_1C3E564(&StringLiteral_24130/*"to"*/);
    sub_1C3E564(&StringLiteral_18205/*"completeValues"*/);
    sub_1C3E564(&StringLiteral_24464/*"updateValues"*/);
    sub_1C3E564(&StringLiteral_22448/*"oncomplete"*/);
    sub_1C3E564(&iTween_TypeInfo);
    byte_4C58486 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63384372(gameObject, 0);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12 = (DigitRollLabel_o *)sub_1C3E60C(object___TypeInfo, 12);
  if ( !v12 )
LABEL_64:
    sub_1C3E7C0(v12, v13);
  v16 = (System_Object_array *)v12;
  v12 = (DigitRollLabel_o *)StringLiteral_19710/*"from"*/;
  if ( StringLiteral_19710/*"from"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_19710/*"from"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_19710/*"from"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( !LODWORD(v16->max_length) )
    goto LABEL_66;
  v16->m_Items[0] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)v16->m_Items, v13, v14, v15);
  nowvalue = this->fields.nowvalue;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &nowvalue, v17, v18, v19, v20, v21, v22);
  v25 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v16->max_length) <= 1 )
    goto LABEL_66;
  v16->m_Items[1] = v25;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[1], (int32_t)v25, v23, v24);
  v12 = (DigitRollLabel_o *)StringLiteral_24130/*"to"*/;
  if ( StringLiteral_24130/*"to"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_24130/*"to"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_24130/*"to"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 2 )
    goto LABEL_66;
  v16->m_Items[2] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[2], v13, v26, v27);
  v78 = nextparam;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v28, v29, v30, v31, v32, v33);
  v36 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v16->max_length) <= 3 )
    goto LABEL_66;
  v16->m_Items[3] = v36;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[3], (int32_t)v36, v34, v35);
  v12 = (DigitRollLabel_o *)StringLiteral_22456/*"onupdate"*/;
  if ( StringLiteral_22456/*"onupdate"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_22456/*"onupdate"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_22456/*"onupdate"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 4 )
    goto LABEL_66;
  v16->m_Items[4] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[4], v13, v37, v38);
  v12 = (DigitRollLabel_o *)StringLiteral_24464/*"updateValues"*/;
  if ( StringLiteral_24464/*"updateValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_24464/*"updateValues"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_24464/*"updateValues"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 5 )
    goto LABEL_66;
  v16->m_Items[5] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[5], v13, v39, v40);
  v12 = (DigitRollLabel_o *)StringLiteral_22448/*"oncomplete"*/;
  if ( StringLiteral_22448/*"oncomplete"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_22448/*"oncomplete"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_22448/*"oncomplete"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 6 )
    goto LABEL_66;
  v16->m_Items[6] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[6], v13, v41, v42);
  v12 = (DigitRollLabel_o *)StringLiteral_18205/*"completeValues"*/;
  if ( StringLiteral_18205/*"completeValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_18205/*"completeValues"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_18205/*"completeValues"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 7 )
    goto LABEL_66;
  v16->m_Items[7] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[7], v13, v43, v44);
  v12 = (DigitRollLabel_o *)StringLiteral_24091/*"time"*/;
  if ( StringLiteral_24091/*"time"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_24091/*"time"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_24091/*"time"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 8 )
    goto LABEL_66;
  v16->m_Items[8] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[8], v13, v45, v46);
  changetime = this->fields.changetime;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &changetime, v47, v48, v49, v50, v51, v52);
  v55 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v16->max_length) <= 9 )
    goto LABEL_66;
  v16->m_Items[9] = v55;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[9], (int32_t)v55, v53, v54);
  v12 = (DigitRollLabel_o *)StringLiteral_18572/*"delay"*/;
  if ( StringLiteral_18572/*"delay"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(StringLiteral_18572/*"delay"*/, v16->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v13 = StringLiteral_18572/*"delay"*/;
  }
  else
  {
    v13 = 0;
  }
  if ( LODWORD(v16->max_length) <= 0xA )
    goto LABEL_66;
  v16->m_Items[10] = (Il2CppObject *)v13;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[10], v13, v56, v57);
  v76 = delay;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &v76, v58, v59, v60, v61, v62, v63);
  v66 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C3E6A0(v12, v16->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_67:
      v75 = sub_1C3E7E4(v12);
      sub_1C3E68C(v75, 0);
    }
  }
  if ( LODWORD(v16->max_length) <= 0xB )
LABEL_66:
    sub_1C3E7C8(v12, v13);
  v16->m_Items[11] = v66;
  sub_1C3E508((CGThumbnailListItem_o *)&v16->m_Items[11], (int32_t)v66, v64, v65);
  v67 = iTween__Hash(v16, 0);
  iTween__ValueTo(v11, v67, 0);
  this->fields.callComplete = callevent;
  this->fields.nextvalue = nextparam;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callComplete, (int32_t)callevent, v68, v69);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_64;
  v72 = 0;
  v73 = 0;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v73 >= max_length )
      break;
    if ( (unsigned int)v73 >= max_length )
      goto LABEL_66;
    v12 = diglabel->m_Items[v73];
    if ( v12 )
    {
      DigitRollLabel__changeSpeed(v12, v72 + max_length, v70);
      diglabel = this->fields.diglabel;
      ++v73;
      --v72;
      if ( diglabel )
        continue;
    }
    goto LABEL_64;
  }
}


void DrumRollLabel__completeValues(DrumRollLabel_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v13; // x20
  __int64 v14; // x22
  int v15; // w23
  int max_length; // w9
  DigitRollLabel_o *v17; // x21
  const MethodInfo *v18; // x2
  struct DrumRollLabel_CompleteEventHandler_o *callComplete; // x8
  int32_t nextvalue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C58488 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25066/*"{0,3}"*/);
    byte_4C58488 = 1;
  }
  nextvalue = this->fields.nextvalue;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nextvalue, v2, v3, v4, v5, v6, v7);
  v10 = System_String__Format((System_String_o *)StringLiteral_25066/*"{0,3}"*/, v9, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_10:
    sub_1C3E7C0(v10, v11);
  v13 = v10;
  v14 = 0;
  v15 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v14 >= max_length )
      break;
    if ( (unsigned int)v14 >= max_length )
      sub_1C3E7C8(v10, v11);
    if ( v13 )
    {
      v17 = diglabel->m_Items[v14];
      v10 = System_String__Substring_63682392(v13, v15 + max_length, 1, 0);
      if ( v17 )
      {
        DigitRollLabel__endChange(v17, v10, v18);
        diglabel = this->fields.diglabel;
        ++v14;
        --v15;
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

  if ( (byte_4C58485 & 1) == 0 )
  {
    sub_1C3E564(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4C58485 = 1;
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
    v9 = sub_1C787BC(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3EA80(v8);
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
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7
  Il2CppObject *v14; // x0
  struct DigitRollLabel_array *v15; // x8
  DrumRollLabel_o *v16; // x20
  __int64 v17; // x21
  int v18; // w22
  int v19; // w8
  const MethodInfo *v20; // x2
  struct DigitRollLabel_array *v21; // x8
  int32_t v22; // [xsp+8h] [xbp-38h] BYREF
  int max_length; // [xsp+Ch] [xbp-34h] BYREF

  v3 = value;
  v4 = this;
  if ( (byte_4C58487 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&StringLiteral_25278/*"}"*/);
    this = (DrumRollLabel_o *)sub_1C3E564(&StringLiteral_25063/*"{0,"*/);
    byte_4C58487 = 1;
  }
  diglabel = v4->fields.diglabel;
  if ( !diglabel )
    goto LABEL_12;
  max_length = diglabel->max_length;
  v6 = System_Int32__ToString((int32_t)&max_length, 0);
  v7 = System_String__Concat_63674716(
         (System_String_o *)StringLiteral_25063/*"{0,"*/,
         v6,
         (System_String_o *)StringLiteral_25278/*"}"*/,
         0);
  v22 = v3;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v22, v8, v9, v10, v11, v12, v13);
  this = (DrumRollLabel_o *)System_String__Format(v7, v14, 0);
  v15 = v4->fields.diglabel;
  v4->fields.nowvalue = v3;
  if ( !v15 )
LABEL_12:
    sub_1C3E7C0(this, *(_QWORD *)&value);
  v16 = this;
  v17 = 0;
  v18 = -1;
  while ( 1 )
  {
    v19 = v15->max_length;
    if ( (int)v17 >= v19 )
      break;
    if ( v16 )
    {
      this = (DrumRollLabel_o *)System_String__Substring_63682392((System_String_o *)v16, v18 + v19, 1, 0);
      v21 = v4->fields.diglabel;
      if ( v21 )
      {
        if ( (unsigned int)v17 >= LODWORD(v21->max_length) )
          sub_1C3E7C8(this, *(_QWORD *)&value);
        *(_QWORD *)&value = this;
        this = (DrumRollLabel_o *)v21->m_Items[v17];
        if ( this )
        {
          DigitRollLabel__startChange((DigitRollLabel_o *)this, *(System_String_o **)&value, v20);
          v15 = v4->fields.diglabel;
          ++v17;
          --v18;
          if ( v15 )
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A83BCC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A83B8C;
}


System_IAsyncResult_o *DrumRollLabel_CompleteEventHandler__BeginInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void DrumRollLabel_CompleteEventHandler__EndInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void DrumRollLabel_CompleteEventHandler__Invoke(DrumRollLabel_CompleteEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}