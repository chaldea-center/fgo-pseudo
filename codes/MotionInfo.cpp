void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v8; // x19
  struct MotionInfo_StaticFields *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7

  if ( (byte_4BDBA31 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_1C21E38(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_1C21E38(&MotionInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBA31 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)MotionInfo_TypeInfo->static_fields,
    (int64_t)StringLiteral_1/*""*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4BD6AAA )
  {
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    byte_4BD6AAA = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v9 = MotionInfo_TypeInfo->static_fields;
  v9->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v8;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v9->voicePlaybackLogList, (int64_t)v8, v10, v11, v12, v13, v14, v15);
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
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  MotionInfo_c *v17; // x0
  int64_t v18; // x20
  struct MotionInfo_StaticFields *v19; // x0
  const MethodInfo *v20; // x0

  if ( (byte_4BDBA2B & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_11704/*"SE"*/);
    byte_4BDBA2B = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BDBA93 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA93 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4BDBA94 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4BDBA94 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4BDBA92 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4BDBA92 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceId_k__BackingField,
    (int64_t)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4BDBA96 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA96 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4BDBA97 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_4BDBA97 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4BDBA98 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_4BDBA98 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_IsRandom_k__BackingField = 0;
  v18 = StringLiteral_11704/*"SE"*/;
  if ( !byte_4BDBA95 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_4BDBA95 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = (struct System_String_o *)v18;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v19->_VoiceType_k__BackingField, v18, v11, v12, v13, v14, v15, v16);
  MotionInfo__AddVoiceLog(v20);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v4; // x1
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  int64_t v14; // x1
  Il2CppClass **v15; // x0
  MotionInfo_c *v16; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v21; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v23; // x0
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  int64_t v33; // x1
  Il2CppClass **v34; // x0
  MotionInfo_c *v35; // x0
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  int64_t v45; // x1
  Il2CppClass **v46; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  char *v53; // x20
  int64_t v54; // x1
  MotionInfo_c *v55; // x0
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  MotionInfo_c *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  int64_t v91; // x1
  Il2CppClass **v92; // x0
  MotionInfo_c *v93; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v95; // x0
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  int64_t v105; // x1
  Il2CppClass **v106; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  __int64 v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x8
  const MethodInfo *v117; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4BDBA2C & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&MotionInfo_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&StringLiteral_360/*" 確率 / 合計 : "*/);
    sub_1C21E38(&StringLiteral_215/*" VoiceID : "*/);
    sub_1C21E38(&StringLiteral_1216/*"0.00"*/);
    sub_1C21E38(&StringLiteral_171/*" / "*/);
    sub_1C21E38(&StringLiteral_934/*"--- Voice・SE Log ---"*/);
    sub_1C21E38(&StringLiteral_207/*" SEID : "*/);
    sub_1C21E38(&StringLiteral_358/*" 分類 : "*/);
    sub_1C21E38(&StringLiteral_12880/*"ServantID : "*/);
    byte_4BDBA2C = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_63115476((System_String_o *)StringLiteral_934/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
  if ( !v1 )
    goto LABEL_74;
  items = v1->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v1->fields._size;
  v14 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v14;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 4), v14, v5, v6, v7, v8, v9, v10);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BDBA8B )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8B = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4BDBA8D )
      {
        sub_1C21E38(&MotionInfo_TypeInfo);
        byte_4BDBA8D = 1;
      }
      v16 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v16 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v16->static_fields->_VoiceId_k__BackingField;
      v18 = System_Environment__get_NewLine(0LL);
      v19 = (System_String_o *)StringLiteral_207/*" SEID : "*/;
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
  if ( !byte_4BDBA8C )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8C = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v21->static_fields->_VoiceServantId_k__BackingField;
  v23 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_63126736(
                                   (System_String_o *)StringLiteral_12880/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v23,
                                   0LL);
  v30 = v1->fields._items;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v30 )
