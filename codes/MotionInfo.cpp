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

  if ( (byte_4B1B9B9 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string____ctor__, v1);
    sub_1BCAFF8(&System_Collections_Generic_List_List_string___TypeInfo, v4);
    sub_1BCAFF8(&MotionInfo_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v6);
    byte_4B1B9B9 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)StringLiteral_1/*""*/, v2, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4B1608A )
  {
    sub_1BCAFF8(&UnityEngine_Vector2_TypeInfo, v7);
    byte_4B1608A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_List_string____ctor__);
  v10 = MotionInfo_TypeInfo->static_fields;
  v10->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v9;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v10->voicePlaybackLogList, (int32_t)v9, v11, v12);
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

  if ( (byte_4B1B9B3 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_11407/*"SE"*/, v5);
    byte_4B1B9B3 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B1BA31 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1BA31 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4B1BA32 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_4B1BA32 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4B1BA30 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_4B1BA30 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4B1BA34 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v8);
    byte_4B1BA34 = 1;
  }
  v11 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4B1BA35 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4B1BA35 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4B1BA36 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4B1BA36 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsRandom_k__BackingField = 0;
  v12 = StringLiteral_11407/*"SE"*/;
  if ( !byte_4B1BA33 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4B1BA33 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v13 = v11->static_fields;
  v13->_VoiceType_k__BackingField = (struct System_String_o *)v12;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->_VoiceType_k__BackingField, v12, v9, v10);
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
  __int64 v51; // x2
  const MethodInfo *v52; // x3
  char *v53; // x20
  int32_t v54; // w1
  __int64 v55; // x1
  MotionInfo_c *v56; // x0
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x3
  int32_t v59; // w1
  __int64 v60; // x1
  MotionInfo_c *v61; // x0
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  struct System_Object_array *v66; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass *v69; // x1
  Il2CppClass **v70; // x0
  __int64 v71; // x1
  MotionInfo_c *v72; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass *v80; // x1
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  __int64 v87; // x8
  const MethodInfo *v88; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B1B9B4 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string___Add__, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1BCAFF8(&MotionInfo_TypeInfo, v5);
    sub_1BCAFF8(&string___TypeInfo, v6);
    sub_1BCAFF8(&StringLiteral_331/*" 確率 / 合計 : "*/, v7);
    sub_1BCAFF8(&StringLiteral_200/*" VoiceID : "*/, v8);
    sub_1BCAFF8(&StringLiteral_1117/*"0.00"*/, v9);
    sub_1BCAFF8(&StringLiteral_160/*" / "*/, v10);
    sub_1BCAFF8(&StringLiteral_871/*"--- Voice・SE Log ---"*/, v11);
    sub_1BCAFF8(&StringLiteral_193/*" SEID : "*/, v12);
    sub_1BCAFF8(&StringLiteral_330/*" 分類 : "*/, v13);
    sub_1BCAFF8(&StringLiteral_12619/*"ServantID : "*/, v14);
    byte_4B1B9B4 = 1;
  }
  LODWORD(format.klass) = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62450424((System_String_o *)StringLiteral_871/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
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
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v25[4] = v24;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B1BA29 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v26);
    byte_4B1BA29 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4B1BA2B )
      {
        sub_1BCAFF8(&MotionInfo_TypeInfo, v26);
        byte_4B1BA2B = 1;
      }
      v27 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v27 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v27->static_fields->_VoiceId_k__BackingField;
      v29 = System_Environment__get_NewLine(0LL);
      v30 = (System_String_o *)StringLiteral_193/*" SEID : "*/;
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
  if ( !byte_4B1BA2A )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v26);
    byte_4B1BA2A = 1;
  }
  v32 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v32 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v32->static_fields->_VoiceServantId_k__BackingField;
  v34 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62488672(
                                   (System_String_o *)StringLiteral_12619/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v34,
                                   0LL);
  v37 = v15->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v37 )
