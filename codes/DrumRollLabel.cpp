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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( !callEventToCancel
    || System_Delegate__op_Equality(
         (System_Delegate_o *)this->fields.callComplete,
         (System_Delegate_o *)callEventToCancel,
         0) )
  {
    this->fields.callComplete = 0;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.callComplete, 0, (int32_t)method, v3, v4, v5, v6, v7);
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

  if ( (byte_4CC8B22 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25176/*"{0,3}"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC8B22 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63779628(gameObject, 0);
  this->fields.nowvalue = nextParam;
  this->fields.nextvalue = nextParam;
  v18 = nextParam;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  v9 = (DigitRollLabel_o *)System_String__Format((System_String_o *)StringLiteral_25176/*"{0,3}"*/, v8, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_16:
    sub_1C71608(v9, v10);
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
      v9 = (DigitRollLabel_o *)System_String__Substring_64077664(v12, v14 + max_length, 1, 0);
      v17 = this->fields.diglabel;
      if ( v17 )
      {
        if ( (unsigned int)v13 >= LODWORD(v17->max_length) )
          sub_1C71610(v9);
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
        sub_1C71610(this);
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
    sub_1C71608(this, method);
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

  if ( (byte_4CC8B1D & 1) == 0 )
  {
    sub_1C713B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CC8B1D = 1;
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
    v9 = sub_1CCD184(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Object_array *v20; // x23
  __int64 v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  Il2CppObject *v28; // x24
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  __int64 v35; // x1
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  Il2CppObject *v42; // x24
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  __int64 v49; // x1
  int32_t v50; // w2
  int32_t v51; // w3
  System_String_o *v52; // x4
  int32_t v53; // w5
  int64_t v54; // x6
  System_String_o *v55; // x7
  __int64 v56; // x1
  int32_t v57; // w2
  int32_t v58; // w3
  System_String_o *v59; // x4
  int32_t v60; // w5
  int64_t v61; // x6
  System_String_o *v62; // x7
  __int64 v63; // x1
  int32_t v64; // w2
  int32_t v65; // w3
  System_String_o *v66; // x4
  int32_t v67; // w5
  int64_t v68; // x6
  System_String_o *v69; // x7
  __int64 v70; // x1
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7
  __int64 v77; // x1
  int32_t v78; // w2
  int32_t v79; // w3
  System_String_o *v80; // x4
  int32_t v81; // w5
  int64_t v82; // x6
  System_String_o *v83; // x7
  Il2CppObject *v84; // x24
  int32_t v85; // w2
  int32_t v86; // w3
  System_String_o *v87; // x4
  int32_t v88; // w5
  int64_t v89; // x6
  System_String_o *v90; // x7
  __int64 v91; // x1
  int32_t v92; // w2
  int32_t v93; // w3
  System_String_o *v94; // x4
  int32_t v95; // w5
  int64_t v96; // x6
  System_String_o *v97; // x7
  Il2CppObject *v98; // x24
  System_Collections_Hashtable_o *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  const MethodInfo *v106; // x2
  struct DigitRollLabel_array *diglabel; // x8
  int v108; // w20
  __int64 v109; // x21
  int max_length; // w9
  __int64 v111; // x0
  float v112; // [xsp+0h] [xbp-60h] BYREF
  float changetime; // [xsp+4h] [xbp-5Ch] BYREF
  int32_t v114; // [xsp+8h] [xbp-58h] BYREF
  int32_t nowvalue; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CC8B1F & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&object___TypeInfo);
    sub_1C713B0(&float_TypeInfo);
    sub_1C713B0(&StringLiteral_19766/*"from"*/);
    sub_1C713B0(&StringLiteral_24189/*"time"*/);
    sub_1C713B0(&StringLiteral_22541/*"onupdate"*/);
    sub_1C713B0(&StringLiteral_18592/*"delay"*/);
    sub_1C713B0(&StringLiteral_24228/*"to"*/);
    sub_1C713B0(&StringLiteral_18220/*"completeValues"*/);
    sub_1C713B0(&StringLiteral_24567/*"updateValues"*/);
    sub_1C713B0(&StringLiteral_22533/*"oncomplete"*/);
    sub_1C713B0(&iTween_TypeInfo);
    byte_4CC8B1F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  iTween__Stop_63779628(gameObject, 0);
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12 = (DigitRollLabel_o *)sub_1C71458(object___TypeInfo, 12);
  if ( !v12 )
LABEL_64:
    sub_1C71608(v12, v13);
  v20 = (System_Object_array *)v12;
  v12 = (DigitRollLabel_o *)StringLiteral_19766/*"from"*/;
  if ( StringLiteral_19766/*"from"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_19766/*"from"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v21 = StringLiteral_19766/*"from"*/;
  }
  else
  {
    v21 = 0;
  }
  if ( !LODWORD(v20->max_length) )
    goto LABEL_66;
  v20->m_Items[0] = (Il2CppObject *)v21;
  sub_1C71354((GrandQuestFolderBoardItem_o *)v20->m_Items, v21, v14, v15, v16, v17, v18, v19);
  nowvalue = this->fields.nowvalue;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &nowvalue);
  v28 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(v12, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v20->max_length) <= 1 )
    goto LABEL_66;
  v20->m_Items[1] = v28;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[1], (int32_t)v28, v22, v23, v24, v25, v26, v27);
  v12 = (DigitRollLabel_o *)StringLiteral_24228/*"to"*/;
  if ( StringLiteral_24228/*"to"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_24228/*"to"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v35 = StringLiteral_24228/*"to"*/;
  }
  else
  {
    v35 = 0;
  }
  if ( LODWORD(v20->max_length) <= 2 )
    goto LABEL_66;
  v20->m_Items[2] = (Il2CppObject *)v35;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[2], v35, v29, v30, v31, v32, v33, v34);
  v114 = nextparam;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(int_TypeInfo, &v114);
  v42 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(v12, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v20->max_length) <= 3 )
    goto LABEL_66;
  v20->m_Items[3] = v42;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[3], (int32_t)v42, v36, v37, v38, v39, v40, v41);
  v12 = (DigitRollLabel_o *)StringLiteral_22541/*"onupdate"*/;
  if ( StringLiteral_22541/*"onupdate"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_22541/*"onupdate"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v49 = StringLiteral_22541/*"onupdate"*/;
  }
  else
  {
    v49 = 0;
  }
  if ( LODWORD(v20->max_length) <= 4 )
    goto LABEL_66;
  v20->m_Items[4] = (Il2CppObject *)v49;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[4], v49, v43, v44, v45, v46, v47, v48);
  v12 = (DigitRollLabel_o *)StringLiteral_24567/*"updateValues"*/;
  if ( StringLiteral_24567/*"updateValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_24567/*"updateValues"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v56 = StringLiteral_24567/*"updateValues"*/;
  }
  else
  {
    v56 = 0;
  }
  if ( LODWORD(v20->max_length) <= 5 )
    goto LABEL_66;
  v20->m_Items[5] = (Il2CppObject *)v56;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[5], v56, v50, v51, v52, v53, v54, v55);
  v12 = (DigitRollLabel_o *)StringLiteral_22533/*"oncomplete"*/;
  if ( StringLiteral_22533/*"oncomplete"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_22533/*"oncomplete"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v63 = StringLiteral_22533/*"oncomplete"*/;
  }
  else
  {
    v63 = 0;
  }
  if ( LODWORD(v20->max_length) <= 6 )
    goto LABEL_66;
  v20->m_Items[6] = (Il2CppObject *)v63;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[6], v63, v57, v58, v59, v60, v61, v62);
  v12 = (DigitRollLabel_o *)StringLiteral_18220/*"completeValues"*/;
  if ( StringLiteral_18220/*"completeValues"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_18220/*"completeValues"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v70 = StringLiteral_18220/*"completeValues"*/;
  }
  else
  {
    v70 = 0;
  }
  if ( LODWORD(v20->max_length) <= 7 )
    goto LABEL_66;
  v20->m_Items[7] = (Il2CppObject *)v70;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[7], v70, v64, v65, v66, v67, v68, v69);
  v12 = (DigitRollLabel_o *)StringLiteral_24189/*"time"*/;
  if ( StringLiteral_24189/*"time"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_24189/*"time"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v77 = StringLiteral_24189/*"time"*/;
  }
  else
  {
    v77 = 0;
  }
  if ( LODWORD(v20->max_length) <= 8 )
    goto LABEL_66;
  v20->m_Items[8] = (Il2CppObject *)v77;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[8], v77, v71, v72, v73, v74, v75, v76);
  changetime = this->fields.changetime;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &changetime);
  v84 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(v12, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
  }
  if ( LODWORD(v20->max_length) <= 9 )
    goto LABEL_66;
  v20->m_Items[9] = v84;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[9], (int32_t)v84, v78, v79, v80, v81, v82, v83);
  v12 = (DigitRollLabel_o *)StringLiteral_18592/*"delay"*/;
  if ( StringLiteral_18592/*"delay"*/ )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(StringLiteral_18592/*"delay"*/, v20->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_67;
    v91 = StringLiteral_18592/*"delay"*/;
  }
  else
  {
    v91 = 0;
  }
  if ( LODWORD(v20->max_length) <= 0xA )
    goto LABEL_66;
  v20->m_Items[10] = (Il2CppObject *)v91;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[10], v91, v85, v86, v87, v88, v89, v90);
  v112 = delay;
  v12 = (DigitRollLabel_o *)j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v98 = (Il2CppObject *)v12;
  if ( v12 )
  {
    v12 = (DigitRollLabel_o *)sub_1C714EC(v12, v20->obj.klass->_1.element_class);
    if ( !v12 )
    {
LABEL_67:
      v111 = sub_1C7162C(v12);
      sub_1C714D8(v111, 0);
    }
  }
  if ( LODWORD(v20->max_length) <= 0xB )
