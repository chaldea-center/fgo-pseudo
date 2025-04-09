void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v9; // x19
  struct MotionInfo_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_49BA358 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string____ctor__, v1);
    sub_1B4CF90(&System_Collections_Generic_List_List_string___TypeInfo, v4);
    sub_1B4CF90(&MotionInfo_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_1/*""*/, v6);
    byte_49BA358 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B4CF34((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)StringLiteral_1/*""*/, v2, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_49B525A )
  {
    sub_1B4CF90(&UnityEngine_Vector2_TypeInfo, v7);
    byte_49B525A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v9 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v10 = MotionInfo_TypeInfo->static_fields;
  v10->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v9;
  sub_1B4CF34((CGThumbnailListItem_o *)&v10->voicePlaybackLogList, (int32_t)v9, v11, v12);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  MotionInfo_c *v11; // x0
  __int64 v12; // x20
  struct MotionInfo_StaticFields *v13; // x0
  const MethodInfo *v14; // x0

  if ( (byte_49BA352 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_11254/*"SE"*/, v5);
    byte_49BA352 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_49BA3BA )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA3BA = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_49BA3BB )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_49BA3BB = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_49BA3B9 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_49BA3B9 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_49BA3BD )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v8);
    byte_49BA3BD = 1;
  }
  v11 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_49BA3BE )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_49BA3BE = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_49BA3BF )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_49BA3BF = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsRandom_k__BackingField = 0;
  v12 = StringLiteral_11254/*"SE"*/;
  if ( !byte_49BA3BC )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_49BA3BC = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v13 = v11->static_fields;
  v13->_VoiceType_k__BackingField = (struct System_String_o *)v12;
  sub_1B4CF34((CGThumbnailListItem_o *)&v13->_VoiceType_k__BackingField, v12, v9, v10);
  MotionInfo__AddVoiceLog(v14);
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
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  Il2CppClass *v24; // x1
  Il2CppClass **v25; // x0
  __int64 v26; // x1
  MotionInfo_c *v27; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v29; // x0
  System_String_o *v30; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v32; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass *v40; // x1
  Il2CppClass **v41; // x0
  __int64 v42; // x1
  MotionInfo_c *v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass *v49; // x1
  Il2CppClass **v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  char *v53; // x20
  int32_t v54; // w1
  __int64 v55; // x1
  MotionInfo_c *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w1
  __int64 v62; // x1
  MotionInfo_c *v63; // x0
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  Il2CppClass *v73; // x1
  Il2CppClass **v74; // x0
  __int64 v75; // x1
  MotionInfo_c *v76; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v78; // x0
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass *v84; // x1
  Il2CppClass **v85; // x0
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  const MethodInfo *v92; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49BA353 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string___Add__, v1);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v2);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1B4CF90(&MotionInfo_TypeInfo, v5);
    sub_1B4CF90(&string___TypeInfo, v6);
    sub_1B4CF90(&StringLiteral_333/*" 確率 / 合計 : "*/, v7);
    sub_1B4CF90(&StringLiteral_202/*" VoiceID : "*/, v8);
    sub_1B4CF90(&StringLiteral_1142/*"0.00"*/, v9);
    sub_1B4CF90(&StringLiteral_162/*" / "*/, v10);
    sub_1B4CF90(&StringLiteral_882/*"--- Voice・SE Log ---"*/, v11);
    sub_1B4CF90(&StringLiteral_195/*" SEID : "*/, v12);
    sub_1B4CF90(&StringLiteral_332/*" 分類 : "*/, v13);
    sub_1B4CF90(&StringLiteral_12438/*"ServantID : "*/, v14);
    byte_49BA353 = 1;
  }
  LODWORD(format.klass) = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_61093468((System_String_o *)StringLiteral_882/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
  if ( !v15 )
    goto LABEL_74;
  items = v15->fields._items;
  v22 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v15->fields._size;
  v24 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v25[4] = v24;
    sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_49BA3B2 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v26);
    byte_49BA3B2 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_49BA3B4 )
      {
        sub_1B4CF90(&MotionInfo_TypeInfo, v26);
        byte_49BA3B4 = 1;
      }
      v27 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v27 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v27->static_fields->_VoiceId_k__BackingField;
      v29 = System_Environment__get_NewLine(0LL);
      v30 = (System_String_o *)StringLiteral_195/*" SEID : "*/;
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
  if ( !byte_49BA3B3 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v26);
    byte_49BA3B3 = 1;
  }
  v32 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v32 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v32->static_fields->_VoiceServantId_k__BackingField;
  v34 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_61131716(
                                   (System_String_o *)StringLiteral_12438/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v34,
                                   0LL);
  v37 = v15->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v37 )
