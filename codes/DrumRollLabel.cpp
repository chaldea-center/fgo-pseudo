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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( !callEventToCancel
    || System_Delegate__op_Equality(
         (System_Delegate_o *)this->fields.callComplete,
         (System_Delegate_o *)callEventToCancel,
         0) )
  {
    this->fields.callComplete = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callComplete,
      0,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
  }
}


void DrumRollLabel__ChangeParamNonAnimation(
        DrumRollLabel_o *this,
        int32_t nextParam,
        bool isAllChange,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  Il2CppObject *v9; // x0
  DigitRollLabel_o *v10; // x0
  System_String_o *v11; // x1
  struct DigitRollLabel_array *diglabel; // x8
  System_String_o *v13; // x21
  unsigned __int64 v14; // x22
  int v15; // w23
  il2cpp_array_size_t max_length; // x8
  const MethodInfo *v17; // x2
  struct DigitRollLabel_array *v18; // x8
  int32_t v19; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5939DEE & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26375/*"{0,3}"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_5939DEE = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v7);
  iTween__Stop_75189608(gameObject, 0);
  this->fields.nowvalue = nextParam;
  this->fields.nextvalue = nextParam;
  v19 = nextParam;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v19);
  v10 = (DigitRollLabel_o *)System_String__Format((System_String_o *)StringLiteral_26375/*"{0,3}"*/, v9, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_19:
    sub_21FFECC(v10, v11);
  v13 = (System_String_o *)v10;
  v14 = 0;
  v15 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (__int64)v14 >= (int)max_length )
      break;
    if ( !v13 )
      goto LABEL_19;
    v10 = (DigitRollLabel_o *)System_String__Substring_75489544(v13, v15 + (int)max_length, 1, 0);
    v18 = this->fields.diglabel;
    v11 = (System_String_o *)v10;
    if ( isAllChange )
    {
      if ( !v18 )
        goto LABEL_19;
      if ( v14 >= LODWORD(v18->max_length) )
        goto LABEL_21;
      v10 = v18->m_Items[v14];
      if ( !v10 )
        goto LABEL_19;
      DigitRollLabel__changeText(v10, v11, v17);
    }
    else
    {
      if ( !v18 )
        goto LABEL_19;
      if ( v14 >= LODWORD(v18->max_length) )
LABEL_21:
        sub_21FFED4(v10);
      v10 = v18->m_Items[v14];
      if ( !v10 )
        goto LABEL_19;
      DigitRollLabel__endChange(v10, v11, v17);
    }
    diglabel = this->fields.diglabel;
    ++v14;
    --v15;
    if ( !diglabel )
      goto LABEL_19;
  }
}


