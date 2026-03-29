void MotionInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v8; // x19
  struct MotionInfo_StaticFields *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7

  if ( (byte_4D2FF01 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_1C93AD4(&MotionInfo_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FF01 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MotionInfo_TypeInfo->static_fields,
    StringLiteral_1/*""*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4D2A019 )
  {
    sub_1C93AD4(&UnityEngine_Vector2_TypeInfo);
    byte_4D2A019 = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v8 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v9 = MotionInfo_TypeInfo->static_fields;
  v9->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v8;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v9->voicePlaybackLogList, (int32_t)v8, v10, v11, v12, v13, v14, v15);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  MotionInfo_c *v17; // x0
  __int64 v18; // x20
  struct MotionInfo_StaticFields *v19; // x0
  const MethodInfo *v20; // x0

  if ( (byte_4D2FEFB & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    sub_1C93AD4(&StringLiteral_11598/*"SE"*/);
    byte_4D2FEFB = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4D2FF7B )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF7B = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4D2FF7C )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4D2FF7C = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4D2FF7A )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4D2FF7A = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->_VoiceId_k__BackingField,
    (int32_t)seId,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !byte_4D2FF7E )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF7E = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4D2FF7F )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_4D2FF7F = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4D2FF80 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_4D2FF80 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_IsRandom_k__BackingField = 0;
  v18 = StringLiteral_11598/*"SE"*/;
  if ( !byte_4D2FF7D )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
    byte_4D2FF7D = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = (struct System_String_o *)v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v19->_VoiceType_k__BackingField, v18, v11, v12, v13, v14, v15, v16);
  MotionInfo__AddVoiceLog(v20);
}


void MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass *v14; // x1
  Il2CppClass **v15; // x0
  MotionInfo_c *v16; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v18; // x0
  System_String_o *v19; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v21; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass *v33; // x1
  Il2CppClass **v34; // x0
  MotionInfo_c *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass *v45; // x1
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  char *v53; // x20
  int32_t v54; // w1
  MotionInfo_c *v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  int32_t v62; // w2
  int32_t v63; // w3
  System_String_o *v64; // x4
  int32_t v65; // w5
  int64_t v66; // x6
  System_String_o *v67; // x7
  int32_t v68; // w1
  MotionInfo_c *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  System_String_o *v72; // x4
  int32_t v73; // w5
  int64_t v74; // x6
  System_String_o *v75; // x7
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  int32_t v82; // w2
  int32_t v83; // w3
  System_String_o *v84; // x4
  int32_t v85; // w5
  int64_t v86; // x6
  System_String_o *v87; // x7
  struct System_Object_array *v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  Il2CppClass *v91; // x1
  Il2CppClass **v92; // x0
  MotionInfo_c *v93; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  System_String_o *v98; // x4
  int32_t v99; // w5
  int64_t v100; // x6
  System_String_o *v101; // x7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  Il2CppClass *v105; // x1
  Il2CppClass **v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_String_o *v109; // x4
  int32_t v110; // w5
  int64_t v111; // x6
  System_String_o *v112; // x7
  __int64 v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  __int64 v116; // x8
  const MethodInfo *v117; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4D2FEFC & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&MotionInfo_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&StringLiteral_333/*" 確率 / 合計 : "*/);
    sub_1C93AD4(&StringLiteral_201/*" VoiceID : "*/);
    sub_1C93AD4(&StringLiteral_1120/*"0.00"*/);
    sub_1C93AD4(&StringLiteral_161/*" / "*/);
    sub_1C93AD4(&StringLiteral_874/*"--- Voice・SE Log ---"*/);
    sub_1C93AD4(&StringLiteral_194/*" SEID : "*/);
    sub_1C93AD4(&StringLiteral_332/*" 分類 : "*/);
    sub_1C93AD4(&StringLiteral_12831/*"ServantID : "*/);
    byte_4D2FEFC = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_64425724((System_String_o *)StringLiteral_874/*"--- Voice・SE Log ---"*/, NewLine, 0);
  if ( !v1 )
    goto LABEL_74;
  items = v1->fields._items;
  v12 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v1->fields._size;
  v14 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v15[4] = v14;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)v14, v5, v6, v7, v8, v9, v10);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4D2FF73 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF73 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4D2FF75 )
      {
        sub_1C93AD4(&MotionInfo_TypeInfo);
        byte_4D2FF75 = 1;
      }
      v16 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v16 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v16->static_fields->_VoiceId_k__BackingField;
      v18 = System_Environment__get_NewLine(0);
      v19 = (System_String_o *)StringLiteral_194/*" SEID : "*/;
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
  if ( !byte_4D2FF74 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF74 = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v21->static_fields->_VoiceServantId_k__BackingField;
  v23 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_64463988(
                                   (System_String_o *)StringLiteral_12831/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v23,
                                   0);
  v30 = v1->fields._items;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v30 )
