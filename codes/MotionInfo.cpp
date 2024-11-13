void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v18; // x19
  struct MotionInfo_StaticFields *v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct MotionInfo_StaticFields *v26; // x8

  if ( (byte_4B156F7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string____ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_List_string___TypeInfo, v8, v9);
    sub_1BCA7E0(&MotionInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v12, v13);
    byte_4B156F7 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MotionInfo_TypeInfo->static_fields,
    (int64_t)StringLiteral_1/*""*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v14, v15);
    byte_4B108BA = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v18 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_List_string___TypeInfo,
                                                       v14,
                                                       v15,
                                                       v16);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v19 = MotionInfo_TypeInfo->static_fields;
  v19->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&v19->voicePlaybackLogList, (int64_t)v18, v20, v21, v22, v23, v24, v25);
  v26 = MotionInfo_TypeInfo->static_fields;
  *(_QWORD *)&v26->voicePlaybackLogMaxNum = 500LL;
  v26->scrollSpeed = 1;
}


void __fastcall MotionInfo___ctor(MotionInfo_o *this, const MethodInfo *method)
{
  this->fields.show = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MotionInfo__AddSeLog(System_String_o *seId, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  MotionInfo_c *v11; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  MotionInfo_c *v20; // x0
  int64_t v21; // x20
  struct MotionInfo_StaticFields *v22; // x0
  const MethodInfo *v23; // x0

  if ( (byte_4B156F1 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_11624/*"SE"*/, v9, v10);
    byte_4B156F1 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
  if ( !byte_4B15758 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B15758 = 1;
  }
  v11 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4B15759 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    v11 = MotionInfo_TypeInfo;
    byte_4B15759 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11, method);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4B15757 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    v11 = MotionInfo_TypeInfo;
    byte_4B15757 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11, method);
    v11 = MotionInfo_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceId_k__BackingField,
    (int64_t)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4B1575B )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v13, v14);
    byte_4B1575B = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v20->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4B1575C )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v13, v14);
    v20 = MotionInfo_TypeInfo;
    byte_4B1575C = 1;
  }
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v20->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4B1575D )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v13, v14);
    v20 = MotionInfo_TypeInfo;
    byte_4B1575D = 1;
  }
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v20->static_fields->_IsRandom_k__BackingField = 0;
  v21 = StringLiteral_11624/*"SE"*/;
  if ( !byte_4B1575A )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v13, v14);
    v20 = MotionInfo_TypeInfo;
    byte_4B1575A = 1;
  }
  if ( !v20->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v20, v13);
    v20 = MotionInfo_TypeInfo;
  }
  v22 = v20->static_fields;
  v22->_VoiceType_k__BackingField = (struct System_String_o *)v21;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22->_VoiceType_k__BackingField, v21, v14, v15, v16, v17, v18, v19);
  MotionInfo__AddVoiceLog(v23);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct System_Object_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  int64_t v43; // x1
  Il2CppClass **v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  MotionInfo_c *v47; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v49; // x0
  System_String_o *v50; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v52; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v54; // x0
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  int64_t v64; // x1
  Il2CppClass **v65; // x0
  __int64 v66; // x1
  __int64 v67; // x2
  MotionInfo_c *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct System_Object_array *v75; // x8
  _QWORD *v76; // x9
  __int64 v77; // x10
  int64_t v78; // x1
  Il2CppClass **v79; // x0
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  char *v86; // x20
  int64_t v87; // x1
  __int64 v88; // x1
  __int64 v89; // x2
  MotionInfo_c *v90; // x0
  int64_t v91; // x2
  int32_t v92; // w3
  System_String_o *v93; // x4
  BattleSetupInfo_o *v94; // x5
  FollowerInfo_o *v95; // x6
  PartyListViewItem_o *v96; // x7
  int64_t v97; // x2
  int32_t v98; // w3
  System_String_o *v99; // x4
  BattleSetupInfo_o *v100; // x5
  FollowerInfo_o *v101; // x6
  PartyListViewItem_o *v102; // x7
  int64_t v103; // x1
  __int64 v104; // x1
  __int64 v105; // x2
  MotionInfo_c *v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x2
  int32_t v120; // w3
  System_String_o *v121; // x4
  BattleSetupInfo_o *v122; // x5
  FollowerInfo_o *v123; // x6
  PartyListViewItem_o *v124; // x7
  struct System_Object_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  int64_t v128; // x1
  Il2CppClass **v129; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  MotionInfo_c *v132; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v134; // x0
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  int64_t v144; // x1
  Il2CppClass **v145; // x0
  int64_t v146; // x2
  int32_t v147; // w3
  System_String_o *v148; // x4
  BattleSetupInfo_o *v149; // x5
  FollowerInfo_o *v150; // x6
  PartyListViewItem_o *v151; // x7
  __int64 v152; // x8
  _QWORD *v153; // x9
  __int64 v154; // x10
  __int64 v155; // x8
  const MethodInfo *v156; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B156F2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___Add__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v8, v9);
    sub_1BCA7E0(&MotionInfo_TypeInfo, v10, v11);
    sub_1BCA7E0(&string___TypeInfo, v12, v13);
    sub_1BCA7E0(&StringLiteral_358/*" 確率 / 合計 : "*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_213/*" VoiceID : "*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1213/*"0.00"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_169/*" / "*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_931/*"--- Voice・SE Log ---"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_205/*" SEID : "*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_356/*" 分類 : "*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_12791/*"ServantID : "*/, v28, v29);
    byte_4B156F2 = 1;
  }
  LODWORD(format.klass) = 0;
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v1,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62401220((System_String_o *)StringLiteral_931/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
  if ( !v30 )
    goto LABEL_74;
  items = v30->fields._items;
  v41 = Method_System_Collections_Generic_List_string__Add__;
  ++v30->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v30->fields._size;
  v43 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v44 = &items->obj.klass + size;
    v30->fields._size = size + 1;
    v44[4] = (Il2CppClass *)v43;
    sub_1BCA784((PartyOrganizationUtility_o *)(v44 + 4), v43, v34, v35, v36, v37, v38, v39);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v45);
  if ( !byte_4B15750 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v45, v46);
    byte_4B15750 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4B15752 )
      {
        sub_1BCA7E0(&MotionInfo_TypeInfo, v45, v46);
        byte_4B15752 = 1;
      }
      v47 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v45);
        v47 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v47->static_fields->_VoiceId_k__BackingField;
      v49 = System_Environment__get_NewLine(0LL);
      v50 = (System_String_o *)StringLiteral_205/*" SEID : "*/;
      goto LABEL_34;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v45);
    IsSe_k__BackingField = MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField;
    if ( MotionInfo_TypeInfo->_2.cctor_finished )
    {
      if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
        goto LABEL_14;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v45);
      if ( IsSe_k__BackingField )
        goto LABEL_14;
    }
  }
  if ( !byte_4B15751 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v45, v46);
    byte_4B15751 = 1;
  }
  v52 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v45);
    v52 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v52->static_fields->_VoiceServantId_k__BackingField;
  v54 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62412480(
                                   (System_String_o *)StringLiteral_12791/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v54,
                                   0LL);
  v61 = v30->fields._items;
  v62 = Method_System_Collections_Generic_List_string__Add__;
  ++v30->fields._version;
  if ( !v61 )
