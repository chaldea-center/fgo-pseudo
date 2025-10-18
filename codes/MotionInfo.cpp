void MotionInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v4; // x19
  struct MotionInfo_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C42426 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_1C37058(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_1C37058(&MotionInfo_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C42426 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, StringLiteral_1/*""*/, v1, v2);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v5 = MotionInfo_TypeInfo->static_fields;
  v5->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->voicePlaybackLogList, (int32_t)v4, v6, v7);
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

  if ( (byte_4C42420 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    sub_1C37058(&StringLiteral_11511/*"SE"*/);
    byte_4C42420 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C424A0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C424A0 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4C424A1 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4C424A1 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4C4249F )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4C4249F = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4C424A3 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C424A3 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4C424A4 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4C424A4 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4C424A5 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4C424A5 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsRandom_k__BackingField = 0;
  v10 = StringLiteral_11511/*"SE"*/;
  if ( !byte_4C424A2 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4C424A2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v11 = v9->static_fields;
  v11->_VoiceType_k__BackingField = (struct System_String_o *)v10;
  sub_1C36FFC((CGThumbnailListItem_o *)&v11->_VoiceType_k__BackingField, v10, v7, v8);
  MotionInfo__AddVoiceLog(v12);
}


void MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Object_array *items; // x8
  _QWORD *v7; // x9
  __int64 size; // x10
  Il2CppClass *v9; // x1
  Il2CppClass **v10; // x0
  MotionInfo_c *v11; // x0
  System_String_o *VoiceId_k__BackingField; // x20
  System_String_o *v13; // x0
  System_String_o *v14; // x8
  _BOOL4 IsSe_k__BackingField; // w20
  MotionInfo_c *v16; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass *v24; // x1
  Il2CppClass **v25; // x0
  MotionInfo_c *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass *v32; // x1
  Il2CppClass **v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  char *v36; // x20
  int32_t v37; // w1
  MotionInfo_c *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  int32_t v43; // w1
  MotionInfo_c *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  struct System_Object_array *v51; // x8
  _QWORD *v52; // x9
  __int64 v53; // x10
  Il2CppClass *v54; // x1
  Il2CppClass **v55; // x0
  MotionInfo_c *v56; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  struct System_Object_array *v61; // x8
  _QWORD *v62; // x9
  __int64 v63; // x10
  Il2CppClass *v64; // x1
  Il2CppClass **v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  __int64 v71; // x8
  const MethodInfo *v72; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C42421 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&MotionInfo_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_332/*" 確率 / 合計 : "*/);
    sub_1C37058(&StringLiteral_201/*" VoiceID : "*/);
    sub_1C37058(&StringLiteral_1126/*"0.00"*/);
    sub_1C37058(&StringLiteral_161/*" / "*/);
    sub_1C37058(&StringLiteral_876/*"--- Voice・SE Log ---"*/);
    sub_1C37058(&StringLiteral_194/*" SEID : "*/);
    sub_1C37058(&StringLiteral_331/*" 分類 : "*/);
    sub_1C37058(&StringLiteral_12733/*"ServantID : "*/);
    byte_4C42421 = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63561656((System_String_o *)StringLiteral_876/*"--- Voice・SE Log ---"*/, NewLine, 0);
  if ( !v1 )
    goto LABEL_74;
  items = v1->fields._items;
  v7 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v1->fields._size;
  v9 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v10[4] = v9;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)v9, v4, v5);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C42498 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42498 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4C4249A )
      {
        sub_1C37058(&MotionInfo_TypeInfo);
        byte_4C4249A = 1;
      }
      v11 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v11 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v11->static_fields->_VoiceId_k__BackingField;
      v13 = System_Environment__get_NewLine(0);
      v14 = (System_String_o *)StringLiteral_194/*" SEID : "*/;
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
  if ( !byte_4C42499 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42499 = 1;
  }
  v16 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v16->static_fields->_VoiceServantId_k__BackingField;
  v18 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63599904(
                                   (System_String_o *)StringLiteral_12733/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v18,
                                   0);
  v21 = v1->fields._items;
  v22 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v21 )