LABEL_74:
    sub_1C93D2C(voicePlaybackLogList, v4);
  v32 = v1->fields._size;
  v33 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v34[4] = v33;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)v33, v24, v25, v26, v27, v28, v29);
  }
  if ( !byte_4D2FF75 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF75 = 1;
  }
  v35 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v35 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v35->static_fields->_VoiceId_k__BackingField;
  v18 = System_Environment__get_NewLine(0);
  v19 = (System_String_o *)StringLiteral_201/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_64463988(v19, VoiceId_k__BackingField, v18, 0);
  v42 = v1->fields._items;
  v43 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v42 )
    goto LABEL_74;
  v44 = v1->fields._size;
  v45 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v42->obj.klass + v44;
    v1->fields._size = v44 + 1;
    v46[4] = v45;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v46 + 4), (int32_t)v45, v36, v37, v38, v39, v40, v41);
  }
  voicePlaybackLogList = (char *)sub_1C93B7C(string___TypeInfo, 5);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v53 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v54 = StringLiteral_333/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_333/*" 確率 / 合計 : "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(voicePlaybackLogList + 32), v54, v47, v48, v49, v50, v51, v52);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4D2FF76 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF76 = 1;
  }
  v55 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v55 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v55->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_66019372(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1120/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v53 + 5) = voicePlaybackLogList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 40), (int32_t)voicePlaybackLogList, v56, v57, v58, v59, v60, v61);
  if ( *((_DWORD *)v53 + 6) <= 2u )
    goto LABEL_75;
  v68 = StringLiteral_161/*" / "*/;
  *((_QWORD *)v53 + 6) = StringLiteral_161/*" / "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 48), v68, v62, v63, v64, v65, v66, v67);
  if ( !byte_4D2FF77 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF77 = 1;
  }
  v69 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v69 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v69->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_66019372(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1120/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 3u
    || (*((_QWORD *)v53 + 7) = voicePlaybackLogList,
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)(v53 + 56),
          (int32_t)voicePlaybackLogList,
          v70,
          v71,
          v72,
          v73,
          v74,
          v75),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0),
        *((_DWORD *)v53 + 6) <= 4u) )
  {
LABEL_75:
    sub_1C93D34(voicePlaybackLogList);
  }
  *((_QWORD *)v53 + 8) = voicePlaybackLogList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v53 + 64), (int32_t)voicePlaybackLogList, v76, v77, v78, v79, v80, v81);
  voicePlaybackLogList = (char *)System_String__Concat_64466256((System_String_array *)v53, 0);
  v88 = v1->fields._items;
  v89 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v88 )
    goto LABEL_74;
  v90 = v1->fields._size;
  v91 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v90 >= LODWORD(v88->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v92 = &v88->obj.klass + v90;
    v1->fields._size = v90 + 1;
    v92[4] = v91;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v92 + 4), (int32_t)v91, v82, v83, v84, v85, v86, v87);
  }
  if ( !byte_4D2FF78 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF78 = 1;
  }
  v93 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v93 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v93->static_fields->_VoiceType_k__BackingField;
  v95 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_64463988(
                                   (System_String_o *)StringLiteral_332/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v95,
                                   0);
  v102 = v1->fields._items;
  v103 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v102 )
    goto LABEL_74;
  v104 = v1->fields._size;
  v105 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
  }
  else
  {
    v106 = &v102->obj.klass + v104;
    v1->fields._size = v104 + 1;
    v106[4] = v105;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v106 + 4), (int32_t)v105, v96, v97, v98, v99, v100, v101);
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
  }
  else
  {
    v116 = v113 + 8 * v115;
    *((_DWORD *)voicePlaybackLogList + 6) = v115 + 1;
    *(_QWORD *)(v116 + 32) = v1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v116 + 32), (int32_t)v1, v107, v108, v109, v110, v111, v112);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v117);
}


void MotionInfo__AddVoiceLog_41784480(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  MotionInfo_c *v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x8
  const MethodInfo *v27; // x0

  if ( (byte_4D2FEFD & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEFD = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_string___ctor__);
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)str, v6, v7, v8, v9, v10, v11);
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
    sub_1C93D2C(voicePlaybackLogList, v5);
  }
  v25 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v23->obj.klass + v25;
    voicePlaybackLogList->fields._size = v25 + 1;
    v26[4] = (Il2CppClass *)v3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v26 + 4), (int32_t)v3, v16, v17, v18, v19, v20, v21);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v27);
}


System_String_o *MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = type;
  if ( (byte_4D2FEF9 & 1) == 0 )
  {
    sub_1C93AD4(&BattleCommand_TypeInfo);
    sub_1C93AD4(&StringLiteral_25755/*"バスター"*/);
    sub_1C93AD4(&StringLiteral_25734/*"クイック"*/);
    sub_1C93AD4(&StringLiteral_25723/*"アーツ"*/);
    sub_1C93AD4(&StringLiteral_25727/*"エクストラ"*/);
    byte_4D2FEF9 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0) )
  {
    case 1:
      v4 = &StringLiteral_25723/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v4 = &StringLiteral_25755/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v4 = &StringLiteral_25734/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v4 = &StringLiteral_25727/*"エクストラ"*/;
LABEL_11:
      result = (System_String_o *)*v4;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v6, 0);
      break;
  }
  return result;
}