LABEL_74:
    sub_1C22094(voicePlaybackLogList, v4);
  v32 = v1->fields._size;
  v33 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v32 >= v30->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v34[4] = (Il2CppClass *)v33;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v34 + 4), v33, v24, v25, v26, v27, v28, v29);
  }
  if ( !byte_4BDBA8D )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8D = 1;
  }
  v35 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v35 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v35->static_fields->_VoiceId_k__BackingField;
  v18 = System_Environment__get_NewLine(0LL);
  v19 = (System_String_o *)StringLiteral_215/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_63126736(v19, VoiceId_k__BackingField, v18, 0LL);
  v42 = v1->fields._items;
  v43 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v42 )
    goto LABEL_74;
  v44 = v1->fields._size;
  v45 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v44 >= v42->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v42->obj.klass + v44;
    v1->fields._size = v44 + 1;
    v46[4] = (Il2CppClass *)v45;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v46 + 4), v45, v36, v37, v38, v39, v40, v41);
  }
  voicePlaybackLogList = (char *)sub_1C21EE0(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v53 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v54 = StringLiteral_360/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_360/*" 確率 / 合計 : "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(voicePlaybackLogList + 32), v54, v47, v48, v49, v50, v51, v52);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BDBA8E )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8E = 1;
  }
  v55 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v55 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v55->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_64004140(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v53 + 5) = voicePlaybackLogList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 40), (int64_t)voicePlaybackLogList, v56, v57, v58, v59, v60, v61);
  if ( *((_DWORD *)v53 + 6) <= 2u )
    goto LABEL_75;
  v68 = StringLiteral_171/*" / "*/;
  *((_QWORD *)v53 + 6) = StringLiteral_171/*" / "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 48), v68, v62, v63, v64, v65, v66, v67);
  if ( !byte_4BDBA8F )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8F = 1;
  }
  v69 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v69 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v69->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_64004140(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 3u
    || (*((_QWORD *)v53 + 7) = voicePlaybackLogList,
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)(v53 + 56),
          (int64_t)voicePlaybackLogList,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v53 + 6) <= 4u) )
  {
LABEL_75:
    sub_1C2209C(voicePlaybackLogList, v4);
  }
  *((_QWORD *)v53 + 8) = voicePlaybackLogList;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v53 + 64), (int64_t)voicePlaybackLogList, v76, v77, v78, v79, v80, v81);
  voicePlaybackLogList = (char *)System_String__Concat_63129004((System_String_array *)v53, 0LL);
  v88 = v1->fields._items;
  v89 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v88 )
    goto LABEL_74;
  v90 = v1->fields._size;
  v91 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v90 >= v88->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &v88->obj.klass + v90;
    v1->fields._size = v90 + 1;
    v92[4] = (Il2CppClass *)v91;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v92 + 4), v91, v82, v83, v84, v85, v86, v87);
  }
  if ( !byte_4BDBA90 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA90 = 1;
  }
  v93 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v93 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v93->static_fields->_VoiceType_k__BackingField;
  v95 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_63126736(
                                   (System_String_o *)StringLiteral_358/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v95,
                                   0LL);
  v102 = v1->fields._items;
  v103 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v102 )
    goto LABEL_74;
  v104 = v1->fields._size;
  v105 = (int64_t)voicePlaybackLogList;
  if ( (unsigned int)v104 >= v102->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v102->obj.klass + v104;
    v1->fields._size = v104 + 1;
    v106[4] = (Il2CppClass *)v105;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v106 + 4), v105, v96, v97, v98, v99, v100, v101);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v113 = *((_QWORD *)voicePlaybackLogList + 2);
  v114 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v113 )
    goto LABEL_74;
  v115 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v115 >= *(_DWORD *)(v113 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v1,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
  }
  else
  {
    v116 = v113 + 8 * v115;
    *((_DWORD *)voicePlaybackLogList + 6) = v115 + 1;
    *(_QWORD *)(v116 + 32) = v1;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v116 + 32), (int64_t)v1, v107, v108, v109, v110, v111, v112);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v117);
}


void __fastcall MotionInfo__AddVoiceLog_39442216(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  MotionInfo_c *v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  const MethodInfo *v27; // x0

  if ( (byte_4BDBA2D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA2D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v3 )
    goto LABEL_16;
  items = v3->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)str,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v15 + 4), (int64_t)str, v6, v7, v8, v9, v10, v11);
  }
  v22 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
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
    sub_1C22094(voicePlaybackLogList, v5);
  }
  v25 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v25 >= v23->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    voicePlaybackLogList->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v3;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v26 + 4), (int64_t)v3, v16, v17, v18, v19, v20, v21);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v27);
}


System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = type;
  if ( (byte_4BDBA29 & 1) == 0 )
  {
    sub_1C21E38(&BattleCommand_TypeInfo);
    sub_1C21E38(&StringLiteral_25766/*"バスター"*/);
    sub_1C21E38(&StringLiteral_25748/*"クイック"*/);
    sub_1C21E38(&StringLiteral_25737/*"アーツ"*/);
    sub_1C21E38(&StringLiteral_25741/*"エクストラ"*/);
    byte_4BDBA29 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v4 = &StringLiteral_25737/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v4 = &StringLiteral_25766/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v4 = &StringLiteral_25748/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v4 = &StringLiteral_25741/*"エクストラ"*/;
LABEL_11:
      result = (System_String_o *)*v4;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v6, 0LL);
      break;
  }
  return result;
}