LABEL_74:
    sub_1C372B4(voicePlaybackLogList);
  v23 = v1->fields._size;
  v24 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v21->obj.klass + v23;
    v1->fields._size = v23 + 1;
    v25[4] = v24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  if ( !byte_4C4249A )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249A = 1;
  }
  v26 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v26 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v26->static_fields->_VoiceId_k__BackingField;
  v13 = System_Environment__get_NewLine(0);
  v14 = (System_String_o *)StringLiteral_201/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_63599904(v14, VoiceId_k__BackingField, v13, 0);
  v29 = v1->fields._items;
  v30 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v29 )
    goto LABEL_74;
  v31 = v1->fields._size;
  v32 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v33 = &v29->obj.klass + v31;
    v1->fields._size = v31 + 1;
    v33[4] = v32;
    sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 4), (int32_t)v32, v27, v28);
  }
  voicePlaybackLogList = (char *)sub_1C37100(string___TypeInfo, 5);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v36 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v37 = StringLiteral_332/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_332/*" 確率 / 合計 : "*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(voicePlaybackLogList + 32), v37, v34, v35);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C4249B )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249B = 1;
  }
  v38 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v38 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v38->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_65156916(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v36 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v36 + 5) = voicePlaybackLogList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 40), (int32_t)voicePlaybackLogList, v39, v40);
  if ( *((_DWORD *)v36 + 6) <= 2u )
    goto LABEL_75;
  v43 = StringLiteral_161/*" / "*/;
  *((_QWORD *)v36 + 6) = StringLiteral_161/*" / "*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 48), v43, v41, v42);
  if ( !byte_4C4249C )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249C = 1;
  }
  v44 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v44 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v44->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_65156916(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v36 + 6) <= 3u
    || (*((_QWORD *)v36 + 7) = voicePlaybackLogList,
        sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 56), (int32_t)voicePlaybackLogList, v45, v46),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0),
        *((_DWORD *)v36 + 6) <= 4u) )
  {
LABEL_75:
    sub_1C372BC(voicePlaybackLogList);
  }
  *((_QWORD *)v36 + 8) = voicePlaybackLogList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 64), (int32_t)voicePlaybackLogList, v47, v48);
  voicePlaybackLogList = (char *)System_String__Concat_63602172((System_String_array *)v36, 0);
  v51 = v1->fields._items;
  v52 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v51 )
    goto LABEL_74;
  v53 = v1->fields._size;
  v54 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v53 >= LODWORD(v51->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v51->obj.klass + v53;
    v1->fields._size = v53 + 1;
    v55[4] = v54;
    sub_1C36FFC((CGThumbnailListItem_o *)(v55 + 4), (int32_t)v54, v49, v50);
  }
  if ( !byte_4C4249D )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249D = 1;
  }
  v56 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v56 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v56->static_fields->_VoiceType_k__BackingField;
  v58 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63599904(
                                   (System_String_o *)StringLiteral_331/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v58,
                                   0);
  v61 = v1->fields._items;
  v62 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v61 )
    goto LABEL_74;
  v63 = v1->fields._size;
  v64 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v63 >= LODWORD(v61->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v61->obj.klass + v63;
    v1->fields._size = v63 + 1;
    v65[4] = v64;
    sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)v64, v59, v60);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v68 = *((_QWORD *)voicePlaybackLogList + 2);
  v69 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v68 )
    goto LABEL_74;
  v70 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v70 >= *(_DWORD *)(v68 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v1,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = v68 + 8 * v70;
    *((_DWORD *)voicePlaybackLogList + 6) = v70 + 1;
    *(_QWORD *)(v71 + 32) = v1;
    sub_1C36FFC((CGThumbnailListItem_o *)(v71 + 32), (int32_t)v1, v66, v67);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v72);
}


void MotionInfo__AddVoiceLog_40978132(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  MotionInfo_c *v13; // x0
  struct System_Object_array *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x8
  const MethodInfo *v18; // x0

  if ( (byte_4C42422 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42422 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v3 )
    goto LABEL_16;
  items = v3->fields._items;
  v8 = Method_System_Collections_Generic_List_string__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)str,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v10[4] = (Il2CppClass *)str;
    sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)str, v5, v6);
  }
  v13 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
  }
  voicePlaybackLogList = (System_Collections_Generic_List_object__o *)v13->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList
    || (v14 = voicePlaybackLogList->fields._items,
        v15 = Method_System_Collections_Generic_List_List_string___Add__,
        ++voicePlaybackLogList->fields._version,
        !v14) )
  {
LABEL_16:
    sub_1C372B4(voicePlaybackLogList);
  }
  v16 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v16 >= LODWORD(v14->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->obj.klass + v16;
    voicePlaybackLogList->fields._size = v16 + 1;
    v17[4] = (Il2CppClass *)v3;
    sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v3, v11, v12);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v18);
}


System_String_o *MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = type;
  if ( (byte_4C4241E & 1) == 0 )
  {
    sub_1C37058(&BattleCommand_TypeInfo);
    sub_1C37058(&StringLiteral_25429/*"バスター"*/);
    sub_1C37058(&StringLiteral_25408/*"クイック"*/);
    sub_1C37058(&StringLiteral_25397/*"アーツ"*/);
    sub_1C37058(&StringLiteral_25401/*"エクストラ"*/);
    byte_4C4241E = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0) )
  {
    case 1:
      v4 = &StringLiteral_25397/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v4 = &StringLiteral_25429/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v4 = &StringLiteral_25408/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v4 = &StringLiteral_25401/*"エクストラ"*/;
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
  int32_t commandType; // w20
  __int64 v8; // x9
  MotionInfo_c *v9; // x8
  System_String_o *v10; // x21
  MotionInfo_c *v11; // x0
  System_String_o *VoiceServantId_k__BackingField; // x21
  System_String_o *NewLine; // x0
  System_String_o *v14; // x0
  MotionInfo_c *v15; // x0
  uint32_t cctor_finished; // w8
  System_String_o **v17; // x9
  System_String_o *v18; // x22
  MotionInfo_c *v19; // x0
  System_String_o *VoiceId_k__BackingField; // x23
  System_String_o *v21; // x0
  System_String_o *v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  char *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  MotionInfo_c *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w1
  MotionInfo_c *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  System_String_o *v46; // x22
  __int64 v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  int32_t v65; // w1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  int32_t v76; // w1
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w2
  const MethodInfo *v84; // x3
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  int32_t v87; // w1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  Il2CppObject *v96; // x21
  int32_t height; // w22
  float v98; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  float v103; // s13
  float v104; // s10
  float v105; // s8
  int v106; // w25
  float v107; // s9
  float width; // s12
  float v109; // s11
  int32_t v110; // w22
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  __int64 v114; // x5
  __int64 v115; // x6
  __int64 v116; // x7
  Il2CppObject *v117; // x0
  System_String_o *v118; // x0
  UnityEngine_GUIStyle_o *v119; // x21
  System_String_o *v120; // x22
  _BOOL4 isLogAreaShow; // w22
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x4
  __int64 v125; // x5
  __int64 v126; // x6
  __int64 v127; // x7
  Il2CppObject *v128; // x1
  Il2CppObject **v129; // x9
  System_String_o *v130; // x21
  __int64 v131; // x2
  __int64 v132; // x3
  __int64 v133; // x4
  __int64 v134; // x5
  __int64 v135; // x6
  __int64 v136; // x7
  bool v137; // w22
  Il2CppObject *v138; // x0
  System_String_o *v139; // x21
  __int64 v140; // x2
  __int64 v141; // x3
  __int64 v142; // x4
  __int64 v143; // x5
  __int64 v144; // x6
  __int64 v145; // x7
  MotionInfo_c *v146; // x0
  float v147; // s11
  Il2CppObject *v148; // x0
  System_String_o *v149; // x21
  __int64 v150; // x2
  __int64 v151; // x3
  __int64 v152; // x4
  __int64 v153; // x5
  __int64 v154; // x6
  __int64 v155; // x7
  MotionInfo_c *v156; // x0
  Il2CppObject *v157; // x0
  System_String_o *v158; // x21
  __int64 v159; // x2
  __int64 v160; // x3
  __int64 v161; // x4
  __int64 v162; // x5
  __int64 v163; // x6
  __int64 v164; // x7
  MotionInfo_c *v165; // x0
  Il2CppObject *v166; // x0
  System_String_o *v167; // x21
  __int64 v168; // x2
  __int64 v169; // x3
  __int64 v170; // x4
  __int64 v171; // x5
  __int64 v172; // x6
  __int64 v173; // x7
  int32_t v174; // w21
  Il2CppObject *v175; // x21
  __int64 v176; // x2
  __int64 v177; // x3
  __int64 v178; // x4
  __int64 v179; // x5
  __int64 v180; // x6
  __int64 v181; // x7
  Il2CppObject *v182; // x22
  __int64 v183; // x2
  __int64 v184; // x3
  __int64 v185; // x4
  __int64 v186; // x5
  __int64 v187; // x6
  __int64 v188; // x7
  Il2CppObject *v189; // x0
  System_String_o *v190; // x21
  __int64 v191; // x2
  __int64 v192; // x3
  __int64 v193; // x4
  __int64 v194; // x5
  __int64 v195; // x6
  __int64 v196; // x7
  Il2CppObject *v197; // x0
  System_String_o *v198; // x0
  int32_t v199; // w21
  __int64 v200; // x2
  __int64 v201; // x3
  __int64 v202; // x4
  __int64 v203; // x5
  __int64 v204; // x6
  __int64 v205; // x7
  Il2CppObject *v206; // x0
  System_String_o *v207; // x0
  UnityEngine_GUIStyle_o *v208; // x20
  System_String_o *v209; // x21
  float v210; // s10
  float v211; // s9
  int32_t v212; // w0
  MotionInfo_c *v213; // x8
  float v214; // s11
  struct MotionInfo_StaticFields *v215; // x8
  UnityEngine_Vector2_o v216; // kr00_8
  MotionInfo_c *v217; // x8
  MotionInfo___c_c *v218; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v221; // x22
  struct MotionInfo___c_StaticFields *v222; // x0
  int32_t v223; // w2
  const MethodInfo *v224; // x3
  __int64 v225; // x8
  char *v226; // x20
  __int64 v227; // x9
  int *v228; // x10
  __int64 v229; // x0
  __int64 v230; // x20
  int i; // w25
  __int64 v232; // x8
  __int64 v233; // x9
  int *v234; // x10
  __int64 v235; // x0
  __int64 v236; // x8
  __int64 v237; // x9
  int *v238; // x10
  __int64 v239; // x0
  __int64 v240; // x22
  __int64 v241; // x0
  int32_t v242; // w2
  const MethodInfo *v243; // x3
  __int64 v244; // x21
  int32_t v245; // w1
  float v246; // s0
  System_String_o *v247; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  __int64 v250; // x0
  int32_t v251; // w2
  const MethodInfo *v252; // x3
  int32_t v253; // w1
  __int64 v254; // x0
  int32_t v255; // w2
  const MethodInfo *v256; // x3
  __int64 v257; // x0
  int32_t v258; // w2
  const MethodInfo *v259; // x3
  int32_t v260; // w1
  System_String_o *v261; // x21
  __int64 v262; // x8
  __int64 v263; // x9
  int *v264; // x10
  __int64 v265; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v267; // [xsp+18h] [xbp-B8h]
  int v268; // [xsp+1Ch] [xbp-B4h] BYREF
  int v269; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v271; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v273; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v274; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v275; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v276; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v277; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v278; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v279; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v280; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v281; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v282; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v283; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v284; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v285; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C4241D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_SelectMany_List_string___string___);
    sub_1C37058(&System_Func_List_string___IEnumerable_string___TypeInfo);
    sub_1C37058(&UnityEngine_GUIStyle_TypeInfo);
    sub_1C37058(&UnityEngine_GUI_TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&MotionInfo_TypeInfo);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&Method_MotionInfo___c__OnGUI_b__46_0__);
    sub_1C37058(&MotionInfo___c_TypeInfo);
    sub_1C37058(&StringLiteral_1725/*"<size={0}>+</size>"*/);
    sub_1C37058(&StringLiteral_25380/*"【モーションID】"*/);
    sub_1C37058(&StringLiteral_25379/*"【ボイス・SE】"*/);
    sub_1C37058(&StringLiteral_1729/*"<size={0}>▲</size>"*/);
    sub_1C37058(&StringLiteral_15362/*"VoiceID : "*/);
    sub_1C37058(&StringLiteral_25381/*"【名前】"*/);
    sub_1C37058(&StringLiteral_332/*" 確率 / 合計 : "*/);
    sub_1C37058(&StringLiteral_1732/*"<size={0}>ログ消去</size>"*/);
    sub_1C37058(&StringLiteral_1724/*"<size="*/);
    sub_1C37058(&StringLiteral_25378/*"【カード属性】"*/);
    sub_1C37058(&StringLiteral_1126/*"0.00"*/);
    sub_1C37058(&StringLiteral_1731/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/);
    sub_1C37058(&StringLiteral_161/*" / "*/);
    sub_1C37058(&StringLiteral_194/*" SEID : "*/);
    sub_1C37058(&StringLiteral_25358/*"▶ ログ非表示"*/);
    sub_1C37058(&StringLiteral_1730/*"<size={0}>▼</size>"*/);
    sub_1C37058(&StringLiteral_1727/*"<size={0}>{1}/{2}</size>"*/);
    sub_1C37058(&StringLiteral_1728/*"<size={0}>{1}</size>"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    sub_1C37058(&StringLiteral_331/*" 分類 : "*/);
    sub_1C37058(&StringLiteral_1527/*"</size>"*/);
    sub_1C37058(&StringLiteral_1750/*">"*/);
    sub_1C37058(&StringLiteral_12733/*"ServantID : "*/);
    sub_1C37058(&StringLiteral_25359/*"◀ ログ表示　"*/);
    sub_1C37058(&StringLiteral_1726/*"<size={0}>-</size>"*/);
    byte_4C4241D = 1;
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
    v8 = 64;
    if ( commandType == -1 )
      v8 = 60;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)normal, *(_DWORD *)((char *)&actionData->klass + v8), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C42498 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42498 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  if ( v9->static_fields->_IsSe_k__BackingField )
  {
    v10 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v9->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v9);
    if ( !byte_4C42499 )
    {
      sub_1C37058(&MotionInfo_TypeInfo);
      byte_4C42499 = 1;
    }
    v11 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v11 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v11->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0);
    v14 = System_String__Concat_63599904(
            (System_String_o *)StringLiteral_12733/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0);
    v9 = MotionInfo_TypeInfo;
    v10 = v14;
  }
  if ( !v9->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v9);
  if ( !byte_4C42498 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42498 = 1;
  }
  v15 = MotionInfo_TypeInfo;
  cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v15 = MotionInfo_TypeInfo;
    cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  }
  if ( v15->static_fields->_IsSe_k__BackingField )
    v17 = (System_String_o **)&StringLiteral_194/*" SEID : "*/;
  else
    v17 = (System_String_o **)&StringLiteral_15362/*"VoiceID : "*/;
  v18 = *v17;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v15);
  if ( !byte_4C4249A )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249A = 1;
  }
  v19 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v19 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v19->static_fields->_VoiceId_k__BackingField;
  v21 = System_Environment__get_NewLine(0);
  v22 = System_String__Concat_63601908(v10, v18, VoiceId_k__BackingField, v21, 0);
  normal = (char *)sub_1C37100(string___TypeInfo, 8);
  if ( !normal )
    goto LABEL_203;
  v25 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v22;
  sub_1C36FFC((CGThumbnailListItem_o *)(normal + 32), (int32_t)v22, v23, v24);
  if ( *((_DWORD *)v25 + 6) <= 1u )
    goto LABEL_196;
  v28 = StringLiteral_332/*" 確率 / 合計 : "*/;
  *((_QWORD *)v25 + 5) = StringLiteral_332/*" 確率 / 合計 : "*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 40), v28, v26, v27);
  if ( !byte_4C4249B )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249B = 1;
  }
  v29 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v29 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v29->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_65156916(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v25 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v25 + 6) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 48), (int32_t)normal, v30, v31);
  if ( *((_DWORD *)v25 + 6) <= 3u )
    goto LABEL_196;
  v34 = StringLiteral_161/*" / "*/;
  *((_QWORD *)v25 + 7) = StringLiteral_161/*" / "*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 56), v34, v32, v33);
  if ( !byte_4C4249C )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249C = 1;
  }
  v35 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v35 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v35->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_65156916(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v25 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v25 + 8) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 64), (int32_t)normal, v36, v37);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *((_DWORD *)v25 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v25 + 9) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 72), (int32_t)normal, v38, v39);
  if ( *((_DWORD *)v25 + 6) <= 6u )
    goto LABEL_196;
  v42 = StringLiteral_331/*" 分類 : "*/;
  *((_QWORD *)v25 + 10) = StringLiteral_331/*" 分類 : "*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 80), v42, v40, v41);
  if ( !byte_4C4249D )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249D = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v25 + 6) <= 7u )
    goto LABEL_196;
  v45 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v25 + 11) = v45;
  sub_1C36FFC((CGThumbnailListItem_o *)(v25 + 88), v45, v43, v44);
  v46 = System_String__Concat_63602172((System_String_array *)v25, 0);
  v47 = sub_1C37100(string___TypeInfo, 21);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( !v47 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v47 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v47 + 32) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 32), (int32_t)normal, v48, v49);
  if ( *(_DWORD *)(v47 + 24) <= 1u )
    goto LABEL_196;
  v52 = StringLiteral_25381/*"【名前】"*/;
  *(_QWORD *)(v47 + 40) = StringLiteral_25381/*"【名前】"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 40), v52, v50, v51);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 48) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 48), (int32_t)normal, v53, v54);
  if ( *(_DWORD *)(v47 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v47 + 56) = static_fields->svtName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 56), (int32_t)svtName, v55, v56);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 64) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 64), (int32_t)normal, v59, v60);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 72) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 72), (int32_t)normal, v61, v62);
  if ( *(_DWORD *)(v47 + 24) <= 6u )
    goto LABEL_196;
  v65 = StringLiteral_25380/*"【モーションID】"*/;
  *(_QWORD *)(v47 + 80) = StringLiteral_25380/*"【モーションID】"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 80), v65, v63, v64);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 88) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 88), (int32_t)normal, v66, v67);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0);
  if ( *(_DWORD *)(v47 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 96) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 96), (int32_t)normal, v68, v69);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 104) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 104), (int32_t)normal, v70, v71);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v47 + 112) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 112), (int32_t)normal, v72, v73);
  if ( *(_DWORD *)(v47 + 24) <= 0xBu )
    goto LABEL_196;
  v76 = StringLiteral_25378/*"【カード属性】"*/;
  *(_QWORD *)(v47 + 120) = StringLiteral_25378/*"【カード属性】"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 120), v76, v74, v75);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v47 + 128) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 128), (int32_t)normal, v77, v78);
  if ( *(_DWORD *)(v47 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v47 + 136) = TypeName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 136), (int32_t)TypeName, v79, v80);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v47 + 144) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 144), (int32_t)normal, v81, v82);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v47 + 152) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 152), (int32_t)normal, v83, v84);
  if ( *(_DWORD *)(v47 + 24) <= 0x10u )
    goto LABEL_196;
  v87 = StringLiteral_25379/*"【ボイス・SE】"*/;
  *(_QWORD *)(v47 + 160) = StringLiteral_25379/*"【ボイス・SE】"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 160), v87, v85, v86);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v47 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v47 + 168) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 168), (int32_t)normal, v88, v89);
  if ( *(_DWORD *)(v47 + 24) <= 0x12u
    || (*(_QWORD *)(v47 + 176) = v46,
        sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 176), (int32_t)v46, v90, v91),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v47 + 24) <= 0x13u)
    || (*(_QWORD *)(v47 + 184) = normal,
        sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 184), (int32_t)normal, v92, v93),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v47 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1C372BC(normal);
  }
  *(_QWORD *)(v47 + 192) = normal;
  sub_1C36FFC((CGThumbnailListItem_o *)(v47 + 192), (int32_t)normal, v94, v95);
  v96 = (Il2CppObject *)System_String__Concat_63602172((System_String_array *)v47, 0);
  height = UnityEngine_Screen__get_height(0);
  v98 = (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v98 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0);
    *p_labelStyle = none;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.labelStyle, (int32_t)none, v101, v102);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0);
    if ( !normal )
      goto LABEL_203;
    v273.fields.r = 1.0;
    v273.fields.g = 1.0;
    v273.fields.b = 1.0;
    v273.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v273, 0);
  }
  v103 = (float)height * 0.25;
  v104 = v98 * 40.0;
  v105 = v98 * 250.0;
  v106 = 3;
  v107 = (float)UnityEngine_Screen__get_width(0) - v105;
  do
  {
    width = v105;
    if ( this->fields.isLogAreaShow )
      v109 = 0.0;
    else
      v109 = v107;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0);
    v110 = UnityEngine_Screen__get_height(0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v274.fields.m_Height = (float)v110;
    v274.fields.m_YMin = 0.0;
    v274.fields.m_XMin = v109;
    v274.fields.m_Width = width;
    UnityEngine_GUI__Box(v274, (System_String_o *)StringLiteral_1/*""*/, 0);
    --v106;
  }
  while ( v106 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0);
  v271 = *((float *)&format.monitor + 1);
  v117 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v111, v112, v113, v114, v115, v116);
  v118 = System_String__Format_63602948((System_String_o *)StringLiteral_1728/*"<size={0}>{1}</size>"*/, v117, v96, 0);
  v119 = *p_labelStyle;
  v120 = v118;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v275.fields.m_YMin = 0.0;
  v275.fields.m_XMin = v107;
  v275.fields.m_Width = v105;
  v275.fields.m_Height = v103 + v103;
  UnityEngine_GUI__Label_71395344(v275, v120, v119, 0);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v122, v123, v124, v125, v126, v127);
  if ( this->fields.isLogAreaShow )
    v129 = (Il2CppObject **)&StringLiteral_25358/*"▶ ログ非表示"*/;
  else
    v129 = (Il2CppObject **)&StringLiteral_25359/*"◀ ログ表示　"*/;
  v130 = System_String__Format_63602948((System_String_o *)StringLiteral_1728/*"<size={0}>{1}</size>"*/, v128, *v129, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v276.fields.m_XMin = v107;
  v276.fields.m_YMin = (float)((float)(v103 + v103) + 10.0) + 0.0;
  v276.fields.m_Width = v105 * 0.5;
  v276.fields.m_Height = v104;
  v137 = isLogAreaShow;
  if ( UnityEngine_GUI__Button(v276, v130, 0) )
    v137 = !this->fields.isLogAreaShow;
  v271 = *((float *)&format.monitor + 1);
  v138 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v131, v132, v133, v134, v135, v136);
  v139 = System_String__Format((System_String_o *)StringLiteral_1732/*"<size={0}>ログ消去</size>"*/, v138, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v277.fields.m_XMin = (float)(v105 * 0.5) + v107;
  v277.fields.m_YMin = (float)((float)(v103 + v103) + 10.0) + 0.0;
  v277.fields.m_Width = v105 * 0.5;
  v277.fields.m_Height = v104;
  if ( UnityEngine_GUI__Button(v277, v139, 0) )
  {
    v146 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v146);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v137;
    return;
  }
  v147 = v104 + 10.0;
  v271 = *((float *)&format.monitor + 1);
  v148 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v140, v141, v142, v143, v144, v145);
  v149 = System_String__Format((System_String_o *)StringLiteral_1729/*"<size={0}>▲</size>"*/, v148, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v278.fields.m_XMin = v107;
  v278.fields.m_YMin = (float)((float)((float)(v103 + v103) + 10.0) + 0.0) + (float)(v104 + 10.0);
  v278.fields.m_Width = v104;
  v278.fields.m_Height = v104;
  if ( UnityEngine_GUI__RepeatButton(v278, v149, 0) )
  {
    v156 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v156 = MotionInfo_TypeInfo;
    }
    v156->static_fields->scrollPosition.fields.y = v156->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v271 = *((float *)&format.monitor + 1);
  v157 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v150, v151, v152, v153, v154, v155);
  v158 = System_String__Format((System_String_o *)StringLiteral_1730/*"<size={0}>▼</size>"*/, v157, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v279.fields.m_XMin = v104 + v107;
  v279.fields.m_YMin = (float)((float)((float)(v103 + v103) + 10.0) + 0.0) + (float)(v104 + 10.0);
  v279.fields.m_Width = v104;
  v279.fields.m_Height = v104;
  if ( UnityEngine_GUI__RepeatButton(v279, v158, 0) )
  {
    v165 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v165 = MotionInfo_TypeInfo;
    }
    v165->static_fields->scrollPosition.fields.y = v165->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v271 = *((float *)&format.monitor + 1);
  v166 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v159, v160, v161, v162, v163, v164);
  v167 = System_String__Format((System_String_o *)StringLiteral_1726/*"<size={0}>-</size>"*/, v166, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v280.fields.m_XMin = v104 + (float)(v104 + v107);
  v280.fields.m_YMin = (float)((float)((float)(v103 + v103) + 10.0) + 0.0) + (float)(v104 + 10.0);
  v280.fields.m_Width = v104;
  v280.fields.m_Height = v104;
  if ( UnityEngine_GUI__Button(v280, v167, 0) )
  {
    v174 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v174;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_65085088(v174, 1, 0);
  }
  v267 = v137;
  v271 = *((float *)&format.monitor + 1) * 0.9;
  v175 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v168, v169, v170, v171, v172, v173);
  monitor_high = this->fields.scrollSpeed;
  v182 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v176, v177, v178, v179, v180, v181);
  v269 = 10;
  v189 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v269, v183, v184, v185, v186, v187, v188);
  v190 = System_String__Format_63603016((System_String_o *)StringLiteral_1727/*"<size={0}>{1}/{2}</size>"*/, v175, v182, v189, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v281.fields.m_XMin = v104 + (float)(v104 + (float)(v104 + v107));
  v281.fields.m_YMin = (float)((float)((float)(v103 + v103) + 10.0) + 0.0) + (float)(v104 + 10.0);
  v281.fields.m_Width = v104 + 10.0;
  v281.fields.m_Height = v104;
  UnityEngine_GUI__Box(v281, v190, 0);
  v268 = HIDWORD(format.monitor);
  v197 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v268, v191, v192, v193, v194, v195, v196);
  v198 = System_String__Format((System_String_o *)StringLiteral_1725/*"<size={0}>+</size>"*/, v197, 0);
  v282.fields.m_XMin = v147 + (float)(v104 + (float)(v104 + (float)(v104 + v107)));
  v282.fields.m_YMin = (float)((float)((float)(v103 + v103) + 10.0) + 0.0) + (float)(v104 + 10.0);
  v282.fields.m_Width = v104;
  v282.fields.m_Height = v104;
  if ( UnityEngine_GUI__Button(v282, v198, 0) )
  {
    v199 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v199;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_65085416(v199, 10, 0);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0);
  v271 = *((float *)&format.monitor + 1);
  v206 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v271, v200, v201, v202, v203, v204, v205);
  v207 = System_String__Format((System_String_o *)StringLiteral_1731/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v206, 0);
  v208 = *p_labelStyle;
  v209 = v207;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v283.fields.m_Height = 40.0;
  v283.fields.m_XMin = v107;
  v283.fields.m_YMin = v147 + (float)((float)((float)((float)(v103 + v103) + 10.0) + 0.0) + (float)(v104 + 10.0));
  v283.fields.m_Width = v105;
  UnityEngine_GUI__Label_71395344(v283, v209, v208, 0);
  v210 = (float)((float)UnityEngine_Screen__get_width(0) - v105) + -10.0;
  v211 = *((float *)&format.monitor + 1) + 10.0;
  v212 = UnityEngine_Screen__get_height(0);
  v213 = MotionInfo_TypeInfo;
  v214 = (float)v212;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v213 = MotionInfo_TypeInfo;
  }
  v215 = v213->static_fields;
  v284.fields.m_YMin = 0.0;
  v284.fields.m_Width = v210;
  v284.fields.m_Height = v214;
  *(_QWORD *)&viewRect.fields.m_XMin = 0;
  viewRect.fields.m_Width = v210 + -20.0;
  viewRect.fields.m_Height = v211 * (float)v215->voicePlayLogLineSize;
  v284.fields.m_XMin = 0.0;
  v216 = UnityEngine_GUI__BeginScrollView(v284, v215->scrollPosition, viewRect, 0);
  v217 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v216;
  v218 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v217->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v218 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v218->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v218->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v218);
      v218 = MotionInfo___c_TypeInfo;
    }
    v221 = (Il2CppObject *)v218->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1C372A4(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v221, Method_MotionInfo___c__OnGUI_b__46_0__, 0);
    v222 = MotionInfo___c_TypeInfo->static_fields;
    v222->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v222->__9__46_0, (int32_t)_9__46_0, v223, v224);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_3121114 *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1C372B4(normal);
  v225 = *(_QWORD *)normal;
  v226 = normal;
  v227 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v228 = (int *)(*(_QWORD *)(v225 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v228 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v227;
      v228 += 4;
      if ( !v227 )
        goto LABEL_159;
    }
    v229 = v225 + 16LL * *v228 + 312;
  }
  else
  {
LABEL_159:
    v229 = sub_1C87870(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v230 = (*(__int64 (__fastcall **)(char *, _QWORD))v229)(v226, *(_QWORD *)(v229 + 8));
  if ( !v230 )
    sub_1C372B4(0);
  for ( i = 0; ; ++i )
  {
    v232 = *(_QWORD *)v230;
    v233 = *(unsigned __int16 *)(*(_QWORD *)v230 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v230 + 302LL) )
    {
      v234 = (int *)(*(_QWORD *)(v232 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v234 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v233;
        v234 += 4;
        if ( !v233 )
          goto LABEL_168;
      }
      v235 = v232 + 16LL * *v234 + 312;
    }
    else
    {
LABEL_168:
      v235 = sub_1C87870(v230, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v235)(v230, *(_QWORD *)(v235 + 8)) & 1) == 0 )
      break;
    v236 = *(_QWORD *)v230;
    v237 = *(unsigned __int16 *)(*(_QWORD *)v230 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v230 + 302LL) )
    {
      v238 = (int *)(*(_QWORD *)(v236 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v238 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v237;
        v238 += 4;
        if ( !v237 )
          goto LABEL_175;
      }
      v239 = v236 + 16LL * *v238 + 312;
    }
    else
    {
LABEL_175:
      v239 = sub_1C87870(v230, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v240 = (*(__int64 (__fastcall **)(__int64, _QWORD))v239)(v230, *(_QWORD *)(v239 + 8));
    v241 = sub_1C37100(string___TypeInfo, 5);
    v244 = v241;
    if ( !v241 )
      sub_1C372B4(0);
    if ( !*(_DWORD *)(v241 + 24) )
      sub_1C372BC(v241);
    v245 = StringLiteral_1724/*"<size="*/;
    *(_QWORD *)(v241 + 32) = StringLiteral_1724/*"<size="*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v241 + 32), v245, v242, v243);
    v247 = System_Single__ToString(v246, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v244 + 24) <= 1u )
      sub_1C372BC(v247);
    *(_QWORD *)(v244 + 40) = v247;
    sub_1C36FFC((CGThumbnailListItem_o *)(v244 + 40), (int32_t)v247, v248, v249);
    if ( *(_DWORD *)(v244 + 24) <= 2u )
      sub_1C372BC(v250);
    v253 = StringLiteral_1750/*">"*/;
    *(_QWORD *)(v244 + 48) = StringLiteral_1750/*">"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v244 + 48), v253, v251, v252);
    if ( *(_DWORD *)(v244 + 24) <= 3u )
      sub_1C372BC(v254);
    *(_QWORD *)(v244 + 56) = v240;
    sub_1C36FFC((CGThumbnailListItem_o *)(v244 + 56), v240, v255, v256);
    if ( *(_DWORD *)(v244 + 24) <= 4u )
      sub_1C372BC(v257);
    v260 = StringLiteral_1527/*"</size>"*/;
    *(_QWORD *)(v244 + 64) = StringLiteral_1527/*"</size>"*/;
    sub_1C36FFC((CGThumbnailListItem_o *)(v244 + 64), v260, v258, v259);
    v261 = System_String__Concat_63602172((System_String_array *)v244, 0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v285.fields.m_YMin = v211 * (float)i;
    v285.fields.m_XMin = 0.0;
    v285.fields.m_Width = v210 + -20.0;
    v285.fields.m_Height = v211;
    UnityEngine_GUI__Label(v285, v261, 0);
  }
  v262 = *(_QWORD *)v230;
  v263 = *(unsigned __int16 *)(*(_QWORD *)v230 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v230 + 302LL) )
  {
    v264 = (int *)(*(_QWORD *)(v262 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v264 - 1) != System_IDisposable_TypeInfo )
    {
      --v263;
      v264 += 4;
      if ( !v263 )
        goto LABEL_190;
    }
    v265 = v262 + 16LL * *v264 + 312;
  }
  else
  {
LABEL_190:
    v265 = sub_1C87870(v230, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v265)(v230, *(_QWORD *)(v265 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0);
  this->fields.isLogAreaShow = v267;
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

  if ( (byte_4C4241F & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C4241F = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v3 = StringLiteral_1/*""*/;
  if ( !byte_4C4249E )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249E = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, v3, v1, v2);
  v8 = StringLiteral_1/*""*/;
  if ( !byte_4C4249F )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4249F = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v10 = v9->static_fields;
  v10->_VoiceId_k__BackingField = (struct System_String_o *)v8;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->_VoiceId_k__BackingField, v8, v6, v7);
  if ( !byte_4C424A0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C424A0 = 1;
  }
  v13 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4C424A1 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4C424A1 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v14 = StringLiteral_1/*""*/;
  if ( !byte_4C424A2 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4C424A2 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v15 = v13->static_fields;
  v15->_VoiceType_k__BackingField = (struct System_String_o *)v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&v15->_VoiceType_k__BackingField, v14, v11, v12);
  if ( !byte_4C424A3 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C424A3 = 1;
  }
  v16 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
  }
  v16->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4C424A4 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
    byte_4C424A4 = 1;
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

  if ( (byte_4C42425 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42425 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C424A5 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C424A5 = 1;
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
  MotionInfo_c *v1; // x0
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_List_string___o *voicePlaybackLogList; // x9
  int32_t size; // w2
  int v5; // w10

  if ( (byte_4C42424 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42424 = 1;
  }
  v1 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v1 = MotionInfo_TypeInfo;
  }
  static_fields = v1->static_fields;
  voicePlaybackLogList = static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    sub_1C372B4(v1);
  size = voicePlaybackLogList->fields._size;
  v5 = voicePlaybackLogList->fields._version + 1;
  voicePlaybackLogList->fields._size = 0;
  voicePlaybackLogList->fields._version = v5;
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

  if ( (byte_4C4241C & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4241C = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1C36FFC((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)svtName, (int32_t)method, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
}


void MotionInfo__UpdateVoicePlaybackLogString(const MethodInfo *method)
{
  void *Item; // x0
  struct MotionInfo_StaticFields *static_fields; // x9
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  int32_t voicePlayLogLineSize; // w22
  _DWORD *v5; // x8
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *v7; // x8
  int v8; // w22
  int v9; // w23
  struct MotionInfo_StaticFields *v10; // x8
  int32_t v11; // w9

  if ( (byte_4C42423 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42423 = 1;
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
                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0) )
  {
LABEL_24:
    sub_1C372B4(Item);
  }
  v5 = Item;
  v6 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v5[6] + voicePlayLogLineSize;
  while ( 1 )
  {
    if ( v6->_2.cctor_finished )
    {
      v7 = v6->static_fields;
      v8 = v7->voicePlayLogLineSize;
      if ( v8 <= 499 )
        goto LABEL_22;
      goto LABEL_18;
    }
    j_il2cpp_runtime_class_init_0(v6);
    v7 = MotionInfo_TypeInfo->static_fields;
    v9 = v7->voicePlayLogLineSize;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      break;
    v8 = v7->voicePlayLogLineSize;
    if ( v9 <= 499 )
      goto LABEL_22;
LABEL_18:
    Item = v7->voicePlaybackLogList;
    if ( !Item )
      goto LABEL_24;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_24;
    v10 = MotionInfo_TypeInfo->static_fields;
    v11 = v8 - *((_DWORD *)Item + 6);
    Item = v10->voicePlaybackLogList;
    v10->voicePlayLogLineSize = v11;
    if ( !Item )
      goto LABEL_24;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Item,
      0,
      (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v6 = MotionInfo_TypeInfo;
  }
  j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v7 = MotionInfo_TypeInfo->static_fields;
  v8 = v7->voicePlayLogLineSize;
  if ( v9 > 499 )
    goto LABEL_18;
LABEL_22:
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0) * v8);
}


bool MotionInfo__get_IsRandom(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4C42418 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42418 = 1;
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

  if ( (byte_4C4241A & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4241A = 1;
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

  if ( (byte_4C42412 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42412 = 1;
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

  if ( (byte_4C42416 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42416 = 1;
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

  if ( (byte_4C4240C & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4240C = 1;
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

  if ( (byte_4C42410 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42410 = 1;
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

  if ( (byte_4C42414 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42414 = 1;
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

  if ( (byte_4C4240E & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4240E = 1;
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

  if ( (byte_4C42419 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42419 = 1;
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

  if ( (byte_4C4241B & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4241B = 1;
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

  if ( (byte_4C42413 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42413 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4C42417 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42417 = 1;
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

  if ( (byte_4C4240D & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4240D = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4C42411 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42411 = 1;
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

  if ( (byte_4C42415 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C42415 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4C4240F & 1) == 0 )
  {
    sub_1C37058(&MotionInfo_TypeInfo);
    byte_4C4240F = 1;
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

  if ( (byte_4C42427 & 1) == 0 )
  {
    sub_1C37058(&MotionInfo___c_TypeInfo);
    byte_4C42427 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MotionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MotionInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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