LABEL_74:
    sub_1BCAA3C(voicePlaybackLogList, v33);
  v63 = v30->fields._size;
  v64 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v63 >= v61->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v61->obj.klass + v63;
    v30->fields._size = v63 + 1;
    v65[4] = (Il2CppClass *)v64;
    sub_1BCA784((PartyOrganizationUtility_o *)(v65 + 4), v64, v55, v56, v57, v58, v59, v60);
  }
  if ( !byte_4B15752 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v66, v67);
    byte_4B15752 = 1;
  }
  v68 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v66);
    v68 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v68->static_fields->_VoiceId_k__BackingField;
  v49 = System_Environment__get_NewLine(0LL);
  v50 = (System_String_o *)StringLiteral_213/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_62412480(v50, VoiceId_k__BackingField, v49, 0LL);
  v75 = v30->fields._items;
  v76 = Method_System_Collections_Generic_List_string__Add__;
  ++v30->fields._version;
  if ( !v75 )
    goto LABEL_74;
  v77 = v30->fields._size;
  v78 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v77 >= v75->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
  }
  else
  {
    v79 = &v75->obj.klass + v77;
    v30->fields._size = v77 + 1;
    v79[4] = (Il2CppClass *)v78;
    sub_1BCA784((PartyOrganizationUtility_o *)(v79 + 4), v78, v69, v70, v71, v72, v73, v74);
  }
  voicePlaybackLogList = (char *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v86 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v87 = StringLiteral_358/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_358/*" 確率 / 合計 : "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(voicePlaybackLogList + 32), v87, v80, v81, v82, v83, v84, v85);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v88);
  if ( !byte_4B15753 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v88, v89);
    byte_4B15753 = 1;
  }
  v90 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v88);
    v90 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v90->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_63289624(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v86 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v86 + 5) = voicePlaybackLogList;
  sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 40), (int64_t)voicePlaybackLogList, v91, v92, v93, v94, v95, v96);
  if ( *((_DWORD *)v86 + 6) <= 2u )
    goto LABEL_75;
  v103 = StringLiteral_169/*" / "*/;
  *((_QWORD *)v86 + 6) = StringLiteral_169/*" / "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v86 + 48), v103, v97, v98, v99, v100, v101, v102);
  if ( !byte_4B15754 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v104, v105);
    byte_4B15754 = 1;
  }
  v106 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v104);
    v106 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v106->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_63289624(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v86 + 6) <= 3u
    || (*((_QWORD *)v86 + 7) = voicePlaybackLogList,
        sub_1BCA784(
          (PartyOrganizationUtility_o *)(v86 + 56),
          (int64_t)voicePlaybackLogList,
          v107,
          v108,
          v109,
          v110,
          v111,
          v112),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v86 + 6) <= 4u) )
  {
LABEL_75:
    sub_1BCAA44(voicePlaybackLogList, v33);
  }
  *((_QWORD *)v86 + 8) = voicePlaybackLogList;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)(v86 + 64),
    (int64_t)voicePlaybackLogList,
    v113,
    v114,
    v115,
    v116,
    v117,
    v118);
  voicePlaybackLogList = (char *)System_String__Concat_62414748((System_String_array *)v86, 0LL);
  v125 = v30->fields._items;
  v126 = Method_System_Collections_Generic_List_string__Add__;
  ++v30->fields._version;
  if ( !v125 )
    goto LABEL_74;
  v127 = v30->fields._size;
  v128 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v127 >= v125->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
  }
  else
  {
    v129 = &v125->obj.klass + v127;
    v30->fields._size = v127 + 1;
    v129[4] = (Il2CppClass *)v128;
    sub_1BCA784((PartyOrganizationUtility_o *)(v129 + 4), v128, v119, v120, v121, v122, v123, v124);
  }
  if ( !byte_4B15755 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v130, v131);
    byte_4B15755 = 1;
  }
  v132 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v130);
    v132 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v132->static_fields->_VoiceType_k__BackingField;
  v134 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62412480(
                                   (System_String_o *)StringLiteral_356/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v134,
                                   0LL);
  v141 = v30->fields._items;
  v142 = Method_System_Collections_Generic_List_string__Add__;
  ++v30->fields._version;
  if ( !v141 )
    goto LABEL_74;
  v143 = v30->fields._size;
  v144 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v143 >= v141->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v30,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
  }
  else
  {
    v145 = &v141->obj.klass + v143;
    v30->fields._size = v143 + 1;
    v145[4] = (Il2CppClass *)v144;
    sub_1BCA784((PartyOrganizationUtility_o *)(v145 + 4), v144, v135, v136, v137, v138, v139, v140);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v152 = *((_QWORD *)voicePlaybackLogList + 2);
  v153 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v152 )
    goto LABEL_74;
  v154 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v154 >= *(_DWORD *)(v152 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v30,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v153[4] + 192LL) + 112LL));
  }
  else
  {
    v155 = v152 + 8 * v154;
    *((_DWORD *)voicePlaybackLogList + 6) = v154 + 1;
    *(_QWORD *)(v155 + 32) = v30;
    sub_1BCA784((PartyOrganizationUtility_o *)(v155 + 32), (int64_t)v30, v146, v147, v148, v149, v150, v151);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v156);
}


void __fastcall MotionInfo__AddVoiceLog_38909716(System_String_o *str, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_List_object__o *v13; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v15; // x1
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  MotionInfo_c *v32; // x0
  struct System_Object_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  Il2CppClass **v36; // x8
  const MethodInfo *v37; // x0

  if ( (byte_4B156F3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    sub_1BCA7E0(&MotionInfo_TypeInfo, v11, v12);
    byte_4B156F3 = 1;
  }
  v13 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v13 )
    goto LABEL_16;
  items = v13->fields._items;
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v13,
      (Il2CppObject *)str,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v13->fields._size = size + 1;
    v25[4] = (Il2CppClass *)str;
    sub_1BCA784((PartyOrganizationUtility_o *)(v25 + 4), (int64_t)str, v16, v17, v18, v19, v20, v21);
  }
  v32 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v15);
    v32 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v32->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList
    || (v33 = voicePlaybackLogList->fields._items,
        v34 = Method_System_Collections_Generic_List_List_string___Add__,
        ++voicePlaybackLogList->fields._version,
        !v33) )
  {
LABEL_16:
    sub_1BCAA3C(voicePlaybackLogList, v15);
  }
  v35 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v35 >= v33->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v13,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    v36 = &v33->obj.klass + v35;
    voicePlaybackLogList->fields._size = v35 + 1;
    v36[4] = (Il2CppClass *)v13;
    sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)v13, v26, v27, v28, v29, v30, v31);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v37);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 *v10; // x8
  System_String_o *result; // x0
  int32_t v12; // [xsp+Ch] [xbp-14h] BYREF

  v12 = type;
  if ( (byte_4B156EF & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25570/*"バスター"*/, *(_QWORD *)&type, method);
    sub_1BCA7E0(&StringLiteral_25552/*"クイック"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_25541/*"アーツ"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_25545/*"エクストラ"*/, v8, v9);
    byte_4B156EF = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v10 = &StringLiteral_25541/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v10 = &StringLiteral_25570/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v10 = &StringLiteral_25552/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v10 = &StringLiteral_25545/*"エクストラ"*/;