void DrumRollLabel__SetLabelColor(DrumRollLabel_o *this, UnityEngine_Color_o color, const MethodInfo *method)
{
  struct DigitRollLabel_array *diglabel; // x19
  int max_length; // w8
  float a; // s8
  float b; // s9
  __int64 v7; // x20
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_8;
  max_length = diglabel->max_length;
  if ( max_length >= 1 )
  {
    a = color.fields.a;
    b = color.fields.b;
    v7 = 0;
    g = color.fields.g;
    r = color.fields.r;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= max_length )
        sub_21FFED4(this);
      this = (DrumRollLabel_o *)diglabel->m_Items[v7];
      if ( !this )
        break;
      v10.fields.r = r;
      v10.fields.g = g;
      v10.fields.b = b;
      v10.fields.a = a;
      DigitRollLabel__ChangeColor((DigitRollLabel_o *)this, v10, method);
      max_length = diglabel->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_8:
    sub_21FFECC(this, method);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  DrumRollLabel_o *v12; // x0
  DrumRollLabel_CompleteEventHandler_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_5939DE9 & 1) == 0 )
  {
    sub_21FFC50(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_5939DE9 = 1;
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
    v10 = sub_223767C(p_callComplete, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, DrumRollLabel_CompleteEventHandler_TypeInfo, v9);
  DrumRollLabel__remove_callComplete(v12, v13, v14);
}


void DrumRollLabel__changeParam(
        DrumRollLabel_o *this,
        int32_t nextparam,
        bool isRapid,
        DrumRollLabel_CompleteEventHandler_o *callevent,
        float delay,
        const MethodInfo *method)
{
  __int64 v10; // x1
  UnityEngine_GameObject_o *gameObject; // x22
  UnityEngine_GameObject_o *v12; // x22
  DigitRollLabel_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Object_array *v21; // x23
  __int64 v22; // x1
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x24
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  int32_t v37; // w1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  Il2CppObject *v44; // x24
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  int32_t v51; // w1
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  int32_t v58; // w1
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  int32_t v65; // w1
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  int32_t v79; // w1
  System_String_o *v80; // x2
  System_String_o *v81; // x3
  int32_t v82; // w4
  int32_t v83; // w5
  bool v84; // w6
  bool v85; // w7
  Il2CppObject *v86; // x24
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  int32_t v93; // w1
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  Il2CppObject *v100; // x24
  System_Collections_Hashtable_o *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  const MethodInfo *v108; // x2
  struct DigitRollLabel_array *diglabel; // x8
  int v110; // w20
  __int64 v111; // x21
  int max_length; // w9
  __int64 v113; // x0
  float v114; // [xsp+0h] [xbp-60h] BYREF
  float changetime; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v116; // [xsp+8h] [xbp-58h] BYREF
  int32_t nowvalue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_5939DEB & 1) == 0 )
  {
    sub_21FFC50(&object___TypeInfo);
    sub_21FFC50(&StringLiteral_20581/*"from"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23526/*"onupdate"*/);
    sub_21FFC50(&StringLiteral_19348/*"delay"*/);
    sub_21FFC50(&StringLiteral_25358/*"to"*/);
    sub_21FFC50(&StringLiteral_18961/*"completeValues"*/);
    sub_21FFC50(&StringLiteral_25742/*"updateValues"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_5939DEB = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v10);
  iTween__Stop_75189608(gameObject, 0);
  v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v13 = (DigitRollLabel_o *)sub_21FFD10(object___TypeInfo, 12);
  if ( !v13 )
LABEL_48:
    sub_21FFECC(v13, v14);
  v21 = (System_Object_array *)v13;
  v13 = (DigitRollLabel_o *)StringLiteral_20581/*"from"*/;
  if ( StringLiteral_20581/*"from"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_20581/*"from"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( !LODWORD(v21->max_length) )
    goto LABEL_50;
  v23 = StringLiteral_20581/*"from"*/;
  v21->m_Items[0] = (Il2CppObject *)StringLiteral_20581/*"from"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v21->m_Items, v23, v15, v16, v17, v18, v19, v20);
  nowvalue = this->fields.nowvalue;
  v13 = (DigitRollLabel_o *)j_il2cpp_value_box_0(qword_594C070, &nowvalue);
  v30 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(v13, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( (v21->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_50;
  v21->m_Items[1] = v30;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[1], (int32_t)v30, v24, v25, v26, v27, v28, v29);
  v13 = (DigitRollLabel_o *)StringLiteral_25358/*"to"*/;
  if ( StringLiteral_25358/*"to"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_25358/*"to"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 2 )
    goto LABEL_50;
  v37 = StringLiteral_25358/*"to"*/;
  v21->m_Items[2] = (Il2CppObject *)StringLiteral_25358/*"to"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[2], v37, v31, v32, v33, v34, v35, v36);
  v116 = nextparam;
  v13 = (DigitRollLabel_o *)j_il2cpp_value_box_0(qword_594C070, &v116);
  v44 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(v13, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( (v21->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_50;
  v21->m_Items[3] = v44;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[3], (int32_t)v44, v38, v39, v40, v41, v42, v43);
  v13 = (DigitRollLabel_o *)StringLiteral_23526/*"onupdate"*/;
  if ( StringLiteral_23526/*"onupdate"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_23526/*"onupdate"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 4 )
    goto LABEL_50;
  v51 = StringLiteral_23526/*"onupdate"*/;
  v21->m_Items[4] = (Il2CppObject *)StringLiteral_23526/*"onupdate"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[4], v51, v45, v46, v47, v48, v49, v50);
  v13 = (DigitRollLabel_o *)StringLiteral_25742/*"updateValues"*/;
  if ( StringLiteral_25742/*"updateValues"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_25742/*"updateValues"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 5 )
    goto LABEL_50;
  v58 = StringLiteral_25742/*"updateValues"*/;
  v21->m_Items[5] = (Il2CppObject *)StringLiteral_25742/*"updateValues"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[5], v58, v52, v53, v54, v55, v56, v57);
  v13 = (DigitRollLabel_o *)StringLiteral_23518/*"oncomplete"*/;
  if ( StringLiteral_23518/*"oncomplete"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_23518/*"oncomplete"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 6 )
    goto LABEL_50;
  v65 = StringLiteral_23518/*"oncomplete"*/;
  v21->m_Items[6] = (Il2CppObject *)StringLiteral_23518/*"oncomplete"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[6], v65, v59, v60, v61, v62, v63, v64);
  v13 = (DigitRollLabel_o *)StringLiteral_18961/*"completeValues"*/;
  if ( StringLiteral_18961/*"completeValues"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_18961/*"completeValues"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( (v21->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_50;
  v72 = StringLiteral_18961/*"completeValues"*/;
  v21->m_Items[7] = (Il2CppObject *)StringLiteral_18961/*"completeValues"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[7], v72, v66, v67, v68, v69, v70, v71);
  v13 = (DigitRollLabel_o *)StringLiteral_25318/*"time"*/;
  if ( StringLiteral_25318/*"time"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_25318/*"time"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 8 )
    goto LABEL_50;
  v79 = StringLiteral_25318/*"time"*/;
  v21->m_Items[8] = (Il2CppObject *)StringLiteral_25318/*"time"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[8], v79, v73, v74, v75, v76, v77, v78);
  changetime = this->fields.changetime;
  v13 = (DigitRollLabel_o *)j_il2cpp_value_box_0(qword_594C0A0, &changetime);
  v86 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(v13, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 9 )
    goto LABEL_50;
  v21->m_Items[9] = v86;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[9], (int32_t)v86, v80, v81, v82, v83, v84, v85);
  v13 = (DigitRollLabel_o *)StringLiteral_19348/*"delay"*/;
  if ( StringLiteral_19348/*"delay"*/ )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(StringLiteral_19348/*"delay"*/, v21->obj.klass->_1.element_class);
    if ( !v13 )
      goto LABEL_51;
  }
  if ( LODWORD(v21->max_length) <= 0xA )
    goto LABEL_50;
  v93 = StringLiteral_19348/*"delay"*/;
  v21->m_Items[10] = (Il2CppObject *)StringLiteral_19348/*"delay"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[10], v93, v87, v88, v89, v90, v91, v92);
  v114 = delay;
  v13 = (DigitRollLabel_o *)j_il2cpp_value_box_0(qword_594C0A0, &v114);
  v100 = (Il2CppObject *)v13;
  if ( v13 )
  {
    v13 = (DigitRollLabel_o *)sub_21FFDA4(v13, v21->obj.klass->_1.element_class);
    if ( !v13 )
    {
LABEL_51:
      v113 = sub_21FFEF0(v13, v22);
      sub_21FFD90(v113, 0);
    }
  }
  if ( LODWORD(v21->max_length) <= 0xB )
LABEL_50:
    sub_21FFED4(v13);
  v21->m_Items[11] = v100;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v21->m_Items[11], (int32_t)v100, v94, v95, v96, v97, v98, v99);
  v101 = iTween__Hash(v21, 0);
  iTween__ValueTo(v12, v101, 0);
  this->fields.callComplete = callevent;
  this->fields.nextvalue = nextparam;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callComplete,
    (int32_t)callevent,
    v102,
    v103,
    v104,
    v105,
    v106,
    v107);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_48;
  v110 = 0;
  v111 = 0;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v111 >= max_length )
      break;
    if ( (unsigned int)v111 >= max_length )
      goto LABEL_50;
    v13 = diglabel->m_Items[v111];
    if ( v13 )
    {
      DigitRollLabel__changeSpeed(v13, v110 + max_length, v108);
      diglabel = this->fields.diglabel;
      ++v111;
      --v110;
      if ( diglabel )
        continue;
    }
    goto LABEL_48;
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

  if ( (byte_5939DED & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26375/*"{0,3}"*/);
    byte_5939DED = 1;
  }
  nextvalue = this->fields.nextvalue;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &nextvalue);
  v4 = System_String__Format((System_String_o *)StringLiteral_26375/*"{0,3}"*/, v3, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_10:
    sub_21FFECC(v4, v5);
  v7 = v4;
  v8 = 0;
  v9 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_21FFED4(v4);
    if ( v7 )
    {
      v11 = diglabel->m_Items[v8];
      v4 = System_String__Substring_75489544(v7, v9 + max_length, 1, 0);
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
  __int64 v9; // x2
  __int64 v10; // x0
  bool v11; // zf
  DrumRollLabel_o *v12; // x0
  int32_t v13; // w1
  const MethodInfo *v14; // x2

  if ( (byte_5939DEA & 1) == 0 )
  {
    sub_21FFC50(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_5939DEA = 1;
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
    v10 = sub_223767C(p_callComplete, v8, v6);
    v11 = v10 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v8, DrumRollLabel_CompleteEventHandler_TypeInfo, v9);
  DrumRollLabel__setParam(v12, v13, v14);
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
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int max_length; // [xsp+Ch] [xbp-24h] BYREF

  v3 = value;
  v4 = this;
  if ( (byte_5939DEC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26607/*"}"*/);
    this = (DrumRollLabel_o *)sub_21FFC50(&StringLiteral_26372/*"{0,"*/);
    byte_5939DEC = 1;
  }
  diglabel = v4->fields.diglabel;
  max_length = 0;
  if ( !diglabel )
    goto LABEL_12;
  max_length = diglabel->max_length;
  v6 = System_Int32__ToString((int32_t)&max_length, 0);
  v7 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_26372/*"{0,"*/,
         v6,
         (System_String_o *)StringLiteral_26607/*"}"*/,
         0);
  v16 = v3;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v16);
  this = (DrumRollLabel_o *)System_String__Format(v7, v8, 0);
  v9 = v4->fields.diglabel;
  v4->fields.nowvalue = v3;
  if ( !v9 )
LABEL_12:
    sub_21FFECC(this, *(_QWORD *)&value);
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
      this = (DrumRollLabel_o *)System_String__Substring_75489544((System_String_o *)v10, v12 + v13, 1, 0);
      v15 = v4->fields.diglabel;
      if ( v15 )
      {
        if ( (unsigned int)v11 >= LODWORD(v15->max_length) )
          sub_21FFED4(this);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FFBFD8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFBF98;
}


System_IAsyncResult_o *DrumRollLabel_CompleteEventHandler__BeginInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void DrumRollLabel_CompleteEventHandler__EndInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void DrumRollLabel_CompleteEventHandler__Invoke(DrumRollLabel_CompleteEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}