LABEL_66:
    sub_1C71610(v12);
  v20->m_Items[11] = v98;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v20->m_Items[11], (int32_t)v98, v92, v93, v94, v95, v96, v97);
  v99 = iTween__Hash(v20, 0);
  iTween__ValueTo(v11, v99, 0);
  this->fields.callComplete = callevent;
  this->fields.nextvalue = nextparam;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.callComplete,
    (int32_t)callevent,
    v100,
    v101,
    v102,
    v103,
    v104,
    v105);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
    goto LABEL_64;
  v108 = 0;
  v109 = 0;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v109 >= max_length )
      break;
    if ( (unsigned int)v109 >= max_length )
      goto LABEL_66;
    v12 = diglabel->m_Items[v109];
    if ( v12 )
    {
      DigitRollLabel__changeSpeed(v12, v108 + max_length, v106);
      diglabel = this->fields.diglabel;
      ++v109;
      --v108;
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

  if ( (byte_4CC8B21 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25176/*"{0,3}"*/);
    byte_4CC8B21 = 1;
  }
  nextvalue = this->fields.nextvalue;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &nextvalue);
  v4 = System_String__Format((System_String_o *)StringLiteral_25176/*"{0,3}"*/, v3, 0);
  diglabel = this->fields.diglabel;
  if ( !diglabel )