LABEL_9:
      result = (System_String_o *)*v10;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v12, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  char *Item; // x0
  System_String_o *TypeName; // x19
  struct BattleActionData_o *actionData; // x8
  int32_t commandType; // w19
  __int64 v66; // x9
  MotionInfo_c *v67; // x8
  System_String_o *v68; // x20
  MotionInfo_c *v69; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *NewLine; // x0
  System_String_o *v72; // x0
  MotionInfo_c *v73; // x0
  uint32_t cctor_finished; // w8
  System_String_o **v75; // x9
  System_String_o *v76; // x21
  MotionInfo_c *v77; // x0
  System_String_o *VoiceId_k__BackingField; // x22
  System_String_o *v79; // x0
  System_String_o *v80; // x21
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  char *v87; // x20
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  __int64 v95; // x1
  __int64 v96; // x2
  MotionInfo_c *v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  int64_t v110; // x1
  __int64 v111; // x1
  __int64 v112; // x2
  MotionInfo_c *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  int64_t v120; // x2
  int32_t v121; // w3
  System_String_o *v122; // x4
  BattleSetupInfo_o *v123; // x5
  FollowerInfo_o *v124; // x6
  PartyListViewItem_o *v125; // x7
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  int64_t v132; // x1
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x1
  System_String_o *v140; // x21
  __int64 v141; // x20
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  int64_t v148; // x2
  int32_t v149; // w3
  System_String_o *v150; // x4
  BattleSetupInfo_o *v151; // x5
  FollowerInfo_o *v152; // x6
  PartyListViewItem_o *v153; // x7
  int64_t v154; // x1
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  int64_t v161; // x2
  int32_t v162; // w3
  System_String_o *v163; // x4
  BattleSetupInfo_o *v164; // x5
  FollowerInfo_o *v165; // x6
  PartyListViewItem_o *v166; // x7
  struct MotionInfo_StaticFields *static_fields; // x8
  int64_t svtName; // x1
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  int64_t v181; // x2
  int32_t v182; // w3
  System_String_o *v183; // x4
  BattleSetupInfo_o *v184; // x5
  FollowerInfo_o *v185; // x6
  PartyListViewItem_o *v186; // x7
  int64_t v187; // x1
  int64_t v188; // x2
  int32_t v189; // w3
  System_String_o *v190; // x4
  BattleSetupInfo_o *v191; // x5
  FollowerInfo_o *v192; // x6
  PartyListViewItem_o *v193; // x7
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  int64_t v200; // x2
  int32_t v201; // w3
  System_String_o *v202; // x4
  BattleSetupInfo_o *v203; // x5
  FollowerInfo_o *v204; // x6
  PartyListViewItem_o *v205; // x7
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  int64_t v218; // x1
  int64_t v219; // x2
  int32_t v220; // w3
  System_String_o *v221; // x4
  BattleSetupInfo_o *v222; // x5
  FollowerInfo_o *v223; // x6
  PartyListViewItem_o *v224; // x7
  int64_t v225; // x2
  int32_t v226; // w3
  System_String_o *v227; // x4
  BattleSetupInfo_o *v228; // x5
  FollowerInfo_o *v229; // x6
  PartyListViewItem_o *v230; // x7
  int64_t v231; // x2
  int32_t v232; // w3
  System_String_o *v233; // x4
  BattleSetupInfo_o *v234; // x5
  FollowerInfo_o *v235; // x6
  PartyListViewItem_o *v236; // x7
  int64_t v237; // x2
  int32_t v238; // w3
  System_String_o *v239; // x4
  BattleSetupInfo_o *v240; // x5
  FollowerInfo_o *v241; // x6
  PartyListViewItem_o *v242; // x7
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  int64_t v249; // x1
  int64_t v250; // x2
  int32_t v251; // w3
  System_String_o *v252; // x4
  BattleSetupInfo_o *v253; // x5
  FollowerInfo_o *v254; // x6
  PartyListViewItem_o *v255; // x7
  int64_t v256; // x2
  int32_t v257; // w3
  System_String_o *v258; // x4
  BattleSetupInfo_o *v259; // x5
  FollowerInfo_o *v260; // x6
  PartyListViewItem_o *v261; // x7
  int64_t v262; // x2
  int32_t v263; // w3
  System_String_o *v264; // x4
  BattleSetupInfo_o *v265; // x5
  FollowerInfo_o *v266; // x6
  PartyListViewItem_o *v267; // x7
  int64_t v268; // x2
  int32_t v269; // w3
  System_String_o *v270; // x4
  BattleSetupInfo_o *v271; // x5
  FollowerInfo_o *v272; // x6
  PartyListViewItem_o *v273; // x7
  System_String_o *v274; // x20
  int32_t height; // w19
  float v276; // s11
  int32_t width; // w22
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  char *v284; // x21
  int64_t v285; // x1
  float v286; // s0
  int64_t v287; // x2
  int32_t v288; // w3
  System_String_o *v289; // x4
  BattleSetupInfo_o *v290; // x5
  FollowerInfo_o *v291; // x6
  PartyListViewItem_o *v292; // x7
  int64_t v293; // x2
  int32_t v294; // w3
  System_String_o *v295; // x4
  BattleSetupInfo_o *v296; // x5
  FollowerInfo_o *v297; // x6
  PartyListViewItem_o *v298; // x7
  int64_t v299; // x1
  int64_t v300; // x2
  int32_t v301; // w3
  System_String_o *v302; // x4
  BattleSetupInfo_o *v303; // x5
  FollowerInfo_o *v304; // x6
  PartyListViewItem_o *v305; // x7
  int64_t v306; // x2
  int32_t v307; // w3
  System_String_o *v308; // x4
  BattleSetupInfo_o *v309; // x5
  FollowerInfo_o *v310; // x6
  PartyListViewItem_o *v311; // x7
  int64_t v312; // x1
  float v313; // s12
  float v314; // s8
  __int64 v315; // x1
  System_String_o *v316; // x19
  float v317; // s11
  int32_t v318; // w0
  float v319; // s9
  float v320; // s10
  float v321; // s13
  System_String_o *v322; // x0
  System_String_o *v323; // x0
  __int64 v324; // x1
  MotionInfo_c *v325; // x0
  float v326; // s0
  float v327; // s13
  System_String_o *v328; // x0
  __int64 v329; // x1
  System_String_o *v330; // x19
  __int64 v331; // x1
  MotionInfo_c *v332; // x0
  float v333; // s0
  float v334; // s13
  System_String_o *v335; // x0
  __int64 v336; // x1
  System_String_o *v337; // x19
  __int64 v338; // x1
  MotionInfo_c *v339; // x0
  struct MotionInfo_StaticFields *v340; // x8
  int32_t v341; // w19
  int32_t v342; // w20
  int64_t v343; // x2
  int32_t v344; // w3
  System_String_o *v345; // x4
  BattleSetupInfo_o *v346; // x5
  FollowerInfo_o *v347; // x6
  PartyListViewItem_o *v348; // x7
  char *v349; // x19
  int64_t v350; // x1
  int64_t v351; // x2
  int32_t v352; // w3
  System_String_o *v353; // x4
  BattleSetupInfo_o *v354; // x5
  FollowerInfo_o *v355; // x6
  PartyListViewItem_o *v356; // x7
  int64_t v357; // x2
  int32_t v358; // w3
  System_String_o *v359; // x4
  BattleSetupInfo_o *v360; // x5
  FollowerInfo_o *v361; // x6
  PartyListViewItem_o *v362; // x7
  int64_t v363; // x1
  __int64 v364; // x1
  MotionInfo_c *v365; // x0
  int64_t v366; // x2
  int32_t v367; // w3
  System_String_o *v368; // x4
  BattleSetupInfo_o *v369; // x5
  FollowerInfo_o *v370; // x6
  PartyListViewItem_o *v371; // x7
  int64_t v372; // x2
  int32_t v373; // w3
  System_String_o *v374; // x4
  BattleSetupInfo_o *v375; // x5
  FollowerInfo_o *v376; // x6
  PartyListViewItem_o *v377; // x7
  int64_t v378; // x1
  int64_t v379; // x2
  int32_t v380; // w3
  System_String_o *v381; // x4
  BattleSetupInfo_o *v382; // x5
  FollowerInfo_o *v383; // x6
  PartyListViewItem_o *v384; // x7
  int64_t v385; // x2
  int32_t v386; // w3
  System_String_o *v387; // x4
  BattleSetupInfo_o *v388; // x5
  FollowerInfo_o *v389; // x6
  PartyListViewItem_o *v390; // x7
  int64_t v391; // x1
  __int64 v392; // x1
  System_String_o *v393; // x19
  float v394; // s0
  float v395; // s13
  System_String_o *v396; // x0
  System_String_o *v397; // x0
  __int64 v398; // x1
  MotionInfo_c *v399; // x0
  struct MotionInfo_StaticFields *v400; // x8
  int32_t v401; // w19
  float v402; // s11
  int32_t v403; // w0
  __int64 v404; // x1
  MotionInfo_c *v405; // x8
  float v406; // s14
  float *v407; // x8
  float v408; // s14
  float v409; // s12
  float v410; // s13
  float v411; // s15
  struct UnityEngine_Vector2_o v412; // kr00_8
  int32_t v413; // w19
  int v414; // w24
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  Il2CppObject *current; // x21
  __int64 v417; // x0
  __int64 v418; // x1
  int64_t v419; // x2
  int32_t v420; // w3
  System_String_o *v421; // x4
  BattleSetupInfo_o *v422; // x5
  FollowerInfo_o *v423; // x6
  PartyListViewItem_o *v424; // x7
  __int64 v425; // x20
  int64_t v426; // x1
  float v427; // s0
  System_String_o *v428; // x0
  int64_t v429; // x2
  int32_t v430; // w3
  System_String_o *v431; // x4
  BattleSetupInfo_o *v432; // x5
  FollowerInfo_o *v433; // x6
  PartyListViewItem_o *v434; // x7
  __int64 v435; // x0
  __int64 v436; // x1
  int64_t v437; // x2
  int32_t v438; // w3
  System_String_o *v439; // x4
  BattleSetupInfo_o *v440; // x5
  FollowerInfo_o *v441; // x6
  PartyListViewItem_o *v442; // x7
  int64_t v443; // x1
  __int64 v444; // x0
  __int64 v445; // x1
  int64_t v446; // x2
  int32_t v447; // w3
  System_String_o *v448; // x4
  BattleSetupInfo_o *v449; // x5
  FollowerInfo_o *v450; // x6
  PartyListViewItem_o *v451; // x7
  __int64 v452; // x0
  __int64 v453; // x1
  int64_t v454; // x2
  int32_t v455; // w3
  System_String_o *v456; // x4
  BattleSetupInfo_o *v457; // x5
  FollowerInfo_o *v458; // x6
  PartyListViewItem_o *v459; // x7
  int64_t v460; // x1
  __int64 v461; // x1
  System_String_o *v462; // x20
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v464; // [xsp+18h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v465; // [xsp+30h] [xbp-D0h] BYREF
  int v466; // [xsp+50h] [xbp-B0h] BYREF
  MethodInfo format; // [xsp+54h] [xbp-ACh] BYREF
  UnityEngine_Vector2_o v468; // 0:s4.4,4:s5.4
  UnityEngine_Rect_o v469; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v470; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v471; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v472; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v473; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v474; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v475; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v476; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B156EE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6, v7);
    sub_1BCA7E0(&UnityEngine_GUI_TypeInfo, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___get_Item__, v14, v15);
    sub_1BCA7E0(&System_Math_TypeInfo, v16, v17);
    sub_1BCA7E0(&MotionInfo_TypeInfo, v18, v19);
    sub_1BCA7E0(&string___TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_1861/*">+</size>"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_1869/*">▼</size>"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_25527/*"【モーションID】"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_25526/*"【ボイス・SE】"*/, v28, v29);
    sub_1BCA7E0(&StringLiteral_15542/*"VoiceID : "*/, v30, v31);
    sub_1BCA7E0(&StringLiteral_25528/*"【名前】"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_358/*" 確率 / 合計 : "*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_1868/*">▲</size>"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_1837/*"<size="*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_25525/*"【カード属性】"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_1862/*">-</size>"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_1213/*"0.00"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_169/*" / "*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_205/*" SEID : "*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_356/*" 分類 : "*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_1625/*"</size>"*/, v56, v57);
    sub_1BCA7E0(&StringLiteral_1858/*">"*/, v58, v59);
    sub_1BCA7E0(&StringLiteral_12791/*"ServantID : "*/, v60, v61);
    byte_4B156EE = 1;
  }
  HIDWORD(format.methodPointer) = 0;
  v466 = 0;
  memset(&v465, 0, sizeof(v465));
  if ( !this->fields.show )
    return;
  Item = (char *)MotionInfo_TypeInfo;
  LODWORD(format.virtualMethodPointer) = 0;
  TypeName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    Item = (char *)MotionInfo_TypeInfo;
  }
  actionData = *(struct BattleActionData_o **)(*((_QWORD *)Item + 23) + 8LL);
  if ( actionData )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      Item = (char *)MotionInfo_TypeInfo;
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_165;
    }
    LODWORD(format.virtualMethodPointer) = actionData->fields.motionId;
    commandType = actionData->fields.commandType;
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_165;
    }
    v66 = 60LL;
    if ( commandType == -1 )
      v66 = 56LL;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)Item, *(_DWORD *)((char *)&actionData->klass + v66), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
  if ( !byte_4B15750 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B15750 = 1;
  }
  v67 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v67 = MotionInfo_TypeInfo;
  }
  if ( v67->static_fields->_IsSe_k__BackingField )
  {
    v68 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v67->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v67, method);
    if ( !byte_4B15751 )
    {
      sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
      byte_4B15751 = 1;
    }
    v69 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
      v69 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v69->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v72 = System_String__Concat_62412480(
            (System_String_o *)StringLiteral_12791/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v67 = MotionInfo_TypeInfo;
    v68 = v72;
  }
  if ( !v67->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v67, method);
  if ( !byte_4B15750 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B15750 = 1;
  }
  v73 = MotionInfo_TypeInfo;
  cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v73 = MotionInfo_TypeInfo;
    cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  }
  if ( v73->static_fields->_IsSe_k__BackingField )
    v75 = (System_String_o **)&StringLiteral_205/*" SEID : "*/;
  else
    v75 = (System_String_o **)&StringLiteral_15542/*"VoiceID : "*/;
  v76 = *v75;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v73, method);
  if ( !byte_4B15752 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B15752 = 1;
  }
  v77 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v77 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v77->static_fields->_VoiceId_k__BackingField;
  v79 = System_Environment__get_NewLine(0LL);
  v80 = System_String__Concat_62414484(v68, v76, VoiceId_k__BackingField, v79, 0LL);
  Item = (char *)sub_1BCA888(string___TypeInfo, 8LL);
  if ( !Item )
    goto LABEL_165;
  v87 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  *((_QWORD *)Item + 4) = v80;
  sub_1BCA784((PartyOrganizationUtility_o *)(Item + 32), (int64_t)v80, v81, v82, v83, v84, v85, v86);
  if ( *((_DWORD *)v87 + 6) <= 1u )
    goto LABEL_166;
  v94 = StringLiteral_358/*" 確率 / 合計 : "*/;
  *((_QWORD *)v87 + 5) = StringLiteral_358/*" 確率 / 合計 : "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 40), v94, v88, v89, v90, v91, v92, v93);
  if ( !byte_4B15753 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v95, v96);
    byte_4B15753 = 1;
  }
  v97 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v95);
    v97 = MotionInfo_TypeInfo;
  }
  *(float *)&format.methodPointer = v97->static_fields->_VoiceWeight_k__BackingField;
  Item = (char *)System_Single__ToString_63289624(
                   *(float *)&format.methodPointer,
                   (System_String_o *)&format,
                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v87 + 6) <= 2u )
    goto LABEL_166;
  *((_QWORD *)v87 + 6) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 48), (int64_t)Item, v98, v99, v100, v101, v102, v103);
  if ( *((_DWORD *)v87 + 6) <= 3u )
    goto LABEL_166;
  v110 = StringLiteral_169/*" / "*/;
  *((_QWORD *)v87 + 7) = StringLiteral_169/*" / "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 56), v110, v104, v105, v106, v107, v108, v109);
  if ( !byte_4B15754 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v111, v112);
    byte_4B15754 = 1;
  }
  v113 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v111);
    v113 = MotionInfo_TypeInfo;
  }
  *(float *)&format.methodPointer = v113->static_fields->_VoiceTotalWeight_k__BackingField;
  Item = (char *)System_Single__ToString_63289624(
                   *(float *)&format.methodPointer,
                   (System_String_o *)&format,
                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v87 + 6) <= 4u )
    goto LABEL_166;
  *((_QWORD *)v87 + 8) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 64), (int64_t)Item, v114, v115, v116, v117, v118, v119);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v87 + 6) <= 5u )
    goto LABEL_166;
  *((_QWORD *)v87 + 9) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 72), (int64_t)Item, v120, v121, v122, v123, v124, v125);
  if ( *((_DWORD *)v87 + 6) <= 6u )
    goto LABEL_166;
  v132 = StringLiteral_356/*" 分類 : "*/;
  *((_QWORD *)v87 + 10) = StringLiteral_356/*" 分類 : "*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 80), v132, v126, v127, v128, v129, v130, v131);
  if ( !byte_4B15755 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v133);
    byte_4B15755 = 1;
  }
  Item = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    Item = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v87 + 6) <= 7u )
LABEL_166:
    sub_1BCAA44(Item, method);
  v139 = *(_QWORD *)(*((_QWORD *)Item + 23) + 40LL);
  *((_QWORD *)v87 + 11) = v139;
  sub_1BCA784((PartyOrganizationUtility_o *)(v87 + 88), v139, v133, v134, v135, v136, v137, v138);
  v140 = System_String__Concat_62414748((System_String_array *)v87, 0LL);
  v141 = sub_1BCA888(string___TypeInfo, 21LL);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( !v141 )
    goto LABEL_165;
  if ( !*(_DWORD *)(v141 + 24) )
    goto LABEL_166;
  *(_QWORD *)(v141 + 32) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 32), (int64_t)Item, v142, v143, v144, v145, v146, v147);
  if ( *(_DWORD *)(v141 + 24) <= 1u )
    goto LABEL_166;
  v154 = StringLiteral_25528/*"【名前】"*/;
  *(_QWORD *)(v141 + 40) = StringLiteral_25528/*"【名前】"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 40), v154, v148, v149, v150, v151, v152, v153);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 2u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 48) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 48), (int64_t)Item, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v141 + 24) <= 3u )
    goto LABEL_166;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = (int64_t)static_fields->svtName;
  *(_QWORD *)(v141 + 56) = static_fields->svtName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 56), svtName, v161, v162, v163, v164, v165, v166);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 4u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 64) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 64), (int64_t)Item, v169, v170, v171, v172, v173, v174);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 5u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 72) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 72), (int64_t)Item, v175, v176, v177, v178, v179, v180);
  if ( *(_DWORD *)(v141 + 24) <= 6u )
    goto LABEL_166;
  v187 = StringLiteral_25527/*"【モーションID】"*/;
  *(_QWORD *)(v141 + 80) = StringLiteral_25527/*"【モーションID】"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 80), v187, v181, v182, v183, v184, v185, v186);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 7u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 88) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 88), (int64_t)Item, v188, v189, v190, v191, v192, v193);
  Item = (char *)System_Int32__ToString((int32_t)&format.virtualMethodPointer, 0LL);
  if ( *(_DWORD *)(v141 + 24) <= 8u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 96) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 96), (int64_t)Item, v194, v195, v196, v197, v198, v199);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 9u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 104) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 104), (int64_t)Item, v200, v201, v202, v203, v204, v205);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0xAu )
    goto LABEL_166;
  *(_QWORD *)(v141 + 112) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 112), (int64_t)Item, v206, v207, v208, v209, v210, v211);
  if ( *(_DWORD *)(v141 + 24) <= 0xBu )
    goto LABEL_166;
  v218 = StringLiteral_25525/*"【カード属性】"*/;
  *(_QWORD *)(v141 + 120) = StringLiteral_25525/*"【カード属性】"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 120), v218, v212, v213, v214, v215, v216, v217);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0xCu )
    goto LABEL_166;
  *(_QWORD *)(v141 + 128) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 128), (int64_t)Item, v219, v220, v221, v222, v223, v224);
  if ( *(_DWORD *)(v141 + 24) <= 0xDu )
    goto LABEL_166;
  *(_QWORD *)(v141 + 136) = TypeName;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 136), (int64_t)TypeName, v225, v226, v227, v228, v229, v230);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0xEu )
    goto LABEL_166;
  *(_QWORD *)(v141 + 144) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 144), (int64_t)Item, v231, v232, v233, v234, v235, v236);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0xFu )
    goto LABEL_166;
  *(_QWORD *)(v141 + 152) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 152), (int64_t)Item, v237, v238, v239, v240, v241, v242);
  if ( *(_DWORD *)(v141 + 24) <= 0x10u )
    goto LABEL_166;
  v249 = StringLiteral_25526/*"【ボイス・SE】"*/;
  *(_QWORD *)(v141 + 160) = StringLiteral_25526/*"【ボイス・SE】"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 160), v249, v243, v244, v245, v246, v247, v248);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0x11u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 168) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 168), (int64_t)Item, v250, v251, v252, v253, v254, v255);
  if ( *(_DWORD *)(v141 + 24) <= 0x12u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 176) = v140;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 176), (int64_t)v140, v256, v257, v258, v259, v260, v261);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0x13u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 184) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 184), (int64_t)Item, v262, v263, v264, v265, v266, v267);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v141 + 24) <= 0x14u )
    goto LABEL_166;
  *(_QWORD *)(v141 + 192) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v141 + 192), (int64_t)Item, v268, v269, v270, v271, v272, v273);
  v274 = System_String__Concat_62414748((System_String_array *)v141, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v276 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.methodPointer + 1) = v276 * 17.5;
  width = UnityEngine_Screen__get_width(0LL);
  Item = (char *)sub_1BCA888(string___TypeInfo, 5LL);
  if ( !Item )
    goto LABEL_165;
  v284 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  v285 = StringLiteral_1837/*"<size="*/;
  *((_QWORD *)Item + 4) = StringLiteral_1837/*"<size="*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Item + 32), v285, v278, v279, v280, v281, v282, v283);
  Item = (char *)System_Single__ToString(v286, (const MethodInfo *)((char *)&format.methodPointer + 4));
  if ( *((_DWORD *)v284 + 6) <= 1u )
    goto LABEL_166;
  *((_QWORD *)v284 + 5) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v284 + 40), (int64_t)Item, v287, v288, v289, v290, v291, v292);
  if ( *((_DWORD *)v284 + 6) <= 2u )
    goto LABEL_166;
  v299 = StringLiteral_1858/*">"*/;
  *((_QWORD *)v284 + 6) = StringLiteral_1858/*">"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v284 + 48), v299, v293, v294, v295, v296, v297, v298);
  if ( *((_DWORD *)v284 + 6) <= 3u )
    goto LABEL_166;
  *((_QWORD *)v284 + 7) = v274;
  sub_1BCA784((PartyOrganizationUtility_o *)(v284 + 56), (int64_t)v274, v300, v301, v302, v303, v304, v305);
  if ( *((_DWORD *)v284 + 6) <= 4u )
    goto LABEL_166;
  v312 = StringLiteral_1625/*"</size>"*/;
  v313 = (float)height * 0.25;
  v314 = v276 * 250.0;
  *((_QWORD *)v284 + 8) = StringLiteral_1625/*"</size>"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v284 + 64), v312, v306, v307, v308, v309, v310, v311);
  v316 = System_String__Concat_62414748((System_String_array *)v284, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v315);
  v469.fields.m_YMin = 10.0;
  v469.fields.m_XMin = (float)width - (float)(v276 * 250.0);
  v469.fields.m_Width = v276 * 250.0;
  v469.fields.m_Height = v313 * 4.0;
  UnityEngine_GUI__Box(v469, v316, 0LL);
  v317 = v276 * 40.0;
  v318 = UnityEngine_Screen__get_width(0LL);
  v319 = v313 + v313;
  v320 = (float)(v313 + v313) + 10.0;
  v321 = (float)v318 - v314;
  v322 = System_Single__ToString((float)v318, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v323 = System_String__Concat_62412480(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v322,
           (System_String_o *)StringLiteral_1868/*">▲</size>"*/,
           0LL);
  v470.fields.m_XMin = v321;
  v470.fields.m_YMin = v320 - v317;
  v470.fields.m_Width = v317;
  v470.fields.m_Height = v317;
  if ( UnityEngine_GUI__RepeatButton(v470, v323, 0LL) )
  {
    v325 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v324);
      v325 = MotionInfo_TypeInfo;
    }
    v325->static_fields->scrollPosition.fields.y = v325->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v325->static_fields->scrollSpeed * -10.0);
  }
  v326 = (float)UnityEngine_Screen__get_width(0LL) - v314;
  v327 = v317 + v326;
  v328 = System_Single__ToString(v326, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v330 = System_String__Concat_62412480(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v328,
           (System_String_o *)StringLiteral_1869/*">▼</size>"*/,
           0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v329);
  v471.fields.m_XMin = v327;
  v471.fields.m_YMin = v320 - v317;
  v471.fields.m_Width = v317;
  v471.fields.m_Height = v317;
  if ( UnityEngine_GUI__RepeatButton(v471, v330, 0LL) )
  {
    v332 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v331);
      v332 = MotionInfo_TypeInfo;
    }
    v332->static_fields->scrollPosition.fields.y = v332->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v332->static_fields->scrollSpeed * 10.0);
  }
  v333 = (float)UnityEngine_Screen__get_width(0LL) - v314;
  v334 = (float)(v317 + v317) + v333;
  v335 = System_Single__ToString(v333, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v337 = System_String__Concat_62412480(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v335,
           (System_String_o *)StringLiteral_1862/*">-</size>"*/,
           0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v336);
  v472.fields.m_XMin = v334;
  v472.fields.m_YMin = v320 - v317;
  v472.fields.m_Width = v317;
  v472.fields.m_Height = v317;
  if ( UnityEngine_GUI__Button(v472, v337, 0LL) )
  {
    v339 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v338);
      v339 = MotionInfo_TypeInfo;
    }
    v340 = v339->static_fields;
    v341 = v340->scrollSpeed - 1;
    v340->scrollSpeed = v341;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v338);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Max_63220196(v341, 1, 0LL);
  }
  v342 = UnityEngine_Screen__get_width(0LL);
  Item = (char *)sub_1BCA888(string___TypeInfo, 7LL);
  if ( !Item )
