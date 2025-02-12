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
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v13; // x19
  struct MotionInfo_StaticFields *v14; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  if ( (byte_4BB3BCD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string____ctor__, v1);
    sub_1C13D24(&System_Collections_Generic_List_List_string___TypeInfo, v8);
    sub_1C13D24(&MotionInfo_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_1/*""*/, v10);
    byte_4BB3BCD = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C13CC8(
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
  if ( !byte_4BAEC9A )
  {
    sub_1C13D24(&UnityEngine_Vector2_TypeInfo, v11);
    byte_4BAEC9A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v13 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v14 = MotionInfo_TypeInfo->static_fields;
  v14->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v13;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v14->voicePlaybackLogList, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = 0;
}


void __fastcall MotionInfo___ctor(MotionInfo_o *this, const MethodInfo *method)
{
  this->fields.show = 1;
  this->fields.scrollSpeed = 1;
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
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  MotionInfo_c *v19; // x0
  int64_t v20; // x20
  struct MotionInfo_StaticFields *v21; // x0
  const MethodInfo *v22; // x0

  if ( (byte_4BB3BC7 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    sub_1C13D24(&StringLiteral_11683/*"SCRIPT_ACTION_NOT_SET_AUTO_WAIT_COMMAND"*/, v9);
    byte_4BB3BC7 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BB3C2F )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3C2F = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4BB3C30 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    v10 = MotionInfo_TypeInfo;
    byte_4BB3C30 = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4BB3C2E )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    v10 = MotionInfo_TypeInfo;
    byte_4BB3C2E = 1;
  }
  if ( !v10->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v10);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceId_k__BackingField,
    (int64_t)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4BB3C32 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v12);
    byte_4BB3C32 = 1;
  }
  v19 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v19 = MotionInfo_TypeInfo;
  }
  v19->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4BB3C33 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v12);
    v19 = MotionInfo_TypeInfo;
    byte_4BB3C33 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = MotionInfo_TypeInfo;
  }
  v19->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4BB3C34 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v12);
    v19 = MotionInfo_TypeInfo;
    byte_4BB3C34 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = MotionInfo_TypeInfo;
  }
  v19->static_fields->_IsRandom_k__BackingField = 0;
  v20 = StringLiteral_11683/*"SCRIPT_ACTION_NOT_SET_AUTO_WAIT_COMMAND"*/;
  if ( !byte_4BB3C31 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v12);
    v19 = MotionInfo_TypeInfo;
    byte_4BB3C31 = 1;
  }
  if ( !v19->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v19);
    v19 = MotionInfo_TypeInfo;
  }
  v21 = v19->static_fields;
  v21->_VoiceType_k__BackingField = (struct System_String_o *)v20;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v21->_VoiceType_k__BackingField, v20, v13, v14, v15, v16, v17, v18);
  MotionInfo__AddVoiceLog(v22);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v18; // x1
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0
  __int64 v30; // x1
  MotionInfo_c *v31; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v33; // x0
  System_String_o *v34; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v36; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  struct System_Object_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  int64_t v48; // x1
  Il2CppClass **v49; // x0
  __int64 v50; // x1
  MotionInfo_c *v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  int64_t v61; // x1
  Il2CppClass **v62; // x0
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  char *v69; // x20
  int64_t v70; // x1
  __int64 v71; // x1
  MotionInfo_c *v72; // x0
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x1
  __int64 v86; // x1
  MotionInfo_c *v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  int64_t v109; // x1
  Il2CppClass **v110; // x0
  __int64 v111; // x1
  MotionInfo_c *v112; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  struct System_Object_array *v121; // x8
  _QWORD *v122; // x9
  __int64 v123; // x10
  int64_t v124; // x1
  Il2CppClass **v125; // x0
  int64_t v126; // x2
  int32_t v127; // w3
  System_String_o *v128; // x4
  BattleSetupInfo_o *v129; // x5
  FollowerInfo_o *v130; // x6
  PartyListViewItem_o *v131; // x7
  __int64 v132; // x8
  _QWORD *v133; // x9
  __int64 v134; // x10
  __int64 v135; // x8
  const MethodInfo *v136; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BB3BC8 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string___Add__, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1C13D24(&MotionInfo_TypeInfo, v5);
    sub_1C13D24(&string___TypeInfo, v6);
    sub_1C13D24(&StringLiteral_360/*" 確率 / 合計 : "*/, v7);
    sub_1C13D24(&StringLiteral_215/*" VoiceID : "*/, v8);
    sub_1C13D24(&StringLiteral_1216/*"0.00"*/, v9);
    sub_1C13D24(&StringLiteral_171/*" / "*/, v10);
    sub_1C13D24(&StringLiteral_934/*"--- Voice・SE Log ---"*/, v11);
    sub_1C13D24(&StringLiteral_207/*" SEID : "*/, v12);
    sub_1C13D24(&StringLiteral_358/*" 分類 : "*/, v13);
    sub_1C13D24(&StringLiteral_12858/*"Servant4"*/, v14);
    byte_4BB3BC8 = 1;
  }
  LODWORD(format.klass) = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62967944((System_String_o *)StringLiteral_934/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
  if ( !v15 )
    goto LABEL_74;
  items = v15->fields._items;
  v26 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v15->fields._size;
  v28 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v29 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v29[4] = (Il2CppClass *)v28;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BB3C27 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v30);
    byte_4BB3C27 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4BB3C29 )
      {
        sub_1C13D24(&MotionInfo_TypeInfo, v30);
        byte_4BB3C29 = 1;
      }
      v31 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v31 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v31->static_fields->_VoiceId_k__BackingField;
      v33 = System_Environment__get_NewLine(0LL);
      v34 = (System_String_o *)StringLiteral_207/*" SEID : "*/;
      goto LABEL_34;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    IsSe_k__BackingField = MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField;
    if ( MotionInfo_TypeInfo->_2.cctor_finished )
    {
      if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
        goto LABEL_14;
    }
    else
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      if ( IsSe_k__BackingField )
        goto LABEL_14;
    }
  }
  if ( !byte_4BB3C28 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v30);
    byte_4BB3C28 = 1;
  }
  v36 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v36 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v36->static_fields->_VoiceServantId_k__BackingField;
  v38 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62979204(
                                   (System_String_o *)StringLiteral_12858/*"Servant4"*/,
                                   VoiceServantId_k__BackingField,
                                   v38,
                                   0LL);
  v45 = v15->fields._items;
  v46 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v45 )