void __fastcall MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  char *normal; // x0
  System_String_o *TypeName; // x20
  struct BattleActionData_o *actionData; // x8
  __int64 v7; // x1
  int32_t commandType; // w20
  __int64 v9; // x9
  MotionInfo_c *v10; // x8
  System_String_o *v11; // x21
  MotionInfo_c *v12; // x0
  System_String_o *VoiceServantId_k__BackingField; // x21
  System_String_o *NewLine; // x0
  System_String_o *v15; // x0
  MotionInfo_c *v16; // x0
  uint32_t cctor_finished; // w8
  System_String_o **v18; // x9
  System_String_o *v19; // x22
  MotionInfo_c *v20; // x0
  System_String_o *VoiceId_k__BackingField; // x23
  System_String_o *v22; // x0
  System_String_o *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  char *v30; // x21
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  int64_t v37; // x1
  MotionInfo_c *v38; // x0
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x2
  int32_t v46; // w3
  System_String_o *v47; // x4
  BattleSetupInfo_o *v48; // x5
  FollowerInfo_o *v49; // x6
  PartyListViewItem_o *v50; // x7
  int64_t v51; // x1
  MotionInfo_c *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  int64_t v71; // x1
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  int64_t v78; // x1
  System_String_o *v79; // x22
  __int64 v80; // x21
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  int64_t v93; // x1
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
  struct MotionInfo_StaticFields *static_fields; // x8
  int64_t svtName; // x1
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
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
  int64_t v126; // x1
  int64_t v127; // x2
  int32_t v128; // w3
  System_String_o *v129; // x4
  BattleSetupInfo_o *v130; // x5
  FollowerInfo_o *v131; // x6
  PartyListViewItem_o *v132; // x7
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  int64_t v139; // x2
  int32_t v140; // w3
  System_String_o *v141; // x4
  BattleSetupInfo_o *v142; // x5
  FollowerInfo_o *v143; // x6
  PartyListViewItem_o *v144; // x7
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  int64_t v151; // x2
  int32_t v152; // w3
  System_String_o *v153; // x4
  BattleSetupInfo_o *v154; // x5
  FollowerInfo_o *v155; // x6
  PartyListViewItem_o *v156; // x7
  int64_t v157; // x1
  int64_t v158; // x2
  int32_t v159; // w3
  System_String_o *v160; // x4
  BattleSetupInfo_o *v161; // x5
  FollowerInfo_o *v162; // x6
  PartyListViewItem_o *v163; // x7
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  int64_t v170; // x2
  int32_t v171; // w3
  System_String_o *v172; // x4
  BattleSetupInfo_o *v173; // x5
  FollowerInfo_o *v174; // x6
  PartyListViewItem_o *v175; // x7
  int64_t v176; // x2
  int32_t v177; // w3
  System_String_o *v178; // x4
  BattleSetupInfo_o *v179; // x5
  FollowerInfo_o *v180; // x6
  PartyListViewItem_o *v181; // x7
  int64_t v182; // x2
  int32_t v183; // w3
  System_String_o *v184; // x4
  BattleSetupInfo_o *v185; // x5
  FollowerInfo_o *v186; // x6
  PartyListViewItem_o *v187; // x7
  int64_t v188; // x1
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  int64_t v195; // x2
  int32_t v196; // w3
  System_String_o *v197; // x4
  BattleSetupInfo_o *v198; // x5
  FollowerInfo_o *v199; // x6
  PartyListViewItem_o *v200; // x7
  int64_t v201; // x2
  int32_t v202; // w3
  System_String_o *v203; // x4
  BattleSetupInfo_o *v204; // x5
  FollowerInfo_o *v205; // x6
  PartyListViewItem_o *v206; // x7
  int64_t v207; // x2
  int32_t v208; // w3
  System_String_o *v209; // x4
  BattleSetupInfo_o *v210; // x5
  FollowerInfo_o *v211; // x6
  PartyListViewItem_o *v212; // x7
  Il2CppObject *v213; // x21
  int32_t height; // w22
  float v215; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int64_t v218; // x2
  int32_t v219; // w3
  System_String_o *v220; // x4
  BattleSetupInfo_o *v221; // x5
  FollowerInfo_o *v222; // x6
  PartyListViewItem_o *v223; // x7
  float v224; // s13
  float v225; // s10
  float v226; // s8
  int v227; // w25
  float v228; // s9
  float width; // s12
  float v230; // s11
  int32_t v231; // w22
  __int64 v232; // x2
  __int64 v233; // x3
  __int64 v234; // x4
  Il2CppObject *v235; // x0
  System_String_o *v236; // x0
  UnityEngine_GUIStyle_o *v237; // x21
  System_String_o *v238; // x22
  _BOOL4 isLogAreaShow; // w22
  __int64 v240; // x2
  __int64 v241; // x3
  __int64 v242; // x4
  Il2CppObject *v243; // x1
  Il2CppObject **v244; // x9
  System_String_o *v245; // x21
  bool v246; // w0
  bool v247; // w21
  __int64 v248; // x2
  __int64 v249; // x3
  __int64 v250; // x4
  MotionInfo_c *v251; // x0
  float v252; // s11
  Il2CppObject *v253; // x0
  System_String_o *v254; // x21
  __int64 v255; // x2
  __int64 v256; // x3
  __int64 v257; // x4
  MotionInfo_c *v258; // x0
  Il2CppObject *v259; // x0
  System_String_o *v260; // x21
  __int64 v261; // x2
  __int64 v262; // x3
  __int64 v263; // x4
  MotionInfo_c *v264; // x0
  Il2CppObject *v265; // x0
  System_String_o *v266; // x21
  __int64 v267; // x2
  __int64 v268; // x3
  __int64 v269; // x4
  int32_t v270; // w21
  Il2CppObject *v271; // x21
  __int64 v272; // x2
  __int64 v273; // x3
  __int64 v274; // x4
  Il2CppObject *v275; // x22
  __int64 v276; // x2
  __int64 v277; // x3
  __int64 v278; // x4
  Il2CppObject *v279; // x0
  System_String_o *v280; // x21
  __int64 v281; // x2
  __int64 v282; // x3
  __int64 v283; // x4
  Il2CppObject *v284; // x0
  System_String_o *v285; // x0
  int32_t v286; // w21
  __int64 v287; // x2
  __int64 v288; // x3
  __int64 v289; // x4
  Il2CppObject *v290; // x0
  System_String_o *v291; // x0
  UnityEngine_GUIStyle_o *v292; // x20
  System_String_o *v293; // x21
  float v294; // s10
  float v295; // s9
  int32_t v296; // w0
  MotionInfo_c *v297; // x8
  float v298; // s11
  struct MotionInfo_StaticFields *v299; // x8
  struct UnityEngine_Vector2_o v300; // kr00_8
  MotionInfo_c *v301; // x8
  MotionInfo___c_c *v302; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v305; // x22
  struct MotionInfo___c_StaticFields *v306; // x0
  int64_t v307; // x2
  int32_t v308; // w3
  System_String_o *v309; // x4
  BattleSetupInfo_o *v310; // x5
  FollowerInfo_o *v311; // x6
  PartyListViewItem_o *v312; // x7
  __int64 v313; // x8
  char *v314; // x20
  __int64 v315; // x9
  int *v316; // x10
  __int64 v317; // x0
  __int64 v318; // x1
  __int64 v319; // x20
  int i; // w25
  __int64 v321; // x8
  __int64 v322; // x9
  int *v323; // x10
  __int64 v324; // x0
  __int64 v325; // x8
  __int64 v326; // x9
  int *v327; // x10
  __int64 v328; // x0
  int64_t v329; // x22
  __int64 v330; // x0
  __int64 v331; // x1
  int64_t v332; // x2
  int32_t v333; // w3
  System_String_o *v334; // x4
  BattleSetupInfo_o *v335; // x5
  FollowerInfo_o *v336; // x6
  PartyListViewItem_o *v337; // x7
  __int64 v338; // x21
  int64_t v339; // x1
  float v340; // s0
  System_String_o *v341; // x0
  int64_t v342; // x2
  int32_t v343; // w3
  System_String_o *v344; // x4
  BattleSetupInfo_o *v345; // x5
  FollowerInfo_o *v346; // x6
  PartyListViewItem_o *v347; // x7
  __int64 v348; // x0
  __int64 v349; // x1
  int64_t v350; // x2
  int32_t v351; // w3
  System_String_o *v352; // x4
  BattleSetupInfo_o *v353; // x5
  FollowerInfo_o *v354; // x6
  PartyListViewItem_o *v355; // x7
  int64_t v356; // x1
  __int64 v357; // x0
  __int64 v358; // x1
  int64_t v359; // x2
  int32_t v360; // w3
  System_String_o *v361; // x4
  BattleSetupInfo_o *v362; // x5
  FollowerInfo_o *v363; // x6
  PartyListViewItem_o *v364; // x7
  __int64 v365; // x0
  __int64 v366; // x1
  int64_t v367; // x2
  int32_t v368; // w3
  System_String_o *v369; // x4
  BattleSetupInfo_o *v370; // x5
  FollowerInfo_o *v371; // x6
  PartyListViewItem_o *v372; // x7
  int64_t v373; // x1
  System_String_o *v374; // x21
  __int64 v375; // x8
  __int64 v376; // x9
  int *v377; // x10
  __int64 v378; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v380; // [xsp+18h] [xbp-B8h]
  int v381; // [xsp+1Ch] [xbp-B4h] BYREF
  int v382; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v384; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
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

  if ( (byte_4BDBA28 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_SelectMany_List_string___string___);
    sub_1C21E38(&System_Func_List_string___IEnumerable_string___TypeInfo);
    sub_1C21E38(&UnityEngine_GUIStyle_TypeInfo);
    sub_1C21E38(&UnityEngine_GUI_TypeInfo);
    sub_1C21E38(&System_IDisposable_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C21E38(&System_Collections_IEnumerator_TypeInfo);
    sub_1C21E38(&int_TypeInfo);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&MotionInfo_TypeInfo);
    sub_1C21E38(&float_TypeInfo);
    sub_1C21E38(&string___TypeInfo);
    sub_1C21E38(&Method_MotionInfo___c__OnGUI_b__46_0__);
    sub_1C21E38(&MotionInfo___c_TypeInfo);
    sub_1C21E38(&StringLiteral_1843/*"<size={0}>+</size>"*/);
    sub_1C21E38(&StringLiteral_1850/*"<size={fontSize}>ログ消去</size>"*/);
    sub_1C21E38(&StringLiteral_25723/*"【モーションID】"*/);
    sub_1C21E38(&StringLiteral_25722/*"【ボイス・SE】"*/);
    sub_1C21E38(&StringLiteral_1847/*"<size={0}>▲</size>"*/);
    sub_1C21E38(&StringLiteral_15641/*"VoiceID : "*/);
    sub_1C21E38(&StringLiteral_25724/*"【名前】"*/);
    sub_1C21E38(&StringLiteral_360/*" 確率 / 合計 : "*/);
    sub_1C21E38(&StringLiteral_1842/*"<size="*/);
    sub_1C21E38(&StringLiteral_25721/*"【カード属性】"*/);
    sub_1C21E38(&StringLiteral_1216/*"0.00"*/);
    sub_1C21E38(&StringLiteral_1849/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/);
    sub_1C21E38(&StringLiteral_171/*" / "*/);
    sub_1C21E38(&StringLiteral_207/*" SEID : "*/);
    sub_1C21E38(&StringLiteral_25703/*"▶ ログ非表示"*/);
    sub_1C21E38(&StringLiteral_1848/*"<size={0}>▼</size>"*/);
    sub_1C21E38(&StringLiteral_1845/*"<size={0}>{1}/{2}</size>"*/);
    sub_1C21E38(&StringLiteral_1846/*"<size={0}>{1}</size>"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_358/*" 分類 : "*/);
    sub_1C21E38(&StringLiteral_1630/*"</size>"*/);
    sub_1C21E38(&StringLiteral_1871/*">"*/);
    sub_1C21E38(&StringLiteral_12880/*"ServantID : "*/);
    sub_1C21E38(&StringLiteral_25704/*"◀ ログ表示　"*/);
    sub_1C21E38(&StringLiteral_1844/*"<size={0}>-</size>"*/);
    byte_4BDBA28 = 1;
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
    v9 = 60LL;
    if ( commandType == -1 )
      v9 = 56LL;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)normal, *(_DWORD *)((char *)&actionData->klass + v9), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BDBA8B )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8B = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  if ( v10->static_fields->_IsSe_k__BackingField )
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v10->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v10);
    if ( !byte_4BDBA8C )
    {
      sub_1C21E38(&MotionInfo_TypeInfo);
      byte_4BDBA8C = 1;
    }
    v12 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v12 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v12->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v15 = System_String__Concat_63126736(
            (System_String_o *)StringLiteral_12880/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v10 = MotionInfo_TypeInfo;
    v11 = v15;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4BDBA8B )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8B = 1;
  }
  v16 = MotionInfo_TypeInfo;
  cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
    cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  }
  if ( v16->static_fields->_IsSe_k__BackingField )
    v18 = (System_String_o **)&StringLiteral_207/*" SEID : "*/;
  else
    v18 = (System_String_o **)&StringLiteral_15641/*"VoiceID : "*/;
  v19 = *v18;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4BDBA8D )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8D = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v20->static_fields->_VoiceId_k__BackingField;
  v22 = System_Environment__get_NewLine(0LL);
  v23 = System_String__Concat_63128740(v11, v19, VoiceId_k__BackingField, v22, 0LL);
  normal = (char *)sub_1C21EE0(string___TypeInfo, 8LL);
  if ( !normal )
    goto LABEL_203;
  v30 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v23;
  sub_1C21DDC((PartyOrganizationUtility_o *)(normal + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
  if ( *((_DWORD *)v30 + 6) <= 1u )
    goto LABEL_196;
  v37 = StringLiteral_360/*" 確率 / 合計 : "*/;
  *((_QWORD *)v30 + 5) = StringLiteral_360/*" 確率 / 合計 : "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 40), v37, v31, v32, v33, v34, v35, v36);
  if ( !byte_4BDBA8E )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8E = 1;
  }
  v38 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v38 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v38->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_64004140(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v30 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v30 + 6) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 48), (int64_t)normal, v39, v40, v41, v42, v43, v44);
  if ( *((_DWORD *)v30 + 6) <= 3u )
    goto LABEL_196;
  v51 = StringLiteral_171/*" / "*/;
  *((_QWORD *)v30 + 7) = StringLiteral_171/*" / "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 56), v51, v45, v46, v47, v48, v49, v50);
  if ( !byte_4BDBA8F )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA8F = 1;
  }
  v52 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v52 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v52->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_64004140(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v30 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v30 + 8) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 64), (int64_t)normal, v53, v54, v55, v56, v57, v58);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v30 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v30 + 9) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 72), (int64_t)normal, v59, v60, v61, v62, v63, v64);
  if ( *((_DWORD *)v30 + 6) <= 6u )
    goto LABEL_196;
  v71 = StringLiteral_358/*" 分類 : "*/;
  *((_QWORD *)v30 + 10) = StringLiteral_358/*" 分類 : "*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 80), v71, v65, v66, v67, v68, v69, v70);
  if ( !byte_4BDBA90 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA90 = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v30 + 6) <= 7u )
    goto LABEL_196;
  v78 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v30 + 11) = v78;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 88), v78, v72, v73, v74, v75, v76, v77);
  v79 = System_String__Concat_63129004((System_String_array *)v30, 0LL);
  v80 = sub_1C21EE0(string___TypeInfo, 21LL);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( !v80 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v80 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v80 + 32) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 32), (int64_t)normal, v81, v82, v83, v84, v85, v86);
  if ( *(_DWORD *)(v80 + 24) <= 1u )
    goto LABEL_196;
  v93 = StringLiteral_25724/*"【名前】"*/;
  *(_QWORD *)(v80 + 40) = StringLiteral_25724/*"【名前】"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 40), v93, v87, v88, v89, v90, v91, v92);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 48) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 48), (int64_t)normal, v94, v95, v96, v97, v98, v99);
  if ( *(_DWORD *)(v80 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = (int64_t)static_fields->svtName;
  *(_QWORD *)(v80 + 56) = static_fields->svtName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 56), svtName, v100, v101, v102, v103, v104, v105);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 64) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 64), (int64_t)normal, v108, v109, v110, v111, v112, v113);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 72) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 72), (int64_t)normal, v114, v115, v116, v117, v118, v119);
  if ( *(_DWORD *)(v80 + 24) <= 6u )
    goto LABEL_196;
  v126 = StringLiteral_25723/*"【モーションID】"*/;
  *(_QWORD *)(v80 + 80) = StringLiteral_25723/*"【モーションID】"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 80), v126, v120, v121, v122, v123, v124, v125);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 88) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 88), (int64_t)normal, v127, v128, v129, v130, v131, v132);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0LL);
  if ( *(_DWORD *)(v80 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 96) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 96), (int64_t)normal, v133, v134, v135, v136, v137, v138);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 104) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 104), (int64_t)normal, v139, v140, v141, v142, v143, v144);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 112) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 112), (int64_t)normal, v145, v146, v147, v148, v149, v150);
  if ( *(_DWORD *)(v80 + 24) <= 0xBu )
    goto LABEL_196;
  v157 = StringLiteral_25721/*"【カード属性】"*/;
  *(_QWORD *)(v80 + 120) = StringLiteral_25721/*"【カード属性】"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 120), v157, v151, v152, v153, v154, v155, v156);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 128) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 128), (int64_t)normal, v158, v159, v160, v161, v162, v163);
  if ( *(_DWORD *)(v80 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 136) = TypeName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 136), (int64_t)TypeName, v164, v165, v166, v167, v168, v169);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 144) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 144), (int64_t)normal, v170, v171, v172, v173, v174, v175);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 152) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 152), (int64_t)normal, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v80 + 24) <= 0x10u )
    goto LABEL_196;
  v188 = StringLiteral_25722/*"【ボイス・SE】"*/;
  *(_QWORD *)(v80 + 160) = StringLiteral_25722/*"【ボイス・SE】"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 160), v188, v182, v183, v184, v185, v186, v187);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v80 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 168) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 168), (int64_t)normal, v189, v190, v191, v192, v193, v194);
  if ( *(_DWORD *)(v80 + 24) <= 0x12u
    || (*(_QWORD *)(v80 + 176) = v79,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 176), (int64_t)v79, v195, v196, v197, v198, v199, v200),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v80 + 24) <= 0x13u)
    || (*(_QWORD *)(v80 + 184) = normal,
        sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 184), (int64_t)normal, v201, v202, v203, v204, v205, v206),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v80 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1C2209C(normal, v7);
  }
  *(_QWORD *)(v80 + 192) = normal;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v80 + 192), (int64_t)normal, v207, v208, v209, v210, v211, v212);
  v213 = (Il2CppObject *)System_String__Concat_63129004((System_String_array *)v80, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v215 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v215 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0LL);
    *p_labelStyle = none;
    sub_1C21DDC(
      (PartyOrganizationUtility_o *)&this->fields.labelStyle,
      (int64_t)none,
      v218,
      v219,
      v220,
      v221,
      v222,
      v223);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0LL);
    if ( !normal )
      goto LABEL_203;
    v386.fields.r = 1.0;
    v386.fields.g = 1.0;
    v386.fields.b = 1.0;
    v386.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v386, 0LL);
  }
  v224 = (float)height * 0.25;
  v225 = v215 * 40.0;
  v226 = v215 * 250.0;
  v227 = 3;
  v228 = (float)UnityEngine_Screen__get_width(0LL) - v226;
  do
  {
    width = v226;
    if ( this->fields.isLogAreaShow )
      v230 = 0.0;
    else
      v230 = v228;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0LL);
    v231 = UnityEngine_Screen__get_height(0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v387.fields.m_Height = (float)v231;
    v387.fields.m_YMin = 0.0;
    v387.fields.m_XMin = v230;
    v387.fields.m_Width = width;
    UnityEngine_GUI__Box(v387, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    --v227;
  }
  while ( v227 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0LL);
  v384 = *((float *)&format.monitor + 1);
  v235 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v384, v232, v233, v234);
  v236 = System_String__Format_63129848((System_String_o *)StringLiteral_1846/*"<size={0}>{1}</size>"*/, v235, v213, 0LL);
  v237 = *p_labelStyle;
  v238 = v236;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v388.fields.m_YMin = 0.0;
  v388.fields.m_XMin = v228;
  v388.fields.m_Width = v226;
  v388.fields.m_Height = v224 + v224;
  UnityEngine_GUI__Label_70995060(v388, v238, v237, 0LL);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v243 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v240, v241, v242);
  if ( this->fields.isLogAreaShow )
    v244 = (Il2CppObject **)&StringLiteral_25703/*"▶ ログ非表示"*/;
  else
    v244 = (Il2CppObject **)&StringLiteral_25704/*"◀ ログ表示　"*/;
  v245 = System_String__Format_63129848((System_String_o *)StringLiteral_1846/*"<size={0}>{1}</size>"*/, v243, *v244, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v389.fields.m_XMin = v228;
  v389.fields.m_YMin = (float)((float)(v224 + v224) + 10.0) + 0.0;
  v389.fields.m_Width = v226 * 0.5;
  v389.fields.m_Height = v225;
  v246 = UnityEngine_GUI__Button(v389, v245, 0LL);
  v247 = isLogAreaShow;
  if ( v246 )
    v247 = !this->fields.isLogAreaShow;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v390.fields.m_XMin = (float)(v226 * 0.5) + v228;
  v390.fields.m_YMin = (float)((float)(v224 + v224) + 10.0) + 0.0;
  v390.fields.m_Width = v226 * 0.5;
  v390.fields.m_Height = v225;
  if ( UnityEngine_GUI__Button(v390, (System_String_o *)StringLiteral_1850/*"<size={fontSize}>ログ消去</size>"*/, 0LL) )
  {
    v251 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v251);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v247;
    return;
  }
  v252 = v225 + 10.0;
  v380 = v247;
  v384 = *((float *)&format.monitor + 1);
  v253 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v384, v248, v249, v250);
  v254 = System_String__Format((System_String_o *)StringLiteral_1847/*"<size={0}>▲</size>"*/, v253, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v391.fields.m_XMin = v228;
  v391.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v391.fields.m_Width = v225;
  v391.fields.m_Height = v225;
  if ( UnityEngine_GUI__RepeatButton(v391, v254, 0LL) )
  {
    v258 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v258 = MotionInfo_TypeInfo;
    }
    v258->static_fields->scrollPosition.fields.y = v258->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v384 = *((float *)&format.monitor + 1);
  v259 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v384, v255, v256, v257);
  v260 = System_String__Format((System_String_o *)StringLiteral_1848/*"<size={0}>▼</size>"*/, v259, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v392.fields.m_XMin = v225 + v228;
  v392.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v392.fields.m_Width = v225;
  v392.fields.m_Height = v225;
  if ( UnityEngine_GUI__RepeatButton(v392, v260, 0LL) )
  {
    v264 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v264 = MotionInfo_TypeInfo;
    }
    v264->static_fields->scrollPosition.fields.y = v264->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v384 = *((float *)&format.monitor + 1);
  v265 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v384, v261, v262, v263);
  v266 = System_String__Format((System_String_o *)StringLiteral_1844/*"<size={0}>-</size>"*/, v265, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v393.fields.m_XMin = v225 + (float)(v225 + v228);
  v393.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v393.fields.m_Width = v225;
  v393.fields.m_Height = v225;
  if ( UnityEngine_GUI__Button(v393, v266, 0LL) )
  {
    v270 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v270;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_63934620(v270, 1, 0LL);
  }
  v384 = *((float *)&format.monitor + 1) * 0.9;
  v271 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v384, v267, v268, v269);
  monitor_high = this->fields.scrollSpeed;
  v275 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v272, v273, v274);
  v382 = 10;
  v279 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v382, v276, v277, v278);
  v280 = System_String__Format_63129916((System_String_o *)StringLiteral_1845/*"<size={0}>{1}/{2}</size>"*/, v271, v275, v279, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v394.fields.m_XMin = v225 + (float)(v225 + (float)(v225 + v228));
  v394.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v394.fields.m_Width = v225 + 10.0;
  v394.fields.m_Height = v225;
  UnityEngine_GUI__Box(v394, v280, 0LL);
  v381 = HIDWORD(format.monitor);
  v284 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v381, v281, v282, v283);
  v285 = System_String__Format((System_String_o *)StringLiteral_1843/*"<size={0}>+</size>"*/, v284, 0LL);
  v395.fields.m_XMin = v252 + (float)(v225 + (float)(v225 + (float)(v225 + v228)));
  v395.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v395.fields.m_Width = v225;
  v395.fields.m_Height = v225;
  if ( UnityEngine_GUI__Button(v395, v285, 0LL) )
  {
    v286 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v286;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_63934948(v286, 10, 0LL);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0LL);
  v384 = *((float *)&format.monitor + 1);
  v290 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v384, v287, v288, v289);
  v291 = System_String__Format((System_String_o *)StringLiteral_1849/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v290, 0LL);
  v292 = *p_labelStyle;
  v293 = v291;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v396.fields.m_Height = 40.0;
  v396.fields.m_XMin = v228;
  v396.fields.m_YMin = v252 + (float)((float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0));
  v396.fields.m_Width = v226;
  UnityEngine_GUI__Label_70995060(v396, v293, v292, 0LL);
  v294 = (float)((float)UnityEngine_Screen__get_width(0LL) - v226) + -10.0;
  v295 = *((float *)&format.monitor + 1) + 10.0;
  v296 = UnityEngine_Screen__get_height(0LL);
  v297 = MotionInfo_TypeInfo;
  v298 = (float)v296;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v297 = MotionInfo_TypeInfo;
  }
  v299 = v297->static_fields;
  v397.fields.m_YMin = 0.0;
  v397.fields.m_Width = v294;
  v397.fields.m_Height = v298;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  viewRect.fields.m_Width = v294 + -20.0;
  viewRect.fields.m_Height = v295 * (float)v299->voicePlayLogLineSize;
  v397.fields.m_XMin = 0.0;
  v300 = UnityEngine_GUI__BeginScrollView(v397, v299->scrollPosition, viewRect, 0LL);
  v301 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v300;
  v302 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v301->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v302 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v302->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v302->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v302);
      v302 = MotionInfo___c_TypeInfo;
    }
    v305 = (Il2CppObject *)v302->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1C22084(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v305, Method_MotionInfo___c__OnGUI_b__46_0__, 0LL);
    v306 = MotionInfo___c_TypeInfo->static_fields;
    v306->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v306->__9__46_0, (int64_t)_9__46_0, v307, v308, v309, v310, v311, v312);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_2FE3B3C *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1C22094(normal, v7);
  v313 = *(_QWORD *)normal;
  v314 = normal;
  v315 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v316 = (int *)(*(_QWORD *)(v313 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v316 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v315;
      v316 += 4;
      if ( !v315 )
        goto LABEL_159;
    }
    v317 = v313 + 16LL * *v316 + 312;
  }
  else
  {
LABEL_159:
    v317 = sub_1C73E18(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v319 = (*(__int64 (__fastcall **)(char *, _QWORD))v317)(v314, *(_QWORD *)(v317 + 8));
  if ( !v319 )
    sub_1C22094(0LL, v318);
  for ( i = 0; ; ++i )
  {
    v321 = *(_QWORD *)v319;
    v322 = *(unsigned __int16 *)(*(_QWORD *)v319 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v319 + 302LL) )
    {
      v323 = (int *)(*(_QWORD *)(v321 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v323 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v322;
        v323 += 4;
        if ( !v322 )
          goto LABEL_168;
      }
      v324 = v321 + 16LL * *v323 + 312;
    }
    else
    {
LABEL_168:
      v324 = sub_1C73E18(v319, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v324)(v319, *(_QWORD *)(v324 + 8)) & 1) == 0 )
      break;
    v325 = *(_QWORD *)v319;
    v326 = *(unsigned __int16 *)(*(_QWORD *)v319 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v319 + 302LL) )
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
      v328 = sub_1C73E18(v319, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v329 = (*(__int64 (__fastcall **)(__int64, _QWORD))v328)(v319, *(_QWORD *)(v328 + 8));
    v330 = sub_1C21EE0(string___TypeInfo, 5LL);
    v338 = v330;
    if ( !v330 )
      sub_1C22094(0LL, v331);
    if ( !*(_DWORD *)(v330 + 24) )
      sub_1C2209C(v330, v331);
    v339 = StringLiteral_1842/*"<size="*/;
    *(_QWORD *)(v330 + 32) = StringLiteral_1842/*"<size="*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v330 + 32), v339, v332, v333, v334, v335, v336, v337);
    v341 = System_Single__ToString(v340, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v338 + 24) <= 1u )
      sub_1C2209C(v341, v341);
    *(_QWORD *)(v338 + 40) = v341;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v338 + 40), (int64_t)v341, v342, v343, v344, v345, v346, v347);
    if ( *(_DWORD *)(v338 + 24) <= 2u )
      sub_1C2209C(v348, v349);
    v356 = StringLiteral_1871/*">"*/;
    *(_QWORD *)(v338 + 48) = StringLiteral_1871/*">"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v338 + 48), v356, v350, v351, v352, v353, v354, v355);
    if ( *(_DWORD *)(v338 + 24) <= 3u )
      sub_1C2209C(v357, v358);
    *(_QWORD *)(v338 + 56) = v329;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v338 + 56), v329, v359, v360, v361, v362, v363, v364);
    if ( *(_DWORD *)(v338 + 24) <= 4u )
      sub_1C2209C(v365, v366);
    v373 = StringLiteral_1630/*"</size>"*/;
    *(_QWORD *)(v338 + 64) = StringLiteral_1630/*"</size>"*/;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v338 + 64), v373, v367, v368, v369, v370, v371, v372);
    v374 = System_String__Concat_63129004((System_String_array *)v338, 0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v398.fields.m_YMin = v295 * (float)i;
    v398.fields.m_XMin = 0.0;
    v398.fields.m_Width = v294 + -20.0;
    v398.fields.m_Height = v295;
    UnityEngine_GUI__Label(v398, v374, 0LL);
  }
  v375 = *(_QWORD *)v319;
  v376 = *(unsigned __int16 *)(*(_QWORD *)v319 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v319 + 302LL) )
  {
    v377 = (int *)(*(_QWORD *)(v375 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v377 - 1) != System_IDisposable_TypeInfo )
    {
      --v376;
      v377 += 4;
      if ( !v376 )
        goto LABEL_190;
    }
    v378 = v375 + 16LL * *v377 + 312;
  }
  else
  {
LABEL_190:
    v378 = sub_1C73E18(v319, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v378)(v319, *(_QWORD *)(v378 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
  this->fields.isLogAreaShow = v380;
}


void __fastcall MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  struct System_String_o *v7; // x20
  MotionInfo_c *v8; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct System_String_o *v16; // x20
  MotionInfo_c *v17; // x0
  struct MotionInfo_StaticFields *v18; // x0
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  MotionInfo_c *v25; // x0
  struct System_String_o *v26; // x20
  struct MotionInfo_StaticFields *v27; // x0
  MotionInfo_c *v28; // x0

  if ( (byte_4BDBA2A & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDBA2A = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v7 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BDBA91 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA91 = 1;
  }
  v8 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v8 = MotionInfo_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v7;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int64_t)v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v16 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BDBA92 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA92 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v18 = v17->static_fields;
  v18->_VoiceId_k__BackingField = v16;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v18->_VoiceId_k__BackingField, (int64_t)v16, v10, v11, v12, v13, v14, v15);
  if ( !byte_4BDBA93 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA93 = 1;
  }
  v25 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
  }
  v25->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4BDBA94 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
    byte_4BDBA94 = 1;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = MotionInfo_TypeInfo;
  }
  v25->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v26 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4BDBA95 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
    byte_4BDBA95 = 1;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = MotionInfo_TypeInfo;
  }
  v27 = v25->static_fields;
  v27->_VoiceType_k__BackingField = v26;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v27->_VoiceType_k__BackingField,
    (int64_t)v26,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  if ( !byte_4BDBA96 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA96 = 1;
  }
  v28 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
  }
  v28->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4BDBA97 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
    byte_4BDBA97 = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = MotionInfo_TypeInfo;
  }
  v28->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA30 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA30 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4BDBA98 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA98 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  v1->static_fields->_IsRandom_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x9
  int32_t size; // w2
  int v6; // w10

  if ( (byte_4BDBA2F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA2F = 1;
  }
  v2 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v2 = MotionInfo_TypeInfo;
  }
  static_fields = v2->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_1C22094(v2, v1);
  size = voicePlaybackLogList->fields._size;
  v6 = voicePlaybackLogList->fields._version + 1;
  voicePlaybackLogList->fields._size = 0;
  voicePlaybackLogList->fields._version = v6;
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

  if ( (byte_4BDBA27 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA27 = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->svtName = svtName;
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  void *Item; // x0
  struct MotionInfo_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  int32_t voicePlayLogLineSize; // w22
  _DWORD *v6; // x8
  MotionInfo_c *v7; // x0
  struct MotionInfo_StaticFields *v8; // x8
  int v9; // w22
  int v10; // w23
  struct MotionInfo_StaticFields *v11; // x8
  int32_t v12; // w9

  if ( (byte_4BDBA2E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA2E = 1;
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
                  (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_24:
    sub_1C22094(Item, v1);
  }
  v6 = Item;
  v7 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v6[6] + voicePlayLogLineSize;
  while ( 1 )
  {
    if ( v7->_2.cctor_finished )
    {
      v8 = v7->static_fields;
      v9 = v8->voicePlayLogLineSize;
      if ( v9 <= 499 )
        goto LABEL_22;
      goto LABEL_18;
    }
    j_il2cpp_runtime_class_init_0(v7);
    v8 = MotionInfo_TypeInfo->static_fields;
    v10 = v8->voicePlayLogLineSize;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      break;
    v9 = v8->voicePlayLogLineSize;
    if ( v10 <= 499 )
      goto LABEL_22;
LABEL_18:
    Item = v8->voicePlaybackLogList;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_24;
    v11 = MotionInfo_TypeInfo->static_fields;
    v12 = v9 - *((_DWORD *)Item + 6);
    Item = v11->voicePlaybackLogList;
    v11->voicePlayLogLineSize = v12;
    if ( !Item )
      goto LABEL_24;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Item,
      0,
      (const MethodInfo_3650888 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v7 = MotionInfo_TypeInfo;
  }
  j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v8 = MotionInfo_TypeInfo->static_fields;
  v9 = v8->voicePlayLogLineSize;
  if ( v10 > 499 )
    goto LABEL_18;
LABEL_22:
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v9);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA23 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA23 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_IsRandom_k__BackingField;
}


bool __fastcall MotionInfo__get_IsSe(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA25 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA25 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_IsSe_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceId(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA1D & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA1D = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceId_k__BackingField;
}


int32_t __fastcall MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA21 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA21 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA17 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA17 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceServantId_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA1B & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA1B = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *__fastcall MotionInfo__get_VoiceType(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA1F & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA1F = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceType_k__BackingField;
}


float __fastcall MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4BDBA19 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA19 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceWeight_k__BackingField;
}


void __fastcall MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4BDBA24 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA24 = 1;
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

  if ( (byte_4BDBA26 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA26 = 1;
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

  if ( (byte_4BDBA1E & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA1E = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1C21DDC(
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

  if ( (byte_4BDBA22 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA22 = 1;
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

  if ( (byte_4BDBA18 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA18 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1C21DDC(
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
  MotionInfo_c *v3; // x0

  if ( (byte_4BDBA1C & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA1C = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceTotalWeight_k__BackingField = value;
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

  if ( (byte_4BDBA20 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA20 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1C21DDC(
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
  MotionInfo_c *v3; // x0

  if ( (byte_4BDBA1A & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo_TypeInfo);
    byte_4BDBA1A = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceWeight_k__BackingField = value;
}


void __fastcall MotionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BDBA32 & 1) == 0 )
  {
    sub_1C21E38(&MotionInfo___c_TypeInfo);
    byte_4BDBA32 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(MotionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)MotionInfo___c_TypeInfo->static_fields, (int64_t)v1, v2, v3, v4, v5, v6, v7);
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