LABEL_165:
    sub_1BCAA3C(Item, method);
  v349 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  v350 = StringLiteral_1837/*"<size="*/;
  *((_QWORD *)Item + 4) = StringLiteral_1837/*"<size="*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(Item + 32), v350, v343, v344, v345, v346, v347, v348);
  *(float *)&format.methodPointer = *((float *)&format.methodPointer + 1) * 0.9;
  Item = (char *)System_Single__ToString(*((float *)&format.methodPointer + 1) * 0.9, &format);
  if ( *((_DWORD *)v349 + 6) <= 1u )
    goto LABEL_166;
  *((_QWORD *)v349 + 5) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v349 + 40), (int64_t)Item, v351, v352, v353, v354, v355, v356);
  if ( *((_DWORD *)v349 + 6) <= 2u )
    goto LABEL_166;
  v363 = StringLiteral_1858/*">"*/;
  *((_QWORD *)v349 + 6) = StringLiteral_1858/*">"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v349 + 48), v363, v357, v358, v359, v360, v361, v362);
  v365 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v364);
    v365 = MotionInfo_TypeInfo;
  }
  Item = (char *)System_Int32__ToString((unsigned int)v365->static_fields + 80, 0LL);
  if ( *((_DWORD *)v349 + 6) <= 3u )
    goto LABEL_166;
  *((_QWORD *)v349 + 7) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v349 + 56), (int64_t)Item, v366, v367, v368, v369, v370, v371);
  if ( *((_DWORD *)v349 + 6) <= 4u )
    goto LABEL_166;
  v378 = StringLiteral_1120/*"/"*/;
  *((_QWORD *)v349 + 8) = StringLiteral_1120/*"/"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v349 + 64), v378, v372, v373, v374, v375, v376, v377);
  v466 = 10;
  Item = (char *)System_Int32__ToString((int32_t)&v466, 0LL);
  if ( *((_DWORD *)v349 + 6) <= 5u )
    goto LABEL_166;
  *((_QWORD *)v349 + 9) = Item;
  sub_1BCA784((PartyOrganizationUtility_o *)(v349 + 72), (int64_t)Item, v379, v380, v381, v382, v383, v384);
  if ( *((_DWORD *)v349 + 6) <= 6u )
    goto LABEL_166;
  v391 = StringLiteral_1625/*"</size>"*/;
  *((_QWORD *)v349 + 10) = StringLiteral_1625/*"</size>"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)(v349 + 80), v391, v385, v386, v387, v388, v389, v390);
  v393 = System_String__Concat_62414748((System_String_array *)v349, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v392);
  v473.fields.m_XMin = (float)(v317 * 3.0) + (float)((float)v342 - v314);
  v473.fields.m_YMin = v320 + (float)(v317 * -0.75);
  v473.fields.m_Width = v317;
  v473.fields.m_Height = v317;
  UnityEngine_GUI__Box(v473, v393, 0LL);
  v394 = (float)UnityEngine_Screen__get_width(0LL) - v314;
  v395 = (float)(v317 * 4.0) + v394;
  v396 = System_Single__ToString(v394, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v397 = System_String__Concat_62412480(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v396,
           (System_String_o *)StringLiteral_1861/*">+</size>"*/,
           0LL);
  v474.fields.m_XMin = v395;
  v474.fields.m_YMin = v320 - v317;
  v474.fields.m_Width = v317;
  v474.fields.m_Height = v317;
  if ( UnityEngine_GUI__Button(v474, v397, 0LL) )
  {
    v399 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v398);
      v399 = MotionInfo_TypeInfo;
    }
    v400 = v399->static_fields;
    v401 = v400->scrollSpeed + 1;
    v400->scrollSpeed = v401;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v398);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Min_63220524(v401, 10, 0LL);
  }
  v402 = *((float *)&format.methodPointer + 1) + 10.0;
  v403 = UnityEngine_Screen__get_width(0LL);
  v405 = MotionInfo_TypeInfo;
  v406 = (float)v403;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v404);
    v405 = MotionInfo_TypeInfo;
  }
  v407 = (float *)v405->static_fields;
  v408 = v406 - v314;
  v410 = v407[14];
  v409 = v407[15];
  v411 = v402 * (float)*((int *)v407 + 19);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v404);
  v475.fields.m_XMin = v408;
  v475.fields.m_YMin = v320;
  v475.fields.m_Width = v314;
  v475.fields.m_Height = v319;
  v468.fields.x = v410;
  v468.fields.y = v409;
  viewRect.fields.m_Height = v411;
  viewRect.fields.m_Width = 500.0;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  v412 = UnityEngine_GUI__BeginScrollView(v475, v468, viewRect, 0LL);
  v413 = 0;
  v414 = 0;
  Item = (char *)MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v412;
  while ( 1 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      Item = (char *)MotionInfo_TypeInfo;
    }
    voicePlaybackLogList = *(System_Collections_Generic_List_object__o **)(*((_QWORD *)Item + 23) + 64LL);
    if ( !voicePlaybackLogList )
      goto LABEL_165;
    if ( v413 >= voicePlaybackLogList->fields._size )
      break;
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item, method);
      voicePlaybackLogList = (System_Collections_Generic_List_object__o *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
      if ( !voicePlaybackLogList )
        goto LABEL_165;
    }
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     voicePlaybackLogList,
                     v413,
                     (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_165;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v464,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v465 = v464;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v465,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v465.fields._current;
      v417 = sub_1BCA888(string___TypeInfo, 5LL);
      v425 = v417;
      if ( !v417 )
        sub_1BCAA3C(0LL, v418);
      if ( !*(_DWORD *)(v417 + 24) )
        sub_1BCAA44(v417, v418);
      v426 = StringLiteral_1837/*"<size="*/;
      *(_QWORD *)(v417 + 32) = StringLiteral_1837/*"<size="*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v417 + 32), v426, v419, v420, v421, v422, v423, v424);
      v428 = System_Single__ToString(v427, (const MethodInfo *)((char *)&format.methodPointer + 4));
      if ( *(_DWORD *)(v425 + 24) <= 1u )
        sub_1BCAA44(v428, v428);
      *(_QWORD *)(v425 + 40) = v428;
      sub_1BCA784((PartyOrganizationUtility_o *)(v425 + 40), (int64_t)v428, v429, v430, v431, v432, v433, v434);
      if ( *(_DWORD *)(v425 + 24) <= 2u )
        sub_1BCAA44(v435, v436);
      v443 = StringLiteral_1858/*">"*/;
      *(_QWORD *)(v425 + 48) = StringLiteral_1858/*">"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v425 + 48), v443, v437, v438, v439, v440, v441, v442);
      if ( *(_DWORD *)(v425 + 24) <= 3u )
        sub_1BCAA44(v444, v445);
      *(_QWORD *)(v425 + 56) = current;
      sub_1BCA784((PartyOrganizationUtility_o *)(v425 + 56), (int64_t)current, v446, v447, v448, v449, v450, v451);
      if ( *(_DWORD *)(v425 + 24) <= 4u )
        sub_1BCAA44(v452, v453);
      v460 = StringLiteral_1625/*"</size>"*/;
      *(_QWORD *)(v425 + 64) = StringLiteral_1625/*"</size>"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)(v425 + 64), v460, v454, v455, v456, v457, v458, v459);
      v462 = System_String__Concat_62414748((System_String_array *)v425, 0LL);
      if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, v461);
      v476.fields.m_YMin = v402 * (float)v414;
      v476.fields.m_XMin = 0.0;
      v476.fields.m_Width = 500.0;
      v476.fields.m_Height = v402;
      UnityEngine_GUI__Label(v476, v462, 0LL);
      ++v414;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v465,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    ++v413;
    Item = (char *)MotionInfo_TypeInfo;
  }
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo, method);
  UnityEngine_GUI__EndScrollView(0LL);
}


void __fastcall MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x2
  struct System_String_o *v10; // x20
  MotionInfo_c *v11; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_String_o *v20; // x20
  MotionInfo_c *v21; // x0
  struct MotionInfo_StaticFields *v22; // x0
  __int64 v23; // x1
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  MotionInfo_c *v30; // x0
  struct System_String_o *v31; // x20
  struct MotionInfo_StaticFields *v32; // x0
  __int64 v33; // x1
  __int64 v34; // x2
  MotionInfo_c *v35; // x0

  if ( (byte_4B156F0 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B156F0 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
  v10 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B15756 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B15756 = 1;
  }
  v11 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v11 = MotionInfo_TypeInfo;
  }
  static_fields = v11->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v10;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int64_t)v10,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v20 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B15757 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v13, v14);
    byte_4B15757 = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v13);
    v21 = MotionInfo_TypeInfo;
  }
  v22 = v21->static_fields;
  v22->_VoiceId_k__BackingField = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22->_VoiceId_k__BackingField, (int64_t)v20, v14, v15, v16, v17, v18, v19);
  if ( !byte_4B15758 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v23, v24);
    byte_4B15758 = 1;
  }
  v30 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v23);
    v30 = MotionInfo_TypeInfo;
  }
  v30->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4B15759 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v23, v24);
    v30 = MotionInfo_TypeInfo;
    byte_4B15759 = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30, v23);
    v30 = MotionInfo_TypeInfo;
  }
  v30->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v31 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B1575A )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v23, v24);
    v30 = MotionInfo_TypeInfo;
    byte_4B1575A = 1;
  }
  if ( !v30->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v30, v23);
    v30 = MotionInfo_TypeInfo;
  }
  v32 = v30->static_fields;
  v32->_VoiceType_k__BackingField = v31;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v32->_VoiceType_k__BackingField,
    (int64_t)v31,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  if ( !byte_4B1575B )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v33, v34);
    byte_4B1575B = 1;
  }
  v35 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v33);
    v35 = MotionInfo_TypeInfo;
  }
  v35->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4B1575C )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v33, v34);
    v35 = MotionInfo_TypeInfo;
    byte_4B1575C = 1;
  }
  if ( !v35->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v35, v33);
    v35 = MotionInfo_TypeInfo;
  }
  v35->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156F6 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156F6 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
  if ( !byte_4B1575D )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B1575D = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsRandom_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x9
  int32_t size; // w2
  int v9; // w10

  if ( (byte_4B156F5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___Clear__, v1, v2);
    sub_1BCA7E0(&MotionInfo_TypeInfo, v3, v4);
    byte_4B156F5 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_1BCAA3C(v5, v1);
  size = voicePlaybackLogList->fields._size;
  v9 = voicePlaybackLogList->fields._version + 1;
  voicePlaybackLogList->fields._size = 0;
  voicePlaybackLogList->fields._version = v9;
  if ( size >= 1 )
  {
    System_Array__Clear((System_Array_o *)voicePlaybackLogList->fields._items, 0, size, 0LL);
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->voicePlayLogLineSize = 0;
}


void __fastcall MotionInfo__SetActionData(
        BattleActionData_o *actionData,
        System_String_o *svtName,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7

  if ( (byte_4B156ED & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, svtName, method);
    byte_4B156ED = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, svtName);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->svtName = svtName;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MotionInfo_TypeInfo->static_fields,
    (int64_t)svtName,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->actionData,
    (int64_t)actionData,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall MotionInfo__UpdateVoicePlaybackLogString(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  void *Item; // x0
  struct MotionInfo_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  int32_t voicePlayLogLineSize; // w22
  _DWORD *v15; // x8
  MotionInfo_c *v16; // x0
  uint32_t cctor_finished; // w9
  struct MotionInfo_StaticFields *v18; // x8
  int32_t v19; // w23
  int32_t voicePlaybackLogMaxNum; // w24
  int32_t v21; // w22
  struct MotionInfo_StaticFields *v22; // x8
  int32_t v23; // w9

  if ( (byte_4B156F4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__get_Count__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_List_string___get_Item__, v7, v8);
    sub_1BCA7E0(&MotionInfo_TypeInfo, v9, v10);
    byte_4B156F4 = 1;
  }
  Item = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    Item = MotionInfo_TypeInfo;
  }
  static_fields = (struct MotionInfo_StaticFields *)*((_QWORD *)Item + 23);
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_22;
  if ( voicePlaybackLogList->fields._size < 1 )
    return;
  if ( !*((_DWORD *)Item + 56)
    && (j_il2cpp_runtime_class_init_0(Item, v1),
        static_fields = MotionInfo_TypeInfo->static_fields,
        (voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList) == 0LL)
    || (voicePlayLogLineSize = static_fields->voicePlayLogLineSize,
        (Item = System_Collections_Generic_List_object___get_Item(
                  voicePlaybackLogList,
                  voicePlaybackLogList->fields._size - 1,
                  (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_22:
    sub_1BCAA3C(Item, v1);
  }
  v15 = Item;
  v16 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v15[6] + voicePlayLogLineSize;
  while ( 1 )
  {
    cctor_finished = v16->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v1);
      v16 = MotionInfo_TypeInfo;
      cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
    }
    v18 = v16->static_fields;
    voicePlaybackLogMaxNum = v18->voicePlaybackLogMaxNum;
    v19 = v18->voicePlayLogLineSize;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16, v1);
      v18 = MotionInfo_TypeInfo->static_fields;
    }
    v21 = v18->voicePlayLogLineSize;
    if ( v19 < voicePlaybackLogMaxNum )
      break;
    Item = v18->voicePlaybackLogList;
    if ( !Item )
      goto LABEL_22;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_22;
    v22 = MotionInfo_TypeInfo->static_fields;
    v23 = v21 - *((_DWORD *)Item + 6);
    Item = v22->voicePlaybackLogList;
    v22->voicePlayLogLineSize = v23;
    if ( !Item )
      goto LABEL_22;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Item,
      0,
      (const MethodInfo_35A3430 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v16 = MotionInfo_TypeInfo;
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v21);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156E9 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156E9 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_IsRandom_k__BackingField;
}


bool __fastcall MotionInfo__get_IsSe(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156EB & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156EB = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_IsSe_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156E3 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156E3 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_VoiceId_k__BackingField;
}


int32_t __fastcall MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156E7 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156E7 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156DD & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156DD = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_VoiceServantId_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156E1 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156E1 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceType(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156E5 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156E5 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_VoiceType_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  MotionInfo_c *v3; // x0

  if ( (byte_4B156DF & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v1, v2);
    byte_4B156DF = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v1);
    v3 = MotionInfo_TypeInfo;
  }
  return v3->static_fields->_VoiceWeight_k__BackingField;
}


void __fastcall MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  MotionInfo_c *v4; // x0

  if ( (byte_4B156EA & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B156EA = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_IsRandom_k__BackingField = value;
}


void __fastcall MotionInfo__set_IsSe(bool value, const MethodInfo *method)
{
  __int64 v2; // x2
  MotionInfo_c *v4; // x0

  if ( (byte_4B156EC & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B156EC = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_IsSe_k__BackingField = value;
}


void __fastcall MotionInfo__set_VoiceId(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4B156E4 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B156E4 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceId_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  __int64 v2; // x2
  MotionInfo_c *v4; // x0

  if ( (byte_4B156E8 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B156E8 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceIndex_k__BackingField = value;
}


void __fastcall MotionInfo__set_VoiceServantId(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4B156DE & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B156DE = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  MotionInfo_c *v5; // x0

  if ( (byte_4B156E2 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v2, v3);
    byte_4B156E2 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v2);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceTotalWeight_k__BackingField = value;
}


void __fastcall MotionInfo__set_VoiceType(System_String_o *value, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4B156E6 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, method, v2);
    byte_4B156E6 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, method);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceType_k__BackingField,
    (int64_t)value,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  MotionInfo_c *v5; // x0

  if ( (byte_4B156E0 & 1) == 0 )
  {
    sub_1BCA7E0(&MotionInfo_TypeInfo, v2, v3);
    byte_4B156E0 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo, v2);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceWeight_k__BackingField = value;
}