LABEL_74:
    sub_1C13F80(voicePlaybackLogList, v18);
  v47 = v15->fields._size;
  v48 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v47 >= v45->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v45->obj.klass + v47;
    v15->fields._size = v47 + 1;
    v49[4] = (Il2CppClass *)v48;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v49 + 4), v48, v39, v40, v41, v42, v43, v44);
  }
  if ( !byte_4BB3C29 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v50);
    byte_4BB3C29 = 1;
  }
  v51 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v51 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v51->static_fields->_VoiceId_k__BackingField;
  v33 = System_Environment__get_NewLine(0LL);
  v34 = (System_String_o *)StringLiteral_215/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_62979204(v34, VoiceId_k__BackingField, v33, 0LL);
  v58 = v15->fields._items;
  v59 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v58 )
    goto LABEL_74;
  v60 = v15->fields._size;
  v61 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v60 >= v58->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &v58->obj.klass + v60;
    v15->fields._size = v60 + 1;
    v62[4] = (Il2CppClass *)v61;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v62 + 4), v61, v52, v53, v54, v55, v56, v57);
  }
  voicePlaybackLogList = (char *)sub_1C13DCC(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v69 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v70 = StringLiteral_360/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_360/*" 確率 / 合計 : "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(voicePlaybackLogList + 32), v70, v63, v64, v65, v66, v67, v68);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BB3C2A )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v71);
    byte_4BB3C2A = 1;
  }
  v72 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v72 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v72->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_63856516(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v69 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v69 + 5) = voicePlaybackLogList;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 40), (int64_t)voicePlaybackLogList, v73, v74, v75, v76, v77, v78);
  if ( *((_DWORD *)v69 + 6) <= 2u )
    goto LABEL_75;
  v85 = StringLiteral_171/*" / "*/;
  *((_QWORD *)v69 + 6) = StringLiteral_171/*" / "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 48), v85, v79, v80, v81, v82, v83, v84);
  if ( !byte_4BB3C2B )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v86);
    byte_4BB3C2B = 1;
  }
  v87 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v87 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v87->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_63856516(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v69 + 6) <= 3u
    || (*((_QWORD *)v69 + 7) = voicePlaybackLogList,
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)(v69 + 56),
          (int64_t)voicePlaybackLogList,
          v88,
          v89,
          v90,
          v91,
          v92,
          v93),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v69 + 6) <= 4u) )
  {
LABEL_75:
    sub_1C13F88(voicePlaybackLogList, v18);
  }
  *((_QWORD *)v69 + 8) = voicePlaybackLogList;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 64), (int64_t)voicePlaybackLogList, v94, v95, v96, v97, v98, v99);
  voicePlaybackLogList = (char *)System_String__Concat_62981472((System_String_array *)v69, 0LL);
  v106 = v15->fields._items;
  v107 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v106 )
    goto LABEL_74;
  v108 = v15->fields._size;
  v109 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v108 >= v106->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
  }
  else
  {
    v110 = &v106->obj.klass + v108;
    v15->fields._size = v108 + 1;
    v110[4] = (Il2CppClass *)v109;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v110 + 4), v109, v100, v101, v102, v103, v104, v105);
  }
  if ( !byte_4BB3C2C )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v111);
    byte_4BB3C2C = 1;
  }
  v112 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v112 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v112->static_fields->_VoiceType_k__BackingField;
  v114 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62979204(
                                   (System_String_o *)StringLiteral_358/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v114,
                                   0LL);
  v121 = v15->fields._items;
  v122 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v121 )
    goto LABEL_74;
  v123 = v15->fields._size;
  v124 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v123 >= v121->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v122[4] + 192LL) + 112LL));
  }
  else
  {
    v125 = &v121->obj.klass + v123;
    v15->fields._size = v123 + 1;
    v125[4] = (Il2CppClass *)v124;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v125 + 4), v124, v115, v116, v117, v118, v119, v120);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v132 = *((_QWORD *)voicePlaybackLogList + 2);
  v133 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v132 )
    goto LABEL_74;
  v134 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v134 >= *(_DWORD *)(v132 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v15,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
  }
  else
  {
    v135 = v132 + 8 * v134;
    *((_DWORD *)voicePlaybackLogList + 6) = v134 + 1;
    *(_QWORD *)(v135 + 32) = v15;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v135 + 32), (int64_t)v15, v126, v127, v128, v129, v130, v131);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v136);
}


void __fastcall MotionInfo__AddVoiceLog_39342188(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  MotionInfo_c *v26; // x0
  struct System_Object_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  Il2CppClass **v30; // x8
  const MethodInfo *v31; // x0

  if ( (byte_4BB3BC9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string___Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1C13D24(&MotionInfo_TypeInfo, v6);
    byte_4BB3BC9 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v7 )
    goto LABEL_16;
  items = v7->fields._items;
  v17 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)str,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v19[4] = (Il2CppClass *)str;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v19 + 4), (int64_t)str, v10, v11, v12, v13, v14, v15);
  }
  v26 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v26 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v26->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList
    || (v27 = voicePlaybackLogList->fields._items,
        v28 = Method_System_Collections_Generic_List_List_string___Add__,
        ++voicePlaybackLogList->fields._version,
        !v27) )
  {
LABEL_16:
    sub_1C13F80(voicePlaybackLogList, v9);
  }
  v29 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v7,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v30 = &v27->obj.klass + v29;
    voicePlaybackLogList->fields._size = v29 + 1;
    v30[4] = (Il2CppClass *)v7;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)v7, v20, v21, v22, v23, v24, v25);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v31);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 *v8; // x8
  System_String_o *result; // x0
  int32_t v10; // [xsp+Ch] [xbp-24h] BYREF

  v10 = type;
  if ( (byte_4BB3BC5 & 1) == 0 )
  {
    sub_1C13D24(&BattleCommand_TypeInfo, *(_QWORD *)&type);
    sub_1C13D24(&StringLiteral_25721/*"ガッツ"*/, v4);
    sub_1C13D24(&StringLiteral_25703/*"あと "*/, v5);
    sub_1C13D24(&StringLiteral_25692/*"⼀⿠"*/, v6);
    sub_1C13D24(&StringLiteral_25696/*"「"*/, v7);
    byte_4BB3BC5 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v8 = &StringLiteral_25692/*"⼀⿠"*/;
      goto LABEL_11;
    case 2:
      v8 = &StringLiteral_25721/*"ガッツ"*/;
      goto LABEL_11;
    case 3:
      v8 = &StringLiteral_25703/*"あと "*/;
      goto LABEL_11;
    case 4:
      v8 = &StringLiteral_25696/*"「"*/;
