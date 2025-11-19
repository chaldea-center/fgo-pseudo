void MotionInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v4; // x19
  struct MotionInfo_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4CB5736 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_1C6BA08(&MotionInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5736 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, StringLiteral_1/*""*/, v1, v2);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4CAFAE9 )
  {
    sub_1C6BA08(&UnityEngine_Vector2_TypeInfo);
    byte_4CAFAE9 = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v5 = MotionInfo_TypeInfo->static_fields;
  v5->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v5->voicePlaybackLogList, (int32_t)v4, v6, v7);
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
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MotionInfo_c *v9; // x0
  __int64 v10; // x20
  struct MotionInfo_StaticFields *v11; // x0
  const MethodInfo *v12; // x0

  if ( (byte_4CB5730 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_11510/*"SE"*/);
    byte_4CB5730 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4CB57B0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57B0 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4CB57B1 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4CB57B1 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4CB57AF )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4CB57AF = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4CB57B3 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57B3 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4CB57B4 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4CB57B4 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4CB57B5 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4CB57B5 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsRandom_k__BackingField = 0;
  v10 = StringLiteral_11510/*"SE"*/;
  if ( !byte_4CB57B2 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4CB57B2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v11 = v9->static_fields;
  v11->_VoiceType_k__BackingField = (struct System_String_o *)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v11->_VoiceType_k__BackingField, v10, v7, v8);
  MotionInfo__AddVoiceLog(v12);
}


void MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass *v10; // x1
  Il2CppClass **v11; // x0
  MotionInfo_c *v12; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v14; // x0
  System_String_o *v15; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v17; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass *v25; // x1
  Il2CppClass **v26; // x0
  MotionInfo_c *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass *v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  char *v37; // x20
  int32_t v38; // w1
  MotionInfo_c *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  MotionInfo_c *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass *v55; // x1
  Il2CppClass **v56; // x0
  MotionInfo_c *v57; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v59; // x0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass *v65; // x1
  Il2CppClass **v66; // x0
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  const MethodInfo *v73; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB5731 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&MotionInfo_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_332/*" 確率 / 合計 : "*/);
    sub_1C6BA08(&StringLiteral_200/*" VoiceID : "*/);
    sub_1C6BA08(&StringLiteral_1119/*"0.00"*/);
    sub_1C6BA08(&StringLiteral_160/*" / "*/);
    sub_1C6BA08(&StringLiteral_873/*"--- Voice・SE Log ---"*/);
    sub_1C6BA08(&StringLiteral_193/*" SEID : "*/);
    sub_1C6BA08(&StringLiteral_331/*" 分類 : "*/);
    sub_1C6BA08(&StringLiteral_12737/*"ServantID : "*/);
    byte_4CB5731 = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63966792((System_String_o *)StringLiteral_873/*"--- Voice・SE Log ---"*/, NewLine, 0);
  if ( !v1 )
    goto LABEL_74;
  items = v1->fields._items;
  v8 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v1->fields._size;
  v10 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v11[4] = v10;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)v10, v5, v6);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4CB57A8 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57A8 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4CB57AA )
      {
        sub_1C6BA08(&MotionInfo_TypeInfo);
        byte_4CB57AA = 1;
      }
      v12 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v12 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v12->static_fields->_VoiceId_k__BackingField;
      v14 = System_Environment__get_NewLine(0);
      v15 = (System_String_o *)StringLiteral_193/*" SEID : "*/;
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
  if ( !byte_4CB57A9 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57A9 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v17->static_fields->_VoiceServantId_k__BackingField;
  v19 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_64005056(
                                   (System_String_o *)StringLiteral_12737/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v19,
                                   0);
  v22 = v1->fields._items;
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v22 )
LABEL_74:
    sub_1C6BC60(voicePlaybackLogList, v4);
  v24 = v1->fields._size;
  v25 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v22->obj.klass + v24;
    v1->fields._size = v24 + 1;
    v26[4] = v25;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
  }
  if ( !byte_4CB57AA )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AA = 1;
  }
  v27 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v27 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v27->static_fields->_VoiceId_k__BackingField;
  v14 = System_Environment__get_NewLine(0);
  v15 = (System_String_o *)StringLiteral_200/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_64005056(v15, VoiceId_k__BackingField, v14, 0);
  v30 = v1->fields._items;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v30 )
    goto LABEL_74;
  v32 = v1->fields._size;
  v33 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v32 >= LODWORD(v30->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v34[4] = v33;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
  }
  voicePlaybackLogList = (char *)sub_1C6BAB0(string___TypeInfo, 5);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v37 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v38 = StringLiteral_332/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_332/*" 確率 / 合計 : "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(voicePlaybackLogList + 32), v38, v35, v36);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4CB57AB )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AB = 1;
  }
  v39 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v39 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v39->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_65560440(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1119/*"0.00"*/);
  if ( *((_DWORD *)v37 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v37 + 5) = voicePlaybackLogList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 40), (int32_t)voicePlaybackLogList, v40, v41);
  if ( *((_DWORD *)v37 + 6) <= 2u )
    goto LABEL_75;
  v44 = StringLiteral_160/*" / "*/;
  *((_QWORD *)v37 + 6) = StringLiteral_160/*" / "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 48), v44, v42, v43);
  if ( !byte_4CB57AC )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AC = 1;
  }
  v45 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v45 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v45->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_65560440(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1119/*"0.00"*/);
  if ( *((_DWORD *)v37 + 6) <= 3u
    || (*((_QWORD *)v37 + 7) = voicePlaybackLogList,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 56), (int32_t)voicePlaybackLogList, v46, v47),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0),
        *((_DWORD *)v37 + 6) <= 4u) )
  {
LABEL_75:
    sub_1C6BC68(voicePlaybackLogList);
  }
  *((_QWORD *)v37 + 8) = voicePlaybackLogList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v37 + 64), (int32_t)voicePlaybackLogList, v48, v49);
  voicePlaybackLogList = (char *)System_String__Concat_64007324((System_String_array *)v37, 0);
  v52 = v1->fields._items;
  v53 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v52 )
    goto LABEL_74;
  v54 = v1->fields._size;
  v55 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v52->obj.klass + v54;
    v1->fields._size = v54 + 1;
    v56[4] = v55;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
  }
  if ( !byte_4CB57AD )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AD = 1;
  }
  v57 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v57 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v57->static_fields->_VoiceType_k__BackingField;
  v59 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_64005056(
                                   (System_String_o *)StringLiteral_331/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v59,
                                   0);
  v62 = v1->fields._items;
  v63 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v62 )
    goto LABEL_74;
  v64 = v1->fields._size;
  v65 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v62->obj.klass + v64;
    v1->fields._size = v64 + 1;
    v66[4] = v65;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v66 + 4), (int32_t)v65, v60, v61);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v69 = *((_QWORD *)voicePlaybackLogList + 2);
  v70 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v69 )
    goto LABEL_74;
  v71 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v71 >= *(_DWORD *)(v69 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v1,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = v69 + 8 * v71;
    *((_DWORD *)voicePlaybackLogList + 6) = v71 + 1;
    *(_QWORD *)(v72 + 32) = v1;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v72 + 32), (int32_t)v1, v67, v68);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v73);
}


