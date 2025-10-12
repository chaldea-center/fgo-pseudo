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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callComplete, 0, (int32_t)method, v3);
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
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v17; // x21
  __int64 v18; // x22
  int v19; // w23
  int max_length; // w8
  const MethodInfo *v21; // x2
  struct DigitRollLabel_array *v22; // x8
  System_String_o *v23; // x1
  int32_t v24; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C390C4 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25041/*"{0,3}"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C390C4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  this->fields.nowvalue = nextParam;
  this->fields.nextvalue = nextParam;
  v24 = nextParam;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v24, v8, v9, v10, v11, v12, v13);
  v15 = (DigitRollLabel_o *)System_String__Format((System_String_o *)StringLiteral_25041/*"{0,3}"*/, v14, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_16:
    sub_1C32E7C(v15);
  v17 = (System_String_o *)v15;
  v18 = 0;
  v19 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v18 >= max_length )
      break;
    if ( v17 )
    {
      v15 = (DigitRollLabel_o *)System_String__Substring_63564468(v17, v19 + max_length, 1, 0);
      v22 = this->fields.diglabel;
      if ( v22 )
      {
        if ( (unsigned int)v18 >= LODWORD(v22->max_length) )
          sub_1C32E84(v15);
        v23 = (System_String_o *)v15;
        v15 = v22->m_Items[v18];
        if ( v15 )
        {
          if ( isAllChange )
            DigitRollLabel__changeText(v15, v23, v21);
          else
            DigitRollLabel__endChange(v15, v23, v21);
          diglabel = this->fields.diglabel;
          ++v18;
          --v19;
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
        sub_1C32E84(this);
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
    sub_1C32E7C(this);
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

  if ( (byte_4C390BF & 1) == 0 )
  {
    sub_1C32C20(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4C390BF = 1;
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
    v9 = sub_1C6CE78(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Object_array *v15; // x23
  __int64 v16; // x1
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
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *v37; // x24
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x1
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  __int64 v56; // x5
  __int64 v57; // x6
  __int64 v58; // x7
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *v61; // x24
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  __int64 v67; // x4
  __int64 v68; // x5
  __int64 v69; // x6
  __int64 v70; // x7
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  Il2CppObject *v73; // x24
  System_Collections_Hashtable_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x2
  struct DigitRollLabel_array *diglabel; // x8
  int v79; // w20
  __int64 v80; // x21
  int max_length; // w9
  __int64 v82; // x0
  float v83; // [xsp+0h] [xbp-60h] BYREF
  float changetime; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v85; // [xsp+8h] [xbp-58h] BYREF
  int32_t nowvalue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C390C1 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&object___TypeInfo);
    sub_1C32C20(&float_TypeInfo);
    sub_1C32C20(&StringLiteral_19689/*"from"*/);
    sub_1C32C20(&StringLiteral_24067/*"time"*/);
    sub_1C32C20(&StringLiteral_22435/*"onupdate"*/);
    sub_1C32C20(&StringLiteral_18551/*"delay"*/);
    sub_1C32C20(&StringLiteral_24106/*"to"*/);
    sub_1C32C20(&StringLiteral_18186/*"completeValues"*/);
    sub_1C32C20(&StringLiteral_24440/*"updateValues"*/);
    sub_1C32C20(&StringLiteral_22427/*"oncomplete"*/);
    sub_1C32C20(&iTween_TypeInfo);
    byte_4C390C1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63266448(gameObject, 0);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12 = (DigitRollLabel_o *)sub_1C32CC8(object___TypeInfo, 12);
  if ( !v12 )
LABEL_64:
    sub_1C32E7C(v12);
  v15 = (System_Object_array *)v12;
  v12 = (DigitRollLabel_o *)StringLiteral_19689/*"from"*/;
  if ( StringLiteral_19689/*"from"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_19689/*"from"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v16 = StringLiteral_19689/*"from"*/;
  }
  else
  {
    v16 = 0;
  }
  if ( !LODWORD(v15->max_length) )
    goto LABEL_66;
  v15->m_Items[0] = (Il2CppObject *)v16;
  sub_1C32BC4((CGThumbnailListItem_o *)v15->m_Items, v16, v13, v14);
  nowvalue = this->fields.nowvalue;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &nowvalue, v17, v18, v19, v20, v21, v22);
  v25 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(v12, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v15->max_length) <= 1 )
    goto LABEL_66;
  v15->m_Items[1] = v25;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[1], (int32_t)v25, v23, v24);
  v12 = (DigitRollLabel_o *)StringLiteral_24106/*"to"*/;
  if ( StringLiteral_24106/*"to"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_24106/*"to"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v28 = StringLiteral_24106/*"to"*/;
  }
  else
  {
    v28 = 0;
  }
  if ( LODWORD(v15->max_length) <= 2 )
    goto LABEL_66;
  v15->m_Items[2] = (Il2CppObject *)v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[2], v28, v26, v27);
  v85 = nextparam;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v85, v29, v30, v31, v32, v33, v34);
  v37 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(v12, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v15->max_length) <= 3 )
    goto LABEL_66;
  v15->m_Items[3] = v37;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[3], (int32_t)v37, v35, v36);
  v12 = (DigitRollLabel_o *)StringLiteral_22435/*"onupdate"*/;
  if ( StringLiteral_22435/*"onupdate"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_22435/*"onupdate"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v40 = StringLiteral_22435/*"onupdate"*/;
  }
  else
  {
    v40 = 0;
  }
  if ( LODWORD(v15->max_length) <= 4 )
    goto LABEL_66;
  v15->m_Items[4] = (Il2CppObject *)v40;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[4], v40, v38, v39);
  v12 = (DigitRollLabel_o *)StringLiteral_24440/*"updateValues"*/;
  if ( StringLiteral_24440/*"updateValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_24440/*"updateValues"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v43 = StringLiteral_24440/*"updateValues"*/;
  }
  else
  {
    v43 = 0;
  }
  if ( LODWORD(v15->max_length) <= 5 )
    goto LABEL_66;
  v15->m_Items[5] = (Il2CppObject *)v43;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[5], v43, v41, v42);
  v12 = (DigitRollLabel_o *)StringLiteral_22427/*"oncomplete"*/;
  if ( StringLiteral_22427/*"oncomplete"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_22427/*"oncomplete"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v46 = StringLiteral_22427/*"oncomplete"*/;
  }
  else
  {
    v46 = 0;
  }
  if ( LODWORD(v15->max_length) <= 6 )
    goto LABEL_66;
  v15->m_Items[6] = (Il2CppObject *)v46;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[6], v46, v44, v45);
  v12 = (DigitRollLabel_o *)StringLiteral_18186/*"completeValues"*/;
  if ( StringLiteral_18186/*"completeValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_18186/*"completeValues"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v49 = StringLiteral_18186/*"completeValues"*/;
  }
  else
  {
    v49 = 0;
  }
  if ( LODWORD(v15->max_length) <= 7 )
    goto LABEL_66;
  v15->m_Items[7] = (Il2CppObject *)v49;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[7], v49, v47, v48);
  v12 = (DigitRollLabel_o *)StringLiteral_24067/*"time"*/;
  if ( StringLiteral_24067/*"time"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_24067/*"time"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v52 = StringLiteral_24067/*"time"*/;
  }
  else
  {
    v52 = 0;
  }
  if ( LODWORD(v15->max_length) <= 8 )
    goto LABEL_66;
  v15->m_Items[8] = (Il2CppObject *)v52;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[8], v52, v50, v51);
  changetime = this->fields.changetime;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &changetime, v53, v54, v55, v56, v57, v58);
  v61 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(v12, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v15->max_length) <= 9 )
    goto LABEL_66;
  v15->m_Items[9] = v61;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[9], (int32_t)v61, v59, v60);
  v12 = (DigitRollLabel_o *)StringLiteral_18551/*"delay"*/;
  if ( StringLiteral_18551/*"delay"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(StringLiteral_18551/*"delay"*/, v15->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v64 = StringLiteral_18551/*"delay"*/;
  }
  else
  {
    v64 = 0;
  }
  if ( LODWORD(v15->max_length) <= 0xA )
    goto LABEL_66;
  v15->m_Items[10] = (Il2CppObject *)v64;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[10], v64, v62, v63);
  v83 = delay;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &v83, v65, v66, v67, v68, v69, v70);
  v73 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C32D5C(v12, v15->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_67:
      v82 = sub_1C32EA0(v12);
      sub_1C32D48(v82, 0);
    }
  }
  if ( LODWORD(v15->max_length) <= 0xB )