void MotionInfo__OnGUI(MotionInfo_o *this, const MethodInfo *method)
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
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  char *v30; // x21
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  int32_t v37; // w1
  MotionInfo_c *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  int32_t v51; // w1
  MotionInfo_c *v52; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_String_o *v55; // x4
  int32_t v56; // w5
  int64_t v57; // x6
  System_String_o *v58; // x7
  int32_t v59; // w2
  int32_t v60; // w3
  System_String_o *v61; // x4
  int32_t v62; // w5
  int64_t v63; // x6
  System_String_o *v64; // x7
  int32_t v65; // w2
  int32_t v66; // w3
  System_String_o *v67; // x4
  int32_t v68; // w5
  int64_t v69; // x6
  System_String_o *v70; // x7
  int32_t v71; // w1
  int32_t v72; // w2
  int32_t v73; // w3
  System_String_o *v74; // x4
  int32_t v75; // w5
  int64_t v76; // x6
  System_String_o *v77; // x7
  __int64 v78; // x1
  System_String_o *v79; // x22
  __int64 v80; // x21
  int32_t v81; // w2
  int32_t v82; // w3
  System_String_o *v83; // x4
  int32_t v84; // w5
  int64_t v85; // x6
  System_String_o *v86; // x7
  int32_t v87; // w2
  int32_t v88; // w3
  System_String_o *v89; // x4
  int32_t v90; // w5
  int64_t v91; // x6
  System_String_o *v92; // x7
  int32_t v93; // w1
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  int32_t v100; // w2
  int32_t v101; // w3
  System_String_o *v102; // x4
  int32_t v103; // w5
  int64_t v104; // x6
  System_String_o *v105; // x7
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  int32_t v108; // w2
  int32_t v109; // w3
  System_String_o *v110; // x4
  int32_t v111; // w5
  int64_t v112; // x6
  System_String_o *v113; // x7
  int32_t v114; // w2
  int32_t v115; // w3
  System_String_o *v116; // x4
  int32_t v117; // w5
  int64_t v118; // x6
  System_String_o *v119; // x7
  int32_t v120; // w2
  int32_t v121; // w3
  System_String_o *v122; // x4
  int32_t v123; // w5
  int64_t v124; // x6
  System_String_o *v125; // x7
  int32_t v126; // w1
  int32_t v127; // w2
  int32_t v128; // w3
  System_String_o *v129; // x4
  int32_t v130; // w5
  int64_t v131; // x6
  System_String_o *v132; // x7
  int32_t v133; // w2
  int32_t v134; // w3
  System_String_o *v135; // x4
  int32_t v136; // w5
  int64_t v137; // x6
  System_String_o *v138; // x7
  int32_t v139; // w2
  int32_t v140; // w3
  System_String_o *v141; // x4
  int32_t v142; // w5
  int64_t v143; // x6
  System_String_o *v144; // x7
  int32_t v145; // w2
  int32_t v146; // w3
  System_String_o *v147; // x4
  int32_t v148; // w5
  int64_t v149; // x6
  System_String_o *v150; // x7
  int32_t v151; // w2
  int32_t v152; // w3
  System_String_o *v153; // x4
  int32_t v154; // w5
  int64_t v155; // x6
  System_String_o *v156; // x7
  int32_t v157; // w1
  int32_t v158; // w2
  int32_t v159; // w3
  System_String_o *v160; // x4
  int32_t v161; // w5
  int64_t v162; // x6
  System_String_o *v163; // x7
  int32_t v164; // w2
  int32_t v165; // w3
  System_String_o *v166; // x4
  int32_t v167; // w5
  int64_t v168; // x6
  System_String_o *v169; // x7
  int32_t v170; // w2
  int32_t v171; // w3
  System_String_o *v172; // x4
  int32_t v173; // w5
  int64_t v174; // x6
  System_String_o *v175; // x7
  int32_t v176; // w2
  int32_t v177; // w3
  System_String_o *v178; // x4
  int32_t v179; // w5
  int64_t v180; // x6
  System_String_o *v181; // x7
  int32_t v182; // w2
  int32_t v183; // w3
  System_String_o *v184; // x4
  int32_t v185; // w5
  int64_t v186; // x6
  System_String_o *v187; // x7
  int32_t v188; // w1
  int32_t v189; // w2
  int32_t v190; // w3
  System_String_o *v191; // x4
  int32_t v192; // w5
  int64_t v193; // x6
  System_String_o *v194; // x7
  int32_t v195; // w2
  int32_t v196; // w3
  System_String_o *v197; // x4
  int32_t v198; // w5
  int64_t v199; // x6
  System_String_o *v200; // x7
  int32_t v201; // w2
  int32_t v202; // w3
  System_String_o *v203; // x4
  int32_t v204; // w5
  int64_t v205; // x6
  System_String_o *v206; // x7
  int32_t v207; // w2
  int32_t v208; // w3
  System_String_o *v209; // x4
  int32_t v210; // w5
  int64_t v211; // x6
  System_String_o *v212; // x7
  Il2CppObject *v213; // x21
  int32_t height; // w22
  float v215; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int32_t v218; // w2
  int32_t v219; // w3
  System_String_o *v220; // x4
  int32_t v221; // w5
  int64_t v222; // x6
  System_String_o *v223; // x7
  float v224; // s13
  float v225; // s10
  float v226; // s8
  int v227; // w25
  float v228; // s9
  float width; // s12
  float v230; // s11
  int32_t v231; // w22
  Il2CppObject *v232; // x0
  System_String_o *v233; // x0
  UnityEngine_GUIStyle_o *v234; // x21
  System_String_o *v235; // x22
  _BOOL4 isLogAreaShow; // w22
  Il2CppObject *v237; // x1
  Il2CppObject **v238; // x9
  System_String_o *v239; // x21
  bool v240; // w22
  Il2CppObject *v241; // x0
  System_String_o *v242; // x21
  MotionInfo_c *v243; // x0
  float v244; // s11
  Il2CppObject *v245; // x0
  System_String_o *v246; // x21
  MotionInfo_c *v247; // x0
  Il2CppObject *v248; // x0
  System_String_o *v249; // x21
  MotionInfo_c *v250; // x0
  Il2CppObject *v251; // x0
  System_String_o *v252; // x21
  int32_t v253; // w21
  Il2CppObject *v254; // x21
  Il2CppObject *v255; // x22
  Il2CppObject *v256; // x0
  System_String_o *v257; // x21
  Il2CppObject *v258; // x0
  System_String_o *v259; // x0
  int32_t v260; // w21
  Il2CppObject *v261; // x0
  System_String_o *v262; // x0
  UnityEngine_GUIStyle_o *v263; // x20
  System_String_o *v264; // x21
  float v265; // s10
  float v266; // s9
  int32_t v267; // w0
  MotionInfo_c *v268; // x8
  float v269; // s11
  struct MotionInfo_StaticFields *v270; // x8
  UnityEngine_Vector2_o v271; // kr00_8
  MotionInfo_c *v272; // x8
  MotionInfo___c_c *v273; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v276; // x22
  struct MotionInfo___c_StaticFields *v277; // x0
  int32_t v278; // w2
  int32_t v279; // w3
  System_String_o *v280; // x4
  int32_t v281; // w5
  int64_t v282; // x6
  System_String_o *v283; // x7
  __int64 v284; // x8
  char *v285; // x20
  __int64 v286; // x9
  int *v287; // x10
  __int64 v288; // x0
  __int64 v289; // x1
  __int64 v290; // x20
  int i; // w25
  __int64 v292; // x8
  __int64 v293; // x9
  int *v294; // x10
  __int64 v295; // x0
  __int64 v296; // x8
  __int64 v297; // x9
  int *v298; // x10
  __int64 v299; // x0
  __int64 v300; // x22
  __int64 v301; // x0
  __int64 v302; // x1
  int32_t v303; // w2
  int32_t v304; // w3
  System_String_o *v305; // x4
  int32_t v306; // w5
  int64_t v307; // x6
  System_String_o *v308; // x7
  __int64 v309; // x21
  int32_t v310; // w1
  float v311; // s0
  System_String_o *v312; // x0
  int32_t v313; // w2
  int32_t v314; // w3
  System_String_o *v315; // x4
  int32_t v316; // w5
  int64_t v317; // x6
  System_String_o *v318; // x7
  __int64 v319; // x0
  int32_t v320; // w2
  int32_t v321; // w3
  System_String_o *v322; // x4
  int32_t v323; // w5
  int64_t v324; // x6
  System_String_o *v325; // x7
  int32_t v326; // w1
  __int64 v327; // x0
  int32_t v328; // w2
  int32_t v329; // w3
  System_String_o *v330; // x4
  int32_t v331; // w5
  int64_t v332; // x6
  System_String_o *v333; // x7
  __int64 v334; // x0
  int32_t v335; // w2
  int32_t v336; // w3
  System_String_o *v337; // x4
  int32_t v338; // w5
  int64_t v339; // x6
  System_String_o *v340; // x7
  int32_t v341; // w1
  System_String_o *v342; // x21
  __int64 v343; // x8
  __int64 v344; // x9
  int *v345; // x10
  __int64 v346; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v348; // [xsp+18h] [xbp-B8h]
  int v349; // [xsp+1Ch] [xbp-B4h] BYREF
  int v350; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v352; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v354; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v355; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v356; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v357; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v358; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v359; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v360; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v361; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v362; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v363; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v364; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v365; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v366; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2FEF8 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_SelectMany_List_string___string___);
    sub_1C93AD4(&System_Func_List_string___IEnumerable_string___TypeInfo);
    sub_1C93AD4(&UnityEngine_GUIStyle_TypeInfo);
    sub_1C93AD4(&UnityEngine_GUI_TypeInfo);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&MotionInfo_TypeInfo);
    sub_1C93AD4(&float_TypeInfo);
    sub_1C93AD4(&string___TypeInfo);
    sub_1C93AD4(&Method_MotionInfo___c__OnGUI_b__46_0__);
    sub_1C93AD4(&MotionInfo___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_1719/*"<size={0}>+</size>"*/);
    sub_1C93AD4(&StringLiteral_25706/*"【モーションID】"*/);
    sub_1C93AD4(&StringLiteral_25705/*"【ボイス・SE】"*/);
    sub_1C93AD4(&StringLiteral_1723/*"<size={0}>▲</size>"*/);
    sub_1C93AD4(&StringLiteral_15461/*"VoiceID : "*/);
    sub_1C93AD4(&StringLiteral_25707/*"【名前】"*/);
    sub_1C93AD4(&StringLiteral_333/*" 確率 / 合計 : "*/);
    sub_1C93AD4(&StringLiteral_1726/*"<size={0}>ログ消去</size>"*/);
    sub_1C93AD4(&StringLiteral_1718/*"<size="*/);
    sub_1C93AD4(&StringLiteral_25704/*"【カード属性】"*/);
    sub_1C93AD4(&StringLiteral_1120/*"0.00"*/);
    sub_1C93AD4(&StringLiteral_1725/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/);
    sub_1C93AD4(&StringLiteral_161/*" / "*/);
    sub_1C93AD4(&StringLiteral_194/*" SEID : "*/);
    sub_1C93AD4(&StringLiteral_25684/*"▶ ログ非表示"*/);
    sub_1C93AD4(&StringLiteral_1724/*"<size={0}>▼</size>"*/);
    sub_1C93AD4(&StringLiteral_1721/*"<size={0}>{1}/{2}</size>"*/);
    sub_1C93AD4(&StringLiteral_1722/*"<size={0}>{1}</size>"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_332/*" 分類 : "*/);
    sub_1C93AD4(&StringLiteral_1521/*"</size>"*/);
    sub_1C93AD4(&StringLiteral_1744/*">"*/);
    sub_1C93AD4(&StringLiteral_12831/*"ServantID : "*/);
    sub_1C93AD4(&StringLiteral_25685/*"◀ ログ表示　"*/);
    sub_1C93AD4(&StringLiteral_1720/*"<size={0}>-</size>"*/);
    byte_4D2FEF8 = 1;
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
    v9 = 64;
    if ( commandType == -1 )
      v9 = 60;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)normal, *(_DWORD *)((char *)&actionData->klass + v9), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4D2FF73 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF73 = 1;
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
    if ( !byte_4D2FF74 )
    {
      sub_1C93AD4(&MotionInfo_TypeInfo);
      byte_4D2FF74 = 1;
    }
    v12 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v12 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v12->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0);
    v15 = System_String__Concat_64463988(
            (System_String_o *)StringLiteral_12831/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0);
    v10 = MotionInfo_TypeInfo;
    v11 = v15;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4D2FF73 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF73 = 1;
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
    v18 = (System_String_o **)&StringLiteral_194/*" SEID : "*/;
  else
    v18 = (System_String_o **)&StringLiteral_15461/*"VoiceID : "*/;
  v19 = *v18;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4D2FF75 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF75 = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v20->static_fields->_VoiceId_k__BackingField;
  v22 = System_Environment__get_NewLine(0);
  v23 = System_String__Concat_64465992(v11, v19, VoiceId_k__BackingField, v22, 0);
  normal = (char *)sub_1C93B7C(string___TypeInfo, 8);
  if ( !normal )
    goto LABEL_203;
  v30 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v23;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(normal + 32), (int32_t)v23, v24, v25, v26, v27, v28, v29);
  if ( *((_DWORD *)v30 + 6) <= 1u )
    goto LABEL_196;
  v37 = StringLiteral_333/*" 確率 / 合計 : "*/;
  *((_QWORD *)v30 + 5) = StringLiteral_333/*" 確率 / 合計 : "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 40), v37, v31, v32, v33, v34, v35, v36);
  if ( !byte_4D2FF76 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF76 = 1;
  }
  v38 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v38 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v38->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_66019372(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1120/*"0.00"*/);
  if ( *((_DWORD *)v30 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v30 + 6) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 48), (int32_t)normal, v39, v40, v41, v42, v43, v44);
  if ( *((_DWORD *)v30 + 6) <= 3u )
    goto LABEL_196;
  v51 = StringLiteral_161/*" / "*/;
  *((_QWORD *)v30 + 7) = StringLiteral_161/*" / "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 56), v51, v45, v46, v47, v48, v49, v50);
  if ( !byte_4D2FF77 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF77 = 1;
  }
  v52 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v52 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v52->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_66019372(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1120/*"0.00"*/);
  if ( *((_DWORD *)v30 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v30 + 8) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 64), (int32_t)normal, v53, v54, v55, v56, v57, v58);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *((_DWORD *)v30 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v30 + 9) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 72), (int32_t)normal, v59, v60, v61, v62, v63, v64);
  if ( *((_DWORD *)v30 + 6) <= 6u )
    goto LABEL_196;
  v71 = StringLiteral_332/*" 分類 : "*/;
  *((_QWORD *)v30 + 10) = StringLiteral_332/*" 分類 : "*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 80), v71, v65, v66, v67, v68, v69, v70);
  if ( !byte_4D2FF78 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF78 = 1;
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v30 + 88), v78, v72, v73, v74, v75, v76, v77);
  v79 = System_String__Concat_64466256((System_String_array *)v30, 0);
  v80 = sub_1C93B7C(string___TypeInfo, 21);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( !v80 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v80 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v80 + 32) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 32), (int32_t)normal, v81, v82, v83, v84, v85, v86);
  if ( *(_DWORD *)(v80 + 24) <= 1u )
    goto LABEL_196;
  v93 = StringLiteral_25707/*"【名前】"*/;
  *(_QWORD *)(v80 + 40) = StringLiteral_25707/*"【名前】"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 40), v93, v87, v88, v89, v90, v91, v92);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 48) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 48), (int32_t)normal, v94, v95, v96, v97, v98, v99);
  if ( *(_DWORD *)(v80 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v80 + 56) = static_fields->svtName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 56), (int32_t)svtName, v100, v101, v102, v103, v104, v105);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 64) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 64), (int32_t)normal, v108, v109, v110, v111, v112, v113);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 72) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 72), (int32_t)normal, v114, v115, v116, v117, v118, v119);
  if ( *(_DWORD *)(v80 + 24) <= 6u )
    goto LABEL_196;
  v126 = StringLiteral_25706/*"【モーションID】"*/;
  *(_QWORD *)(v80 + 80) = StringLiteral_25706/*"【モーションID】"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 80), v126, v120, v121, v122, v123, v124, v125);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 88) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 88), (int32_t)normal, v127, v128, v129, v130, v131, v132);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0);
  if ( *(_DWORD *)(v80 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 96) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 96), (int32_t)normal, v133, v134, v135, v136, v137, v138);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 104) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 104), (int32_t)normal, v139, v140, v141, v142, v143, v144);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 112) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 112), (int32_t)normal, v145, v146, v147, v148, v149, v150);
  if ( *(_DWORD *)(v80 + 24) <= 0xBu )
    goto LABEL_196;
  v157 = StringLiteral_25704/*"【カード属性】"*/;
  *(_QWORD *)(v80 + 120) = StringLiteral_25704/*"【カード属性】"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 120), v157, v151, v152, v153, v154, v155, v156);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 128) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 128), (int32_t)normal, v158, v159, v160, v161, v162, v163);
  if ( *(_DWORD *)(v80 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 136) = TypeName;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 136), (int32_t)TypeName, v164, v165, v166, v167, v168, v169);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 144) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 144), (int32_t)normal, v170, v171, v172, v173, v174, v175);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v80 + 152) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 152), (int32_t)normal, v176, v177, v178, v179, v180, v181);
  if ( *(_DWORD *)(v80 + 24) <= 0x10u )
    goto LABEL_196;
  v188 = StringLiteral_25705/*"【ボイス・SE】"*/;
  *(_QWORD *)(v80 + 160) = StringLiteral_25705/*"【ボイス・SE】"*/;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 160), v188, v182, v183, v184, v185, v186, v187);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v80 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v80 + 168) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 168), (int32_t)normal, v189, v190, v191, v192, v193, v194);
  if ( *(_DWORD *)(v80 + 24) <= 0x12u
    || (*(_QWORD *)(v80 + 176) = v79,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 176), (int32_t)v79, v195, v196, v197, v198, v199, v200),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v80 + 24) <= 0x13u)
    || (*(_QWORD *)(v80 + 184) = normal,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 184), (int32_t)normal, v201, v202, v203, v204, v205, v206),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v80 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1C93D34(normal);
  }
  *(_QWORD *)(v80 + 192) = normal;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v80 + 192), (int32_t)normal, v207, v208, v209, v210, v211, v212);
  v213 = (Il2CppObject *)System_String__Concat_64466256((System_String_array *)v80, 0);
  height = UnityEngine_Screen__get_height(0);
  v215 = (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v215 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0);
    *p_labelStyle = none;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.labelStyle,
      (int32_t)none,
      v218,
      v219,
      v220,
      v221,
      v222,
      v223);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0);
    if ( !normal )
      goto LABEL_203;
    v354.fields.r = 1.0;
    v354.fields.g = 1.0;
    v354.fields.b = 1.0;
    v354.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v354, 0);
  }
  v224 = (float)height * 0.25;
  v225 = v215 * 40.0;
  v226 = v215 * 250.0;
  v227 = 3;
  v228 = (float)UnityEngine_Screen__get_width(0) - v226;
  do
  {
    width = v226;
    if ( this->fields.isLogAreaShow )
      v230 = 0.0;
    else
      v230 = v228;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0);
    v231 = UnityEngine_Screen__get_height(0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v355.fields.m_Height = (float)v231;
    v355.fields.m_YMin = 0.0;
    v355.fields.m_XMin = v230;
    v355.fields.m_Width = width;
    UnityEngine_GUI__Box(v355, (System_String_o *)StringLiteral_1/*""*/, 0);
    --v227;
  }
  while ( v227 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0);
  v352 = *((float *)&format.monitor + 1);
  v232 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  v233 = System_String__Format_64467032((System_String_o *)StringLiteral_1722/*"<size={0}>{1}</size>"*/, v232, v213, 0);
  v234 = *p_labelStyle;
  v235 = v233;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v356.fields.m_YMin = 0.0;
  v356.fields.m_XMin = v228;
  v356.fields.m_Width = v226;
  v356.fields.m_Height = v224 + v224;
  UnityEngine_GUI__Label_72250316(v356, v235, v234, 0);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v237 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high);
  if ( this->fields.isLogAreaShow )
    v238 = (Il2CppObject **)&StringLiteral_25684/*"▶ ログ非表示"*/;
  else
    v238 = (Il2CppObject **)&StringLiteral_25685/*"◀ ログ表示　"*/;
  v239 = System_String__Format_64467032((System_String_o *)StringLiteral_1722/*"<size={0}>{1}</size>"*/, v237, *v238, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v357.fields.m_XMin = v228;
  v357.fields.m_YMin = (float)((float)(v224 + v224) + 10.0) + 0.0;
  v357.fields.m_Width = v226 * 0.5;
  v357.fields.m_Height = v225;
  v240 = isLogAreaShow;
  if ( UnityEngine_GUI__Button(v357, v239, 0) )
    v240 = !this->fields.isLogAreaShow;
  v352 = *((float *)&format.monitor + 1);
  v241 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  v242 = System_String__Format((System_String_o *)StringLiteral_1726/*"<size={0}>ログ消去</size>"*/, v241, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v358.fields.m_XMin = (float)(v226 * 0.5) + v228;
  v358.fields.m_YMin = (float)((float)(v224 + v224) + 10.0) + 0.0;
  v358.fields.m_Width = v226 * 0.5;
  v358.fields.m_Height = v225;
  if ( UnityEngine_GUI__Button(v358, v242, 0) )
  {
    v243 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v243);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v240;
    return;
  }
  v244 = v225 + 10.0;
  v352 = *((float *)&format.monitor + 1);
  v245 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  v246 = System_String__Format((System_String_o *)StringLiteral_1723/*"<size={0}>▲</size>"*/, v245, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v359.fields.m_XMin = v228;
  v359.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v359.fields.m_Width = v225;
  v359.fields.m_Height = v225;
  if ( UnityEngine_GUI__RepeatButton(v359, v246, 0) )
  {
    v247 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v247 = MotionInfo_TypeInfo;
    }
    v247->static_fields->scrollPosition.fields.y = v247->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v352 = *((float *)&format.monitor + 1);
  v248 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  v249 = System_String__Format((System_String_o *)StringLiteral_1724/*"<size={0}>▼</size>"*/, v248, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v360.fields.m_XMin = v225 + v228;
  v360.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v360.fields.m_Width = v225;
  v360.fields.m_Height = v225;
  if ( UnityEngine_GUI__RepeatButton(v360, v249, 0) )
  {
    v250 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v250 = MotionInfo_TypeInfo;
    }
    v250->static_fields->scrollPosition.fields.y = v250->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v352 = *((float *)&format.monitor + 1);
  v251 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  v252 = System_String__Format((System_String_o *)StringLiteral_1720/*"<size={0}>-</size>"*/, v251, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v361.fields.m_XMin = v225 + (float)(v225 + v228);
  v361.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v361.fields.m_Width = v225;
  v361.fields.m_Height = v225;
  if ( UnityEngine_GUI__Button(v361, v252, 0) )
  {
    v253 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v253;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_65947544(v253, 1, 0);
  }
  v348 = v240;
  v352 = *((float *)&format.monitor + 1) * 0.9;
  v254 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  monitor_high = this->fields.scrollSpeed;
  v255 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
  v350 = 10;
  v256 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v350);
  v257 = System_String__Format_64467100((System_String_o *)StringLiteral_1721/*"<size={0}>{1}/{2}</size>"*/, v254, v255, v256, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v362.fields.m_XMin = v225 + (float)(v225 + (float)(v225 + v228));
  v362.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v362.fields.m_Width = v225 + 10.0;
  v362.fields.m_Height = v225;
  UnityEngine_GUI__Box(v362, v257, 0);
  v349 = HIDWORD(format.monitor);
  v258 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v349);
  v259 = System_String__Format((System_String_o *)StringLiteral_1719/*"<size={0}>+</size>"*/, v258, 0);
  v363.fields.m_XMin = v244 + (float)(v225 + (float)(v225 + (float)(v225 + v228)));
  v363.fields.m_YMin = (float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0);
  v363.fields.m_Width = v225;
  v363.fields.m_Height = v225;
  if ( UnityEngine_GUI__Button(v363, v259, 0) )
  {
    v260 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v260;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_65947872(v260, 10, 0);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0);
  v352 = *((float *)&format.monitor + 1);
  v261 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v352);
  v262 = System_String__Format((System_String_o *)StringLiteral_1725/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v261, 0);
  v263 = *p_labelStyle;
  v264 = v262;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v364.fields.m_Height = 40.0;
  v364.fields.m_XMin = v228;
  v364.fields.m_YMin = v244 + (float)((float)((float)((float)(v224 + v224) + 10.0) + 0.0) + (float)(v225 + 10.0));
  v364.fields.m_Width = v226;
  UnityEngine_GUI__Label_72250316(v364, v264, v263, 0);
  v265 = (float)((float)UnityEngine_Screen__get_width(0) - v226) + -10.0;
  v266 = *((float *)&format.monitor + 1) + 10.0;
  v267 = UnityEngine_Screen__get_height(0);
  v268 = MotionInfo_TypeInfo;
  v269 = (float)v267;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v268 = MotionInfo_TypeInfo;
  }
  v270 = v268->static_fields;
  v365.fields.m_YMin = 0.0;
  v365.fields.m_Width = v265;
  v365.fields.m_Height = v269;
  *(_QWORD *)&viewRect.fields.m_XMin = 0;
  viewRect.fields.m_Width = v265 + -20.0;
  viewRect.fields.m_Height = v266 * (float)v270->voicePlayLogLineSize;
  v365.fields.m_XMin = 0.0;
  v271 = UnityEngine_GUI__BeginScrollView(v365, v270->scrollPosition, viewRect, 0);
  v272 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v271;
  v273 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v272->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v273 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v273->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v273->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v273);
      v273 = MotionInfo___c_TypeInfo;
    }
    v276 = (Il2CppObject *)v273->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1C93D20(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v276, Method_MotionInfo___c__OnGUI_b__46_0__, 0);
    v277 = MotionInfo___c_TypeInfo->static_fields;
    v277->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v277->__9__46_0, (int32_t)_9__46_0, v278, v279, v280, v281, v282, v283);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_31DD3D0 *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1C93D2C(normal, v7);
  v284 = *(_QWORD *)normal;
  v285 = normal;
  v286 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v287 = (int *)(*(_QWORD *)(v284 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v287 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v286;
      v287 += 4;
      if ( !v286 )
        goto LABEL_159;
    }
    v288 = v284 + 16LL * *v287 + 312;
  }
  else
  {
LABEL_159:
    v288 = sub_1C69E5C(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v290 = (*(__int64 (__fastcall **)(char *, _QWORD))v288)(v285, *(_QWORD *)(v288 + 8));
  if ( !v290 )
    sub_1C93D2C(0, v289);
  for ( i = 0; ; ++i )
  {
    v292 = *(_QWORD *)v290;
    v293 = *(unsigned __int16 *)(*(_QWORD *)v290 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v290 + 302LL) )
    {
      v294 = (int *)(*(_QWORD *)(v292 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v294 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v293;
        v294 += 4;
        if ( !v293 )
          goto LABEL_168;
      }
      v295 = v292 + 16LL * *v294 + 312;
    }
    else
    {
LABEL_168:
      v295 = sub_1C69E5C(v290, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v295)(v290, *(_QWORD *)(v295 + 8)) & 1) == 0 )
      break;
    v296 = *(_QWORD *)v290;
    v297 = *(unsigned __int16 *)(*(_QWORD *)v290 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v290 + 302LL) )
    {
      v298 = (int *)(*(_QWORD *)(v296 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v298 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v297;
        v298 += 4;
        if ( !v297 )
          goto LABEL_175;
      }
      v299 = v296 + 16LL * *v298 + 312;
    }
    else
    {
LABEL_175:
      v299 = sub_1C69E5C(v290, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v300 = (*(__int64 (__fastcall **)(__int64, _QWORD))v299)(v290, *(_QWORD *)(v299 + 8));
    v301 = sub_1C93B7C(string___TypeInfo, 5);
    v309 = v301;
    if ( !v301 )
      sub_1C93D2C(0, v302);
    if ( !*(_DWORD *)(v301 + 24) )
      sub_1C93D34(v301);
    v310 = StringLiteral_1718/*"<size="*/;
    *(_QWORD *)(v301 + 32) = StringLiteral_1718/*"<size="*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v301 + 32), v310, v303, v304, v305, v306, v307, v308);
    v312 = System_Single__ToString(v311, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v309 + 24) <= 1u )
      sub_1C93D34(v312);
    *(_QWORD *)(v309 + 40) = v312;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v309 + 40), (int32_t)v312, v313, v314, v315, v316, v317, v318);
    if ( *(_DWORD *)(v309 + 24) <= 2u )
      sub_1C93D34(v319);
    v326 = StringLiteral_1744/*">"*/;
    *(_QWORD *)(v309 + 48) = StringLiteral_1744/*">"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v309 + 48), v326, v320, v321, v322, v323, v324, v325);
    if ( *(_DWORD *)(v309 + 24) <= 3u )
      sub_1C93D34(v327);
    *(_QWORD *)(v309 + 56) = v300;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v309 + 56), v300, v328, v329, v330, v331, v332, v333);
    if ( *(_DWORD *)(v309 + 24) <= 4u )
      sub_1C93D34(v334);
    v341 = StringLiteral_1521/*"</size>"*/;
    *(_QWORD *)(v309 + 64) = StringLiteral_1521/*"</size>"*/;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v309 + 64), v341, v335, v336, v337, v338, v339, v340);
    v342 = System_String__Concat_64466256((System_String_array *)v309, 0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v366.fields.m_YMin = v266 * (float)i;
    v366.fields.m_XMin = 0.0;
    v366.fields.m_Width = v265 + -20.0;
    v366.fields.m_Height = v266;
    UnityEngine_GUI__Label(v366, v342, 0);
  }
  v343 = *(_QWORD *)v290;
  v344 = *(unsigned __int16 *)(*(_QWORD *)v290 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v290 + 302LL) )
  {
    v345 = (int *)(*(_QWORD *)(v343 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v345 - 1) != System_IDisposable_TypeInfo )
    {
      --v344;
      v345 += 4;
      if ( !v344 )
        goto LABEL_190;
    }
    v346 = v343 + 16LL * *v345 + 312;
  }
  else
  {
LABEL_190:
    v346 = sub_1C69E5C(v290, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v346)(v290, *(_QWORD *)(v346 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0);
  this->fields.isLogAreaShow = v348;
}


void MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  __int64 v7; // x20
  MotionInfo_c *v8; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x20
  MotionInfo_c *v17; // x0
  struct MotionInfo_StaticFields *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  MotionInfo_c *v25; // x0
  __int64 v26; // x20
  struct MotionInfo_StaticFields *v27; // x0
  MotionInfo_c *v28; // x0

  if ( (byte_4D2FEFA & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2FEFA = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v7 = StringLiteral_1/*""*/;
  if ( !byte_4D2FF79 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF79 = 1;
  }
  v8 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v8 = MotionInfo_TypeInfo;
  }
  static_fields = v8->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v7;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->_VoiceServantId_k__BackingField,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v16 = StringLiteral_1/*""*/;
  if ( !byte_4D2FF7A )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF7A = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v18 = v17->static_fields;
  v18->_VoiceId_k__BackingField = (struct System_String_o *)v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v18->_VoiceId_k__BackingField, v16, v10, v11, v12, v13, v14, v15);
  if ( !byte_4D2FF7B )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF7B = 1;
  }
  v25 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
  }
  v25->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4D2FF7C )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
    byte_4D2FF7C = 1;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = MotionInfo_TypeInfo;
  }
  v25->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v26 = StringLiteral_1/*""*/;
  if ( !byte_4D2FF7D )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v25 = MotionInfo_TypeInfo;
    byte_4D2FF7D = 1;
  }
  if ( !v25->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v25);
    v25 = MotionInfo_TypeInfo;
  }
  v27 = v25->static_fields;
  v27->_VoiceType_k__BackingField = (struct System_String_o *)v26;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v27->_VoiceType_k__BackingField, v26, v19, v20, v21, v22, v23, v24);
  if ( !byte_4D2FF7E )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF7E = 1;
  }
  v28 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
  }
  v28->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4D2FF7F )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    v28 = MotionInfo_TypeInfo;
    byte_4D2FF7F = 1;
  }
  if ( !v28->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v28);
    v28 = MotionInfo_TypeInfo;
  }
  v28->static_fields->_IsSe_k__BackingField = 0;
}


void MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FF00 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF00 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4D2FF80 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FF80 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  v1->static_fields->_IsRandom_k__BackingField = 0;
}


void MotionInfo__ResetVoicePlaybackLog(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x9
  int32_t size; // w2
  int v6; // w10

  if ( (byte_4D2FEFF & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEFF = 1;
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
    sub_1C93D2C(v2, v1);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MotionInfo_c *v10; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4D2FEF7 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF7 = 1;
  }
  v10 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v10 = MotionInfo_TypeInfo;
  }
  v10->static_fields->svtName = svtName;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MotionInfo_TypeInfo->static_fields,
    (int32_t)svtName,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->actionData,
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

  if ( (byte_4D2FEFE & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEFE = 1;
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
        (voicePlaybackLogList = (System_Collections_Generic_List_object__o *)static_fields->voicePlaybackLogList) == 0)
    || (voicePlayLogLineSize = static_fields->voicePlayLogLineSize,
        (Item = System_Collections_Generic_List_object___get_Item(
                  voicePlaybackLogList,
                  voicePlaybackLogList->fields._size - 1,
                  (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0) )
  {
LABEL_24:
    sub_1C93D2C(Item, v1);
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
             (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_List_string___get_Item__);
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
      (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v7 = MotionInfo_TypeInfo;
  }
  j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v8 = MotionInfo_TypeInfo->static_fields;
  v9 = v8->voicePlayLogLineSize;
  if ( v10 > 499 )
    goto LABEL_18;
LABEL_22:
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0) * v9);
}


bool MotionInfo__get_IsRandom(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEF3 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF3 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_IsRandom_k__BackingField;
}


bool MotionInfo__get_IsSe(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEF5 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF5 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_IsSe_k__BackingField;
}


System_String_o *MotionInfo__get_VoiceId(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEED & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEED = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceId_k__BackingField;
}


int32_t MotionInfo__get_VoiceIndex(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEF1 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF1 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceIndex_k__BackingField;
}


System_String_o *MotionInfo__get_VoiceServantId(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEE7 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEE7 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceServantId_k__BackingField;
}


float MotionInfo__get_VoiceTotalWeight(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEEB & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEEB = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceTotalWeight_k__BackingField;
}


System_String_o *MotionInfo__get_VoiceType(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEEF & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEEF = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceType_k__BackingField;
}


float MotionInfo__get_VoiceWeight(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4D2FEE9 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEE9 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  return v1->static_fields->_VoiceWeight_k__BackingField;
}


void MotionInfo__set_IsRandom(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4D2FEF4 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF4 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsRandom_k__BackingField = value;
}


void MotionInfo__set_IsSe(bool value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4D2FEF6 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF6 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_IsSe_k__BackingField = value;
}


void MotionInfo__set_VoiceId(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4D2FEEE & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEEE = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->_VoiceId_k__BackingField,
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

  if ( (byte_4D2FEF2 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF2 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceIndex_k__BackingField = value;
}


void MotionInfo__set_VoiceServantId(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4D2FEE8 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEE8 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->_VoiceServantId_k__BackingField,
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
  MotionInfo_c *v3; // x0

  if ( (byte_4D2FEEC & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEEC = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceTotalWeight_k__BackingField = value;
}


void MotionInfo__set_VoiceType(System_String_o *value, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4D2FEF0 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEF0 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&static_fields->_VoiceType_k__BackingField,
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
  MotionInfo_c *v3; // x0

  if ( (byte_4D2FEEA & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo_TypeInfo);
    byte_4D2FEEA = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceWeight_k__BackingField = value;
}


void MotionInfo___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2FF02 & 1) == 0 )
  {
    sub_1C93AD4(&MotionInfo___c_TypeInfo);
    byte_4D2FF02 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(MotionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)MotionInfo___c_TypeInfo->static_fields,
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