void MotionInfo__AddVoiceLog_41211820(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  MotionInfo_c *v14; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8
  const MethodInfo *v19; // x0

  if ( (byte_4CB5732 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5732 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v3 )
    goto LABEL_16;
  items = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_string__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)str,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v11[4] = (Il2CppClass *)str;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v11 + 4), (int32_t)str, v6, v7);
  }
  v14 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v14 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v14->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList
    || (v15 = voicePlaybackLogList->fields._items,
        v16 = Method_System_Collections_Generic_List_List_string___Add__,
        ++voicePlaybackLogList->fields._version,
        !v15) )
  {
LABEL_16:
    sub_1C6BC60(voicePlaybackLogList, v5);
  }
  v17 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_3800974 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    voicePlaybackLogList->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)v3;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v3, v12, v13);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v19);
}


System_String_o *MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = type;
  if ( (byte_4CB572E & 1) == 0 )
  {
    sub_1C6BA08(&BattleCommand_TypeInfo);
    sub_1C6BA08(&StringLiteral_25539/*"バスター"*/);
    sub_1C6BA08(&StringLiteral_25518/*"クイック"*/);
    sub_1C6BA08(&StringLiteral_25507/*"アーツ"*/);
    sub_1C6BA08(&StringLiteral_25511/*"エクストラ"*/);
    byte_4CB572E = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0) )
  {
    case 1:
      v4 = &StringLiteral_25507/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v4 = &StringLiteral_25539/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v4 = &StringLiteral_25518/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v4 = &StringLiteral_25511/*"エクストラ"*/;
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
  const MethodInfo *v25; // x3
  char *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  MotionInfo_c *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  int32_t v35; // w1
  MotionInfo_c *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  __int64 v46; // x1
  System_String_o *v47; // x22
  __int64 v48; // x21
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  int32_t v66; // w1
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  int32_t v77; // w1
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  int32_t v86; // w2
  const MethodInfo *v87; // x3
  int32_t v88; // w1
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w2
  const MethodInfo *v94; // x3
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  Il2CppObject *v97; // x21
  int32_t height; // w22
  float v99; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  float v104; // s13
  float v105; // s10
  float v106; // s8
  int v107; // w25
  float v108; // s9
  float width; // s12
  float v110; // s11
  int32_t v111; // w22
  Il2CppObject *v112; // x0
  System_String_o *v113; // x0
  UnityEngine_GUIStyle_o *v114; // x21
  System_String_o *v115; // x22
  _BOOL4 isLogAreaShow; // w22
  Il2CppObject *v117; // x1
  Il2CppObject **v118; // x9
  System_String_o *v119; // x21
  bool v120; // w22
  Il2CppObject *v121; // x0
  System_String_o *v122; // x21
  MotionInfo_c *v123; // x0
  float v124; // s11
  Il2CppObject *v125; // x0
  System_String_o *v126; // x21
  MotionInfo_c *v127; // x0
  Il2CppObject *v128; // x0
  System_String_o *v129; // x21
  MotionInfo_c *v130; // x0
  Il2CppObject *v131; // x0
  System_String_o *v132; // x21
  int32_t v133; // w21
  Il2CppObject *v134; // x21
  Il2CppObject *v135; // x22
  Il2CppObject *v136; // x0
  System_String_o *v137; // x21
  Il2CppObject *v138; // x0
  System_String_o *v139; // x0
  int32_t v140; // w21
  Il2CppObject *v141; // x0
  System_String_o *v142; // x0
  UnityEngine_GUIStyle_o *v143; // x20
  System_String_o *v144; // x21
  float v145; // s10
  float v146; // s9
  int32_t v147; // w0
  MotionInfo_c *v148; // x8
  float v149; // s11
  struct MotionInfo_StaticFields *v150; // x8
  UnityEngine_Vector2_o v151; // kr00_8
  MotionInfo_c *v152; // x8
  MotionInfo___c_c *v153; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v156; // x22
  struct MotionInfo___c_StaticFields *v157; // x0
  int32_t v158; // w2
  const MethodInfo *v159; // x3
  __int64 v160; // x8
  char *v161; // x20
  __int64 v162; // x9
  int *v163; // x10
  __int64 v164; // x0
  __int64 v165; // x1
  __int64 v166; // x20
  int i; // w25
  __int64 v168; // x8
  __int64 v169; // x9
  int *v170; // x10
  __int64 v171; // x0
  __int64 v172; // x8
  __int64 v173; // x9
  int *v174; // x10
  __int64 v175; // x0
  __int64 v176; // x22
  __int64 v177; // x0
  __int64 v178; // x1
  int32_t v179; // w2
  const MethodInfo *v180; // x3
  __int64 v181; // x21
  int32_t v182; // w1
  float v183; // s0
  System_String_o *v184; // x0
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  __int64 v187; // x0
  int32_t v188; // w2
  const MethodInfo *v189; // x3
  int32_t v190; // w1
  __int64 v191; // x0
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  __int64 v194; // x0
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  int32_t v197; // w1
  System_String_o *v198; // x21
  __int64 v199; // x8
  __int64 v200; // x9
  int *v201; // x10
  __int64 v202; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v204; // [xsp+18h] [xbp-B8h]
  int v205; // [xsp+1Ch] [xbp-B4h] BYREF
  int v206; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v208; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v210; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v211; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v212; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v213; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v214; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v215; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v216; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v217; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v218; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v219; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v220; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v221; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v222; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB572D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_SelectMany_List_string___string___);
    sub_1C6BA08(&System_Func_List_string___IEnumerable_string___TypeInfo);
    sub_1C6BA08(&UnityEngine_GUIStyle_TypeInfo);
    sub_1C6BA08(&UnityEngine_GUI_TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&int_TypeInfo);
    sub_1C6BA08(&System_Math_TypeInfo);
    sub_1C6BA08(&MotionInfo_TypeInfo);
    sub_1C6BA08(&float_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_MotionInfo___c__OnGUI_b__46_0__);
    sub_1C6BA08(&MotionInfo___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1717/*"<size={0}>+</size>"*/);
    sub_1C6BA08(&StringLiteral_25490/*"【モーションID】"*/);
    sub_1C6BA08(&StringLiteral_25489/*"【ボイス・SE】"*/);
    sub_1C6BA08(&StringLiteral_1721/*"<size={0}>▲</size>"*/);
    sub_1C6BA08(&StringLiteral_15359/*"VoiceID : "*/);
    sub_1C6BA08(&StringLiteral_25491/*"【名前】"*/);
    sub_1C6BA08(&StringLiteral_332/*" 確率 / 合計 : "*/);
    sub_1C6BA08(&StringLiteral_1724/*"<size={0}>ログ消去</size>"*/);
    sub_1C6BA08(&StringLiteral_1716/*"<size="*/);
    sub_1C6BA08(&StringLiteral_25488/*"【カード属性】"*/);
    sub_1C6BA08(&StringLiteral_1119/*"0.00"*/);
    sub_1C6BA08(&StringLiteral_1723/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/);
    sub_1C6BA08(&StringLiteral_160/*" / "*/);
    sub_1C6BA08(&StringLiteral_193/*" SEID : "*/);
    sub_1C6BA08(&StringLiteral_25468/*"▶ ログ非表示"*/);
    sub_1C6BA08(&StringLiteral_1722/*"<size={0}>▼</size>"*/);
    sub_1C6BA08(&StringLiteral_1719/*"<size={0}>{1}/{2}</size>"*/);
    sub_1C6BA08(&StringLiteral_1720/*"<size={0}>{1}</size>"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_331/*" 分類 : "*/);
    sub_1C6BA08(&StringLiteral_1519/*"</size>"*/);
    sub_1C6BA08(&StringLiteral_1742/*">"*/);
    sub_1C6BA08(&StringLiteral_12737/*"ServantID : "*/);
    sub_1C6BA08(&StringLiteral_25469/*"◀ ログ表示　"*/);
    sub_1C6BA08(&StringLiteral_1718/*"<size={0}>-</size>"*/);
    byte_4CB572D = 1;
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
  if ( !byte_4CB57A8 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57A8 = 1;
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
    if ( !byte_4CB57A9 )
    {
      sub_1C6BA08(&MotionInfo_TypeInfo);
      byte_4CB57A9 = 1;
    }
    v12 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v12 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v12->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0);
    v15 = System_String__Concat_64005056(
            (System_String_o *)StringLiteral_12737/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0);
    v10 = MotionInfo_TypeInfo;
    v11 = v15;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4CB57A8 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57A8 = 1;
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
    v18 = (System_String_o **)&StringLiteral_193/*" SEID : "*/;
  else
    v18 = (System_String_o **)&StringLiteral_15359/*"VoiceID : "*/;
  v19 = *v18;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4CB57AA )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AA = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v20->static_fields->_VoiceId_k__BackingField;
  v22 = System_Environment__get_NewLine(0);
  v23 = System_String__Concat_64007060(v11, v19, VoiceId_k__BackingField, v22, 0);
  normal = (char *)sub_1C6BAB0(string___TypeInfo, 8);
  if ( !normal )
    goto LABEL_203;
  v26 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v23;
  sub_1C6B9AC((CGThumbnailListItem_o *)(normal + 32), (int32_t)v23, v24, v25);
  if ( *((_DWORD *)v26 + 6) <= 1u )
    goto LABEL_196;
  v29 = StringLiteral_332/*" 確率 / 合計 : "*/;
  *((_QWORD *)v26 + 5) = StringLiteral_332/*" 確率 / 合計 : "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 40), v29, v27, v28);
  if ( !byte_4CB57AB )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AB = 1;
  }
  v30 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v30 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v30->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_65560440(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1119/*"0.00"*/);
  if ( *((_DWORD *)v26 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v26 + 6) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 48), (int32_t)normal, v31, v32);
  if ( *((_DWORD *)v26 + 6) <= 3u )
    goto LABEL_196;
  v35 = StringLiteral_160/*" / "*/;
  *((_QWORD *)v26 + 7) = StringLiteral_160/*" / "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 56), v35, v33, v34);
  if ( !byte_4CB57AC )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AC = 1;
  }
  v36 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v36 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v36->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_65560440(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1119/*"0.00"*/);
  if ( *((_DWORD *)v26 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v26 + 8) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 64), (int32_t)normal, v37, v38);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *((_DWORD *)v26 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v26 + 9) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 72), (int32_t)normal, v39, v40);
  if ( *((_DWORD *)v26 + 6) <= 6u )
    goto LABEL_196;
  v43 = StringLiteral_331/*" 分類 : "*/;
  *((_QWORD *)v26 + 10) = StringLiteral_331/*" 分類 : "*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 80), v43, v41, v42);
  if ( !byte_4CB57AD )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AD = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v26 + 6) <= 7u )
    goto LABEL_196;
  v46 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v26 + 11) = v46;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 88), v46, v44, v45);
  v47 = System_String__Concat_64007324((System_String_array *)v26, 0);
  v48 = sub_1C6BAB0(string___TypeInfo, 21);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( !v48 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v48 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v48 + 32) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 32), (int32_t)normal, v49, v50);
  if ( *(_DWORD *)(v48 + 24) <= 1u )
    goto LABEL_196;
  v53 = StringLiteral_25491/*"【名前】"*/;
  *(_QWORD *)(v48 + 40) = StringLiteral_25491/*"【名前】"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 40), v53, v51, v52);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 48) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 48), (int32_t)normal, v54, v55);
  if ( *(_DWORD *)(v48 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v48 + 56) = static_fields->svtName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 56), (int32_t)svtName, v56, v57);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 64) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 64), (int32_t)normal, v60, v61);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 72) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 72), (int32_t)normal, v62, v63);
  if ( *(_DWORD *)(v48 + 24) <= 6u )
    goto LABEL_196;
  v66 = StringLiteral_25490/*"【モーションID】"*/;
  *(_QWORD *)(v48 + 80) = StringLiteral_25490/*"【モーションID】"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 80), v66, v64, v65);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 88) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 88), (int32_t)normal, v67, v68);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0);
  if ( *(_DWORD *)(v48 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 96) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 96), (int32_t)normal, v69, v70);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 104) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 104), (int32_t)normal, v71, v72);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v48 + 112) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 112), (int32_t)normal, v73, v74);
  if ( *(_DWORD *)(v48 + 24) <= 0xBu )
    goto LABEL_196;
  v77 = StringLiteral_25488/*"【カード属性】"*/;
  *(_QWORD *)(v48 + 120) = StringLiteral_25488/*"【カード属性】"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 120), v77, v75, v76);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v48 + 128) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 128), (int32_t)normal, v78, v79);
  if ( *(_DWORD *)(v48 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v48 + 136) = TypeName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 136), (int32_t)TypeName, v80, v81);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v48 + 144) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 144), (int32_t)normal, v82, v83);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v48 + 152) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 152), (int32_t)normal, v84, v85);
  if ( *(_DWORD *)(v48 + 24) <= 0x10u )
    goto LABEL_196;
  v88 = StringLiteral_25489/*"【ボイス・SE】"*/;
  *(_QWORD *)(v48 + 160) = StringLiteral_25489/*"【ボイス・SE】"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 160), v88, v86, v87);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v48 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v48 + 168) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 168), (int32_t)normal, v89, v90);
  if ( *(_DWORD *)(v48 + 24) <= 0x12u
    || (*(_QWORD *)(v48 + 176) = v47,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 176), (int32_t)v47, v91, v92),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v48 + 24) <= 0x13u)
    || (*(_QWORD *)(v48 + 184) = normal,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 184), (int32_t)normal, v93, v94),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v48 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1C6BC68(normal);
  }
  *(_QWORD *)(v48 + 192) = normal;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v48 + 192), (int32_t)normal, v95, v96);
  v97 = (Il2CppObject *)System_String__Concat_64007324((System_String_array *)v48, 0);
  height = UnityEngine_Screen__get_height(0);
  v99 = (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v99 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0);
    *p_labelStyle = none;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.labelStyle, (int32_t)none, v102, v103);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0);
    if ( !normal )
      goto LABEL_203;
    v210.fields.r = 1.0;
    v210.fields.g = 1.0;
    v210.fields.b = 1.0;
    v210.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v210, 0);
  }
  v104 = (float)height * 0.25;
  v105 = v99 * 40.0;
  v106 = v99 * 250.0;
  v107 = 3;
  v108 = (float)UnityEngine_Screen__get_width(0) - v106;
  do
  {
    width = v106;
    if ( this->fields.isLogAreaShow )
      v110 = 0.0;
    else
      v110 = v108;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0);
    v111 = UnityEngine_Screen__get_height(0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v211.fields.m_Height = (float)v111;
    v211.fields.m_YMin = 0.0;
    v211.fields.m_XMin = v110;
    v211.fields.m_Width = width;
    UnityEngine_GUI__Box(v211, (System_String_o *)StringLiteral_1/*""*/, 0);
    --v107;
  }
  while ( v107 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0);
  v208 = *((float *)&format.monitor + 1);
  v112 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  v113 = System_String__Format_64008100((System_String_o *)StringLiteral_1720/*"<size={0}>{1}</size>"*/, v112, v97, 0);
  v114 = *p_labelStyle;
  v115 = v113;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v212.fields.m_YMin = 0.0;
  v212.fields.m_XMin = v108;
  v212.fields.m_Width = v106;
  v212.fields.m_Height = v104 + v104;
  UnityEngine_GUI__Label_71790084(v212, v115, v114, 0);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high);
  if ( this->fields.isLogAreaShow )
    v118 = (Il2CppObject **)&StringLiteral_25468/*"▶ ログ非表示"*/;
  else
    v118 = (Il2CppObject **)&StringLiteral_25469/*"◀ ログ表示　"*/;
  v119 = System_String__Format_64008100((System_String_o *)StringLiteral_1720/*"<size={0}>{1}</size>"*/, v117, *v118, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v213.fields.m_XMin = v108;
  v213.fields.m_YMin = (float)((float)(v104 + v104) + 10.0) + 0.0;
  v213.fields.m_Width = v106 * 0.5;
  v213.fields.m_Height = v105;
  v120 = isLogAreaShow;
  if ( UnityEngine_GUI__Button(v213, v119, 0) )
    v120 = !this->fields.isLogAreaShow;
  v208 = *((float *)&format.monitor + 1);
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  v122 = System_String__Format((System_String_o *)StringLiteral_1724/*"<size={0}>ログ消去</size>"*/, v121, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v214.fields.m_XMin = (float)(v106 * 0.5) + v108;
  v214.fields.m_YMin = (float)((float)(v104 + v104) + 10.0) + 0.0;
  v214.fields.m_Width = v106 * 0.5;
  v214.fields.m_Height = v105;
  if ( UnityEngine_GUI__Button(v214, v122, 0) )
  {
    v123 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v123);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v120;
    return;
  }
  v124 = v105 + 10.0;
  v208 = *((float *)&format.monitor + 1);
  v125 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  v126 = System_String__Format((System_String_o *)StringLiteral_1721/*"<size={0}>▲</size>"*/, v125, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v215.fields.m_XMin = v108;
  v215.fields.m_YMin = (float)((float)((float)(v104 + v104) + 10.0) + 0.0) + (float)(v105 + 10.0);
  v215.fields.m_Width = v105;
  v215.fields.m_Height = v105;
  if ( UnityEngine_GUI__RepeatButton(v215, v126, 0) )
  {
    v127 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v127 = MotionInfo_TypeInfo;
    }
    v127->static_fields->scrollPosition.fields.y = v127->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v208 = *((float *)&format.monitor + 1);
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  v129 = System_String__Format((System_String_o *)StringLiteral_1722/*"<size={0}>▼</size>"*/, v128, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v216.fields.m_XMin = v105 + v108;
  v216.fields.m_YMin = (float)((float)((float)(v104 + v104) + 10.0) + 0.0) + (float)(v105 + 10.0);
  v216.fields.m_Width = v105;
  v216.fields.m_Height = v105;
  if ( UnityEngine_GUI__RepeatButton(v216, v129, 0) )
  {
    v130 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v130 = MotionInfo_TypeInfo;
    }
    v130->static_fields->scrollPosition.fields.y = v130->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v208 = *((float *)&format.monitor + 1);
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  v132 = System_String__Format((System_String_o *)StringLiteral_1718/*"<size={0}>-</size>"*/, v131, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v217.fields.m_XMin = v105 + (float)(v105 + v108);
  v217.fields.m_YMin = (float)((float)((float)(v104 + v104) + 10.0) + 0.0) + (float)(v105 + 10.0);
  v217.fields.m_Width = v105;
  v217.fields.m_Height = v105;
  if ( UnityEngine_GUI__Button(v217, v132, 0) )
  {
    v133 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v133;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_65488612(v133, 1, 0);
  }
  v204 = v120;
  v208 = *((float *)&format.monitor + 1) * 0.9;
  v134 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  monitor_high = this->fields.scrollSpeed;
  v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high);
  v206 = 10;
  v136 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v206);
  v137 = System_String__Format_64008168((System_String_o *)StringLiteral_1719/*"<size={0}>{1}/{2}</size>"*/, v134, v135, v136, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v218.fields.m_XMin = v105 + (float)(v105 + (float)(v105 + v108));
  v218.fields.m_YMin = (float)((float)((float)(v104 + v104) + 10.0) + 0.0) + (float)(v105 + 10.0);
  v218.fields.m_Width = v105 + 10.0;
  v218.fields.m_Height = v105;
  UnityEngine_GUI__Box(v218, v137, 0);
  v205 = HIDWORD(format.monitor);
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v205);
  v139 = System_String__Format((System_String_o *)StringLiteral_1717/*"<size={0}>+</size>"*/, v138, 0);
  v219.fields.m_XMin = v124 + (float)(v105 + (float)(v105 + (float)(v105 + v108)));
  v219.fields.m_YMin = (float)((float)((float)(v104 + v104) + 10.0) + 0.0) + (float)(v105 + 10.0);
  v219.fields.m_Width = v105;
  v219.fields.m_Height = v105;
  if ( UnityEngine_GUI__Button(v219, v139, 0) )
  {
    v140 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v140;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_65488940(v140, 10, 0);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0);
  v208 = *((float *)&format.monitor + 1);
  v141 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v208);
  v142 = System_String__Format((System_String_o *)StringLiteral_1723/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v141, 0);
  v143 = *p_labelStyle;
  v144 = v142;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v220.fields.m_Height = 40.0;
  v220.fields.m_XMin = v108;
  v220.fields.m_YMin = v124 + (float)((float)((float)((float)(v104 + v104) + 10.0) + 0.0) + (float)(v105 + 10.0));
  v220.fields.m_Width = v106;
  UnityEngine_GUI__Label_71790084(v220, v144, v143, 0);
  v145 = (float)((float)UnityEngine_Screen__get_width(0) - v106) + -10.0;
  v146 = *((float *)&format.monitor + 1) + 10.0;
  v147 = UnityEngine_Screen__get_height(0);
  v148 = MotionInfo_TypeInfo;
  v149 = (float)v147;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v148 = MotionInfo_TypeInfo;
  }
  v150 = v148->static_fields;
  v221.fields.m_YMin = 0.0;
  v221.fields.m_Width = v145;
  v221.fields.m_Height = v149;
  *(_QWORD *)&viewRect.fields.m_XMin = 0;
  viewRect.fields.m_Width = v145 + -20.0;
  viewRect.fields.m_Height = v146 * (float)v150->voicePlayLogLineSize;
  v221.fields.m_XMin = 0.0;
  v151 = UnityEngine_GUI__BeginScrollView(v221, v150->scrollPosition, viewRect, 0);
  v152 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v151;
  v153 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v152->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v153 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v153->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v153->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v153);
      v153 = MotionInfo___c_TypeInfo;
    }
    v156 = (Il2CppObject *)v153->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1C6BC54(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v156, Method_MotionInfo___c__OnGUI_b__46_0__, 0);
    v157 = MotionInfo___c_TypeInfo->static_fields;
    v157->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v157->__9__46_0, (int32_t)_9__46_0, v158, v159);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_3174900 *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1C6BC60(normal, v7);
  v160 = *(_QWORD *)normal;
  v161 = normal;
  v162 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v163 = (int *)(*(_QWORD *)(v160 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v163 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v162;
      v163 += 4;
      if ( !v162 )
        goto LABEL_159;
    }
    v164 = v160 + 16LL * *v163 + 312;
  }
  else
  {
LABEL_159:
    v164 = sub_1C41D90(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v166 = (*(__int64 (__fastcall **)(char *, _QWORD))v164)(v161, *(_QWORD *)(v164 + 8));
  if ( !v166 )
    sub_1C6BC60(0, v165);
  for ( i = 0; ; ++i )
  {
    v168 = *(_QWORD *)v166;
    v169 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
    {
      v170 = (int *)(*(_QWORD *)(v168 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v170 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v169;
        v170 += 4;
        if ( !v169 )
          goto LABEL_168;
      }
      v171 = v168 + 16LL * *v170 + 312;
    }
    else
    {
LABEL_168:
      v171 = sub_1C41D90(v166, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v171)(v166, *(_QWORD *)(v171 + 8)) & 1) == 0 )
      break;
    v172 = *(_QWORD *)v166;
    v173 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
    {
      v174 = (int *)(*(_QWORD *)(v172 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v174 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v173;
        v174 += 4;
        if ( !v173 )
          goto LABEL_175;
      }
      v175 = v172 + 16LL * *v174 + 312;
    }
    else
    {
LABEL_175:
      v175 = sub_1C41D90(v166, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v176 = (*(__int64 (__fastcall **)(__int64, _QWORD))v175)(v166, *(_QWORD *)(v175 + 8));
    v177 = sub_1C6BAB0(string___TypeInfo, 5);
    v181 = v177;
    if ( !v177 )
      sub_1C6BC60(0, v178);
    if ( !*(_DWORD *)(v177 + 24) )
      sub_1C6BC68(v177);
    v182 = StringLiteral_1716/*"<size="*/;
    *(_QWORD *)(v177 + 32) = StringLiteral_1716/*"<size="*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v177 + 32), v182, v179, v180);
    v184 = System_Single__ToString(v183, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v181 + 24) <= 1u )
      sub_1C6BC68(v184);
    *(_QWORD *)(v181 + 40) = v184;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v181 + 40), (int32_t)v184, v185, v186);
    if ( *(_DWORD *)(v181 + 24) <= 2u )
      sub_1C6BC68(v187);
    v190 = StringLiteral_1742/*">"*/;
    *(_QWORD *)(v181 + 48) = StringLiteral_1742/*">"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v181 + 48), v190, v188, v189);
    if ( *(_DWORD *)(v181 + 24) <= 3u )
      sub_1C6BC68(v191);
    *(_QWORD *)(v181 + 56) = v176;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v181 + 56), v176, v192, v193);
    if ( *(_DWORD *)(v181 + 24) <= 4u )
      sub_1C6BC68(v194);
    v197 = StringLiteral_1519/*"</size>"*/;
    *(_QWORD *)(v181 + 64) = StringLiteral_1519/*"</size>"*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v181 + 64), v197, v195, v196);
    v198 = System_String__Concat_64007324((System_String_array *)v181, 0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v222.fields.m_YMin = v146 * (float)i;
    v222.fields.m_XMin = 0.0;
    v222.fields.m_Width = v145 + -20.0;
    v222.fields.m_Height = v146;
    UnityEngine_GUI__Label(v222, v198, 0);
  }
  v199 = *(_QWORD *)v166;
  v200 = *(unsigned __int16 *)(*(_QWORD *)v166 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v166 + 302LL) )
  {
    v201 = (int *)(*(_QWORD *)(v199 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v201 - 1) != System_IDisposable_TypeInfo )
    {
      --v200;
      v201 += 4;
      if ( !v200 )
        goto LABEL_190;
    }
    v202 = v199 + 16LL * *v201 + 312;
  }
  else
  {
LABEL_190:
    v202 = sub_1C41D90(v166, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v202)(v166, *(_QWORD *)(v202 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0);
  this->fields.isLogAreaShow = v204;
}


void MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  __int64 v3; // x20
  MotionInfo_c *v4; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x20
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  MotionInfo_c *v13; // x0
  __int64 v14; // x20
  struct MotionInfo_StaticFields *v15; // x0
  MotionInfo_c *v16; // x0

  if ( (byte_4CB572F & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB572F = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v3 = StringLiteral_1/*""*/;
  if ( !byte_4CB57AE )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AE = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, v3, v1, v2);
  v8 = StringLiteral_1/*""*/;
  if ( !byte_4CB57AF )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57AF = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v10 = v9->static_fields;
  v10->_VoiceId_k__BackingField = (struct System_String_o *)v8;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->_VoiceId_k__BackingField, v8, v6, v7);
  if ( !byte_4CB57B0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57B0 = 1;
  }
  v13 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4CB57B1 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4CB57B1 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v14 = StringLiteral_1/*""*/;
  if ( !byte_4CB57B2 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4CB57B2 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v15 = v13->static_fields;
  v15->_VoiceType_k__BackingField = (struct System_String_o *)v14;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v15->_VoiceType_k__BackingField, v14, v11, v12);
  if ( !byte_4CB57B3 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57B3 = 1;
  }
  v16 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
  }
  v16->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4CB57B4 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
    byte_4CB57B4 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MotionInfo_TypeInfo;
  }
  v16->static_fields->_IsSe_k__BackingField = 0;
}


void MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4CB5735 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5735 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4CB57B5 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB57B5 = 1;
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

  if ( (byte_4CB5734 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5734 = 1;
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
    sub_1C6BC60(v2, v1);
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
  const MethodInfo *v3; // x3
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB572C & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB572C = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1C6B9AC((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)svtName, (int32_t)method, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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

  if ( (byte_4CB5733 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5733 = 1;
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
                  (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0) )
  {
LABEL_24:
    sub_1C6BC60(Item, v1);
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
             (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_List_string___get_Item__);
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
      (const MethodInfo_3802148 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
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

  if ( (byte_4CB5728 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5728 = 1;
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

  if ( (byte_4CB572A & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB572A = 1;
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

  if ( (byte_4CB5722 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5722 = 1;
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

  if ( (byte_4CB5726 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5726 = 1;
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

  if ( (byte_4CB571C & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB571C = 1;
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

  if ( (byte_4CB5720 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5720 = 1;
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

  if ( (byte_4CB5724 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5724 = 1;
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

  if ( (byte_4CB571E & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB571E = 1;
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

  if ( (byte_4CB5729 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5729 = 1;
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

  if ( (byte_4CB572B & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB572B = 1;
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
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4CB5723 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5723 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4CB5727 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5727 = 1;
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
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4CB571D & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB571D = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4CB5721 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5721 = 1;
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
  const MethodInfo *v3; // x3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4CB5725 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB5725 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4CB571F & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo_TypeInfo);
    byte_4CB571F = 1;
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
  const MethodInfo *v3; // x3

  if ( (byte_4CB5737 & 1) == 0 )
  {
    sub_1C6BA08(&MotionInfo___c_TypeInfo);
    byte_4CB5737 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(MotionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)MotionInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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