LABEL_74:
    sub_1B4D1EC(voicePlaybackLogList, v18);
  v39 = v15->fields._size;
  v40 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v37->obj.klass + v39;
    v15->fields._size = v39 + 1;
    v41[4] = v40;
    sub_1B4CF34((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
  }
  if ( !byte_49BA3B4 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v42);
    byte_49BA3B4 = 1;
  }
  v43 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v43 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v43->static_fields->_VoiceId_k__BackingField;
  v29 = System_Environment__get_NewLine(0LL);
  v30 = (System_String_o *)StringLiteral_202/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_61131716(v30, VoiceId_k__BackingField, v29, 0LL);
  v46 = v15->fields._items;
  v47 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v46 )
    goto LABEL_74;
  v48 = v15->fields._size;
  v49 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v48 >= v46->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v46->obj.klass + v48;
    v15->fields._size = v48 + 1;
    v50[4] = v49;
    sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
  }
  voicePlaybackLogList = (char *)sub_1B4D038(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v53 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v54 = StringLiteral_333/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_333/*" 確率 / 合計 : "*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(voicePlaybackLogList + 32), v54, v51, v52);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_49BA3B5 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v55);
    byte_49BA3B5 = 1;
  }
  v56 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v56 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v56->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_62693840(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1142/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v53 + 5) = voicePlaybackLogList;
  sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 40), (int32_t)voicePlaybackLogList, v57, v58);
  if ( *((_DWORD *)v53 + 6) <= 2u )
    goto LABEL_75;
  v61 = StringLiteral_162/*" / "*/;
  *((_QWORD *)v53 + 6) = StringLiteral_162/*" / "*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 48), v61, v59, v60);
  if ( !byte_49BA3B6 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v62);
    byte_49BA3B6 = 1;
  }
  v63 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v63 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v63->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_62693840(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1142/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 3u
    || (*((_QWORD *)v53 + 7) = voicePlaybackLogList,
        sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 56), (int32_t)voicePlaybackLogList, v64, v65),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v53 + 6) <= 4u) )
  {
LABEL_75:
    sub_1B4D1F4(voicePlaybackLogList, v18);
  }
  *((_QWORD *)v53 + 8) = voicePlaybackLogList;
  sub_1B4CF34((CGThumbnailListItem_o *)(v53 + 64), (int32_t)voicePlaybackLogList, v66, v67);
  voicePlaybackLogList = (char *)System_String__Concat_61133984((System_String_array *)v53, 0LL);
  v70 = v15->fields._items;
  v71 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v70 )
    goto LABEL_74;
  v72 = v15->fields._size;
  v73 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v72 >= v70->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v70->obj.klass + v72;
    v15->fields._size = v72 + 1;
    v74[4] = v73;
    sub_1B4CF34((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v73, v68, v69);
  }
  if ( !byte_49BA3B7 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v75);
    byte_49BA3B7 = 1;
  }
  v76 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v76 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v76->static_fields->_VoiceType_k__BackingField;
  v78 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_61131716(
                                   (System_String_o *)StringLiteral_332/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v78,
                                   0LL);
  v81 = v15->fields._items;
  v82 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v81 )
    goto LABEL_74;
  v83 = v15->fields._size;
  v84 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v83 >= v81->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &v81->obj.klass + v83;
    v15->fields._size = v83 + 1;
    v85[4] = v84;
    sub_1B4CF34((CGThumbnailListItem_o *)(v85 + 4), (int32_t)v84, v79, v80);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v88 = *((_QWORD *)voicePlaybackLogList + 2);
  v89 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v88 )
    goto LABEL_74;
  v90 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v90 >= *(_DWORD *)(v88 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v15,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = v88 + 8 * v90;
    *((_DWORD *)voicePlaybackLogList + 6) = v90 + 1;
    *(_QWORD *)(v91 + 32) = v15;
    sub_1B4CF34((CGThumbnailListItem_o *)(v91 + 32), (int32_t)v15, v86, v87);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v92);
}


void __fastcall MotionInfo__AddVoiceLog_38737988(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  MotionInfo_c *v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x8
  const MethodInfo *v23; // x0

  if ( (byte_49BA354 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string___Add__, method);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1B4CF90(&MotionInfo_TypeInfo, v6);
    byte_49BA354 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v7 )
    goto LABEL_16;
  items = v7->fields._items;
  v13 = Method_System_Collections_Generic_List_string__Add__;
  ++v7->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v7->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v7,
      (Il2CppObject *)str,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_1B4CF34((CGThumbnailListItem_o *)(v15 + 4), (int32_t)str, v10, v11);
  }
  v18 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v18 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v18->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList
    || (v19 = voicePlaybackLogList->fields._items,
        v20 = Method_System_Collections_Generic_List_List_string___Add__,
        ++voicePlaybackLogList->fields._version,
        !v19) )
  {
LABEL_16:
    sub_1B4D1EC(voicePlaybackLogList, v9);
  }
  v21 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v7,
      *(const MethodInfo_35801DC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    voicePlaybackLogList->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v7;
    sub_1B4CF34((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v7, v16, v17);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v23);
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
  if ( (byte_49BA350 & 1) == 0 )
  {
    sub_1B4CF90(&BattleCommand_TypeInfo, *(_QWORD *)&type);
    sub_1B4CF90(&StringLiteral_25022/*"バスター"*/, v4);
    sub_1B4CF90(&StringLiteral_25004/*"クイック"*/, v5);
    sub_1B4CF90(&StringLiteral_24993/*"アーツ"*/, v6);
    sub_1B4CF90(&StringLiteral_24997/*"エクストラ"*/, v7);
    byte_49BA350 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v8 = &StringLiteral_24993/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v8 = &StringLiteral_25022/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v8 = &StringLiteral_25004/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v8 = &StringLiteral_24997/*"エクストラ"*/;
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
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  char *v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w1
  __int64 v69; // x1
  MotionInfo_c *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w1
  __int64 v76; // x1
  MotionInfo_c *v77; // x0
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w1
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x1
  System_String_o *v88; // x22
  __int64 v89; // x21
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  int32_t v97; // w2
  const MethodInfo *v98; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  int32_t v107; // w1
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  int32_t v116; // w2
  const MethodInfo *v117; // x3
  int32_t v118; // w1
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  int32_t v123; // w2
  const MethodInfo *v124; // x3
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w1
  int32_t v130; // w2
  const MethodInfo *v131; // x3
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  int32_t v134; // w2
  const MethodInfo *v135; // x3
  int32_t v136; // w2
  const MethodInfo *v137; // x3
  Il2CppObject *v138; // x21
  int32_t height; // w22
  float v140; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int32_t v143; // w2
  const MethodInfo *v144; // x3
  float v145; // s13
  float v146; // s10
  float v147; // s8
  int v148; // w25
  float v149; // s9
  float width; // s12
  float v151; // s11
  int32_t v152; // w22
  __int64 v153; // x2
  __int64 v154; // x3
  __int64 v155; // x4
  Il2CppObject *v156; // x0
  System_String_o *v157; // x0
  UnityEngine_GUIStyle_o *v158; // x21
  System_String_o *v159; // x22
  _BOOL4 isLogAreaShow; // w22
  __int64 v161; // x2
  __int64 v162; // x3
  __int64 v163; // x4
  Il2CppObject *v164; // x1
  Il2CppObject **v165; // x9
  System_String_o *v166; // x21
  bool v167; // w0
  bool v168; // w21
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  MotionInfo_c *v172; // x0
  float v173; // s11
  Il2CppObject *v174; // x0
  System_String_o *v175; // x21
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  MotionInfo_c *v179; // x0
  Il2CppObject *v180; // x0
  System_String_o *v181; // x21
  __int64 v182; // x2
  __int64 v183; // x3
  __int64 v184; // x4
  MotionInfo_c *v185; // x0
  Il2CppObject *v186; // x0
  System_String_o *v187; // x21
  __int64 v188; // x2
  __int64 v189; // x3
  __int64 v190; // x4
  int32_t v191; // w21
  Il2CppObject *v192; // x21
  __int64 v193; // x2
  __int64 v194; // x3
  __int64 v195; // x4
  Il2CppObject *v196; // x22
  __int64 v197; // x2
  __int64 v198; // x3
  __int64 v199; // x4
  Il2CppObject *v200; // x0
  System_String_o *v201; // x21
  __int64 v202; // x2
  __int64 v203; // x3
  __int64 v204; // x4
  Il2CppObject *v205; // x0
  System_String_o *v206; // x0
  int32_t v207; // w21
  __int64 v208; // x2
  __int64 v209; // x3
  __int64 v210; // x4
  Il2CppObject *v211; // x0
  System_String_o *v212; // x0
  UnityEngine_GUIStyle_o *v213; // x20
  System_String_o *v214; // x21
  float v215; // s10
  float v216; // s9
  int32_t v217; // w0
  MotionInfo_c *v218; // x8
  float v219; // s11
  struct MotionInfo_StaticFields *v220; // x8
  struct UnityEngine_Vector2_o v221; // kr00_8
  MotionInfo_c *v222; // x8
  MotionInfo___c_c *v223; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v226; // x22
  struct MotionInfo___c_StaticFields *v227; // x0
  int32_t v228; // w2
  const MethodInfo *v229; // x3
  __int64 v230; // x8
  char *v231; // x20
  __int64 v232; // x9
  int *v233; // x10
  __int64 v234; // x0
  __int64 v235; // x1
  __int64 v236; // x20
  int i; // w25
  __int64 v238; // x8
  __int64 v239; // x9
  int *v240; // x10
  __int64 v241; // x0
  __int64 v242; // x8
  __int64 v243; // x9
  int *v244; // x10
  __int64 v245; // x0
  __int64 v246; // x22
  __int64 v247; // x0
  __int64 v248; // x1
  int32_t v249; // w2
  const MethodInfo *v250; // x3
  __int64 v251; // x21
  int32_t v252; // w1
  float v253; // s0
  System_String_o *v254; // x0
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  __int64 v257; // x0
  __int64 v258; // x1
  int32_t v259; // w2
  const MethodInfo *v260; // x3
  int32_t v261; // w1
  __int64 v262; // x0
  __int64 v263; // x1
  int32_t v264; // w2
  const MethodInfo *v265; // x3
  __int64 v266; // x0
  __int64 v267; // x1
  int32_t v268; // w2
  const MethodInfo *v269; // x3
  int32_t v270; // w1
  System_String_o *v271; // x21
  __int64 v272; // x8
  __int64 v273; // x9
  int *v274; // x10
  __int64 v275; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v277; // [xsp+18h] [xbp-B8h]
  int v278; // [xsp+1Ch] [xbp-B4h] BYREF
  int v279; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v281; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v283; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v284; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v285; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v286; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v287; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v288; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v289; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v290; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v291; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v292; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v293; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v294; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v295; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_49BA34F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Linq_Enumerable_SelectMany_List_string___string___, method);
    sub_1B4CF90(&System_Func_List_string___IEnumerable_string___TypeInfo, v4);
    sub_1B4CF90(&UnityEngine_GUIStyle_TypeInfo, v5);
    sub_1B4CF90(&UnityEngine_GUI_TypeInfo, v6);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerable_string__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_string__TypeInfo, v9);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B4CF90(&int_TypeInfo, v11);
    sub_1B4CF90(&System_Math_TypeInfo, v12);
    sub_1B4CF90(&MotionInfo_TypeInfo, v13);
    sub_1B4CF90(&float_TypeInfo, v14);
    sub_1B4CF90(&string___TypeInfo, v15);
    sub_1B4CF90(&Method_MotionInfo___c__OnGUI_b__46_0__, v16);
    sub_1B4CF90(&MotionInfo___c_TypeInfo, v17);
    sub_1B4CF90(&StringLiteral_1737/*"<size={0}>+</size>"*/, v18);
    sub_1B4CF90(&StringLiteral_1744/*"<size={fontSize}>ログ消去</size>"*/, v19);
    sub_1B4CF90(&StringLiteral_24979/*"【モーションID】"*/, v20);
    sub_1B4CF90(&StringLiteral_24978/*"【ボイス・SE】"*/, v21);
    sub_1B4CF90(&StringLiteral_1741/*"<size={0}>▲</size>"*/, v22);
    sub_1B4CF90(&StringLiteral_15074/*"VoiceID : "*/, v23);
    sub_1B4CF90(&StringLiteral_24980/*"【名前】"*/, v24);
    sub_1B4CF90(&StringLiteral_333/*" 確率 / 合計 : "*/, v25);
    sub_1B4CF90(&StringLiteral_1736/*"<size="*/, v26);
    sub_1B4CF90(&StringLiteral_24977/*"【カード属性】"*/, v27);
    sub_1B4CF90(&StringLiteral_1142/*"0.00"*/, v28);
    sub_1B4CF90(&StringLiteral_1743/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v29);
    sub_1B4CF90(&StringLiteral_162/*" / "*/, v30);
    sub_1B4CF90(&StringLiteral_195/*" SEID : "*/, v31);
    sub_1B4CF90(&StringLiteral_24959/*"▶ ログ非表示"*/, v32);
    sub_1B4CF90(&StringLiteral_1742/*"<size={0}>▼</size>"*/, v33);
    sub_1B4CF90(&StringLiteral_1739/*"<size={0}>{1}/{2}</size>"*/, v34);
    sub_1B4CF90(&StringLiteral_1740/*"<size={0}>{1}</size>"*/, v35);
    sub_1B4CF90(&StringLiteral_1/*""*/, v36);
    sub_1B4CF90(&StringLiteral_332/*" 分類 : "*/, v37);
    sub_1B4CF90(&StringLiteral_1540/*"</size>"*/, v38);
    sub_1B4CF90(&StringLiteral_1762/*">"*/, v39);
    sub_1B4CF90(&StringLiteral_12438/*"ServantID : "*/, v40);
    sub_1B4CF90(&StringLiteral_24960/*"◀ ログ表示　"*/, v41);
    sub_1B4CF90(&StringLiteral_1738/*"<size={0}>-</size>"*/, v42);
    byte_49BA34F = 1;
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
  if ( !byte_49BA3B2 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA3B2 = 1;
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
    if ( !byte_49BA3B3 )
    {
      sub_1B4CF90(&MotionInfo_TypeInfo, method);
      byte_49BA3B3 = 1;
    }
    v51 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v51 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v51->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v54 = System_String__Concat_61131716(
            (System_String_o *)StringLiteral_12438/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v49 = MotionInfo_TypeInfo;
    v50 = v54;
  }
  if ( !v49->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v49);
  if ( !byte_49BA3B2 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA3B2 = 1;
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
    v57 = (System_String_o **)&StringLiteral_195/*" SEID : "*/;
  else
    v57 = (System_String_o **)&StringLiteral_15074/*"VoiceID : "*/;
  v58 = *v57;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v55);
  if ( !byte_49BA3B4 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA3B4 = 1;
  }
  v59 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v59 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v59->static_fields->_VoiceId_k__BackingField;
  v61 = System_Environment__get_NewLine(0LL);
  v62 = System_String__Concat_61133720(v50, v58, VoiceId_k__BackingField, v61, 0LL);
  normal = (char *)sub_1B4D038(string___TypeInfo, 8LL);
  if ( !normal )
    goto LABEL_203;
  v65 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v62;
  sub_1B4CF34((CGThumbnailListItem_o *)(normal + 32), (int32_t)v62, v63, v64);
  if ( *((_DWORD *)v65 + 6) <= 1u )
    goto LABEL_196;
  v68 = StringLiteral_333/*" 確率 / 合計 : "*/;
  *((_QWORD *)v65 + 5) = StringLiteral_333/*" 確率 / 合計 : "*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 40), v68, v66, v67);
  if ( !byte_49BA3B5 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v69);
    byte_49BA3B5 = 1;
  }
  v70 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v70 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v70->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_62693840(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1142/*"0.00"*/);
  if ( *((_DWORD *)v65 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v65 + 6) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 48), (int32_t)normal, v71, v72);
  if ( *((_DWORD *)v65 + 6) <= 3u )
    goto LABEL_196;
  v75 = StringLiteral_162/*" / "*/;
  *((_QWORD *)v65 + 7) = StringLiteral_162/*" / "*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 56), v75, v73, v74);
  if ( !byte_49BA3B6 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v76);
    byte_49BA3B6 = 1;
  }
  v77 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v77 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v77->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_62693840(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1142/*"0.00"*/);
  if ( *((_DWORD *)v65 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v65 + 8) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 64), (int32_t)normal, v78, v79);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v65 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v65 + 9) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 72), (int32_t)normal, v80, v81);
  if ( *((_DWORD *)v65 + 6) <= 6u )
    goto LABEL_196;
  v84 = StringLiteral_332/*" 分類 : "*/;
  *((_QWORD *)v65 + 10) = StringLiteral_332/*" 分類 : "*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 80), v84, v82, v83);
  if ( !byte_49BA3B7 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v46);
    byte_49BA3B7 = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v65 + 6) <= 7u )
    goto LABEL_196;
  v87 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v65 + 11) = v87;
  sub_1B4CF34((CGThumbnailListItem_o *)(v65 + 88), v87, v85, v86);
  v88 = System_String__Concat_61133984((System_String_array *)v65, 0LL);
  v89 = sub_1B4D038(string___TypeInfo, 21LL);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( !v89 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v89 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v89 + 32) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 32), (int32_t)normal, v90, v91);
  if ( *(_DWORD *)(v89 + 24) <= 1u )
    goto LABEL_196;
  v94 = StringLiteral_24980/*"【名前】"*/;
  *(_QWORD *)(v89 + 40) = StringLiteral_24980/*"【名前】"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 40), v94, v92, v93);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 48) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 48), (int32_t)normal, v95, v96);
  if ( *(_DWORD *)(v89 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v89 + 56) = static_fields->svtName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 56), (int32_t)svtName, v97, v98);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 64) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 64), (int32_t)normal, v101, v102);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 72) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 72), (int32_t)normal, v103, v104);
  if ( *(_DWORD *)(v89 + 24) <= 6u )
    goto LABEL_196;
  v107 = StringLiteral_24979/*"【モーションID】"*/;
  *(_QWORD *)(v89 + 80) = StringLiteral_24979/*"【モーションID】"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 80), v107, v105, v106);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 88) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 88), (int32_t)normal, v108, v109);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0LL);
  if ( *(_DWORD *)(v89 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 96) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 96), (int32_t)normal, v110, v111);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 104) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 104), (int32_t)normal, v112, v113);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v89 + 112) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 112), (int32_t)normal, v114, v115);
  if ( *(_DWORD *)(v89 + 24) <= 0xBu )
    goto LABEL_196;
  v118 = StringLiteral_24977/*"【カード属性】"*/;
  *(_QWORD *)(v89 + 120) = StringLiteral_24977/*"【カード属性】"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 120), v118, v116, v117);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v89 + 128) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 128), (int32_t)normal, v119, v120);
  if ( *(_DWORD *)(v89 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v89 + 136) = TypeName;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 136), (int32_t)TypeName, v121, v122);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v89 + 144) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 144), (int32_t)normal, v123, v124);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v89 + 152) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 152), (int32_t)normal, v125, v126);
  if ( *(_DWORD *)(v89 + 24) <= 0x10u )
    goto LABEL_196;
  v129 = StringLiteral_24978/*"【ボイス・SE】"*/;
  *(_QWORD *)(v89 + 160) = StringLiteral_24978/*"【ボイス・SE】"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 160), v129, v127, v128);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v89 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v89 + 168) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 168), (int32_t)normal, v130, v131);
  if ( *(_DWORD *)(v89 + 24) <= 0x12u
    || (*(_QWORD *)(v89 + 176) = v88,
        sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 176), (int32_t)v88, v132, v133),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v89 + 24) <= 0x13u)
    || (*(_QWORD *)(v89 + 184) = normal,
        sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 184), (int32_t)normal, v134, v135),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v89 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1B4D1F4(normal, v46);
  }
  *(_QWORD *)(v89 + 192) = normal;
  sub_1B4CF34((CGThumbnailListItem_o *)(v89 + 192), (int32_t)normal, v136, v137);
  v138 = (Il2CppObject *)System_String__Concat_61133984((System_String_array *)v89, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v140 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v140 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0LL);
    *p_labelStyle = none;
    sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.labelStyle, (int32_t)none, v143, v144);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0LL);
    if ( !normal )
      goto LABEL_203;
    v283.fields.r = 1.0;
    v283.fields.g = 1.0;
    v283.fields.b = 1.0;
    v283.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v283, 0LL);
  }
  v145 = (float)height * 0.25;
  v146 = v140 * 40.0;
  v147 = v140 * 250.0;
  v148 = 3;
  v149 = (float)UnityEngine_Screen__get_width(0LL) - v147;
  do
  {
    width = v147;
    if ( this->fields.isLogAreaShow )
      v151 = 0.0;
    else
      v151 = v149;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0LL);
    v152 = UnityEngine_Screen__get_height(0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v284.fields.m_Height = (float)v152;
    v284.fields.m_YMin = 0.0;
    v284.fields.m_XMin = v151;
    v284.fields.m_Width = width;
    UnityEngine_GUI__Box(v284, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    --v148;
  }
  while ( v148 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0LL);
  v281 = *((float *)&format.monitor + 1);
  v156 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v281, v153, v154, v155);
  v157 = System_String__Format_61134760((System_String_o *)StringLiteral_1740/*"<size={0}>{1}</size>"*/, v156, v138, 0LL);
  v158 = *p_labelStyle;
  v159 = v157;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v285.fields.m_YMin = 0.0;
  v285.fields.m_XMin = v149;
  v285.fields.m_Width = v147;
  v285.fields.m_Height = v145 + v145;
  UnityEngine_GUI__Label_68929964(v285, v159, v158, 0LL);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v164 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v161, v162, v163);
  if ( this->fields.isLogAreaShow )
    v165 = (Il2CppObject **)&StringLiteral_24959/*"▶ ログ非表示"*/;
  else
    v165 = (Il2CppObject **)&StringLiteral_24960/*"◀ ログ表示　"*/;
  v166 = System_String__Format_61134760((System_String_o *)StringLiteral_1740/*"<size={0}>{1}</size>"*/, v164, *v165, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v286.fields.m_XMin = v149;
  v286.fields.m_YMin = (float)((float)(v145 + v145) + 10.0) + 0.0;
  v286.fields.m_Width = v147 * 0.5;
  v286.fields.m_Height = v146;
  v167 = UnityEngine_GUI__Button(v286, v166, 0LL);
  v168 = isLogAreaShow;
  if ( v167 )
    v168 = !this->fields.isLogAreaShow;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v287.fields.m_XMin = (float)(v147 * 0.5) + v149;
  v287.fields.m_YMin = (float)((float)(v145 + v145) + 10.0) + 0.0;
  v287.fields.m_Width = v147 * 0.5;
  v287.fields.m_Height = v146;
  if ( UnityEngine_GUI__Button(v287, (System_String_o *)StringLiteral_1744/*"<size={fontSize}>ログ消去</size>"*/, 0LL) )
  {
    v172 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v172);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v168;
    return;
  }
  v173 = v146 + 10.0;
  v277 = v168;
  v281 = *((float *)&format.monitor + 1);
  v174 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v281, v169, v170, v171);
  v175 = System_String__Format((System_String_o *)StringLiteral_1741/*"<size={0}>▲</size>"*/, v174, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v288.fields.m_XMin = v149;
  v288.fields.m_YMin = (float)((float)((float)(v145 + v145) + 10.0) + 0.0) + (float)(v146 + 10.0);
  v288.fields.m_Width = v146;
  v288.fields.m_Height = v146;
  if ( UnityEngine_GUI__RepeatButton(v288, v175, 0LL) )
  {
    v179 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v179 = MotionInfo_TypeInfo;
    }
    v179->static_fields->scrollPosition.fields.y = v179->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v281 = *((float *)&format.monitor + 1);
  v180 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v281, v176, v177, v178);
  v181 = System_String__Format((System_String_o *)StringLiteral_1742/*"<size={0}>▼</size>"*/, v180, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v289.fields.m_XMin = v146 + v149;
  v289.fields.m_YMin = (float)((float)((float)(v145 + v145) + 10.0) + 0.0) + (float)(v146 + 10.0);
  v289.fields.m_Width = v146;
  v289.fields.m_Height = v146;
  if ( UnityEngine_GUI__RepeatButton(v289, v181, 0LL) )
  {
    v185 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v185 = MotionInfo_TypeInfo;
    }
    v185->static_fields->scrollPosition.fields.y = v185->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v281 = *((float *)&format.monitor + 1);
  v186 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v281, v182, v183, v184);
  v187 = System_String__Format((System_String_o *)StringLiteral_1738/*"<size={0}>-</size>"*/, v186, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v290.fields.m_XMin = v146 + (float)(v146 + v149);
  v290.fields.m_YMin = (float)((float)((float)(v145 + v145) + 10.0) + 0.0) + (float)(v146 + 10.0);
  v290.fields.m_Width = v146;
  v290.fields.m_Height = v146;
  if ( UnityEngine_GUI__Button(v290, v187, 0LL) )
  {
    v191 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v191;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_62621788(v191, 1, 0LL);
  }
  v281 = *((float *)&format.monitor + 1) * 0.9;
  v192 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v281, v188, v189, v190);
  monitor_high = this->fields.scrollSpeed;
  v196 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v193, v194, v195);
  v279 = 10;
  v200 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v279, v197, v198, v199);
  v201 = System_String__Format_61134828((System_String_o *)StringLiteral_1739/*"<size={0}>{1}/{2}</size>"*/, v192, v196, v200, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v291.fields.m_XMin = v146 + (float)(v146 + (float)(v146 + v149));
  v291.fields.m_YMin = (float)((float)((float)(v145 + v145) + 10.0) + 0.0) + (float)(v146 + 10.0);
  v291.fields.m_Width = v146 + 10.0;
  v291.fields.m_Height = v146;
  UnityEngine_GUI__Box(v291, v201, 0LL);
  v278 = HIDWORD(format.monitor);
  v205 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v278, v202, v203, v204);
  v206 = System_String__Format((System_String_o *)StringLiteral_1737/*"<size={0}>+</size>"*/, v205, 0LL);
  v292.fields.m_XMin = v173 + (float)(v146 + (float)(v146 + (float)(v146 + v149)));
  v292.fields.m_YMin = (float)((float)((float)(v145 + v145) + 10.0) + 0.0) + (float)(v146 + 10.0);
  v292.fields.m_Width = v146;
  v292.fields.m_Height = v146;
  if ( UnityEngine_GUI__Button(v292, v206, 0LL) )
  {
    v207 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v207;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_62622116(v207, 10, 0LL);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0LL);
  v281 = *((float *)&format.monitor + 1);
  v211 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v281, v208, v209, v210);
  v212 = System_String__Format((System_String_o *)StringLiteral_1743/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v211, 0LL);
  v213 = *p_labelStyle;
  v214 = v212;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v293.fields.m_Height = 40.0;
  v293.fields.m_XMin = v149;
  v293.fields.m_YMin = v173 + (float)((float)((float)((float)(v145 + v145) + 10.0) + 0.0) + (float)(v146 + 10.0));
  v293.fields.m_Width = v147;
  UnityEngine_GUI__Label_68929964(v293, v214, v213, 0LL);
  v215 = (float)((float)UnityEngine_Screen__get_width(0LL) - v147) + -10.0;
  v216 = *((float *)&format.monitor + 1) + 10.0;
  v217 = UnityEngine_Screen__get_height(0LL);
  v218 = MotionInfo_TypeInfo;
  v219 = (float)v217;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v218 = MotionInfo_TypeInfo;
  }
  v220 = v218->static_fields;
  v294.fields.m_YMin = 0.0;
  v294.fields.m_Width = v215;
  v294.fields.m_Height = v219;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  viewRect.fields.m_Width = v215 + -20.0;
  viewRect.fields.m_Height = v216 * (float)v220->voicePlayLogLineSize;
  v294.fields.m_XMin = 0.0;
  v221 = UnityEngine_GUI__BeginScrollView(v294, v220->scrollPosition, viewRect, 0LL);
  v222 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v221;
  v223 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v222->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v223 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v223->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v223->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v223);
      v223 = MotionInfo___c_TypeInfo;
    }
    v226 = (Il2CppObject *)v223->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1B4D1DC(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v226, Method_MotionInfo___c__OnGUI_b__46_0__, 0LL);
    v227 = MotionInfo___c_TypeInfo->static_fields;
    v227->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1B4CF34((CGThumbnailListItem_o *)&v227->__9__46_0, (int32_t)_9__46_0, v228, v229);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_2F3673C *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1B4D1EC(normal, v46);
  v230 = *(_QWORD *)normal;
  v231 = normal;
  v232 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v233 = (int *)(*(_QWORD *)(v230 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v233 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v232;
      v233 += 4;
      if ( !v232 )
        goto LABEL_159;
    }
    v234 = v230 + 16LL * *v233 + 312;
  }
  else
  {
LABEL_159:
    v234 = sub_1B9D724(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v236 = (*(__int64 (__fastcall **)(char *, _QWORD))v234)(v231, *(_QWORD *)(v234 + 8));
  if ( !v236 )
    sub_1B4D1EC(0LL, v235);
  for ( i = 0; ; ++i )
  {
    v238 = *(_QWORD *)v236;
    v239 = *(unsigned __int16 *)(*(_QWORD *)v236 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v236 + 302LL) )
    {
      v240 = (int *)(*(_QWORD *)(v238 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v240 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v239;
        v240 += 4;
        if ( !v239 )
          goto LABEL_168;
      }
      v241 = v238 + 16LL * *v240 + 312;
    }
    else
    {
LABEL_168:
      v241 = sub_1B9D724(v236, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v241)(v236, *(_QWORD *)(v241 + 8)) & 1) == 0 )
      break;
    v242 = *(_QWORD *)v236;
    v243 = *(unsigned __int16 *)(*(_QWORD *)v236 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v236 + 302LL) )
    {
      v244 = (int *)(*(_QWORD *)(v242 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v244 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v243;
        v244 += 4;
        if ( !v243 )
          goto LABEL_175;
      }
      v245 = v242 + 16LL * *v244 + 312;
    }
    else
    {
LABEL_175:
      v245 = sub_1B9D724(v236, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v246 = (*(__int64 (__fastcall **)(__int64, _QWORD))v245)(v236, *(_QWORD *)(v245 + 8));
    v247 = sub_1B4D038(string___TypeInfo, 5LL);
    v251 = v247;
    if ( !v247 )
      sub_1B4D1EC(0LL, v248);
    if ( !*(_DWORD *)(v247 + 24) )
      sub_1B4D1F4(v247, v248);
    v252 = StringLiteral_1736/*"<size="*/;
    *(_QWORD *)(v247 + 32) = StringLiteral_1736/*"<size="*/;
    sub_1B4CF34((CGThumbnailListItem_o *)(v247 + 32), v252, v249, v250);
    v254 = System_Single__ToString(v253, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v251 + 24) <= 1u )
      sub_1B4D1F4(v254, v254);
    *(_QWORD *)(v251 + 40) = v254;
    sub_1B4CF34((CGThumbnailListItem_o *)(v251 + 40), (int32_t)v254, v255, v256);
    if ( *(_DWORD *)(v251 + 24) <= 2u )
      sub_1B4D1F4(v257, v258);
    v261 = StringLiteral_1762/*">"*/;
    *(_QWORD *)(v251 + 48) = StringLiteral_1762/*">"*/;
    sub_1B4CF34((CGThumbnailListItem_o *)(v251 + 48), v261, v259, v260);
    if ( *(_DWORD *)(v251 + 24) <= 3u )
      sub_1B4D1F4(v262, v263);
    *(_QWORD *)(v251 + 56) = v246;
    sub_1B4CF34((CGThumbnailListItem_o *)(v251 + 56), v246, v264, v265);
    if ( *(_DWORD *)(v251 + 24) <= 4u )
      sub_1B4D1F4(v266, v267);
    v270 = StringLiteral_1540/*"</size>"*/;
    *(_QWORD *)(v251 + 64) = StringLiteral_1540/*"</size>"*/;
    sub_1B4CF34((CGThumbnailListItem_o *)(v251 + 64), v270, v268, v269);
    v271 = System_String__Concat_61133984((System_String_array *)v251, 0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v295.fields.m_YMin = v216 * (float)i;
    v295.fields.m_XMin = 0.0;
    v295.fields.m_Width = v215 + -20.0;
    v295.fields.m_Height = v216;
    UnityEngine_GUI__Label(v295, v271, 0LL);
  }
  v272 = *(_QWORD *)v236;
  v273 = *(unsigned __int16 *)(*(_QWORD *)v236 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v236 + 302LL) )
  {
    v274 = (int *)(*(_QWORD *)(v272 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v274 - 1) != System_IDisposable_TypeInfo )
    {
      --v273;
      v274 += 4;
      if ( !v273 )
        goto LABEL_190;
    }
    v275 = v272 + 16LL * *v274 + 312;
  }
  else
  {
LABEL_190:
    v275 = sub_1B9D724(v236, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v275)(v236, *(_QWORD *)(v275 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
  this->fields.isLogAreaShow = v277;
}


void __fastcall MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  struct System_String_o *v5; // x20
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_String_o *v11; // x20
  MotionInfo_c *v12; // x0
  struct MotionInfo_StaticFields *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  MotionInfo_c *v17; // x0
  struct System_String_o *v18; // x20
  struct MotionInfo_StaticFields *v19; // x0
  __int64 v20; // x1
  MotionInfo_c *v21; // x0

  if ( (byte_49BA351 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_1/*""*/, v4);
    byte_49BA351 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v5 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_49BA3B8 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA3B8 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v5;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)v5, v2, v3);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_49BA3B9 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v8);
    byte_49BA3B9 = 1;
  }
  v12 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v12 = MotionInfo_TypeInfo;
  }
  v13 = v12->static_fields;
  v13->_VoiceId_k__BackingField = v11;
  sub_1B4CF34((CGThumbnailListItem_o *)&v13->_VoiceId_k__BackingField, (int32_t)v11, v9, v10);
  if ( !byte_49BA3BA )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v14);
    byte_49BA3BA = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_49BA3BB )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_49BA3BB = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v18 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_49BA3BC )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_49BA3BC = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = v18;
  sub_1B4CF34((CGThumbnailListItem_o *)&v19->_VoiceType_k__BackingField, (int32_t)v18, v15, v16);
  if ( !byte_49BA3BD )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v20);
    byte_49BA3BD = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_49BA3BE )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v20);
    v21 = MotionInfo_TypeInfo;
    byte_49BA3BE = 1;
  }
  if ( !v21->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v21);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_49BA357 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA357 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_49BA3BF )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA3BF = 1;
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

  if ( (byte_49BA356 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string___Clear__, v1);
    sub_1B4CF90(&MotionInfo_TypeInfo, v2);
    byte_49BA356 = 1;
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
    sub_1B4D1EC(v3, v1);
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
  const MethodInfo *v3; // x3
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_49BA34E & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, svtName);
    byte_49BA34E = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1B4CF34((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)svtName, (int32_t)method, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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

  if ( (byte_49BA355 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__get_Count__, v2);
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string___get_Count__, v3);
    sub_1B4CF90(&Method_System_Collections_Generic_List_List_string___get_Item__, v4);
    sub_1B4CF90(&MotionInfo_TypeInfo, v5);
    byte_49BA355 = 1;
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
                  (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_24:
    sub_1B4D1EC(Item, v1);
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
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_List_string___get_Item__);
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
      (const MethodInfo_35819B0 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
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

  if ( (byte_49BA34A & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA34A = 1;
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

  if ( (byte_49BA34C & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA34C = 1;
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

  if ( (byte_49BA344 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA344 = 1;
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

  if ( (byte_49BA348 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA348 = 1;
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

  if ( (byte_49BA33E & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA33E = 1;
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

  if ( (byte_49BA342 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA342 = 1;
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

  if ( (byte_49BA346 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA346 = 1;
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

  if ( (byte_49BA340 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v1);
    byte_49BA340 = 1;
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

  if ( (byte_49BA34B & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA34B = 1;
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

  if ( (byte_49BA34D & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA34D = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_49BA345 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA345 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_49BA349 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA349 = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_49BA33F & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA33F = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_49BA343 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v2);
    byte_49BA343 = 1;
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_49BA347 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, method);
    byte_49BA347 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_49BA341 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo_TypeInfo, v2);
    byte_49BA341 = 1;
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BA359 & 1) == 0 )
  {
    sub_1B4CF90(&MotionInfo___c_TypeInfo, v1);
    byte_49BA359 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(MotionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v2;
  sub_1B4CF34((CGThumbnailListItem_o *)MotionInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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