LABEL_11:
      result = (System_String_o *)*v8;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v10, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
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
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  char *normal; // x0
  System_String_o *TypeName; // x20
  struct BattleActionData_o *actionData; // x8
  __int64 v46; // x1
  int32_t commandType; // w20
  __int64 v48; // x9
  MotionInfo_c *v49; // x8
  System_String_o *v50; // x21
  MotionInfo_c *v51; // x0
  System_String_o *VoiceServantId_k__BackingField; // x21
  System_String_o *NewLine; // x0
  System_String_o *v54; // x0
  MotionInfo_c *v55; // x0
  uint32_t cctor_finished; // w8
  System_String_o **v57; // x9
  System_String_o *v58; // x22
  MotionInfo_c *v59; // x0
  System_String_o *VoiceId_k__BackingField; // x23
  System_String_o *v61; // x0
  System_String_o *v62; // x22
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  char *v69; // x21
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x1
  __int64 v77; // x1
  MotionInfo_c *v78; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  __int64 v92; // x1
  MotionInfo_c *v93; // x0
  int64_t v94; // x2
  int32_t v95; // w3
  System_String_o *v96; // x4
  BattleSetupInfo_o *v97; // x5
  FollowerInfo_o *v98; // x6
  PartyListViewItem_o *v99; // x7
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  int64_t v106; // x2
  int32_t v107; // w3
  System_String_o *v108; // x4
  BattleSetupInfo_o *v109; // x5
  FollowerInfo_o *v110; // x6
  PartyListViewItem_o *v111; // x7
  int64_t v112; // x1
  int64_t v113; // x2
  int32_t v114; // w3
  System_String_o *v115; // x4
  BattleSetupInfo_o *v116; // x5
  FollowerInfo_o *v117; // x6
  PartyListViewItem_o *v118; // x7
  int64_t v119; // x1
  System_String_o *v120; // x22
  __int64 v121; // x21
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  int64_t v134; // x1
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  int64_t v141; // x2
  int32_t v142; // w3
  System_String_o *v143; // x4
  BattleSetupInfo_o *v144; // x5
  FollowerInfo_o *v145; // x6
  PartyListViewItem_o *v146; // x7
  struct MotionInfo_StaticFields *static_fields; // x8
  int64_t svtName; // x1
  int64_t v149; // x2
  int32_t v150; // w3
  System_String_o *v151; // x4
  BattleSetupInfo_o *v152; // x5
  FollowerInfo_o *v153; // x6
  PartyListViewItem_o *v154; // x7
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
  int64_t v167; // x1
  int64_t v168; // x2
  int32_t v169; // w3
  System_String_o *v170; // x4
  BattleSetupInfo_o *v171; // x5
  FollowerInfo_o *v172; // x6
  PartyListViewItem_o *v173; // x7
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  int64_t v186; // x2
  int32_t v187; // w3
  System_String_o *v188; // x4
  BattleSetupInfo_o *v189; // x5
  FollowerInfo_o *v190; // x6
  PartyListViewItem_o *v191; // x7
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  int64_t v198; // x1
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  int64_t v205; // x2
  int32_t v206; // w3
  System_String_o *v207; // x4
  BattleSetupInfo_o *v208; // x5
  FollowerInfo_o *v209; // x6
  PartyListViewItem_o *v210; // x7
  int64_t v211; // x2
  int32_t v212; // w3
  System_String_o *v213; // x4
  BattleSetupInfo_o *v214; // x5
  FollowerInfo_o *v215; // x6
  PartyListViewItem_o *v216; // x7
  int64_t v217; // x2
  int32_t v218; // w3
  System_String_o *v219; // x4
  BattleSetupInfo_o *v220; // x5
  FollowerInfo_o *v221; // x6
  PartyListViewItem_o *v222; // x7
  int64_t v223; // x2
  int32_t v224; // w3
  System_String_o *v225; // x4
  BattleSetupInfo_o *v226; // x5
  FollowerInfo_o *v227; // x6
  PartyListViewItem_o *v228; // x7
  int64_t v229; // x1
  int64_t v230; // x2
  int32_t v231; // w3
  System_String_o *v232; // x4
  BattleSetupInfo_o *v233; // x5
  FollowerInfo_o *v234; // x6
  PartyListViewItem_o *v235; // x7
  int64_t v236; // x2
  int32_t v237; // w3
  System_String_o *v238; // x4
  BattleSetupInfo_o *v239; // x5
  FollowerInfo_o *v240; // x6
  PartyListViewItem_o *v241; // x7
  int64_t v242; // x2
  int32_t v243; // w3
  System_String_o *v244; // x4
  BattleSetupInfo_o *v245; // x5
  FollowerInfo_o *v246; // x6
  PartyListViewItem_o *v247; // x7
  int64_t v248; // x2
  int32_t v249; // w3
  System_String_o *v250; // x4
  BattleSetupInfo_o *v251; // x5
  FollowerInfo_o *v252; // x6
  PartyListViewItem_o *v253; // x7
  Il2CppObject *v254; // x21
  int32_t height; // w22
  float v256; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int64_t v259; // x2
  int32_t v260; // w3
  System_String_o *v261; // x4
  BattleSetupInfo_o *v262; // x5
  FollowerInfo_o *v263; // x6
  PartyListViewItem_o *v264; // x7
  float v265; // s13
  float v266; // s10
  float v267; // s8
  int v268; // w25
  float v269; // s9
  float width; // s12
  float v271; // s11
  int32_t v272; // w22
  __int64 v273; // x2
  __int64 v274; // x3
  __int64 v275; // x4
  Il2CppObject *v276; // x0
  System_String_o *v277; // x0
  UnityEngine_GUIStyle_o *v278; // x21
  System_String_o *v279; // x22
  _BOOL4 isLogAreaShow; // w22
  __int64 v281; // x2
  __int64 v282; // x3
  __int64 v283; // x4
  Il2CppObject *v284; // x1
  Il2CppObject **v285; // x9
  System_String_o *v286; // x21
  bool v287; // w0
  bool v288; // w21
  __int64 v289; // x2
  __int64 v290; // x3
  __int64 v291; // x4
  MotionInfo_c *v292; // x0
  float v293; // s11
  Il2CppObject *v294; // x0
  System_String_o *v295; // x21
  __int64 v296; // x2
  __int64 v297; // x3
  __int64 v298; // x4
  MotionInfo_c *v299; // x0
  Il2CppObject *v300; // x0
  System_String_o *v301; // x21
  __int64 v302; // x2
  __int64 v303; // x3
  __int64 v304; // x4
  MotionInfo_c *v305; // x0
  Il2CppObject *v306; // x0
  System_String_o *v307; // x21
  __int64 v308; // x2
  __int64 v309; // x3
  __int64 v310; // x4
  int32_t v311; // w21
  Il2CppObject *v312; // x21
  __int64 v313; // x2
  __int64 v314; // x3
  __int64 v315; // x4
  Il2CppObject *v316; // x22
  __int64 v317; // x2
  __int64 v318; // x3
  __int64 v319; // x4
  Il2CppObject *v320; // x0
  System_String_o *v321; // x21
  __int64 v322; // x2
  __int64 v323; // x3
  __int64 v324; // x4
  Il2CppObject *v325; // x0
  System_String_o *v326; // x0
  int32_t v327; // w21
  __int64 v328; // x2
  __int64 v329; // x3
  __int64 v330; // x4
  Il2CppObject *v331; // x0
  System_String_o *v332; // x0
  UnityEngine_GUIStyle_o *v333; // x20
  System_String_o *v334; // x21
  float v335; // s10
  float v336; // s9
  int32_t v337; // w0
  MotionInfo_c *v338; // x8
  float v339; // s11
  struct MotionInfo_StaticFields *v340; // x8
  struct UnityEngine_Vector2_o v341; // kr00_8
  MotionInfo_c *v342; // x8
  MotionInfo___c_c *v343; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v346; // x22
  struct MotionInfo___c_StaticFields *v347; // x0
  int64_t v348; // x2
  int32_t v349; // w3
  System_String_o *v350; // x4
  BattleSetupInfo_o *v351; // x5
  FollowerInfo_o *v352; // x6
  PartyListViewItem_o *v353; // x7
  __int64 v354; // x8
  char *v355; // x20
  __int64 v356; // x9
  int *v357; // x10
  __int64 v358; // x0
  __int64 v359; // x1
  __int64 v360; // x20
  int i; // w25
  __int64 v362; // x8
  __int64 v363; // x9
  int *v364; // x10
  __int64 v365; // x0
  __int64 v366; // x8
  __int64 v367; // x9
  int *v368; // x10
  __int64 v369; // x0
  int64_t v370; // x22
  __int64 v371; // x0
  __int64 v372; // x1
  int64_t v373; // x2
  int32_t v374; // w3
  System_String_o *v375; // x4
  BattleSetupInfo_o *v376; // x5
  FollowerInfo_o *v377; // x6
  PartyListViewItem_o *v378; // x7
  __int64 v379; // x21
  int64_t v380; // x1
  float v381; // s0
  System_String_o *v382; // x0
  int64_t v383; // x2
  int32_t v384; // w3
  System_String_o *v385; // x4
  BattleSetupInfo_o *v386; // x5
  FollowerInfo_o *v387; // x6
  PartyListViewItem_o *v388; // x7
  __int64 v389; // x0
  __int64 v390; // x1
  int64_t v391; // x2
  int32_t v392; // w3
  System_String_o *v393; // x4
  BattleSetupInfo_o *v394; // x5
  FollowerInfo_o *v395; // x6
  PartyListViewItem_o *v396; // x7
  int64_t v397; // x1
  __int64 v398; // x0
  __int64 v399; // x1
  int64_t v400; // x2
  int32_t v401; // w3
  System_String_o *v402; // x4
  BattleSetupInfo_o *v403; // x5
  FollowerInfo_o *v404; // x6
  PartyListViewItem_o *v405; // x7
  __int64 v406; // x0
  __int64 v407; // x1
  int64_t v408; // x2
  int32_t v409; // w3
  System_String_o *v410; // x4
  BattleSetupInfo_o *v411; // x5
  FollowerInfo_o *v412; // x6
  PartyListViewItem_o *v413; // x7
  int64_t v414; // x1
  System_String_o *v415; // x21
  __int64 v416; // x8
  __int64 v417; // x9
  int *v418; // x10
  __int64 v419; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v421; // [xsp+18h] [xbp-B8h]
  int v422; // [xsp+1Ch] [xbp-B4h] BYREF
  int v423; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v425; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v427; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v428; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v429; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v430; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v431; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v432; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v433; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v434; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v435; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v436; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v437; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v438; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v439; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB3BC4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_SelectMany_List_string___string___, method);
    sub_1C13D24(&System_Func_List_string___IEnumerable_string___TypeInfo, v4);
    sub_1C13D24(&UnityEngine_GUIStyle_TypeInfo, v5);
    sub_1C13D24(&UnityEngine_GUI_TypeInfo, v6);
    sub_1C13D24(&System_IDisposable_TypeInfo, v7);
    sub_1C13D24(&System_Collections_Generic_IEnumerable_string__TypeInfo, v8);
    sub_1C13D24(&System_Collections_Generic_IEnumerator_string__TypeInfo, v9);
    sub_1C13D24(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1C13D24(&int_TypeInfo, v11);
    sub_1C13D24(&System_Math_TypeInfo, v12);
    sub_1C13D24(&MotionInfo_TypeInfo, v13);
    sub_1C13D24(&float_TypeInfo, v14);
    sub_1C13D24(&string___TypeInfo, v15);
    sub_1C13D24(&Method_MotionInfo___c__OnGUI_b__46_0__, v16);
    sub_1C13D24(&MotionInfo___c_TypeInfo, v17);
    sub_1C13D24(&StringLiteral_1842/*"<size="*/, v18);
    sub_1C13D24(&StringLiteral_1849/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v19);
    sub_1C13D24(&StringLiteral_25678/*"■"*/, v20);
    sub_1C13D24(&StringLiteral_25677/*"▀■"*/, v21);
    sub_1C13D24(&StringLiteral_1846/*"<size={0}>{1}</size>"*/, v22);
    sub_1C13D24(&StringLiteral_15618/*"VmLck"*/, v23);
    sub_1C13D24(&StringLiteral_25679/*"■☀"*/, v24);
    sub_1C13D24(&StringLiteral_360/*" 確率 / 合計 : "*/, v25);
    sub_1C13D24(&StringLiteral_1841/*"<single-transition>#"*/, v26);
    sub_1C13D24(&StringLiteral_25676/*"┗"*/, v27);
    sub_1C13D24(&StringLiteral_1216/*"0.00"*/, v28);
    sub_1C13D24(&StringLiteral_1848/*"<size={0}>▼</size>"*/, v29);
    sub_1C13D24(&StringLiteral_171/*" / "*/, v30);
    sub_1C13D24(&StringLiteral_207/*" SEID : "*/, v31);
    sub_1C13D24(&StringLiteral_25658/*" ⁰"*/, v32);
    sub_1C13D24(&StringLiteral_1847/*"<size={0}>▲</size>"*/, v33);
    sub_1C13D24(&StringLiteral_1844/*"<size={0}>-</size>"*/, v34);
    sub_1C13D24(&StringLiteral_1845/*"<size={0}>{1}/{2}</size>"*/, v35);
    sub_1C13D24(&StringLiteral_1/*""*/, v36);
    sub_1C13D24(&StringLiteral_358/*" 分類 : "*/, v37);
    sub_1C13D24(&StringLiteral_1629/*"</col>"*/, v38);
    sub_1C13D24(&StringLiteral_1870/*"=spot"*/, v39);
    sub_1C13D24(&StringLiteral_12858/*"Servant4"*/, v40);
    sub_1C13D24(&StringLiteral_25659/*"​"*/, v41);
    sub_1C13D24(&StringLiteral_1843/*"<size={0}>+</size>"*/, v42);
    byte_4BB3BC4 = 1;
  }
  HIDWORD(format.monitor) = 0;
  if ( !this->fields.show )
    return;
  normal = (char *)MotionInfo_TypeInfo;
  format.fields._stringLength = 0;
  TypeName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  actionData = *(struct BattleActionData_o **)(*((_QWORD *)normal + 23) + 8LL);
  if ( actionData )
  {
    if ( !*((_DWORD *)normal + 56) )
    {
      j_il2cpp_runtime_class_init_0(normal);
      normal = (char *)MotionInfo_TypeInfo;
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_203;
    }
    format.fields._stringLength = actionData->fields.motionId;
    commandType = actionData->fields.commandType;
    if ( !*((_DWORD *)normal + 56) )
    {
      j_il2cpp_runtime_class_init_0(normal);
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_203;
    }
    v48 = 60LL;
    if ( commandType == -1 )
      v48 = 56LL;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)normal, *(_DWORD *)((char *)&actionData->klass + v48), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BB3C27 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3C27 = 1;
  }
  v49 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v49 = MotionInfo_TypeInfo;
  }
  if ( v49->static_fields->_IsSe_k__BackingField )
  {
    v50 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v49->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v49);
    if ( !byte_4BB3C28 )
    {
      sub_1C13D24(&MotionInfo_TypeInfo, method);
      byte_4BB3C28 = 1;
    }
    v51 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v51 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v51->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v54 = System_String__Concat_62979204(
            (System_String_o *)StringLiteral_12858/*"Servant4"*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v49 = MotionInfo_TypeInfo;
    v50 = v54;
  }
  if ( !v49->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v49);
  if ( !byte_4BB3C27 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3C27 = 1;
  }
  v55 = MotionInfo_TypeInfo;
  cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v55 = MotionInfo_TypeInfo;
    cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  }
  if ( v55->static_fields->_IsSe_k__BackingField )
    v57 = (System_String_o **)&StringLiteral_207/*" SEID : "*/;
  else
    v57 = (System_String_o **)&StringLiteral_15618/*"VmLck"*/;
  v58 = *v57;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v55);
  if ( !byte_4BB3C29 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3C29 = 1;
  }
  v59 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v59 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v59->static_fields->_VoiceId_k__BackingField;
  v61 = System_Environment__get_NewLine(0LL);
  v62 = System_String__Concat_62981208(v50, v58, VoiceId_k__BackingField, v61, 0LL);
  normal = (char *)sub_1C13DCC(string___TypeInfo, 8LL);
  if ( !normal )
    goto LABEL_203;
  v69 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v62;
  sub_1C13CC8((PartyOrganizationUtility_o *)(normal + 32), (int64_t)v62, v63, v64, v65, v66, v67, v68);
  if ( *((_DWORD *)v69 + 6) <= 1u )
    goto LABEL_196;
  v76 = StringLiteral_360/*" 確率 / 合計 : "*/;
  *((_QWORD *)v69 + 5) = StringLiteral_360/*" 確率 / 合計 : "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 40), v76, v70, v71, v72, v73, v74, v75);
  if ( !byte_4BB3C2A )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v77);
    byte_4BB3C2A = 1;
  }
  v78 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v78 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v78->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_63856516(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v69 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v69 + 6) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 48), (int64_t)normal, v79, v80, v81, v82, v83, v84);
  if ( *((_DWORD *)v69 + 6) <= 3u )
    goto LABEL_196;
  v91 = StringLiteral_171/*" / "*/;
  *((_QWORD *)v69 + 7) = StringLiteral_171/*" / "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 56), v91, v85, v86, v87, v88, v89, v90);
  if ( !byte_4BB3C2B )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v92);
    byte_4BB3C2B = 1;
  }
  v93 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v93 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v93->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_63856516(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v69 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v69 + 8) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 64), (int64_t)normal, v94, v95, v96, v97, v98, v99);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v69 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v69 + 9) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 72), (int64_t)normal, v100, v101, v102, v103, v104, v105);
  if ( *((_DWORD *)v69 + 6) <= 6u )
    goto LABEL_196;
  v112 = StringLiteral_358/*" 分類 : "*/;
  *((_QWORD *)v69 + 10) = StringLiteral_358/*" 分類 : "*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 80), v112, v106, v107, v108, v109, v110, v111);
  if ( !byte_4BB3C2C )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v46);
    byte_4BB3C2C = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v69 + 6) <= 7u )
    goto LABEL_196;
  v119 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v69 + 11) = v119;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v69 + 88), v119, v113, v114, v115, v116, v117, v118);
  v120 = System_String__Concat_62981472((System_String_array *)v69, 0LL);
  v121 = sub_1C13DCC(string___TypeInfo, 21LL);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( !v121 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v121 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v121 + 32) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 32), (int64_t)normal, v122, v123, v124, v125, v126, v127);
  if ( *(_DWORD *)(v121 + 24) <= 1u )
    goto LABEL_196;
  v134 = StringLiteral_25679/*"■☀"*/;
  *(_QWORD *)(v121 + 40) = StringLiteral_25679/*"■☀"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 40), v134, v128, v129, v130, v131, v132, v133);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 48) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 48), (int64_t)normal, v135, v136, v137, v138, v139, v140);
  if ( *(_DWORD *)(v121 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = (int64_t)static_fields->svtName;
  *(_QWORD *)(v121 + 56) = static_fields->svtName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 56), svtName, v141, v142, v143, v144, v145, v146);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 64) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 64), (int64_t)normal, v149, v150, v151, v152, v153, v154);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 72) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 72), (int64_t)normal, v155, v156, v157, v158, v159, v160);
  if ( *(_DWORD *)(v121 + 24) <= 6u )
    goto LABEL_196;
  v167 = StringLiteral_25678/*"■"*/;
  *(_QWORD *)(v121 + 80) = StringLiteral_25678/*"■"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 80), v167, v161, v162, v163, v164, v165, v166);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 88) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 88), (int64_t)normal, v168, v169, v170, v171, v172, v173);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0LL);
  if ( *(_DWORD *)(v121 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 96) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 96), (int64_t)normal, v174, v175, v176, v177, v178, v179);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 104) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 104), (int64_t)normal, v180, v181, v182, v183, v184, v185);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v121 + 112) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 112), (int64_t)normal, v186, v187, v188, v189, v190, v191);
  if ( *(_DWORD *)(v121 + 24) <= 0xBu )
    goto LABEL_196;
  v198 = StringLiteral_25676/*"┗"*/;
  *(_QWORD *)(v121 + 120) = StringLiteral_25676/*"┗"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 120), v198, v192, v193, v194, v195, v196, v197);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v121 + 128) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 128), (int64_t)normal, v199, v200, v201, v202, v203, v204);
  if ( *(_DWORD *)(v121 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v121 + 136) = TypeName;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 136), (int64_t)TypeName, v205, v206, v207, v208, v209, v210);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v121 + 144) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 144), (int64_t)normal, v211, v212, v213, v214, v215, v216);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v121 + 152) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 152), (int64_t)normal, v217, v218, v219, v220, v221, v222);
  if ( *(_DWORD *)(v121 + 24) <= 0x10u )
    goto LABEL_196;
  v229 = StringLiteral_25677/*"▀■"*/;
  *(_QWORD *)(v121 + 160) = StringLiteral_25677/*"▀■"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 160), v229, v223, v224, v225, v226, v227, v228);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v121 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v121 + 168) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 168), (int64_t)normal, v230, v231, v232, v233, v234, v235);
  if ( *(_DWORD *)(v121 + 24) <= 0x12u
    || (*(_QWORD *)(v121 + 176) = v120,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 176), (int64_t)v120, v236, v237, v238, v239, v240, v241),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v121 + 24) <= 0x13u)
    || (*(_QWORD *)(v121 + 184) = normal,
        sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 184), (int64_t)normal, v242, v243, v244, v245, v246, v247),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v121 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1C13F88(normal, v46);
  }
  *(_QWORD *)(v121 + 192) = normal;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v121 + 192), (int64_t)normal, v248, v249, v250, v251, v252, v253);
  v254 = (Il2CppObject *)System_String__Concat_62981472((System_String_array *)v121, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v256 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v256 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0LL);
    *p_labelStyle = none;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&this->fields.labelStyle,
      (int64_t)none,
      v259,
      v260,
      v261,
      v262,
      v263,
      v264);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0LL);
    if ( !normal )
      goto LABEL_203;
    v427.fields.r = 1.0;
    v427.fields.g = 1.0;
    v427.fields.b = 1.0;
    v427.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v427, 0LL);
  }
  v265 = (float)height * 0.25;
  v266 = v256 * 40.0;
  v267 = v256 * 250.0;
  v268 = 3;
  v269 = (float)UnityEngine_Screen__get_width(0LL) - v267;
  do
  {
    width = v267;
    if ( this->fields.isLogAreaShow )
      v271 = 0.0;
    else
      v271 = v269;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0LL);
    v272 = UnityEngine_Screen__get_height(0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v428.fields.m_Height = (float)v272;
    v428.fields.m_YMin = 0.0;
    v428.fields.m_XMin = v271;
    v428.fields.m_Width = width;
    UnityEngine_GUI__Box(v428, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    --v268;
  }
  while ( v268 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0LL);
  v425 = *((float *)&format.monitor + 1);
  v276 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v425, v273, v274, v275);
  v277 = System_String__Format_62982316((System_String_o *)StringLiteral_1845/*"<size={0}>{1}/{2}</size>"*/, v276, v254, 0LL);
  v278 = *p_labelStyle;
  v279 = v277;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v429.fields.m_YMin = 0.0;
  v429.fields.m_XMin = v269;
  v429.fields.m_Width = v267;
  v429.fields.m_Height = v265 + v265;
  UnityEngine_GUI__Label_70847436(v429, v279, v278, 0LL);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v284 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v281, v282, v283);
  if ( this->fields.isLogAreaShow )
    v285 = (Il2CppObject **)&StringLiteral_25658/*" ⁰"*/;
  else
    v285 = (Il2CppObject **)&StringLiteral_25659/*"​"*/;
  v286 = System_String__Format_62982316((System_String_o *)StringLiteral_1845/*"<size={0}>{1}/{2}</size>"*/, v284, *v285, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v430.fields.m_XMin = v269;
  v430.fields.m_YMin = (float)((float)(v265 + v265) + 10.0) + 0.0;
  v430.fields.m_Width = v267 * 0.5;
  v430.fields.m_Height = v266;
  v287 = UnityEngine_GUI__Button(v430, v286, 0LL);
  v288 = isLogAreaShow;
  if ( v287 )
    v288 = !this->fields.isLogAreaShow;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v431.fields.m_XMin = (float)(v267 * 0.5) + v269;
  v431.fields.m_YMin = (float)((float)(v265 + v265) + 10.0) + 0.0;
  v431.fields.m_Width = v267 * 0.5;
  v431.fields.m_Height = v266;
  if ( UnityEngine_GUI__Button(v431, (System_String_o *)StringLiteral_1849/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, 0LL) )
  {
    v292 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v292);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v288;
    return;
  }
  v293 = v266 + 10.0;
  v421 = v288;
  v425 = *((float *)&format.monitor + 1);
  v294 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v425, v289, v290, v291);
  v295 = System_String__Format((System_String_o *)StringLiteral_1846/*"<size={0}>{1}</size>"*/, v294, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v432.fields.m_XMin = v269;
  v432.fields.m_YMin = (float)((float)((float)(v265 + v265) + 10.0) + 0.0) + (float)(v266 + 10.0);
  v432.fields.m_Width = v266;
  v432.fields.m_Height = v266;
  if ( UnityEngine_GUI__RepeatButton(v432, v295, 0LL) )
  {
    v299 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v299 = MotionInfo_TypeInfo;
    }
    v299->static_fields->scrollPosition.fields.y = v299->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v425 = *((float *)&format.monitor + 1);
  v300 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v425, v296, v297, v298);
  v301 = System_String__Format((System_String_o *)StringLiteral_1847/*"<size={0}>▲</size>"*/, v300, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v433.fields.m_XMin = v266 + v269;
  v433.fields.m_YMin = (float)((float)((float)(v265 + v265) + 10.0) + 0.0) + (float)(v266 + 10.0);
  v433.fields.m_Width = v266;
  v433.fields.m_Height = v266;
  if ( UnityEngine_GUI__RepeatButton(v433, v301, 0LL) )
  {
    v305 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v305 = MotionInfo_TypeInfo;
    }
    v305->static_fields->scrollPosition.fields.y = v305->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v425 = *((float *)&format.monitor + 1);
  v306 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v425, v302, v303, v304);
  v307 = System_String__Format((System_String_o *)StringLiteral_1843/*"<size={0}>+</size>"*/, v306, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v434.fields.m_XMin = v266 + (float)(v266 + v269);
  v434.fields.m_YMin = (float)((float)((float)(v265 + v265) + 10.0) + 0.0) + (float)(v266 + 10.0);
  v434.fields.m_Width = v266;
  v434.fields.m_Height = v266;
  if ( UnityEngine_GUI__Button(v434, v307, 0LL) )
  {
    v311 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v311;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_63787088(v311, 1, 0LL);
  }
  v425 = *((float *)&format.monitor + 1) * 0.9;
  v312 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v425, v308, v309, v310);
  monitor_high = this->fields.scrollSpeed;
  v316 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v313, v314, v315);
  v423 = 10;
  v320 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v423, v317, v318, v319);
  v321 = System_String__Format_62982384((System_String_o *)StringLiteral_1844/*"<size={0}>-</size>"*/, v312, v316, v320, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v435.fields.m_XMin = v266 + (float)(v266 + (float)(v266 + v269));
  v435.fields.m_YMin = (float)((float)((float)(v265 + v265) + 10.0) + 0.0) + (float)(v266 + 10.0);
  v435.fields.m_Width = v266 + 10.0;
  v435.fields.m_Height = v266;
  UnityEngine_GUI__Box(v435, v321, 0LL);
  v422 = HIDWORD(format.monitor);
  v325 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v422, v322, v323, v324);
  v326 = System_String__Format((System_String_o *)StringLiteral_1842/*"<size="*/, v325, 0LL);
  v436.fields.m_XMin = v293 + (float)(v266 + (float)(v266 + (float)(v266 + v269)));
  v436.fields.m_YMin = (float)((float)((float)(v265 + v265) + 10.0) + 0.0) + (float)(v266 + 10.0);
  v436.fields.m_Width = v266;
  v436.fields.m_Height = v266;
  if ( UnityEngine_GUI__Button(v436, v326, 0LL) )
  {
    v327 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v327;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_63787416(v327, 10, 0LL);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0LL);
  v425 = *((float *)&format.monitor + 1);
  v331 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v425, v328, v329, v330);
  v332 = System_String__Format((System_String_o *)StringLiteral_1848/*"<size={0}>▼</size>"*/, v331, 0LL);
  v333 = *p_labelStyle;
  v334 = v332;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v437.fields.m_Height = 40.0;
  v437.fields.m_XMin = v269;
  v437.fields.m_YMin = v293 + (float)((float)((float)((float)(v265 + v265) + 10.0) + 0.0) + (float)(v266 + 10.0));
  v437.fields.m_Width = v267;
  UnityEngine_GUI__Label_70847436(v437, v334, v333, 0LL);
  v335 = (float)((float)UnityEngine_Screen__get_width(0LL) - v267) + -10.0;
  v336 = *((float *)&format.monitor + 1) + 10.0;
  v337 = UnityEngine_Screen__get_height(0LL);
  v338 = MotionInfo_TypeInfo;
  v339 = (float)v337;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v338 = MotionInfo_TypeInfo;
  }
  v340 = v338->static_fields;
  v438.fields.m_YMin = 0.0;
  v438.fields.m_Width = v335;
  v438.fields.m_Height = v339;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  viewRect.fields.m_Width = v335 + -20.0;
  viewRect.fields.m_Height = v336 * (float)v340->voicePlayLogLineSize;
  v438.fields.m_XMin = 0.0;
  v341 = UnityEngine_GUI__BeginScrollView(v438, v340->scrollPosition, viewRect, 0LL);
  v342 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v341;
  v343 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v342->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v343 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v343->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v343->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v343);
      v343 = MotionInfo___c_TypeInfo;
    }
    v346 = (Il2CppObject *)v343->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1C13F70(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v346, Method_MotionInfo___c__OnGUI_b__46_0__, 0LL);
    v347 = MotionInfo___c_TypeInfo->static_fields;
    v347->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v347->__9__46_0, (int64_t)_9__46_0, v348, v349, v350, v351, v352, v353);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_2FC308C *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1C13F80(normal, v46);
  v354 = *(_QWORD *)normal;
  v355 = normal;
  v356 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v357 = (int *)(*(_QWORD *)(v354 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v357 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v356;
      v357 += 4;
      if ( !v356 )
        goto LABEL_159;
    }
    v358 = v354 + 16LL * *v357 + 312;
  }
  else
  {
LABEL_159:
    v358 = sub_1C65D04(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v360 = (*(__int64 (__fastcall **)(char *, _QWORD))v358)(v355, *(_QWORD *)(v358 + 8));
  if ( !v360 )
    sub_1C13F80(0LL, v359);
  for ( i = 0; ; ++i )
  {
    v362 = *(_QWORD *)v360;
    v363 = *(unsigned __int16 *)(*(_QWORD *)v360 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v360 + 302LL) )
    {
      v364 = (int *)(*(_QWORD *)(v362 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v364 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v363;
        v364 += 4;
        if ( !v363 )
          goto LABEL_168;
      }
      v365 = v362 + 16LL * *v364 + 312;
    }
    else
    {
LABEL_168:
      v365 = sub_1C65D04(v360, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v365)(v360, *(_QWORD *)(v365 + 8)) & 1) == 0 )
      break;
    v366 = *(_QWORD *)v360;
    v367 = *(unsigned __int16 *)(*(_QWORD *)v360 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v360 + 302LL) )
    {
      v368 = (int *)(*(_QWORD *)(v366 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v368 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v367;
        v368 += 4;
        if ( !v367 )
          goto LABEL_175;
      }
      v369 = v366 + 16LL * *v368 + 312;
    }
    else
    {
LABEL_175:
      v369 = sub_1C65D04(v360, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v370 = (*(__int64 (__fastcall **)(__int64, _QWORD))v369)(v360, *(_QWORD *)(v369 + 8));
    v371 = sub_1C13DCC(string___TypeInfo, 5LL);
    v379 = v371;
    if ( !v371 )
      sub_1C13F80(0LL, v372);
    if ( !*(_DWORD *)(v371 + 24) )
      sub_1C13F88(v371, v372);
    v380 = StringLiteral_1841/*"<single-transition>#"*/;
    *(_QWORD *)(v371 + 32) = StringLiteral_1841/*"<single-transition>#"*/;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v371 + 32), v380, v373, v374, v375, v376, v377, v378);
    v382 = System_Single__ToString(v381, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v379 + 24) <= 1u )
      sub_1C13F88(v382, v382);
    *(_QWORD *)(v379 + 40) = v382;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v379 + 40), (int64_t)v382, v383, v384, v385, v386, v387, v388);
    if ( *(_DWORD *)(v379 + 24) <= 2u )
      sub_1C13F88(v389, v390);
    v397 = StringLiteral_1870/*"=spot"*/;
    *(_QWORD *)(v379 + 48) = StringLiteral_1870/*"=spot"*/;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v379 + 48), v397, v391, v392, v393, v394, v395, v396);
    if ( *(_DWORD *)(v379 + 24) <= 3u )
      sub_1C13F88(v398, v399);
    *(_QWORD *)(v379 + 56) = v370;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v379 + 56), v370, v400, v401, v402, v403, v404, v405);
    if ( *(_DWORD *)(v379 + 24) <= 4u )
      sub_1C13F88(v406, v407);
    v414 = StringLiteral_1629/*"</col>"*/;
    *(_QWORD *)(v379 + 64) = StringLiteral_1629/*"</col>"*/;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v379 + 64), v414, v408, v409, v410, v411, v412, v413);
    v415 = System_String__Concat_62981472((System_String_array *)v379, 0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v439.fields.m_YMin = v336 * (float)i;
    v439.fields.m_XMin = 0.0;
    v439.fields.m_Width = v335 + -20.0;
    v439.fields.m_Height = v336;
    UnityEngine_GUI__Label(v439, v415, 0LL);
  }
  v416 = *(_QWORD *)v360;
  v417 = *(unsigned __int16 *)(*(_QWORD *)v360 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v360 + 302LL) )
  {
    v418 = (int *)(*(_QWORD *)(v416 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v418 - 1) != System_IDisposable_TypeInfo )
    {
      --v417;
      v418 += 4;
      if ( !v417 )
        goto LABEL_190;
    }
    v419 = v416 + 16LL * *v418 + 312;
  }
  else
  {
LABEL_190:
    v419 = sub_1C65D04(v360, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v419)(v360, *(_QWORD *)(v419 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
  this->fields.isLogAreaShow = v421;
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
  struct System_String_o *v9; // x20
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct System_String_o *v19; // x20
  MotionInfo_c *v20; // x0
  struct MotionInfo_StaticFields *v21; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  MotionInfo_c *v29; // x0
  struct System_String_o *v30; // x20
  struct MotionInfo_StaticFields *v31; // x0
  __int64 v32; // x1
  MotionInfo_c *v33; // x0

  if ( (byte_4BB3BC6 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB3BC6 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v9 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BB3C2D )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3C2D = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  static_fields = v10->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v9;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int64_t)v9,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v19 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BB3C2E )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v12);
    byte_4BB3C2E = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  v21 = v20->static_fields;
  v21->_VoiceId_k__BackingField = v19;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v21->_VoiceId_k__BackingField, (int64_t)v19, v13, v14, v15, v16, v17, v18);
  if ( !byte_4BB3C2F )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v22);
    byte_4BB3C2F = 1;
  }
  v29 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v29 = MotionInfo_TypeInfo;
  }
  v29->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4BB3C30 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v22);
    v29 = MotionInfo_TypeInfo;
    byte_4BB3C30 = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = MotionInfo_TypeInfo;
  }
  v29->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v30 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BB3C31 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v22);
    v29 = MotionInfo_TypeInfo;
    byte_4BB3C31 = 1;
  }
  if ( !v29->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v29);
    v29 = MotionInfo_TypeInfo;
  }
  v31 = v29->static_fields;
  v31->_VoiceType_k__BackingField = v30;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&v31->_VoiceType_k__BackingField,
    (int64_t)v30,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( !byte_4BB3C32 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v32);
    byte_4BB3C32 = 1;
  }
  v33 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v33 = MotionInfo_TypeInfo;
  }
  v33->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4BB3C33 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v32);
    v33 = MotionInfo_TypeInfo;
    byte_4BB3C33 = 1;
  }
  if ( !v33->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v33);
    v33 = MotionInfo_TypeInfo;
  }
  v33->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BCC & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BCC = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BB3C34 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3C34 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  v2->static_fields->_IsRandom_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  MotionInfo_c *v3; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x9
  int32_t size; // w2
  int v7; // w10

  if ( (byte_4BB3BCB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string___Clear__, v1);
    sub_1C13D24(&MotionInfo_TypeInfo, v2);
    byte_4BB3BCB = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  static_fields = v3->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_1C13F80(v3, v1);
  size = voicePlaybackLogList->fields._size;
  v7 = voicePlaybackLogList->fields._version + 1;
  voicePlaybackLogList->fields._size = 0;
  voicePlaybackLogList->fields._version = v7;
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

  if ( (byte_4BB3BC3 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, svtName);
    byte_4BB3BC3 = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->svtName = svtName;
  sub_1C13CC8(
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
  sub_1C13CC8(
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  void *Item; // x0
  struct MotionInfo_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  int32_t voicePlayLogLineSize; // w22
  _DWORD *v10; // x8
  MotionInfo_c *v11; // x0
  struct MotionInfo_StaticFields *v12; // x8
  int v13; // w22
  int v14; // w23
  struct MotionInfo_StaticFields *v15; // x8
  int32_t v16; // w9

  if ( (byte_4BB3BCA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__get_Count__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string___get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_List_string___get_Item__, v4);
    sub_1C13D24(&MotionInfo_TypeInfo, v5);
    byte_4BB3BCA = 1;
  }
  Item = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    Item = MotionInfo_TypeInfo;
  }
  static_fields = (struct MotionInfo_StaticFields *)*((_QWORD *)Item + 23);
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_24;
  if ( voicePlaybackLogList->fields._size < 1 )
    return;
  if ( !*((_DWORD *)Item + 56)
    && (j_il2cpp_runtime_class_init_0(Item),
        static_fields = MotionInfo_TypeInfo->static_fields,
        (voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList) == 0LL)
    || (voicePlayLogLineSize = static_fields->voicePlayLogLineSize,
        (Item = System_Collections_Generic_List_object___get_Item(
                  voicePlaybackLogList,
                  voicePlaybackLogList->fields._size - 1,
                  (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_24:
    sub_1C13F80(Item, v1);
  }
  v10 = Item;
  v11 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v10[6] + voicePlayLogLineSize;
  while ( 1 )
  {
    if ( v11->_2.cctor_finished )
    {
      v12 = v11->static_fields;
      v13 = v12->voicePlayLogLineSize;
      if ( v13 <= 499 )
        goto LABEL_22;
      goto LABEL_18;
    }
    j_il2cpp_runtime_class_init_0(v11);
    v12 = MotionInfo_TypeInfo->static_fields;
    v14 = v12->voicePlayLogLineSize;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      break;
    v13 = v12->voicePlayLogLineSize;
    if ( v14 <= 499 )
      goto LABEL_22;
LABEL_18:
    Item = v12->voicePlaybackLogList;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_362CEFC *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_24;
    v15 = MotionInfo_TypeInfo->static_fields;
    v16 = v13 - *((_DWORD *)Item + 6);
    Item = v15->voicePlaybackLogList;
    v15->voicePlayLogLineSize = v16;
    if ( !Item )
      goto LABEL_24;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Item,
      0,
      (const MethodInfo_362E9A0 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v11 = MotionInfo_TypeInfo;
  }
  j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v12 = MotionInfo_TypeInfo->static_fields;
  v13 = v12->voicePlayLogLineSize;
  if ( v14 > 499 )
    goto LABEL_18;
LABEL_22:
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v13);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BBF & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BBF = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_IsRandom_k__BackingField;
}


bool __fastcall MotionInfo__get_IsSe(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BC1 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BC1 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_IsSe_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceId(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BB9 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BB9 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceId_k__BackingField;
}


int32_t __fastcall MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BBD & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BBD = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BB3 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BB3 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceServantId_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BB7 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BB7 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceType(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BBB & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BBB = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceType_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4BB3BB5 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v1);
    byte_4BB3BB5 = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  return v2->static_fields->_VoiceWeight_k__BackingField;
}


void __fastcall MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4BB3BC0 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3BC0 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsRandom_k__BackingField = value;
}


void __fastcall MotionInfo__set_IsSe(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4BB3BC2 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3BC2 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsSe_k__BackingField = value;
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

  if ( (byte_4BB3BBA & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3BBA = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1C13CC8(
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
  MotionInfo_c *v3; // x0

  if ( (byte_4BB3BBE & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3BBE = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceIndex_k__BackingField = value;
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

  if ( (byte_4BB3BB4 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3BB4 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1C13CC8(
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
  MotionInfo_c *v4; // x0

  if ( (byte_4BB3BB8 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v2);
    byte_4BB3BB8 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceTotalWeight_k__BackingField = value;
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

  if ( (byte_4BB3BBC & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, method);
    byte_4BB3BBC = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1C13CC8(
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
  MotionInfo_c *v4; // x0

  if ( (byte_4BB3BB6 & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo_TypeInfo, v2);
    byte_4BB3BB6 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceWeight_k__BackingField = value;
}


void __fastcall MotionInfo___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB3BCE & 1) == 0 )
  {
    sub_1C13D24(&MotionInfo___c_TypeInfo, v1);
    byte_4BB3BCE = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(MotionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v2;
  sub_1C13CC8((PartyOrganizationUtility_o *)MotionInfo___c_TypeInfo->static_fields, (int64_t)v2, v3, v4, v5, v6, v7, v8);
}


void __fastcall MotionInfo___c___ctor(MotionInfo___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Collections_Generic_IEnumerable_string__o *__fastcall MotionInfo___c___OnGUI_b__46_0(
        MotionInfo___c_o *this,
        System_Collections_Generic_List_string__o *list,
        const MethodInfo *method)
{
  return (System_Collections_Generic_IEnumerable_string__o *)list;
}