LABEL_74:
    sub_1BCB254(voicePlaybackLogList, v18);
  v39 = v15->fields._size;
  v40 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v37->obj.klass + v39;
    v15->fields._size = v39 + 1;
    v41[4] = v40;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
  }
  if ( !byte_4B1BA2B )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v42);
    byte_4B1BA2B = 1;
  }
  v43 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v43 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v43->static_fields->_VoiceId_k__BackingField;
  v29 = System_Environment__get_NewLine(0LL);
  v30 = (System_String_o *)StringLiteral_200/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_62488672(v30, VoiceId_k__BackingField, v29, 0LL);
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
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v46->obj.klass + v48;
    v15->fields._size = v48 + 1;
    v50[4] = v49;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
  }
  voicePlaybackLogList = (char *)sub_1BCB0A0(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v53 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v54 = StringLiteral_331/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_331/*" 確率 / 合計 : "*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(voicePlaybackLogList + 32), v54, v51, v52);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B1BA2C )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v55);
    byte_4B1BA2C = 1;
  }
  v56 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v56 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v56->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_64044500(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1117/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v53 + 5) = voicePlaybackLogList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 40), (int32_t)voicePlaybackLogList, v51, v57);
  if ( *((_DWORD *)v53 + 6) <= 2u )
    goto LABEL_75;
  v59 = StringLiteral_160/*" / "*/;
  *((_QWORD *)v53 + 6) = StringLiteral_160/*" / "*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 48), v59, v51, v58);
  if ( !byte_4B1BA2D )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v60);
    byte_4B1BA2D = 1;
  }
  v61 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v61 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v61->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_64044500(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1117/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 3u
    || (*((_QWORD *)v53 + 7) = voicePlaybackLogList,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 56), (int32_t)voicePlaybackLogList, v51, v62),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v53 + 6) <= 4u) )
  {
LABEL_75:
    sub_1BCB25C(voicePlaybackLogList, v18, v51);
  }
  *((_QWORD *)v53 + 8) = voicePlaybackLogList;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v53 + 64), (int32_t)voicePlaybackLogList, v51, v63);
  voicePlaybackLogList = (char *)System_String__Concat_62490940((System_String_array *)v53, 0LL);
  v66 = v15->fields._items;
  v67 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v66 )
    goto LABEL_74;
  v68 = v15->fields._size;
  v69 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v68 >= v66->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &v66->obj.klass + v68;
    v15->fields._size = v68 + 1;
    v70[4] = v69;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v69, v64, v65);
  }
  if ( !byte_4B1BA2E )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v71);
    byte_4B1BA2E = 1;
  }
  v72 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v72 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v72->static_fields->_VoiceType_k__BackingField;
  v74 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62488672(
                                   (System_String_o *)StringLiteral_330/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v74,
                                   0LL);
  v77 = v15->fields._items;
  v78 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v77 )
    goto LABEL_74;
  v79 = v15->fields._size;
  v80 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v79 >= v77->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v77->obj.klass + v79;
    v15->fields._size = v79 + 1;
    v81[4] = v80;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v80, v75, v76);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v84 = *((_QWORD *)voicePlaybackLogList + 2);
  v85 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v84 )
    goto LABEL_74;
  v86 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v86 >= *(_DWORD *)(v84 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v15,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = v84 + 8 * v86;
    *((_DWORD *)voicePlaybackLogList + 6) = v86 + 1;
    *(_QWORD *)(v87 + 32) = v15;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v87 + 32), (int32_t)v15, v82, v83);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v88);
}


void __fastcall MotionInfo__AddVoiceLog_40163104(System_String_o *str, const MethodInfo *method)
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

  if ( (byte_4B1B9B5 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string___Add__, method);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BCAFF8(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BCAFF8(&MotionInfo_TypeInfo, v6);
    byte_4B1B9B5 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCB244(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36B939C *)Method_System_Collections_Generic_List_string___ctor__);
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
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)str, v10, v11);
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
    sub_1BCB254(voicePlaybackLogList, v9);
  }
  v21 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v7,
      *(const MethodInfo_36B9BD0 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    voicePlaybackLogList->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v7;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v7, v16, v17);
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
  if ( (byte_4B1B9B1 & 1) == 0 )
  {
    sub_1BCAFF8(&BattleCommand_TypeInfo, *(_QWORD *)&type);
    sub_1BCAFF8(&StringLiteral_25208/*"バスター"*/, v4);
    sub_1BCAFF8(&StringLiteral_25187/*"クイック"*/, v5);
    sub_1BCAFF8(&StringLiteral_25176/*"アーツ"*/, v6);
    sub_1BCAFF8(&StringLiteral_25180/*"エクストラ"*/, v7);
    byte_4B1B9B1 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v8 = &StringLiteral_25176/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v8 = &StringLiteral_25208/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v8 = &StringLiteral_25187/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v8 = &StringLiteral_25180/*"エクストラ"*/;
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
  __int64 v63; // x2
  const MethodInfo *v64; // x3
  char *v65; // x21
  const MethodInfo *v66; // x3
  int32_t v67; // w1
  __int64 v68; // x1
  MotionInfo_c *v69; // x0
  const MethodInfo *v70; // x3
  const MethodInfo *v71; // x3
  int32_t v72; // w1
  __int64 v73; // x1
  MotionInfo_c *v74; // x0
  const MethodInfo *v75; // x3
  const MethodInfo *v76; // x3
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  const MethodInfo *v79; // x3
  __int64 v80; // x1
  System_String_o *v81; // x22
  __int64 v82; // x21
  const MethodInfo *v83; // x3
  const MethodInfo *v84; // x3
  int32_t v85; // w1
  const MethodInfo *v86; // x3
  const MethodInfo *v87; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  const MethodInfo *v90; // x3
  const MethodInfo *v91; // x3
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  const MethodInfo *v94; // x3
  const MethodInfo *v95; // x3
  const MethodInfo *v96; // x3
  const MethodInfo *v97; // x3
  const MethodInfo *v98; // x3
  int32_t v99; // w1
  const MethodInfo *v100; // x3
  const MethodInfo *v101; // x3
  const MethodInfo *v102; // x3
  const MethodInfo *v103; // x3
  const MethodInfo *v104; // x3
  int32_t v105; // w1
  const MethodInfo *v106; // x3
  const MethodInfo *v107; // x3
  const MethodInfo *v108; // x3
  const MethodInfo *v109; // x3
  Il2CppObject *v110; // x21
  int32_t height; // w22
  float v112; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  float v117; // s13
  float v118; // s10
  float v119; // s8
  int v120; // w25
  float v121; // s9
  float width; // s12
  float v123; // s11
  int32_t v124; // w22
  __int64 v125; // x2
  __int64 v126; // x3
  __int64 v127; // x4
  Il2CppObject *v128; // x0
  System_String_o *v129; // x0
  UnityEngine_GUIStyle_o *v130; // x21
  System_String_o *v131; // x22
  _BOOL4 isLogAreaShow; // w22
  __int64 v133; // x2
  __int64 v134; // x3
  __int64 v135; // x4
  Il2CppObject *v136; // x1
  Il2CppObject **v137; // x9
  System_String_o *v138; // x21
  __int64 v139; // x2
  __int64 v140; // x3
  __int64 v141; // x4
  bool v142; // w22
  Il2CppObject *v143; // x0
  System_String_o *v144; // x21
  __int64 v145; // x2
  __int64 v146; // x3
  __int64 v147; // x4
  MotionInfo_c *v148; // x0
  float v149; // s11
  Il2CppObject *v150; // x0
  System_String_o *v151; // x21
  __int64 v152; // x2
  __int64 v153; // x3
  __int64 v154; // x4
  MotionInfo_c *v155; // x0
  Il2CppObject *v156; // x0
  System_String_o *v157; // x21
  __int64 v158; // x2
  __int64 v159; // x3
  __int64 v160; // x4
  MotionInfo_c *v161; // x0
  Il2CppObject *v162; // x0
  System_String_o *v163; // x21
  __int64 v164; // x2
  __int64 v165; // x3
  __int64 v166; // x4
  int32_t v167; // w21
  Il2CppObject *v168; // x21
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  Il2CppObject *v172; // x22
  __int64 v173; // x2
  __int64 v174; // x3
  __int64 v175; // x4
  Il2CppObject *v176; // x0
  System_String_o *v177; // x21
  __int64 v178; // x2
  __int64 v179; // x3
  __int64 v180; // x4
  Il2CppObject *v181; // x0
  System_String_o *v182; // x0
  int32_t v183; // w21
  __int64 v184; // x2
  __int64 v185; // x3
  __int64 v186; // x4
  Il2CppObject *v187; // x0
  System_String_o *v188; // x0
  UnityEngine_GUIStyle_o *v189; // x20
  System_String_o *v190; // x21
  float v191; // s10
  float v192; // s9
  int32_t v193; // w0
  MotionInfo_c *v194; // x8
  float v195; // s11
  struct MotionInfo_StaticFields *v196; // x8
  struct UnityEngine_Vector2_o v197; // kr00_8
  MotionInfo_c *v198; // x8
  MotionInfo___c_c *v199; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v202; // x22
  struct MotionInfo___c_StaticFields *v203; // x0
  int32_t v204; // w2
  const MethodInfo *v205; // x3
  __int64 v206; // x8
  char *v207; // x20
  __int64 v208; // x9
  int *v209; // x10
  __int64 v210; // x0
  __int64 v211; // x1
  __int64 v212; // x20
  int i; // w25
  __int64 v214; // x8
  __int64 v215; // x9
  int *v216; // x10
  __int64 v217; // x0
  __int64 v218; // x8
  __int64 v219; // x9
  int *v220; // x10
  __int64 v221; // x0
  __int64 v222; // x22
  __int64 v223; // x0
  __int64 v224; // x1
  __int64 v225; // x2
  const MethodInfo *v226; // x3
  __int64 v227; // x21
  int32_t v228; // w1
  float v229; // s0
  System_String_o *v230; // x0
  __int64 v231; // x2
  const MethodInfo *v232; // x3
  __int64 v233; // x0
  __int64 v234; // x1
  __int64 v235; // x2
  const MethodInfo *v236; // x3
  int32_t v237; // w1
  __int64 v238; // x0
  __int64 v239; // x1
  __int64 v240; // x2
  const MethodInfo *v241; // x3
  __int64 v242; // x0
  __int64 v243; // x1
  __int64 v244; // x2
  const MethodInfo *v245; // x3
  int32_t v246; // w1
  System_String_o *v247; // x21
  __int64 v248; // x8
  __int64 v249; // x9
  int *v250; // x10
  __int64 v251; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v253; // [xsp+18h] [xbp-B8h]
  int v254; // [xsp+1Ch] [xbp-B4h] BYREF
  int v255; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v257; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v259; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v260; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v261; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v262; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v263; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v264; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v265; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v266; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v267; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v268; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v269; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v270; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v271; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B1B9B0 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Linq_Enumerable_SelectMany_List_string___string___, method);
    sub_1BCAFF8(&System_Func_List_string___IEnumerable_string___TypeInfo, v4);
    sub_1BCAFF8(&UnityEngine_GUIStyle_TypeInfo, v5);
    sub_1BCAFF8(&UnityEngine_GUI_TypeInfo, v6);
    sub_1BCAFF8(&System_IDisposable_TypeInfo, v7);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerable_string__TypeInfo, v8);
    sub_1BCAFF8(&System_Collections_Generic_IEnumerator_string__TypeInfo, v9);
    sub_1BCAFF8(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BCAFF8(&int_TypeInfo, v11);
    sub_1BCAFF8(&System_Math_TypeInfo, v12);
    sub_1BCAFF8(&MotionInfo_TypeInfo, v13);
    sub_1BCAFF8(&float_TypeInfo, v14);
    sub_1BCAFF8(&string___TypeInfo, v15);
    sub_1BCAFF8(&Method_MotionInfo___c__OnGUI_b__46_0__, v16);
    sub_1BCAFF8(&MotionInfo___c_TypeInfo, v17);
    sub_1BCAFF8(&StringLiteral_1716/*"<size={0}>+</size>"*/, v18);
    sub_1BCAFF8(&StringLiteral_25159/*"【モーションID】"*/, v19);
    sub_1BCAFF8(&StringLiteral_25158/*"【ボイス・SE】"*/, v20);
    sub_1BCAFF8(&StringLiteral_1720/*"<size={0}>▲</size>"*/, v21);
    sub_1BCAFF8(&StringLiteral_15240/*"VoiceID : "*/, v22);
    sub_1BCAFF8(&StringLiteral_25160/*"【名前】"*/, v23);
    sub_1BCAFF8(&StringLiteral_331/*" 確率 / 合計 : "*/, v24);
    sub_1BCAFF8(&StringLiteral_1723/*"<size={0}>ログ消去</size>"*/, v25);
    sub_1BCAFF8(&StringLiteral_1715/*"<size="*/, v26);
    sub_1BCAFF8(&StringLiteral_25157/*"【カード属性】"*/, v27);
    sub_1BCAFF8(&StringLiteral_1117/*"0.00"*/, v28);
    sub_1BCAFF8(&StringLiteral_1722/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v29);
    sub_1BCAFF8(&StringLiteral_160/*" / "*/, v30);
    sub_1BCAFF8(&StringLiteral_193/*" SEID : "*/, v31);
    sub_1BCAFF8(&StringLiteral_25137/*"▶ ログ非表示"*/, v32);
    sub_1BCAFF8(&StringLiteral_1721/*"<size={0}>▼</size>"*/, v33);
    sub_1BCAFF8(&StringLiteral_1718/*"<size={0}>{1}/{2}</size>"*/, v34);
    sub_1BCAFF8(&StringLiteral_1719/*"<size={0}>{1}</size>"*/, v35);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v36);
    sub_1BCAFF8(&StringLiteral_330/*" 分類 : "*/, v37);
    sub_1BCAFF8(&StringLiteral_1518/*"</size>"*/, v38);
    sub_1BCAFF8(&StringLiteral_1741/*">"*/, v39);
    sub_1BCAFF8(&StringLiteral_12619/*"ServantID : "*/, v40);
    sub_1BCAFF8(&StringLiteral_25138/*"◀ ログ表示　"*/, v41);
    sub_1BCAFF8(&StringLiteral_1717/*"<size={0}>-</size>"*/, v42);
    byte_4B1B9B0 = 1;
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
    v48 = 64LL;
    if ( commandType == -1 )
      v48 = 60LL;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)normal, *(_DWORD *)((char *)&actionData->klass + v48), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B1BA29 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1BA29 = 1;
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
    if ( !byte_4B1BA2A )
    {
      sub_1BCAFF8(&MotionInfo_TypeInfo, method);
      byte_4B1BA2A = 1;
    }
    v51 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v51 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v51->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v54 = System_String__Concat_62488672(
            (System_String_o *)StringLiteral_12619/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v49 = MotionInfo_TypeInfo;
    v50 = v54;
  }
  if ( !v49->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v49);
  if ( !byte_4B1BA29 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1BA29 = 1;
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
    v57 = (System_String_o **)&StringLiteral_193/*" SEID : "*/;
  else
    v57 = (System_String_o **)&StringLiteral_15240/*"VoiceID : "*/;
  v58 = *v57;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v55);
  if ( !byte_4B1BA2B )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1BA2B = 1;
  }
  v59 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v59 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v59->static_fields->_VoiceId_k__BackingField;
  v61 = System_Environment__get_NewLine(0LL);
  v62 = System_String__Concat_62490676(v50, v58, VoiceId_k__BackingField, v61, 0LL);
  normal = (char *)sub_1BCB0A0(string___TypeInfo, 8LL);
  if ( !normal )
    goto LABEL_203;
  v65 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v62;
  sub_1BCAF9C((CGThumbnailListItem_o *)(normal + 32), (int32_t)v62, v63, v64);
  if ( *((_DWORD *)v65 + 6) <= 1u )
    goto LABEL_196;
  v67 = StringLiteral_331/*" 確率 / 合計 : "*/;
  *((_QWORD *)v65 + 5) = StringLiteral_331/*" 確率 / 合計 : "*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 40), v67, v63, v66);
  if ( !byte_4B1BA2C )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v68);
    byte_4B1BA2C = 1;
  }
  v69 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v69 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v69->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_64044500(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1117/*"0.00"*/);
  if ( *((_DWORD *)v65 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v65 + 6) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 48), (int32_t)normal, v63, v70);
  if ( *((_DWORD *)v65 + 6) <= 3u )
    goto LABEL_196;
  v72 = StringLiteral_160/*" / "*/;
  *((_QWORD *)v65 + 7) = StringLiteral_160/*" / "*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 56), v72, v63, v71);
  if ( !byte_4B1BA2D )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v73);
    byte_4B1BA2D = 1;
  }
  v74 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v74 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v74->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_64044500(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1117/*"0.00"*/);
  if ( *((_DWORD *)v65 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v65 + 8) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 64), (int32_t)normal, v63, v75);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v65 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v65 + 9) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 72), (int32_t)normal, v63, v76);
  if ( *((_DWORD *)v65 + 6) <= 6u )
    goto LABEL_196;
  v78 = StringLiteral_330/*" 分類 : "*/;
  *((_QWORD *)v65 + 10) = StringLiteral_330/*" 分類 : "*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 80), v78, v63, v77);
  if ( !byte_4B1BA2E )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v46);
    byte_4B1BA2E = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v65 + 6) <= 7u )
    goto LABEL_196;
  v80 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v65 + 11) = v80;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v65 + 88), v80, v63, v79);
  v81 = System_String__Concat_62490940((System_String_array *)v65, 0LL);
  v82 = sub_1BCB0A0(string___TypeInfo, 21LL);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( !v82 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v82 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v82 + 32) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 32), (int32_t)normal, v63, v83);
  if ( *(_DWORD *)(v82 + 24) <= 1u )
    goto LABEL_196;
  v85 = StringLiteral_25160/*"【名前】"*/;
  *(_QWORD *)(v82 + 40) = StringLiteral_25160/*"【名前】"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 40), v85, v63, v84);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 48) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 48), (int32_t)normal, v63, v86);
  if ( *(_DWORD *)(v82 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v82 + 56) = static_fields->svtName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 56), (int32_t)svtName, v63, v87);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 64) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 64), (int32_t)normal, v63, v90);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 72) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 72), (int32_t)normal, v63, v91);
  if ( *(_DWORD *)(v82 + 24) <= 6u )
    goto LABEL_196;
  v93 = StringLiteral_25159/*"【モーションID】"*/;
  *(_QWORD *)(v82 + 80) = StringLiteral_25159/*"【モーションID】"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 80), v93, v63, v92);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 88) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 88), (int32_t)normal, v63, v94);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0LL);
  if ( *(_DWORD *)(v82 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 96) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 96), (int32_t)normal, v63, v95);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 104) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 104), (int32_t)normal, v63, v96);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 112) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 112), (int32_t)normal, v63, v97);
  if ( *(_DWORD *)(v82 + 24) <= 0xBu )
    goto LABEL_196;
  v99 = StringLiteral_25157/*"【カード属性】"*/;
  *(_QWORD *)(v82 + 120) = StringLiteral_25157/*"【カード属性】"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 120), v99, v63, v98);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 128) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 128), (int32_t)normal, v63, v100);
  if ( *(_DWORD *)(v82 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 136) = TypeName;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 136), (int32_t)TypeName, v63, v101);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 144) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 144), (int32_t)normal, v63, v102);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 152) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 152), (int32_t)normal, v63, v103);
  if ( *(_DWORD *)(v82 + 24) <= 0x10u )
    goto LABEL_196;
  v105 = StringLiteral_25158/*"【ボイス・SE】"*/;
  *(_QWORD *)(v82 + 160) = StringLiteral_25158/*"【ボイス・SE】"*/;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 160), v105, v63, v104);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 168) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 168), (int32_t)normal, v63, v106);
  if ( *(_DWORD *)(v82 + 24) <= 0x12u
    || (*(_QWORD *)(v82 + 176) = v81,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 176), (int32_t)v81, v63, v107),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v82 + 24) <= 0x13u)
    || (*(_QWORD *)(v82 + 184) = normal,
        sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 184), (int32_t)normal, v63, v108),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v82 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1BCB25C(normal, v46, v63);
  }
  *(_QWORD *)(v82 + 192) = normal;
  sub_1BCAF9C((CGThumbnailListItem_o *)(v82 + 192), (int32_t)normal, v63, v109);
  v110 = (Il2CppObject *)System_String__Concat_62490940((System_String_array *)v82, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v112 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v112 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0LL);
    *p_labelStyle = none;
    sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.labelStyle, (int32_t)none, v115, v116);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0LL);
    if ( !normal )
      goto LABEL_203;
    v259.fields.r = 1.0;
    v259.fields.g = 1.0;
    v259.fields.b = 1.0;
    v259.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v259, 0LL);
  }
  v117 = (float)height * 0.25;
  v118 = v112 * 40.0;
  v119 = v112 * 250.0;
  v120 = 3;
  v121 = (float)UnityEngine_Screen__get_width(0LL) - v119;
  do
  {
    width = v119;
    if ( this->fields.isLogAreaShow )
      v123 = 0.0;
    else
      v123 = v121;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0LL);
    v124 = UnityEngine_Screen__get_height(0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v260.fields.m_Height = (float)v124;
    v260.fields.m_YMin = 0.0;
    v260.fields.m_XMin = v123;
    v260.fields.m_Width = width;
    UnityEngine_GUI__Box(v260, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    --v120;
  }
  while ( v120 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0LL);
  v257 = *((float *)&format.monitor + 1);
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v125, v126, v127);
  v129 = System_String__Format_62491716((System_String_o *)StringLiteral_1719/*"<size={0}>{1}</size>"*/, v128, v110, 0LL);
  v130 = *p_labelStyle;
  v131 = v129;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v261.fields.m_YMin = 0.0;
  v261.fields.m_XMin = v121;
  v261.fields.m_Width = v119;
  v261.fields.m_Height = v117 + v117;
  UnityEngine_GUI__Label_70264668(v261, v131, v130, 0LL);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v136 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v133, v134, v135);
  if ( this->fields.isLogAreaShow )
    v137 = (Il2CppObject **)&StringLiteral_25137/*"▶ ログ非表示"*/;
  else
    v137 = (Il2CppObject **)&StringLiteral_25138/*"◀ ログ表示　"*/;
  v138 = System_String__Format_62491716((System_String_o *)StringLiteral_1719/*"<size={0}>{1}</size>"*/, v136, *v137, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v262.fields.m_XMin = v121;
  v262.fields.m_YMin = (float)((float)(v117 + v117) + 10.0) + 0.0;
  v262.fields.m_Width = v119 * 0.5;
  v262.fields.m_Height = v118;
  v142 = isLogAreaShow;
  if ( UnityEngine_GUI__Button(v262, v138, 0LL) )
    v142 = !this->fields.isLogAreaShow;
  v257 = *((float *)&format.monitor + 1);
  v143 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v139, v140, v141);
  v144 = System_String__Format((System_String_o *)StringLiteral_1723/*"<size={0}>ログ消去</size>"*/, v143, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v263.fields.m_XMin = (float)(v119 * 0.5) + v121;
  v263.fields.m_YMin = (float)((float)(v117 + v117) + 10.0) + 0.0;
  v263.fields.m_Width = v119 * 0.5;
  v263.fields.m_Height = v118;
  if ( UnityEngine_GUI__Button(v263, v144, 0LL) )
  {
    v148 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v148);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v142;
    return;
  }
  v149 = v118 + 10.0;
  v257 = *((float *)&format.monitor + 1);
  v150 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v145, v146, v147);
  v151 = System_String__Format((System_String_o *)StringLiteral_1720/*"<size={0}>▲</size>"*/, v150, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v264.fields.m_XMin = v121;
  v264.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v264.fields.m_Width = v118;
  v264.fields.m_Height = v118;
  if ( UnityEngine_GUI__RepeatButton(v264, v151, 0LL) )
  {
    v155 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v155 = MotionInfo_TypeInfo;
    }
    v155->static_fields->scrollPosition.fields.y = v155->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v257 = *((float *)&format.monitor + 1);
  v156 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v152, v153, v154);
  v157 = System_String__Format((System_String_o *)StringLiteral_1721/*"<size={0}>▼</size>"*/, v156, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v265.fields.m_XMin = v118 + v121;
  v265.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v265.fields.m_Width = v118;
  v265.fields.m_Height = v118;
  if ( UnityEngine_GUI__RepeatButton(v265, v157, 0LL) )
  {
    v161 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v161 = MotionInfo_TypeInfo;
    }
    v161->static_fields->scrollPosition.fields.y = v161->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v257 = *((float *)&format.monitor + 1);
  v162 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v158, v159, v160);
  v163 = System_String__Format((System_String_o *)StringLiteral_1717/*"<size={0}>-</size>"*/, v162, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v266.fields.m_XMin = v118 + (float)(v118 + v121);
  v266.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v266.fields.m_Width = v118;
  v266.fields.m_Height = v118;
  if ( UnityEngine_GUI__Button(v266, v163, 0LL) )
  {
    v167 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v167;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_63972460(v167, 1, 0LL);
  }
  v253 = v142;
  v257 = *((float *)&format.monitor + 1) * 0.9;
  v168 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v164, v165, v166);
  monitor_high = this->fields.scrollSpeed;
  v172 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v169, v170, v171);
  v255 = 10;
  v176 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v255, v173, v174, v175);
  v177 = System_String__Format_62491784((System_String_o *)StringLiteral_1718/*"<size={0}>{1}/{2}</size>"*/, v168, v172, v176, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v267.fields.m_XMin = v118 + (float)(v118 + (float)(v118 + v121));
  v267.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v267.fields.m_Width = v118 + 10.0;
  v267.fields.m_Height = v118;
  UnityEngine_GUI__Box(v267, v177, 0LL);
  v254 = HIDWORD(format.monitor);
  v181 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v254, v178, v179, v180);
  v182 = System_String__Format((System_String_o *)StringLiteral_1716/*"<size={0}>+</size>"*/, v181, 0LL);
  v268.fields.m_XMin = v149 + (float)(v118 + (float)(v118 + (float)(v118 + v121)));
  v268.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v268.fields.m_Width = v118;
  v268.fields.m_Height = v118;
  if ( UnityEngine_GUI__Button(v268, v182, 0LL) )
  {
    v183 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v183;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_63972788(v183, 10, 0LL);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0LL);
  v257 = *((float *)&format.monitor + 1);
  v187 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v257, v184, v185, v186);
  v188 = System_String__Format((System_String_o *)StringLiteral_1722/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v187, 0LL);
  v189 = *p_labelStyle;
  v190 = v188;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v269.fields.m_Height = 40.0;
  v269.fields.m_XMin = v121;
  v269.fields.m_YMin = v149 + (float)((float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0));
  v269.fields.m_Width = v119;
  UnityEngine_GUI__Label_70264668(v269, v190, v189, 0LL);
  v191 = (float)((float)UnityEngine_Screen__get_width(0LL) - v119) + -10.0;
  v192 = *((float *)&format.monitor + 1) + 10.0;
  v193 = UnityEngine_Screen__get_height(0LL);
  v194 = MotionInfo_TypeInfo;
  v195 = (float)v193;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v194 = MotionInfo_TypeInfo;
  }
  v196 = v194->static_fields;
  v270.fields.m_YMin = 0.0;
  v270.fields.m_Width = v191;
  v270.fields.m_Height = v195;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  viewRect.fields.m_Width = v191 + -20.0;
  viewRect.fields.m_Height = v192 * (float)v196->voicePlayLogLineSize;
  v270.fields.m_XMin = 0.0;
  v197 = UnityEngine_GUI__BeginScrollView(v270, v196->scrollPosition, viewRect, 0LL);
  v198 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v197;
  v199 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v198->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v199 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v199->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v199->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v199);
      v199 = MotionInfo___c_TypeInfo;
    }
    v202 = (Il2CppObject *)v199->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1BCB244(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v202, Method_MotionInfo___c__OnGUI_b__46_0__, 0LL);
    v203 = MotionInfo___c_TypeInfo->static_fields;
    v203->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1BCAF9C((CGThumbnailListItem_o *)&v203->__9__46_0, (int32_t)_9__46_0, v204, v205);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_30514E0 *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1BCB254(normal, v46);
  v206 = *(_QWORD *)normal;
  v207 = normal;
  v208 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v209 = (int *)(*(_QWORD *)(v206 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v209 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v208;
      v209 += 4;
      if ( !v208 )
        goto LABEL_159;
    }
    v210 = v206 + 16LL * *v209 + 312;
  }
  else
  {
LABEL_159:
    v210 = sub_1C1B560(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v212 = (*(__int64 (__fastcall **)(char *, _QWORD))v210)(v207, *(_QWORD *)(v210 + 8));
  if ( !v212 )
    sub_1BCB254(0LL, v211);
  for ( i = 0; ; ++i )
  {
    v214 = *(_QWORD *)v212;
    v215 = *(unsigned __int16 *)(*(_QWORD *)v212 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v212 + 302LL) )
    {
      v216 = (int *)(*(_QWORD *)(v214 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v216 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v215;
        v216 += 4;
        if ( !v215 )
          goto LABEL_168;
      }
      v217 = v214 + 16LL * *v216 + 312;
    }
    else
    {
LABEL_168:
      v217 = sub_1C1B560(v212, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v217)(v212, *(_QWORD *)(v217 + 8)) & 1) == 0 )
      break;
    v218 = *(_QWORD *)v212;
    v219 = *(unsigned __int16 *)(*(_QWORD *)v212 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v212 + 302LL) )
    {
      v220 = (int *)(*(_QWORD *)(v218 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v220 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v219;
        v220 += 4;
        if ( !v219 )
          goto LABEL_175;
      }
      v221 = v218 + 16LL * *v220 + 312;
    }
    else
    {
LABEL_175:
      v221 = sub_1C1B560(v212, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v222 = (*(__int64 (__fastcall **)(__int64, _QWORD))v221)(v212, *(_QWORD *)(v221 + 8));
    v223 = sub_1BCB0A0(string___TypeInfo, 5LL);
    v227 = v223;
    if ( !v223 )
      sub_1BCB254(0LL, v224);
    if ( !*(_DWORD *)(v223 + 24) )
      sub_1BCB25C(v223, v224, v225);
    v228 = StringLiteral_1715/*"<size="*/;
    *(_QWORD *)(v223 + 32) = StringLiteral_1715/*"<size="*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v223 + 32), v228, v225, v226);
    v230 = System_Single__ToString(v229, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v227 + 24) <= 1u )
      sub_1BCB25C(v230, v230, v231);
    *(_QWORD *)(v227 + 40) = v230;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v227 + 40), (int32_t)v230, v231, v232);
    if ( *(_DWORD *)(v227 + 24) <= 2u )
      sub_1BCB25C(v233, v234, v235);
    v237 = StringLiteral_1741/*">"*/;
    *(_QWORD *)(v227 + 48) = StringLiteral_1741/*">"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v227 + 48), v237, v235, v236);
    if ( *(_DWORD *)(v227 + 24) <= 3u )
      sub_1BCB25C(v238, v239, v240);
    *(_QWORD *)(v227 + 56) = v222;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v227 + 56), v222, v240, v241);
    if ( *(_DWORD *)(v227 + 24) <= 4u )
      sub_1BCB25C(v242, v243, v244);
    v246 = StringLiteral_1518/*"</size>"*/;
    *(_QWORD *)(v227 + 64) = StringLiteral_1518/*"</size>"*/;
    sub_1BCAF9C((CGThumbnailListItem_o *)(v227 + 64), v246, v244, v245);
    v247 = System_String__Concat_62490940((System_String_array *)v227, 0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v271.fields.m_YMin = v192 * (float)i;
    v271.fields.m_XMin = 0.0;
    v271.fields.m_Width = v191 + -20.0;
    v271.fields.m_Height = v192;
    UnityEngine_GUI__Label(v271, v247, 0LL);
  }
  v248 = *(_QWORD *)v212;
  v249 = *(unsigned __int16 *)(*(_QWORD *)v212 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v212 + 302LL) )
  {
    v250 = (int *)(*(_QWORD *)(v248 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v250 - 1) != System_IDisposable_TypeInfo )
    {
      --v249;
      v250 += 4;
      if ( !v249 )
        goto LABEL_190;
    }
    v251 = v248 + 16LL * *v250 + 312;
  }
  else
  {
LABEL_190:
    v251 = sub_1C1B560(v212, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v251)(v212, *(_QWORD *)(v251 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
  this->fields.isLogAreaShow = v253;
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

  if ( (byte_4B1B9B2 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    sub_1BCAFF8(&StringLiteral_1/*""*/, v4);
    byte_4B1B9B2 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v5 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B1BA2F )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1BA2F = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v5;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)v5, v2, v3);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B1BA30 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v8);
    byte_4B1BA30 = 1;
  }
  v12 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v12 = MotionInfo_TypeInfo;
  }
  v13 = v12->static_fields;
  v13->_VoiceId_k__BackingField = v11;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v13->_VoiceId_k__BackingField, (int32_t)v11, v9, v10);
  if ( !byte_4B1BA31 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v14);
    byte_4B1BA31 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4B1BA32 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_4B1BA32 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v18 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B1BA33 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_4B1BA33 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = v18;
  sub_1BCAF9C((CGThumbnailListItem_o *)&v19->_VoiceType_k__BackingField, (int32_t)v18, v15, v16);
  if ( !byte_4B1BA34 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v20);
    byte_4B1BA34 = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4B1BA35 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v20);
    v21 = MotionInfo_TypeInfo;
    byte_4B1BA35 = 1;
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

  if ( (byte_4B1B9B8 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9B8 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B1BA36 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1BA36 = 1;
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

  if ( (byte_4B1B9B7 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string___Clear__, v1);
    sub_1BCAFF8(&MotionInfo_TypeInfo, v2);
    byte_4B1B9B7 = 1;
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
    sub_1BCB254(v3, v1);
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

  if ( (byte_4B1B9AF & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, svtName);
    byte_4B1B9AF = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1BCAF9C((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)svtName, (int32_t)method, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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

  if ( (byte_4B1B9B6 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_string__get_Count__, v2);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string___get_Count__, v3);
    sub_1BCAFF8(&Method_System_Collections_Generic_List_List_string___get_Item__, v4);
    sub_1BCAFF8(&MotionInfo_TypeInfo, v5);
    byte_4B1B9B6 = 1;
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
                  (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_24:
    sub_1BCB254(Item, v1);
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
             (const MethodInfo_36B9900 *)Method_System_Collections_Generic_List_List_string___get_Item__);
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
      (const MethodInfo_36BB3A4 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
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

  if ( (byte_4B1B9AB & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9AB = 1;
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

  if ( (byte_4B1B9AD & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9AD = 1;
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

  if ( (byte_4B1B9A5 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9A5 = 1;
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

  if ( (byte_4B1B9A9 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9A9 = 1;
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

  if ( (byte_4B1B99F & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B99F = 1;
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

  if ( (byte_4B1B9A3 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9A3 = 1;
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

  if ( (byte_4B1B9A7 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9A7 = 1;
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

  if ( (byte_4B1B9A1 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v1);
    byte_4B1B9A1 = 1;
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

  if ( (byte_4B1B9AC & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1B9AC = 1;
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

  if ( (byte_4B1B9AE & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1B9AE = 1;
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

  if ( (byte_4B1B9A6 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1B9A6 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4B1B9AA & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1B9AA = 1;
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

  if ( (byte_4B1B9A0 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1B9A0 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_4B1B9A4 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v2);
    byte_4B1B9A4 = 1;
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

  if ( (byte_4B1B9A8 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, method);
    byte_4B1B9A8 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1BCAF9C((CGThumbnailListItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_4B1B9A2 & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo_TypeInfo, v2);
    byte_4B1B9A2 = 1;
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

  if ( (byte_4B1B9BA & 1) == 0 )
  {
    sub_1BCAFF8(&MotionInfo___c_TypeInfo, v1);
    byte_4B1B9BA = 1;
  }
  v2 = (Il2CppObject *)sub_1BCB244(MotionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v2;
  sub_1BCAF9C((CGThumbnailListItem_o *)MotionInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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