LABEL_66:
    sub_1C32E84(v12);
  v15->m_Items[11] = v73;
  sub_1C32BC4((CGThumbnailListItem_o *)&v15->m_Items[11], (int32_t)v73, v71, v72);
  v74 = iTween__Hash(v15, 0);
  iTween__ValueTo(v11, v74, 0);
  this->fields.callComplete = callevent;
  this->fields.nextvalue = nextparam;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.callComplete, (int32_t)callevent, v75, v76);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_64;
  v79 = 0;
  v80 = 0;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v80 >= max_length )
      break;
    if ( (unsigned int)v80 >= max_length )
      goto LABEL_66;
    v12 = diglabel->m_Items[v80];
    if ( v12 )
    {
      DigitRollLabel__changeSpeed(v12, v79 + max_length, v77);
      diglabel = this->fields.diglabel;
      ++v80;
      --v79;
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
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v12; // x20
  __int64 v13; // x22
  int v14; // w23
  int max_length; // w9
  DigitRollLabel_o *v16; // x21
  const MethodInfo *v17; // x2
  struct DrumRollLabel_CompleteEventHandler_o *callComplete; // x8
  int32_t nextvalue; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C390C3 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25041/*"{0,3}"*/);
    byte_4C390C3 = 1;
  }
  nextvalue = this->fields.nextvalue;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nextvalue, v2, v3, v4, v5, v6, v7);
  v10 = System_String__Format((System_String_o *)StringLiteral_25041/*"{0,3}"*/, v9, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_10:
    sub_1C32E7C(v10);
  v12 = v10;
  v13 = 0;
  v14 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v13 >= max_length )
      break;
    if ( (unsigned int)v13 >= max_length )
      sub_1C32E84(v10);
    if ( v12 )
    {
      v16 = diglabel->m_Items[v13];
      v10 = System_String__Substring_63564468(v12, v14 + max_length, 1, 0);
      if ( v16 )
      {
        DigitRollLabel__endChange(v16, v10, v17);
        diglabel = this->fields.diglabel;
        ++v13;
        --v14;
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

  if ( (byte_4C390C0 & 1) == 0 )
  {
    sub_1C32C20(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4C390C0 = 1;
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
    v9 = sub_1C6CE78(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3313C(v8);
  DrumRollLabel__setParam(v11, v12, v13);
}


void DrumRollLabel__setParam(DrumRollLabel_o *this, int32_t param, const MethodInfo *method)
{
  this->fields.nowvalue = param;
  this->fields.nextvalue = param;
}


void DrumRollLabel__updateValues(DrumRollLabel_o *this, int32_t value, const MethodInfo *method)
{
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
  DrumRollLabel_o *v22; // x1
  int32_t v23; // [xsp+8h] [xbp-38h] BYREF
  int max_length; // [xsp+Ch] [xbp-34h] BYREF

  v4 = this;
  if ( (byte_4C390C2 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25253/*"}"*/);
    this = (DrumRollLabel_o *)sub_1C32C20(&StringLiteral_25038/*"{0,"*/);
    byte_4C390C2 = 1;
  }
  diglabel = v4->fields.diglabel;
  if ( !diglabel )
    goto LABEL_12;
  max_length = diglabel->max_length;
  v6 = System_Int32__ToString((int32_t)&max_length, 0);
  v7 = System_String__Concat_63556792(
         (System_String_o *)StringLiteral_25038/*"{0,"*/,
         v6,
         (System_String_o *)StringLiteral_25253/*"}"*/,
         0);
  v23 = value;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v23, v8, v9, v10, v11, v12, v13);
  this = (DrumRollLabel_o *)System_String__Format(v7, v14, 0);
  v15 = v4->fields.diglabel;
  v4->fields.nowvalue = value;
  if ( !v15 )
LABEL_12:
    sub_1C32E7C(this);
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
      this = (DrumRollLabel_o *)System_String__Substring_63564468((System_String_o *)v16, v18 + v19, 1, 0);
      v21 = v4->fields.diglabel;
      if ( v21 )
      {
        if ( (unsigned int)v17 >= LODWORD(v21->max_length) )
          sub_1C32E84(this);
        v22 = this;
        this = (DrumRollLabel_o *)v21->m_Items[v17];
        if ( this )
        {
          DigitRollLabel__startChange((DigitRollLabel_o *)this, (System_String_o *)v22, v20);
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A784F4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A784B4;
}


System_IAsyncResult_o *DrumRollLabel_CompleteEventHandler__BeginInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v5, callback, object);
}


void DrumRollLabel_CompleteEventHandler__EndInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void DrumRollLabel_CompleteEventHandler__Invoke(DrumRollLabel_CompleteEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}