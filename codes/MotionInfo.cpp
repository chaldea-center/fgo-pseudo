void MotionInfo___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int v8; // w9
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_List_string___c *v10; // x0
  System_Collections_Generic_List_object__o *v11; // x19
  struct MotionInfo_StaticFields *v12; // x0
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7

  if ( (byte_5937B55 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_21FFC50(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_21FFC50(&MotionInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937B55 = 1;
  }
  v7 = (int)StringLiteral_1/*""*/;
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)MotionInfo_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = (unsigned __int8)byte_5931820;
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !v8 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  v10 = System_Collections_Generic_List_List_string___TypeInfo;
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v11 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(v10);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v12 = MotionInfo_TypeInfo->static_fields;
  v12->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v12->voicePlaybackLogList,
    (int32_t)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = 0;
}


void MotionInfo___ctor(MotionInfo_o *this, const MethodInfo *method)
{
  this->fields.show = 1;
  this->fields.scrollSpeed = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MotionInfo__AddSeLog(System_String_o *seId, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MotionInfo_c *v9; // x0
  int v10; // w9
  int v11; // w9
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  MotionInfo_c *v20; // x0
  int v21; // w9
  int v22; // w9
  __int64 v23; // x20
  int v24; // w9
  struct MotionInfo_StaticFields *v25; // x0
  const MethodInfo *v26; // x0

  if ( (byte_5937B4F & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_11996/*"SE"*/);
    byte_5937B4F = 1;
  }
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
  if ( !byte_5937BCF )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCF = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  v10 = (unsigned __int8)byte_5937BD0;
  v9->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !v10 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_5937BD0 = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, method);
    v9 = MotionInfo_TypeInfo;
  }
  v11 = (unsigned __int8)byte_5937BCE;
  v9->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !v11 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_5937BCE = 1;
  }
  if ( !*(&v9->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v9, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_VoiceId_k__BackingField,
    (int32_t)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_5937BD2 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BD2 = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v21 = (unsigned __int8)byte_5937BD3;
  v20->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !v21 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
    byte_5937BD3 = 1;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v22 = (unsigned __int8)byte_5937BD4;
  v20->static_fields->_IsSe_k__BackingField = 1;
  if ( !v22 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
    byte_5937BD4 = 1;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v23 = StringLiteral_11996/*"SE"*/;
  v24 = (unsigned __int8)byte_5937BD1;
  v20->static_fields->_IsRandom_k__BackingField = 0;
  if ( !v24 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
    byte_5937BD1 = 1;
  }
  if ( !*(&v20->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v25 = v20->static_fields;
  v25->_VoiceType_k__BackingField = (struct System_String_o *)v23;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->_VoiceType_k__BackingField, v23, v14, v15, v16, v17, v18, v19);
  MotionInfo__AddVoiceLog(v26);
}


void MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass *v14; // x1
  Il2CppClass **v15; // x0
  __int64 v16; // x1
  MotionInfo_c *v17; // x0
  int v18; // w8
  MotionInfo_c *v19; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x8
  MotionInfo_c *v23; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass *v35; // x1
  Il2CppClass **v36; // x0
  __int64 v37; // x1
  MotionInfo_c *v38; // x0
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  Il2CppClass *v48; // x1
  Il2CppClass **v49; // x0
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  char *v56; // x20
  int32_t v57; // w1
  __int64 v58; // x1
  MotionInfo_c *v59; // x0
  System_String_o *v60; // x2
  System_String_o *v61; // x3
  int32_t v62; // w4
  int32_t v63; // w5
  bool v64; // w6
  bool v65; // w7
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  int32_t v72; // w1
  __int64 v73; // x1
  MotionInfo_c *v74; // x0
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_String_o *v87; // x2
  System_String_o *v88; // x3
  int32_t v89; // w4
  int32_t v90; // w5
  bool v91; // w6
  bool v92; // w7
  struct System_Object_array *v93; // x8
  _QWORD *v94; // x9
  __int64 v95; // x10
  Il2CppClass *v96; // x1
  Il2CppClass **v97; // x0
  __int64 v98; // x1
  MotionInfo_c *v99; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v101; // x0
  System_String_o *v102; // x2
  System_String_o *v103; // x3
  int32_t v104; // w4
  int32_t v105; // w5
  bool v106; // w6
  bool v107; // w7
  struct System_Object_array *v108; // x8
  _QWORD *v109; // x9
  __int64 v110; // x10
  Il2CppClass *v111; // x1
  Il2CppClass **v112; // x0
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x8
  const MethodInfo *v123; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5937B50 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&MotionInfo_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_354/*" 確率 / 合計 : "*/);
    sub_21FFC50(&StringLiteral_200/*" VoiceID : "*/);
    sub_21FFC50(&StringLiteral_1202/*"0.00"*/);
    sub_21FFC50(&StringLiteral_160/*" / "*/);
    sub_21FFC50(&StringLiteral_938/*"--- Voice・SE Log ---"*/);
    sub_21FFC50(&StringLiteral_193/*" SEID : "*/);
    sub_21FFC50(&StringLiteral_353/*" 分類 : "*/);
    sub_21FFC50(&StringLiteral_13246/*"ServantID : "*/);
    byte_5937B50 = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_75438412((System_String_o *)StringLiteral_938/*"--- Voice・SE Log ---"*/, NewLine, 0);
  if ( !v1 )
    goto LABEL_75;
  items = v1->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_75;
  size = v1->fields._size;
  v14 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v15[4] = v14;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)v14, v5, v6, v7, v8, v9, v10);
  }
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v16);
  if ( !byte_5937BC7 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BC7 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v16);
    v17 = MotionInfo_TypeInfo;
  }
  v18 = *(&v17->_2.cctor_finished + 1);
  if ( v17->static_fields->_IsSe_k__BackingField )
  {
    if ( !v18 )
      j_il2cpp_runtime_class_init_0(v17, v16);
    if ( !byte_5937BC9 )
    {
      sub_21FFC50(&MotionInfo_TypeInfo);
      byte_5937BC9 = 1;
    }
    v19 = MotionInfo_TypeInfo;
    if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v16);
      v19 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v19->static_fields->_VoiceId_k__BackingField;
    v21 = System_Environment__get_NewLine(0);
    v22 = (System_String_o *)StringLiteral_193/*" SEID : "*/;
    goto LABEL_37;
  }
  if ( !v18 )
    j_il2cpp_runtime_class_init_0(v17, v16);
  if ( !byte_5937BC8 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BC8 = 1;
  }
  v23 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v16);
    v23 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v23->static_fields->_VoiceServantId_k__BackingField;
  v25 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_75481624(
                                   (System_String_o *)StringLiteral_13246/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v25,
                                   0);
  v32 = v1->fields._items;
  v33 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v32 )
LABEL_75:
    sub_21FFECC(voicePlaybackLogList, v4);
  v34 = v1->fields._size;
  v35 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v32->obj.klass + v34;
    v1->fields._size = v34 + 1;
    v36[4] = v35;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v36 + 4), (int32_t)v35, v26, v27, v28, v29, v30, v31);
  }
  if ( !byte_5937BC9 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BC9 = 1;
  }
  v38 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v37);
    v38 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v38->static_fields->_VoiceId_k__BackingField;
  v21 = System_Environment__get_NewLine(0);
  v22 = (System_String_o *)StringLiteral_200/*" VoiceID : "*/;