LABEL_10:
    sub_1C71608(v4, v5);
  v7 = v4;
  v8 = 0;
  v9 = -1;
  while ( 1 )
  {
    max_length = diglabel->max_length;
    if ( (int)v8 >= max_length )
      break;
    if ( (unsigned int)v8 >= max_length )
      sub_1C71610(v4);
    if ( v7 )
    {
      v11 = diglabel->m_Items[v8];
      v4 = System_String__Substring_64077664(v7, v9 + max_length, 1, 0);
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

  if ( (byte_4CC8B1E & 1) == 0 )
  {
    sub_1C713B0(&DrumRollLabel_CompleteEventHandler_TypeInfo);
    byte_4CC8B1E = 1;
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
    v9 = sub_1CCD184(p_callComplete, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
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
  if ( (byte_4CC8B20 & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_25388/*"}"*/);
    this = (DrumRollLabel_o *)sub_1C713B0(&StringLiteral_25173/*"{0,"*/);
    byte_4CC8B20 = 1;
  }
  diglabel = v4->fields.diglabel;
  if ( !diglabel )
    goto LABEL_12;
  max_length = diglabel->max_length;
  v6 = System_Int32__ToString((int32_t)&max_length, 0);
  v7 = System_String__Concat_64069988(
         (System_String_o *)StringLiteral_25173/*"{0,"*/,
         v6,
         (System_String_o *)StringLiteral_25388/*"}"*/,
         0);
  v16 = v3;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16);
  this = (DrumRollLabel_o *)System_String__Format(v7, v8, 0);
  v9 = v4->fields.diglabel;
  v4->fields.nowvalue = v3;
  if ( !v9 )
LABEL_12:
    sub_1C71608(this, *(_QWORD *)&value);
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
      this = (DrumRollLabel_o *)System_String__Substring_64077664((System_String_o *)v10, v12 + v13, 1, 0);
      v15 = v4->fields.diglabel;
      if ( v15 )
      {
        if ( (unsigned int)v11 >= LODWORD(v15->max_length) )
          sub_1C71610(this);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AA80EC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA80AC;
}


System_IAsyncResult_o *DrumRollLabel_CompleteEventHandler__BeginInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C71364(this, &v5, callback, object);
}


void DrumRollLabel_CompleteEventHandler__EndInvoke(
        DrumRollLabel_CompleteEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
}


void DrumRollLabel_CompleteEventHandler__Invoke(DrumRollLabel_CompleteEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}