LABEL_37:
  voicePlaybackLogList = (char *)System_String__Concat_75481624(v22, VoiceId_k__BackingField, v21, 0);
  v45 = v1->fields._items;
  v46 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v45 )
    goto LABEL_75;
  v47 = v1->fields._size;
  v48 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v47 >= LODWORD(v45->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v45->obj.klass + v47;
    v1->fields._size = v47 + 1;
    v49[4] = v48;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v49 + 4), (int32_t)v48, v39, v40, v41, v42, v43, v44);
  }
  voicePlaybackLogList = (char *)sub_21FFD10(string___TypeInfo, 5);
  if ( !voicePlaybackLogList )
    goto LABEL_75;
  v56 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_76;
  v57 = StringLiteral_354/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_354/*" 確率 / 合計 : "*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(voicePlaybackLogList + 32), v57, v50, v51, v52, v53, v54, v55);
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v58);
  if ( !byte_5937BCA )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCA = 1;
  }
  v59 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v58);
    v59 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v59->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_77012896(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1202/*"0.00"*/);
  if ( (*((_DWORD *)v56 + 6) & 0xFFFFFFFE) == 0 )
    goto LABEL_76;
  *((_QWORD *)v56 + 5) = voicePlaybackLogList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v56 + 40),
    (int32_t)voicePlaybackLogList,
    v60,
    v61,
    v62,
    v63,
    v64,
    v65);
  if ( *((_DWORD *)v56 + 6) <= 2u )
    goto LABEL_76;
  v72 = StringLiteral_160/*" / "*/;
  *((_QWORD *)v56 + 6) = StringLiteral_160/*" / "*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v56 + 48), v72, v66, v67, v68, v69, v70, v71);
  if ( !byte_5937BCB )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCB = 1;
  }
  v74 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v73);
    v74 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v74->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_77012896(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1202/*"0.00"*/);
  if ( (*((_DWORD *)v56 + 6) & 0xFFFFFFFC) == 0
    || (*((_QWORD *)v56 + 7) = voicePlaybackLogList,
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v56 + 56),
          (int32_t)voicePlaybackLogList,
          v75,
          v76,
          v77,
          v78,
          v79,
          v80),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0),
        *((_DWORD *)v56 + 6) <= 4u) )
  {
LABEL_76:
    sub_21FFED4(voicePlaybackLogList);
  }
  *((_QWORD *)v56 + 8) = voicePlaybackLogList;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v56 + 64),
    (int32_t)voicePlaybackLogList,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  voicePlaybackLogList = (char *)System_String__Concat_75483816((System_String_array *)v56, 0);
  v93 = v1->fields._items;
  v94 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v93 )
    goto LABEL_75;
  v95 = v1->fields._size;
  v96 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v95 >= LODWORD(v93->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v94[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = &v93->obj.klass + v95;
    v1->fields._size = v95 + 1;
    v97[4] = v96;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v97 + 4), (int32_t)v96, v87, v88, v89, v90, v91, v92);
  }
  if ( !byte_5937BCC )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCC = 1;
  }
  v99 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v98);
    v99 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v99->static_fields->_VoiceType_k__BackingField;
  v101 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_75481624(
                                   (System_String_o *)StringLiteral_353/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v101,
                                   0);
  v108 = v1->fields._items;
  v109 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v108 )
    goto LABEL_75;
  v110 = v1->fields._size;
  v111 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v110 >= LODWORD(v108->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = &v108->obj.klass + v110;
    v1->fields._size = v110 + 1;
    v112[4] = v111;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v112 + 4), (int32_t)v111, v102, v103, v104, v105, v106, v107);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_75;
  v119 = *((_QWORD *)voicePlaybackLogList + 2);
  v120 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v119 )
    goto LABEL_75;
  v121 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v121 >= *(_DWORD *)(v119 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v1,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = v119 + 8 * v121;
    *((_DWORD *)voicePlaybackLogList + 6) = v121 + 1;
    *(_QWORD *)(v122 + 32) = v1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v122 + 32), (int32_t)v1, v113, v114, v115, v116, v117, v118);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v123);
}


void MotionInfo__AddVoiceLog_47990800(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MotionInfo_c *v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  const MethodInfo *v27; // x0

  if ( (byte_5937B51 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B51 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v3 )
    goto LABEL_16;
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)str,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)str, v6, v7, v8, v9, v10, v11);
  }
  v22 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v5);
    v22 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v22->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList
    || (v23 = voicePlaybackLogList->fields._items,
        v24 = Method_System_Collections_Generic_List_List_string___Add__,
        ++voicePlaybackLogList->fields._version,
        !v23) )
  {
LABEL_16:
    sub_21FFECC(voicePlaybackLogList, v5);
  }
  v25 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    voicePlaybackLogList->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v3;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v3, v16, v17, v18, v19, v20, v21);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v27);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  int32_t v4; // w0
  __int64 *v5; // x8
  int32_t v7; // [xsp+Ch] [xbp-24h] BYREF

  v7 = type;
  if ( (byte_5937B4D & 1) == 0 )
  {
    sub_21FFC50(&BattleCommand_TypeInfo);
    sub_21FFC50(&StringLiteral_26778/*"バスター"*/);
    sub_21FFC50(&StringLiteral_26757/*"クイック"*/);
    sub_21FFC50(&StringLiteral_26746/*"アーツ"*/);
    sub_21FFC50(&StringLiteral_26750/*"エクストラ"*/);
    byte_5937B4D = 1;
  }
  if ( !*(&BattleCommand_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo, *(_QWORD *)&type);
  v4 = BattleCommand__getType(type, 0);
  if ( v4 > 2 )
  {
    if ( v4 == 3 )
    {
      v5 = &StringLiteral_26757/*"クイック"*/;
      return (System_String_o *)*v5;
    }
    if ( v4 == 4 )
    {
      v5 = &StringLiteral_26750/*"エクストラ"*/;
      return (System_String_o *)*v5;
    }
    return System_Int32__ToString((int32_t)&v7, 0);
  }
  if ( v4 == 1 )
  {
    v5 = &StringLiteral_26746/*"アーツ"*/;
    return (System_String_o *)*v5;
  }
  if ( v4 != 2 )
    return System_Int32__ToString((int32_t)&v7, 0);
  v5 = &StringLiteral_26778/*"バスター"*/;
  return (System_String_o *)*v5;
}


void MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _BOOL4 show; // w8
  char *normal; // x0
  System_String_o *TypeName; // x20
  struct BattleActionData_o *actionData; // x8
  int32_t commandType; // w10
  int v9; // w9
  int32_t *p_type; // x8
  MotionInfo_c *v11; // x8
  System_String_o *v12; // x21
  MotionInfo_c *v13; // x0
  System_String_o *VoiceServantId_k__BackingField; // x21
  System_String_o *NewLine; // x0
  System_String_o *v16; // x0
  MotionInfo_c *v17; // x0
  int v18; // w8
  System_String_o **v19; // x9
  System_String_o *v20; // x22
  MotionInfo_c *v21; // x0
  System_String_o *VoiceId_k__BackingField; // x23
  System_String_o *v23; // x0
  System_String_o *v24; // x22
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  char *v31; // x21
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  int32_t v38; // w1
  __int64 v39; // x1
  MotionInfo_c *v40; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  int32_t v53; // w1
  __int64 v54; // x1
  MotionInfo_c *v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  System_String_o *v68; // x2
  System_String_o *v69; // x3
  int32_t v70; // w4
  int32_t v71; // w5
  bool v72; // w6
  bool v73; // w7
  int32_t v74; // w1
  __int64 v75; // x1
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  __int64 v82; // x1
  System_String_o *v83; // x22
  __int64 v84; // x21
  System_String_o *v85; // x2
  System_String_o *v86; // x3
  int32_t v87; // w4
  int32_t v88; // w5
  bool v89; // w6
  bool v90; // w7
  System_String_o *v91; // x2
  System_String_o *v92; // x3
  int32_t v93; // w4
  int32_t v94; // w5
  bool v95; // w6
  bool v96; // w7
  int32_t v97; // w1
  System_String_o *v98; // x2
  System_String_o *v99; // x3
  int32_t v100; // w4
  int32_t v101; // w5
  bool v102; // w6
  bool v103; // w7
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  int32_t v130; // w1
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  System_String_o *v149; // x2
  System_String_o *v150; // x3
  int32_t v151; // w4
  int32_t v152; // w5
  bool v153; // w6
  bool v154; // w7
  System_String_o *v155; // x2
  System_String_o *v156; // x3
  int32_t v157; // w4
  int32_t v158; // w5
  bool v159; // w6
  bool v160; // w7
  int32_t v161; // w1
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  System_String_o *v168; // x2
  System_String_o *v169; // x3
  int32_t v170; // w4
  int32_t v171; // w5
  bool v172; // w6
  bool v173; // w7
  System_String_o *v174; // x2
  System_String_o *v175; // x3
  int32_t v176; // w4
  int32_t v177; // w5
  bool v178; // w6
  bool v179; // w7
  System_String_o *v180; // x2
  System_String_o *v181; // x3
  int32_t v182; // w4
  int32_t v183; // w5
  bool v184; // w6
  bool v185; // w7
  System_String_o *v186; // x2
  System_String_o *v187; // x3
  int32_t v188; // w4
  int32_t v189; // w5
  bool v190; // w6
  bool v191; // w7
  int32_t v192; // w1
  System_String_o *v193; // x2
  System_String_o *v194; // x3
  int32_t v195; // w4
  int32_t v196; // w5
  bool v197; // w6
  bool v198; // w7
  System_String_o *v199; // x2
  System_String_o *v200; // x3
  int32_t v201; // w4
  int32_t v202; // w5
  bool v203; // w6
  bool v204; // w7
  System_String_o *v205; // x2
  System_String_o *v206; // x3
  int32_t v207; // w4
  int32_t v208; // w5
  bool v209; // w6
  bool v210; // w7
  System_String_o *v211; // x2
  System_String_o *v212; // x3
  int32_t v213; // w4
  int32_t v214; // w5
  bool v215; // w6
  bool v216; // w7
  Il2CppObject *v217; // x21
  int32_t height; // w22
  __int64 v219; // x1
  float v220; // s8
  struct UnityEngine_GUIStyle_o *labelStyle; // x8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  System_String_o *v224; // x2
  System_String_o *v225; // x3
  int32_t v226; // w4
  int32_t v227; // w5
  bool v228; // w6
  bool v229; // w7
  float v230; // s13
  float v231; // s10
  int v232; // w27
  float v233; // s8
  float v234; // s9
  float v235; // s11
  float width; // s12
  __int64 v237; // x1
  int32_t v238; // w22
  float v239; // s11
  Il2CppObject *v240; // x0
  System_String_o *v241; // x0
  __int64 v242; // x1
  UnityEngine_GUIStyle_o *v243; // x21
  System_String_o *v244; // x22
  _BOOL4 isLogAreaShow; // w22
  Il2CppObject *v246; // x1
  Il2CppObject **v247; // x9
  __int64 v248; // x1
  System_String_o *v249; // x21
  bool v250; // w22
  Il2CppObject *v251; // x0
  __int64 v252; // x1
  System_String_o *v253; // x21
  __int64 v254; // x1
  MotionInfo_c *v255; // x0
  float v256; // s11
  Il2CppObject *v257; // x0
  __int64 v258; // x1
  System_String_o *v259; // x21
  __int64 v260; // x1
  MotionInfo_c *v261; // x0
  Il2CppObject *v262; // x0
  __int64 v263; // x1
  System_String_o *v264; // x21
  __int64 v265; // x1
  MotionInfo_c *v266; // x0
  Il2CppObject *v267; // x0
  __int64 v268; // x1
  System_String_o *v269; // x21
  __int64 v270; // x1
  int32_t v271; // w21
  System_Math_c *v272; // x0
  Il2CppObject *v273; // x21
  Il2CppObject *v274; // x22
  Il2CppObject *v275; // x0
  __int64 v276; // x1
  System_String_o *v277; // x21
  Il2CppObject *v278; // x0
  System_String_o *v279; // x0
  int32_t v280; // w21
  System_Math_c *v281; // x0
  Il2CppObject *v282; // x0
  System_String_o *v283; // x0
  __int64 v284; // x1
  UnityEngine_GUIStyle_o *v285; // x20
  System_String_o *v286; // x21
  float v287; // s10
  float v288; // s9
  __int64 v289; // x1
  int32_t v290; // w8
  MotionInfo_c *v291; // x0
  float v292; // s11
  struct MotionInfo_StaticFields *v293; // x8
  UnityEngine_Vector2_o v294; // x1
  UnityEngine_Vector2_o v295; // kr00_8
  MotionInfo_c *v296; // x8
  MotionInfo___c_c *v297; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  struct MotionInfo___c_StaticFields *v299; // x8
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v301; // x22
  struct MotionInfo___c_StaticFields *v302; // x0
  System_String_o *v303; // x2
  System_String_o *v304; // x3
  int32_t v305; // w4
  int32_t v306; // w5
  bool v307; // w6
  bool v308; // w7
  __int64 v309; // x8
  char *v310; // x20
  __int64 v311; // x9
  int *v312; // x10
  __int64 v313; // x0
  __int64 v314; // x0
  __int64 v315; // x1
  __int64 v316; // x20
  int v317; // w26
  __int64 v318; // x8
  __int64 v319; // x9
  int *v320; // x10
  __int64 v321; // x0
  __int64 v322; // x0
  __int64 v323; // x1
  __int64 v324; // x20
  __int64 v325; // x8
  __int64 v326; // x9
  int *v327; // x10
  __int64 v328; // x0
  __int64 v329; // x21
  __int64 v330; // x0
  __int64 v331; // x1
  System_String_o *v332; // x2
  System_String_o *v333; // x3
  int32_t v334; // w4
  int32_t v335; // w5
  bool v336; // w6
  bool v337; // w7
  __int64 v338; // x20
  int32_t v339; // w1
  float v340; // s0
  System_String_o *v341; // x0
  System_String_o *v342; // x2
  System_String_o *v343; // x3
  int32_t v344; // w4
  int32_t v345; // w5
  bool v346; // w6
  bool v347; // w7
  __int64 v348; // x0
  System_String_o *v349; // x2
  System_String_o *v350; // x3
  int32_t v351; // w4
  int32_t v352; // w5
  bool v353; // w6
  bool v354; // w7
  int32_t v355; // w1
  __int64 v356; // x0
  System_String_o *v357; // x2
  System_String_o *v358; // x3
  int32_t v359; // w4
  int32_t v360; // w5
  bool v361; // w6
  bool v362; // w7
  __int64 v363; // x0
  System_String_o *v364; // x2
  System_String_o *v365; // x3
  int32_t v366; // w4
  int32_t v367; // w5
  bool v368; // w6
  bool v369; // w7
  int32_t v370; // w1
  __int64 v371; // x1
  System_String_o *v372; // x20
  __int64 v373; // x21
  __int64 v374; // x8
  __int64 v375; // x9
  int *v376; // x10
  __int64 v377; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-E0h]
  bool v379; // [xsp+14h] [xbp-CCh]
  _QWORD v380[2]; // [xsp+18h] [xbp-C8h] BYREF
  int v381; // [xsp+2Ch] [xbp-B4h] BYREF
  int v382; // [xsp+30h] [xbp-B0h] BYREF
  int32_t klass_high; // [xsp+34h] [xbp-ACh] BYREF
  __int64 v384; // [xsp+38h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+44h] [xbp-9Ch] BYREF
  UnityEngine_Color_o v386; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v387; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v388; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v389; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v390; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v391; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v392; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v393; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v394; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v395; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v396; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v397; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v398; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_5937B4C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_SelectMany_List_string___string___);
    sub_21FFC50(&System_Func_List_string___IEnumerable_string___TypeInfo);
    sub_21FFC50(&UnityEngine_GUIStyle_TypeInfo);
    sub_21FFC50(&UnityEngine_GUI_TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&MotionInfo_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&Method_MotionInfo___c__OnGUI_b__46_0__);
    sub_21FFC50(&MotionInfo___c_TypeInfo);
    sub_21FFC50(&StringLiteral_1805/*"<size={0}>+</size>"*/);
    sub_21FFC50(&StringLiteral_26729/*"【モーションID】"*/);
    sub_21FFC50(&StringLiteral_26728/*"【ボイス・SE】"*/);
    sub_21FFC50(&StringLiteral_1809/*"<size={0}>▲</size>"*/);
    sub_21FFC50(&StringLiteral_15942/*"VoiceID : "*/);
    sub_21FFC50(&StringLiteral_26730/*"【名前】"*/);
    sub_21FFC50(&StringLiteral_354/*" 確率 / 合計 : "*/);
    sub_21FFC50(&StringLiteral_1812/*"<size={0}>ログ消去</size>"*/);
    sub_21FFC50(&StringLiteral_1804/*"<size="*/);
    sub_21FFC50(&StringLiteral_26727/*"【カード属性】"*/);
    sub_21FFC50(&StringLiteral_1202/*"0.00"*/);
    sub_21FFC50(&StringLiteral_1811/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/);
    sub_21FFC50(&StringLiteral_160/*" / "*/);
    sub_21FFC50(&StringLiteral_193/*" SEID : "*/);
    sub_21FFC50(&StringLiteral_26707/*"▶ ログ非表示"*/);
    sub_21FFC50(&StringLiteral_1810/*"<size={0}>▼</size>"*/);
    sub_21FFC50(&StringLiteral_1807/*"<size={0}>{1}/{2}</size>"*/);
    sub_21FFC50(&StringLiteral_1808/*"<size={0}>{1}</size>"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_353/*" 分類 : "*/);
    sub_21FFC50(&StringLiteral_1606/*"</size>"*/);
    sub_21FFC50(&StringLiteral_1830/*">"*/);
    sub_21FFC50(&StringLiteral_13246/*"ServantID : "*/);
    sub_21FFC50(&StringLiteral_26708/*"◀ ログ表示　"*/);
    sub_21FFC50(&StringLiteral_1806/*"<size={0}>-</size>"*/);
    byte_5937B4C = 1;
  }
  show = this->fields.show;
  *(System_String_c **)((char *)&format.klass + 4) = 0;
  LODWORD(format.klass) = 0;
  v384 = 0;
  if ( show )
  {
    normal = (char *)MotionInfo_TypeInfo;
    LODWORD(format.monitor) = 0;
    TypeName = (System_String_o *)StringLiteral_1/*""*/;
    if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
      normal = (char *)MotionInfo_TypeInfo;
    }
    actionData = *(struct BattleActionData_o **)(*((_QWORD *)normal + 23) + 8LL);
    if ( actionData )
    {
      if ( !*((_DWORD *)normal + 57) )
      {
        j_il2cpp_runtime_class_init_0(normal, method);
        normal = (char *)MotionInfo_TypeInfo;
        actionData = MotionInfo_TypeInfo->static_fields->actionData;
        if ( !actionData )
          goto LABEL_208;
      }
      commandType = actionData->fields.commandType;
      v9 = *((_DWORD *)normal + 57);
      LODWORD(format.monitor) = actionData->fields.motionId;
      if ( commandType == -1 )
      {
        if ( !v9 )
        {
          j_il2cpp_runtime_class_init_0(normal, method);
          actionData = MotionInfo_TypeInfo->static_fields->actionData;
          if ( !actionData )
            goto LABEL_208;
        }
        p_type = &actionData->fields.type;
      }
      else
      {
        if ( !v9 )
        {
          j_il2cpp_runtime_class_init_0(normal, method);
          actionData = MotionInfo_TypeInfo->static_fields->actionData;
          if ( !actionData )
            goto LABEL_208;
        }
        p_type = &actionData->fields.commandType;
      }
      TypeName = MotionInfo__GetTypeName((MotionInfo_o *)normal, *p_type, v2);
    }
    if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    if ( !byte_5937BC7 )
    {
      sub_21FFC50(&MotionInfo_TypeInfo);
      byte_5937BC7 = 1;
    }
    v11 = MotionInfo_TypeInfo;
    if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
      v11 = MotionInfo_TypeInfo;
    }
    if ( v11->static_fields->_IsSe_k__BackingField )
    {
      v12 = (System_String_o *)StringLiteral_1/*""*/;
    }
    else
    {
      if ( !*(&v11->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v11, method);
      if ( !byte_5937BC8 )
      {
        sub_21FFC50(&MotionInfo_TypeInfo);
        byte_5937BC8 = 1;
      }
      v13 = MotionInfo_TypeInfo;
      if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
        v13 = MotionInfo_TypeInfo;
      }
      VoiceServantId_k__BackingField = v13->static_fields->_VoiceServantId_k__BackingField;
      NewLine = System_Environment__get_NewLine(0);
      v16 = System_String__Concat_75481624(
              (System_String_o *)StringLiteral_13246/*"ServantID : "*/,
              VoiceServantId_k__BackingField,
              NewLine,
              0);
      v11 = MotionInfo_TypeInfo;
      v12 = v16;
    }
    if ( !*(&v11->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v11, method);
    if ( !byte_5937BC7 )
    {
      sub_21FFC50(&MotionInfo_TypeInfo);
      byte_5937BC7 = 1;
    }
    v17 = MotionInfo_TypeInfo;
    v18 = *(&MotionInfo_TypeInfo->_2.cctor_finished + 1);
    if ( !v18 )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
      v17 = MotionInfo_TypeInfo;
      v18 = *(&MotionInfo_TypeInfo->_2.cctor_finished + 1);
    }
    if ( v17->static_fields->_IsSe_k__BackingField )
      v19 = (System_String_o **)&StringLiteral_193/*" SEID : "*/;
    else
      v19 = (System_String_o **)&StringLiteral_15942/*"VoiceID : "*/;
    v20 = *v19;
    if ( !v18 )
      j_il2cpp_runtime_class_init_0(v17, method);
    if ( !byte_5937BC9 )
    {
      sub_21FFC50(&MotionInfo_TypeInfo);
      byte_5937BC9 = 1;
    }
    v21 = MotionInfo_TypeInfo;
    if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
      v21 = MotionInfo_TypeInfo;
    }
    VoiceId_k__BackingField = v21->static_fields->_VoiceId_k__BackingField;
    v23 = System_Environment__get_NewLine(0);
    v24 = System_String__Concat_75483552(v12, v20, VoiceId_k__BackingField, v23, 0);
    normal = (char *)sub_21FFD10(string___TypeInfo, 8);
    if ( normal )
    {
      v31 = normal;
      if ( !*((_DWORD *)normal + 6) )
        goto LABEL_200;
      *((_QWORD *)normal + 4) = v24;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(normal + 32), (int32_t)v24, v25, v26, v27, v28, v29, v30);
      if ( (*((_DWORD *)v31 + 6) & 0xFFFFFFFE) == 0 )
        goto LABEL_200;
      v38 = StringLiteral_354/*" 確率 / 合計 : "*/;
      *((_QWORD *)v31 + 5) = StringLiteral_354/*" 確率 / 合計 : "*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 40), v38, v32, v33, v34, v35, v36, v37);
      if ( !byte_5937BCA )
      {
        sub_21FFC50(&MotionInfo_TypeInfo);
        byte_5937BCA = 1;
      }
      v40 = MotionInfo_TypeInfo;
      if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v39);
        v40 = MotionInfo_TypeInfo;
      }
      *(float *)&format.klass = v40->static_fields->_VoiceWeight_k__BackingField;
      normal = (char *)System_Single__ToString_77012896(
                         *(float *)&format.klass,
                         &format,
                         (const MethodInfo *)StringLiteral_1202/*"0.00"*/);
      if ( *((_DWORD *)v31 + 6) <= 2u )
        goto LABEL_200;
      *((_QWORD *)v31 + 6) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 48), (int32_t)normal, v41, v42, v43, v44, v45, v46);
      if ( (*((_DWORD *)v31 + 6) & 0xFFFFFFFC) == 0 )
        goto LABEL_200;
      v53 = StringLiteral_160/*" / "*/;
      *((_QWORD *)v31 + 7) = StringLiteral_160/*" / "*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 56), v53, v47, v48, v49, v50, v51, v52);
      if ( !byte_5937BCB )
      {
        sub_21FFC50(&MotionInfo_TypeInfo);
        byte_5937BCB = 1;
      }
      v55 = MotionInfo_TypeInfo;
      if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v54);
        v55 = MotionInfo_TypeInfo;
      }
      *(float *)&format.klass = v55->static_fields->_VoiceTotalWeight_k__BackingField;
      normal = (char *)System_Single__ToString_77012896(
                         *(float *)&format.klass,
                         &format,
                         (const MethodInfo *)StringLiteral_1202/*"0.00"*/);
      if ( *((_DWORD *)v31 + 6) <= 4u )
        goto LABEL_200;
      *((_QWORD *)v31 + 8) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 64), (int32_t)normal, v56, v57, v58, v59, v60, v61);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *((_DWORD *)v31 + 6) <= 5u )
        goto LABEL_200;
      *((_QWORD *)v31 + 9) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 72), (int32_t)normal, v62, v63, v64, v65, v66, v67);
      if ( *((_DWORD *)v31 + 6) <= 6u )
        goto LABEL_200;
      v74 = StringLiteral_353/*" 分類 : "*/;
      *((_QWORD *)v31 + 10) = StringLiteral_353/*" 分類 : "*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 80), v74, v68, v69, v70, v71, v72, v73);
      if ( !byte_5937BCC )
      {
        sub_21FFC50(&MotionInfo_TypeInfo);
        byte_5937BCC = 1;
      }
      normal = (char *)MotionInfo_TypeInfo;
      if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v75);
        normal = (char *)MotionInfo_TypeInfo;
      }
      if ( (*((_DWORD *)v31 + 6) & 0xFFFFFFF8) == 0 )
        goto LABEL_200;
      v82 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
      *((_QWORD *)v31 + 11) = v82;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v31 + 88), v82, v76, v77, v78, v79, v80, v81);
      v83 = System_String__Concat_75483816((System_String_array *)v31, 0);
      v84 = sub_21FFD10(string___TypeInfo, 21);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( !v84 )
        goto LABEL_208;
      if ( !*(_DWORD *)(v84 + 24) )
        goto LABEL_200;
      *(_QWORD *)(v84 + 32) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 32), (int32_t)normal, v85, v86, v87, v88, v89, v90);
      if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFFE) == 0 )
        goto LABEL_200;
      v97 = StringLiteral_26730/*"【名前】"*/;
      *(_QWORD *)(v84 + 40) = StringLiteral_26730/*"【名前】"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 40), v97, v91, v92, v93, v94, v95, v96);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 2u )
        goto LABEL_200;
      *(_QWORD *)(v84 + 48) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 48), (int32_t)normal, v98, v99, v100, v101, v102, v103);
      if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFFC) == 0 )
        goto LABEL_200;
      static_fields = MotionInfo_TypeInfo->static_fields;
      svtName = static_fields->svtName;
      *(_QWORD *)(v84 + 56) = static_fields->svtName;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 56), (int32_t)svtName, v104, v105, v106, v107, v108, v109);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 4u )
        goto LABEL_200;
      *(_QWORD *)(v84 + 64) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 64), (int32_t)normal, v112, v113, v114, v115, v116, v117);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 5u )
        goto LABEL_200;
      *(_QWORD *)(v84 + 72) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 72), (int32_t)normal, v118, v119, v120, v121, v122, v123);
      if ( *(_DWORD *)(v84 + 24) <= 6u )
        goto LABEL_200;
      v130 = StringLiteral_26729/*"【モーションID】"*/;
      *(_QWORD *)(v84 + 80) = StringLiteral_26729/*"【モーションID】"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 80), v130, v124, v125, v126, v127, v128, v129);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFF8) == 0 )
        goto LABEL_200;
      *(_QWORD *)(v84 + 88) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 88), (int32_t)normal, v131, v132, v133, v134, v135, v136);
      normal = (char *)System_Int32__ToString((int32_t)&format.monitor, 0);
      if ( *(_DWORD *)(v84 + 24) <= 8u )
        goto LABEL_200;
      *(_QWORD *)(v84 + 96) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 96), (int32_t)normal, v137, v138, v139, v140, v141, v142);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 9u )
        goto LABEL_200;
      *(_QWORD *)(v84 + 104) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 104), (int32_t)normal, v143, v144, v145, v146, v147, v148);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 0xAu )
        goto LABEL_200;
      *(_QWORD *)(v84 + 112) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 112), (int32_t)normal, v149, v150, v151, v152, v153, v154);
      if ( *(_DWORD *)(v84 + 24) <= 0xBu )
        goto LABEL_200;
      v161 = StringLiteral_26727/*"【カード属性】"*/;
      *(_QWORD *)(v84 + 120) = StringLiteral_26727/*"【カード属性】"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 120), v161, v155, v156, v157, v158, v159, v160);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 0xCu )
        goto LABEL_200;
      *(_QWORD *)(v84 + 128) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 128), (int32_t)normal, v162, v163, v164, v165, v166, v167);
      if ( *(_DWORD *)(v84 + 24) <= 0xDu )
        goto LABEL_200;
      *(_QWORD *)(v84 + 136) = TypeName;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)(v84 + 136),
        (int32_t)TypeName,
        v168,
        v169,
        v170,
        v171,
        v172,
        v173);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 0xEu )
        goto LABEL_200;
      *(_QWORD *)(v84 + 144) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 144), (int32_t)normal, v174, v175, v176, v177, v178, v179);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( (*(_DWORD *)(v84 + 24) & 0xFFFFFFF0) == 0 )
        goto LABEL_200;
      *(_QWORD *)(v84 + 152) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 152), (int32_t)normal, v180, v181, v182, v183, v184, v185);
      if ( *(_DWORD *)(v84 + 24) <= 0x10u )
        goto LABEL_200;
      v192 = StringLiteral_26728/*"【ボイス・SE】"*/;
      *(_QWORD *)(v84 + 160) = StringLiteral_26728/*"【ボイス・SE】"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 160), v192, v186, v187, v188, v189, v190, v191);
      normal = (char *)System_Environment__get_NewLine(0);
      if ( *(_DWORD *)(v84 + 24) <= 0x11u )
        goto LABEL_200;
      *(_QWORD *)(v84 + 168) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 168), (int32_t)normal, v193, v194, v195, v196, v197, v198);
      if ( *(_DWORD *)(v84 + 24) <= 0x12u
        || (*(_QWORD *)(v84 + 176) = v83,
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v84 + 176),
              (int32_t)v83,
              v199,
              v200,
              v201,
              v202,
              v203,
              v204),
            normal = (char *)System_Environment__get_NewLine(0),
            *(_DWORD *)(v84 + 24) <= 0x13u)
        || (*(_QWORD *)(v84 + 184) = normal,
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v84 + 184),
              (int32_t)normal,
              v205,
              v206,
              v207,
              v208,
              v209,
              v210),
            normal = (char *)System_Environment__get_NewLine(0),
            *(_DWORD *)(v84 + 24) <= 0x14u) )
      {
LABEL_200:
        sub_21FFED4(normal);
      }
      *(_QWORD *)(v84 + 192) = normal;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v84 + 192), (int32_t)normal, v211, v212, v213, v214, v215, v216);
      v217 = (Il2CppObject *)System_String__Concat_75483816((System_String_array *)v84, 0);
      height = UnityEngine_Screen__get_height(0);
      v220 = vcvts_n_f32_s32(UnityEngine_Screen__get_width(0), 0xAu) * 0.7;
      p_labelStyle = &this->fields.labelStyle;
      labelStyle = this->fields.labelStyle;
      *((float *)&format.klass + 1) = v220 * 17.5;
      if ( !labelStyle )
      {
        if ( !*(&UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo, v219);
        none = UnityEngine_GUIStyle__get_none(0);
        *p_labelStyle = none;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.labelStyle,
          (int32_t)none,
          v224,
          v225,
          v226,
          v227,
          v228,
          v229);
        normal = (char *)*p_labelStyle;
        if ( !*p_labelStyle )
          goto LABEL_208;
        normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0);
        if ( !normal )
          goto LABEL_208;
        v386.fields.r = 1.0;
        v386.fields.g = 1.0;
        v386.fields.b = 1.0;
        v386.fields.a = 1.0;
        UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v386, 0);
      }
      v230 = vcvts_n_f32_s32(height, 2u);
      v231 = v220 * 40.0;
      v232 = 3;
      v233 = v220 * 250.0;
      v234 = (float)UnityEngine_Screen__get_width(0) - v233;
      do
      {
        v235 = v234;
        width = v233;
        if ( this->fields.isLogAreaShow )
        {
          v235 = 0.0;
          width = (float)UnityEngine_Screen__get_width(0);
        }
        v238 = UnityEngine_Screen__get_height(0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v237);
        v387.fields.m_Height = (float)v238;
        v387.fields.m_YMin = 0.0;
        v387.fields.m_XMin = v235;
        v387.fields.m_Width = width;
        UnityEngine_GUI__Box(v387, (System_String_o *)StringLiteral_1/*""*/, 0);
        --v232;
      }
      while ( v232 );
      normal = (char *)*p_labelStyle;
      if ( *p_labelStyle )
      {
        UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0);
        LODWORD(v380[0]) = HIDWORD(format.klass);
        v240 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
        v241 = System_String__Format_75484576((System_String_o *)StringLiteral_1808/*"<size={0}>{1}</size>"*/, v240, v217, 0);
        v243 = *p_labelStyle;
        v244 = v241;
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v242);
        v388.fields.m_YMin = 0.0;
        v388.fields.m_XMin = v234;
        v388.fields.m_Width = v233;
        v388.fields.m_Height = v230 + v230;
        UnityEngine_GUI__Label_83428356(v388, v244, v243, 0);
        isLogAreaShow = this->fields.isLogAreaShow;
        v239 = v230 + v230;
        klass_high = HIDWORD(format.klass);
        v246 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &klass_high);
        if ( this->fields.isLogAreaShow )
          v247 = (Il2CppObject **)&StringLiteral_26707/*"▶ ログ非表示"*/;
        else
          v247 = (Il2CppObject **)&StringLiteral_26708/*"◀ ログ表示　"*/;
        v249 = System_String__Format_75484576((System_String_o *)StringLiteral_1808/*"<size={0}>{1}</size>"*/, v246, *v247, 0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v248);
        v389.fields.m_XMin = v234;
        v389.fields.m_YMin = v239 + 10.0;
        v389.fields.m_Width = v233 * 0.5;
        v389.fields.m_Height = v231;
        v250 = isLogAreaShow;
        if ( UnityEngine_GUI__Button(v389, v249, 0) )
          v250 = !this->fields.isLogAreaShow;
        LODWORD(v380[0]) = HIDWORD(format.klass);
        v251 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
        v253 = System_String__Format((System_String_o *)StringLiteral_1812/*"<size={0}>ログ消去</size>"*/, v251, 0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v252);
        v390.fields.m_XMin = (float)(v233 * 0.5) + v234;
        v390.fields.m_YMin = v239 + 10.0;
        v390.fields.m_Width = v233 * 0.5;
        v390.fields.m_Height = v231;
        if ( UnityEngine_GUI__Button(v390, v253, 0) )
        {
          v255 = MotionInfo_TypeInfo;
          if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v254);
          MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v255);
        }
        if ( !this->fields.isLogAreaShow )
        {
LABEL_198:
          this->fields.isLogAreaShow = v250;
          return;
        }
        v256 = v231 + 10.0;
        LODWORD(v380[0]) = HIDWORD(format.klass);
        v257 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
        v259 = System_String__Format((System_String_o *)StringLiteral_1809/*"<size={0}>▲</size>"*/, v257, 0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v258);
        v391.fields.m_XMin = v234;
        v391.fields.m_YMin = (float)((float)(v230 + v230) + 10.0) + (float)(v231 + 10.0);
        v391.fields.m_Width = v231;
        v391.fields.m_Height = v231;
        if ( UnityEngine_GUI__RepeatButton(v391, v259, 0) )
        {
          v261 = MotionInfo_TypeInfo;
          if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v260);
            v261 = MotionInfo_TypeInfo;
          }
          v261->static_fields->scrollPosition.fields.y = v261->static_fields->scrollPosition.fields.y
                                                       + (float)((float)this->fields.scrollSpeed * -10.0);
        }
        LODWORD(v380[0]) = HIDWORD(format.klass);
        v262 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
        v264 = System_String__Format((System_String_o *)StringLiteral_1810/*"<size={0}>▼</size>"*/, v262, 0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v263);
        v392.fields.m_XMin = v231 + v234;
        v392.fields.m_YMin = (float)((float)(v230 + v230) + 10.0) + (float)(v231 + 10.0);
        v392.fields.m_Width = v231;
        v392.fields.m_Height = v231;
        if ( UnityEngine_GUI__RepeatButton(v392, v264, 0) )
        {
          v266 = MotionInfo_TypeInfo;
          if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v265);
            v266 = MotionInfo_TypeInfo;
          }
          v266->static_fields->scrollPosition.fields.y = v266->static_fields->scrollPosition.fields.y
                                                       + (float)((float)this->fields.scrollSpeed * 10.0);
        }
        LODWORD(v380[0]) = HIDWORD(format.klass);
        v267 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
        v269 = System_String__Format((System_String_o *)StringLiteral_1806/*"<size={0}>-</size>"*/, v267, 0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v268);
        v393.fields.m_XMin = v231 + (float)(v231 + v234);
        v393.fields.m_YMin = (float)((float)(v230 + v230) + 10.0) + (float)(v231 + 10.0);
        v393.fields.m_Width = v231;
        v393.fields.m_Height = v231;
        if ( UnityEngine_GUI__Button(v393, v269, 0) )
        {
          v271 = this->fields.scrollSpeed - 1;
          v272 = System_Math_TypeInfo;
          this->fields.scrollSpeed = v271;
          if ( !*(&v272->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v272, v270);
          this->fields.scrollSpeed = System_Math__Max_76939956(v271, 1, 0);
        }
        v379 = v250;
        *(float *)v380 = *((float *)&format.klass + 1) * 0.9;
        v273 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
        klass_high = this->fields.scrollSpeed;
        v274 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &klass_high);
        v382 = 10;
        v275 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v382);
        v277 = System_String__Format_75484644((System_String_o *)StringLiteral_1807/*"<size={0}>{1}/{2}</size>"*/, v273, v274, v275, 0);
        if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v276);
        v394.fields.m_XMin = v231 + (float)(v231 + (float)(v231 + v234));
        v394.fields.m_YMin = (float)((float)(v230 + v230) + 10.0) + (float)(v231 + 10.0);
        v394.fields.m_Width = v231 + 10.0;
        v394.fields.m_Height = v231;
        UnityEngine_GUI__Box(v394, v277, 0);
        v381 = HIDWORD(format.klass);
        v278 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, &v381);
        v279 = System_String__Format((System_String_o *)StringLiteral_1805/*"<size={0}>+</size>"*/, v278, 0);
        v395.fields.m_XMin = v256 + (float)(v231 + (float)(v231 + (float)(v231 + v234)));
        v395.fields.m_YMin = (float)((float)(v230 + v230) + 10.0) + (float)(v231 + 10.0);
        v395.fields.m_Width = v231;
        v395.fields.m_Height = v231;
        if ( UnityEngine_GUI__Button(v395, v279, 0) )
        {
          v280 = this->fields.scrollSpeed + 1;
          v281 = System_Math_TypeInfo;
          this->fields.scrollSpeed = v280;
          if ( !*(&v281->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(v281, method);
          this->fields.scrollSpeed = System_Math__Min_76940292(v280, 10, 0);
        }
        normal = (char *)*p_labelStyle;
        if ( *p_labelStyle )
        {
          UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0);
          LODWORD(v380[0]) = HIDWORD(format.klass);
          v282 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C0A0, v380);
          v283 = System_String__Format((System_String_o *)StringLiteral_1811/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v282, 0);
          v285 = *p_labelStyle;
          v286 = v283;
          if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v284);
          v396.fields.m_XMin = v234;
          v396.fields.m_YMin = v256 + (float)((float)((float)(v230 + v230) + 10.0) + (float)(v231 + 10.0));
          v396.fields.m_Width = v233;
          v396.fields.m_Height = 40.0;
          UnityEngine_GUI__Label_83428356(v396, v286, v285, 0);
          v287 = (float)((float)UnityEngine_Screen__get_width(0) - v233) + -10.0;
          v288 = *((float *)&format.klass + 1) + 10.0;
          v290 = UnityEngine_Screen__get_height(0);
          v291 = MotionInfo_TypeInfo;
          v292 = (float)v290;
          if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v289);
            v291 = MotionInfo_TypeInfo;
          }
          v293 = v291->static_fields;
          v397.fields.m_YMin = 0.0;
          v397.fields.m_Height = v292;
          *(_QWORD *)&viewRect.fields.m_XMin = 0;
          v397.fields.m_XMin = 0.0;
          viewRect.fields.m_Width = v287 + -20.0;
          viewRect.fields.m_Height = v288 * (float)v293->voicePlayLogLineSize;
          v397.fields.m_Width = v287;
          v295 = UnityEngine_GUI__BeginScrollView(v397, v293->scrollPosition, viewRect, 0);
          v296 = MotionInfo_TypeInfo;
          v297 = MotionInfo___c_TypeInfo;
          MotionInfo_TypeInfo->static_fields->scrollPosition = v295;
          voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v296->static_fields->voicePlaybackLogList;
          if ( !*(&v297->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v297, v294);
            v297 = MotionInfo___c_TypeInfo;
          }
          v299 = v297->static_fields;
          _9__46_0 = (System_Func_object__object__o *)v299->__9__46_0;
          if ( !_9__46_0 )
          {
            if ( !*(&v297->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v297, v294);
              v299 = MotionInfo___c_TypeInfo->static_fields;
            }
            v301 = (Il2CppObject *)v299->__9;
            _9__46_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_List_string___IEnumerable_string___TypeInfo);
            System_Func_object__object____ctor(_9__46_0, v301, Method_MotionInfo___c__OnGUI_b__46_0__, 0);
            v302 = MotionInfo___c_TypeInfo->static_fields;
            v302->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v302->__9__46_0,
              (int32_t)_9__46_0,
              v303,
              v304,
              v305,
              v306,
              v307,
              v308);
          }
          normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                             voicePlaybackLogList,
                             (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                             (const MethodInfo_38607E4 *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
          if ( normal )
          {
            v309 = *(_QWORD *)normal;
            v310 = normal;
            v311 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
            if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
            {
              v312 = (int *)(*(_QWORD *)(v309 + 176) + 8LL);
              while ( *((System_Collections_Generic_IEnumerable_string__c **)v312 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
              {
                --v311;
                v312 += 4;
                if ( !v311 )
                  goto LABEL_159;
              }
              v313 = v309 + 16LL * *v312 + 312;
            }
            else
            {
LABEL_159:
              v313 = sub_2237E2C(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
            }
            v314 = (*(__int64 (__fastcall **)(char *, _QWORD))v313)(v310, *(_QWORD *)(v313 + 8));
            v384 = v314;
            v380[0] = 0;
            v380[1] = &v384;
            if ( !v314 )
LABEL_186:
              sub_21FFECC(v314, v315);
            v316 = v314;
            v317 = 0;
            while ( 1 )
            {
              v318 = *(_QWORD *)v316;
              v319 = *(unsigned __int16 *)(*(_QWORD *)v316 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v316 + 302LL) )
              {
                v320 = (int *)(*(_QWORD *)(v318 + 176) + 8LL);
                while ( *((System_Collections_IEnumerator_c **)v320 - 1) != System_Collections_IEnumerator_TypeInfo )
                {
                  --v319;
                  v320 += 4;
                  if ( !v319 )
                    goto LABEL_167;
                }
                v321 = v318 + 16LL * *v320 + 312;
              }
              else
              {
LABEL_167:
                v321 = sub_2237E2C(v316, System_Collections_IEnumerator_TypeInfo, 0);
              }
              v322 = (*(__int64 (__fastcall **)(__int64, _QWORD))v321)(v316, *(_QWORD *)(v321 + 8));
              if ( (v322 & 1) == 0 )
                break;
              v324 = v384;
              if ( !v384 )
                sub_21FFECC(v322, v323);
              v325 = *(_QWORD *)v384;
              v326 = *(unsigned __int16 *)(*(_QWORD *)v384 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v384 + 302LL) )
              {
                v327 = (int *)(*(_QWORD *)(v325 + 176) + 8LL);
                while ( *((System_Collections_Generic_IEnumerator_string__c **)v327 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
                {
                  --v326;
                  v327 += 4;
                  if ( !v326 )
                    goto LABEL_175;
                }
                v328 = v325 + 16LL * *v327 + 312;
              }
              else
              {
LABEL_175:
                v328 = sub_2237E2C(v384, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
              }
              v329 = (*(__int64 (__fastcall **)(__int64, _QWORD))v328)(v324, *(_QWORD *)(v328 + 8));
              v330 = sub_21FFD10(string___TypeInfo, 5);
              v338 = v330;
              if ( !v330 )
                sub_21FFECC(0, v331);
              if ( !*(_DWORD *)(v330 + 24) )
                sub_21FFED4(v330);
              v339 = StringLiteral_1804/*"<size="*/;
              *(_QWORD *)(v330 + 32) = StringLiteral_1804/*"<size="*/;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v330 + 32), v339, v332, v333, v334, v335, v336, v337);
              v341 = System_Single__ToString(v340, (const MethodInfo *)((char *)&format.klass + 4));
              if ( (*(_DWORD *)(v338 + 24) & 0xFFFFFFFE) == 0 )
                sub_21FFED4(v341);
              *(_QWORD *)(v338 + 40) = v341;
              sub_21FFBF4(
                (MissionNaviTransitionBoardItem_o *)(v338 + 40),
                (int32_t)v341,
                v342,
                v343,
                v344,
                v345,
                v346,
                v347);
              if ( *(_DWORD *)(v338 + 24) <= 2u )
                sub_21FFED4(v348);
              v355 = StringLiteral_1830/*">"*/;
              *(_QWORD *)(v338 + 48) = StringLiteral_1830/*">"*/;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v338 + 48), v355, v349, v350, v351, v352, v353, v354);
              if ( (*(_DWORD *)(v338 + 24) & 0xFFFFFFFC) == 0 )
                sub_21FFED4(v356);
              *(_QWORD *)(v338 + 56) = v329;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v338 + 56), v329, v357, v358, v359, v360, v361, v362);
              if ( *(_DWORD *)(v338 + 24) <= 4u )
                sub_21FFED4(v363);
              v370 = StringLiteral_1606/*"</size>"*/;
              *(_QWORD *)(v338 + 64) = StringLiteral_1606/*"</size>"*/;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v338 + 64), v370, v364, v365, v366, v367, v368, v369);
              v372 = System_String__Concat_75483816((System_String_array *)v338, 0);
              if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v371);
              v398.fields.m_Width = v287 + -20.0;
              v398.fields.m_Height = v288;
              v398.fields.m_YMin = v288 * (float)v317;
              v398.fields.m_XMin = 0.0;
              UnityEngine_GUI__Label(v398, v372, 0);
              v316 = v384;
              ++v317;
              if ( !v384 )
                goto LABEL_186;
            }
            v373 = v384;
            if ( v384 )
            {
              v374 = *(_QWORD *)v384;
              v375 = *(unsigned __int16 *)(*(_QWORD *)v384 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v384 + 302LL) )
              {
                v376 = (int *)(*(_QWORD *)(v374 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v376 - 1) != System_IDisposable_TypeInfo )
                {
                  --v375;
                  v376 += 4;
                  if ( !v375 )
                    goto LABEL_192;
                }
                v377 = v374 + 16LL * *v376 + 312;
              }
              else
              {
LABEL_192:
                v377 = sub_2237E2C(v384, System_IDisposable_TypeInfo, 0);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v377)(v373, *(_QWORD *)(v377 + 8));
            }
            if ( !*(&UnityEngine_GUI_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v323);
            UnityEngine_GUI__EndScrollView(0);
            v250 = v379;
            goto LABEL_198;
          }
        }
      }
    }
LABEL_208:
    sub_21FFECC(normal, method);
  }
}


void MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_String_o *v8; // x20
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_String_o *v18; // x20
  MotionInfo_c *v19; // x0
  struct MotionInfo_StaticFields *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  MotionInfo_c *v28; // x0
  int v29; // w9
  struct System_String_o *v30; // x20
  int v31; // w9
  struct MotionInfo_StaticFields *v32; // x0
  __int64 v33; // x1
  MotionInfo_c *v34; // x0
  int v35; // w9

  if ( (byte_5937B4E & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5937B4E = 1;
  }
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
  v8 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_5937BCD )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCD = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v8;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int32_t)v8,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v18 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_5937BCE )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCE = 1;
  }
  v19 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v11);
    v19 = MotionInfo_TypeInfo;
  }
  v20 = v19->static_fields;
  v20->_VoiceId_k__BackingField = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v20->_VoiceId_k__BackingField,
    (int32_t)v18,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !byte_5937BCF )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BCF = 1;
  }
  v28 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v21);
    v28 = MotionInfo_TypeInfo;
  }
  v29 = (unsigned __int8)byte_5937BD0;
  v28->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !v29 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
    byte_5937BD0 = 1;
  }
  if ( !*(&v28->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v28, v21);
    v28 = MotionInfo_TypeInfo;
  }
  v30 = (struct System_String_o *)StringLiteral_1/*""*/;
  v31 = (unsigned __int8)byte_5937BD1;
  v28->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  if ( !v31 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
    byte_5937BD1 = 1;
  }
  if ( !*(&v28->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v28, v21);
    v28 = MotionInfo_TypeInfo;
  }
  v32 = v28->static_fields;
  v32->_VoiceType_k__BackingField = v30;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v32->_VoiceType_k__BackingField,
    (int32_t)v30,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  if ( !byte_5937BD2 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BD2 = 1;
  }
  v34 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v33);
    v34 = MotionInfo_TypeInfo;
  }
  v35 = (unsigned __int8)byte_5937BD3;
  v34->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !v35 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    v34 = MotionInfo_TypeInfo;
    byte_5937BD3 = 1;
  }
  if ( !*(&v34->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v34, v33);
    v34 = MotionInfo_TypeInfo;
  }
  v34->static_fields->_IsSe_k__BackingField = 0;
}


void MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B54 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B54 = 1;
  }
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
  if ( !byte_5937BD4 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937BD4 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  v2->static_fields->_IsRandom_k__BackingField = 0;
}


void MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x9
  int32_t size; // w2
  int v6; // w10

  if ( (byte_5937B53 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B53 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  static_fields = v2->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_21FFECC(v2, v1);
  size = voicePlaybackLogList->fields._size;
  v6 = voicePlaybackLogList->fields._version + 1;
  voicePlaybackLogList->fields._size = 0;
  voicePlaybackLogList->fields._version = v6;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)voicePlaybackLogList->fields._items, 0, size, 0);
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->voicePlayLogLineSize = 0;
}


void MotionInfo__SetActionData(BattleActionData_o *actionData, System_String_o *svtName, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5937B4B & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B4B = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, svtName);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->svtName = svtName;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MotionInfo_TypeInfo->static_fields,
    (int32_t)svtName,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->actionData,
    (int32_t)actionData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void MotionInfo__UpdateVoicePlaybackLogString(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x8
  struct MotionInfo_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  int32_t voicePlayLogLineSize; // w22
  System_Collections_Generic_List_object__o *v6; // x8
  MotionInfo_c *v7; // x0
  struct MotionInfo_StaticFields *v8; // x8
  int v9; // w9
  int32_t v10; // w22
  struct MotionInfo_StaticFields *v11; // x8
  int32_t v12; // w9

  if ( (byte_5937B52 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B52 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  static_fields = v2->static_fields;
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_24;
  if ( voicePlaybackLogList->fields._size < 1 )
    return;
  if ( !*(&v2->_2.cctor_finished + 1)
    && (j_il2cpp_runtime_class_init_0(v2, v1),
        static_fields = MotionInfo_TypeInfo->static_fields,
        (voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList) == 0)
    || (voicePlayLogLineSize = static_fields->voicePlayLogLineSize,
        (voicePlaybackLogList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                               voicePlaybackLogList,
                                                                               voicePlaybackLogList->fields._size - 1,
                                                                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0) )
  {
LABEL_24:
    sub_21FFECC(voicePlaybackLogList, v1);
  }
  v6 = voicePlaybackLogList;
  v7 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v6->fields._size + voicePlayLogLineSize;
  while ( 1 )
  {
    if ( !*(&v7->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v7, v1);
      v7 = MotionInfo_TypeInfo;
    }
    v8 = v7->static_fields;
    v9 = *(&v7->_2.cctor_finished + 1);
    v10 = v8->voicePlayLogLineSize;
    if ( v10 <= 499 )
      break;
    if ( !v9 )
    {
      j_il2cpp_runtime_class_init_0(v7, v1);
      v8 = MotionInfo_TypeInfo->static_fields;
      v10 = v8->voicePlayLogLineSize;
    }
    voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v8->voicePlaybackLogList;
    if ( !voicePlaybackLogList )
      goto LABEL_24;
    voicePlaybackLogList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                          voicePlaybackLogList,
                                                                          0,
                                                                          (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !voicePlaybackLogList )
      goto LABEL_24;
    v11 = MotionInfo_TypeInfo->static_fields;
    v12 = v10 - voicePlaybackLogList->fields._size;
    voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v11->voicePlaybackLogList;
    v11->voicePlayLogLineSize = v12;
    if ( !voicePlaybackLogList )
      goto LABEL_24;
    System_Collections_Generic_List_object___RemoveAt(
      voicePlaybackLogList,
      0,
      (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v7 = MotionInfo_TypeInfo;
  }
  if ( !v9 )
  {
    j_il2cpp_runtime_class_init_0(v7, v1);
    v10 = MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize;
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0) * v10);
}


bool MotionInfo__get_IsRandom(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B47 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B47 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_IsRandom_k__BackingField;
}


bool MotionInfo__get_IsSe(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B49 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B49 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_IsSe_k__BackingField;
}


System_String_o *MotionInfo__get_VoiceId(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B41 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B41 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceId_k__BackingField;
}


int32_t MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B45 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B45 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B3B & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B3B = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceServantId_k__BackingField;
}


float MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B3F & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B3F = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *MotionInfo__get_VoiceType(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B43 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B43 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceType_k__BackingField;
}


float MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_5937B3D & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B3D = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceWeight_k__BackingField;
}


void MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_5937B48 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B48 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsRandom_k__BackingField = value;
}


void MotionInfo__set_IsSe(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_5937B4A & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B4A = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsSe_k__BackingField = value;
}


void MotionInfo__set_VoiceId(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_5937B42 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B42 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_VoiceId_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_5937B46 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B46 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceIndex_k__BackingField = value;
}


void MotionInfo__set_VoiceServantId(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_5937B3C & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B3C = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_5937B40 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B40 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v2);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceTotalWeight_k__BackingField = value;
}


void MotionInfo__set_VoiceType(System_String_o *value, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_5937B44 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B44 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->_VoiceType_k__BackingField,
    (int32_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_5937B3E & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo_TypeInfo);
    byte_5937B3E = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !*(&MotionInfo_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v2);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceWeight_k__BackingField = value;
}


void MotionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937B56 & 1) == 0 )
  {
    sub_21FFC50(&MotionInfo___c_TypeInfo);
    byte_5937B56 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MotionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MotionInfo___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MotionInfo___c___ctor(MotionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_Collections_Generic_IEnumerable_string__o *MotionInfo___c___OnGUI_b__46_0(
        MotionInfo___c_o *this,
        System_Collections_Generic_List_string__o *list,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_string__o *)list;
}