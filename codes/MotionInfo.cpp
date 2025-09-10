void MotionInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v4; // x19
  struct MotionInfo_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C2675E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_1C2D490(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_1C2D490(&MotionInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C2675E = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C2D434((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, StringLiteral_1/*""*/, v1, v2);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4C20C9A )
  {
    sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
    byte_4C20C9A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v5 = MotionInfo_TypeInfo->static_fields;
  v5->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v4;
  sub_1C2D434((CGThumbnailListItem_o *)&v5->voicePlaybackLogList, (int32_t)v4, v6, v7);
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

  if ( (byte_4C26758 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_11504/*"SE"*/);
    byte_4C26758 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C267D8 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D8 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4C267D9 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4C267D9 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4C267D7 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4C267D7 = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4C267DB )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267DB = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4C267DC )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4C267DC = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4C267DD )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4C267DD = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsRandom_k__BackingField = 0;
  v10 = StringLiteral_11504/*"SE"*/;
  if ( !byte_4C267DA )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4C267DA = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v11 = v9->static_fields;
  v11->_VoiceType_k__BackingField = (struct System_String_o *)v10;
  sub_1C2D434((CGThumbnailListItem_o *)&v11->_VoiceType_k__BackingField, v10, v7, v8);
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
  __int64 v35; // x2
  const MethodInfo *v36; // x3
  char *v37; // x20
  int32_t v38; // w1
  MotionInfo_c *v39; // x0
  const MethodInfo *v40; // x3
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  MotionInfo_c *v43; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x3
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass *v51; // x1
  Il2CppClass **v52; // x0
  MotionInfo_c *v53; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass *v61; // x1
  Il2CppClass **v62; // x0
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  __int64 v65; // x8
  _QWORD *v66; // x9
  __int64 v67; // x10
  __int64 v68; // x8
  const MethodInfo *v69; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C26759 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&MotionInfo_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&StringLiteral_332/*" 確率 / 合計 : "*/);
    sub_1C2D490(&StringLiteral_201/*" VoiceID : "*/);
    sub_1C2D490(&StringLiteral_1126/*"0.00"*/);
    sub_1C2D490(&StringLiteral_161/*" / "*/);
    sub_1C2D490(&StringLiteral_876/*"--- Voice・SE Log ---"*/);
    sub_1C2D490(&StringLiteral_194/*" SEID : "*/);
    sub_1C2D490(&StringLiteral_331/*" 分類 : "*/);
    sub_1C2D490(&StringLiteral_12728/*"ServantID : "*/);
    byte_4C26759 = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63457864((System_String_o *)StringLiteral_876/*"--- Voice・SE Log ---"*/, NewLine, 0);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v11[4] = v10;
    sub_1C2D434((CGThumbnailListItem_o *)(v11 + 4), (int32_t)v10, v5, v6);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C267D0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D0 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4C267D2 )
      {
        sub_1C2D490(&MotionInfo_TypeInfo);
        byte_4C267D2 = 1;
      }
      v12 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v12 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v12->static_fields->_VoiceId_k__BackingField;
      v14 = System_Environment__get_NewLine(0);
      v15 = (System_String_o *)StringLiteral_194/*" SEID : "*/;
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
  if ( !byte_4C267D1 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D1 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v17->static_fields->_VoiceServantId_k__BackingField;
  v19 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63496112(
                                   (System_String_o *)StringLiteral_12728/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v19,
                                   0);
  v22 = v1->fields._items;
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v22 )
LABEL_74:
    sub_1C2D6EC(voicePlaybackLogList, v4);
  v24 = v1->fields._size;
  v25 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v22->obj.klass + v24;
    v1->fields._size = v24 + 1;
    v26[4] = v25;
    sub_1C2D434((CGThumbnailListItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
  }
  if ( !byte_4C267D2 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D2 = 1;
  }
  v27 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v27 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v27->static_fields->_VoiceId_k__BackingField;
  v14 = System_Environment__get_NewLine(0);
  v15 = (System_String_o *)StringLiteral_201/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_63496112(v15, VoiceId_k__BackingField, v14, 0);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v34[4] = v33;
    sub_1C2D434((CGThumbnailListItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
  }
  voicePlaybackLogList = (char *)sub_1C2D538(string___TypeInfo, 5);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v37 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v38 = StringLiteral_332/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_332/*" 確率 / 合計 : "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(voicePlaybackLogList + 32), v38, v35, v36);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C267D3 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D3 = 1;
  }
  v39 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v39 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v39->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_65053868(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v37 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v37 + 5) = voicePlaybackLogList;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 40), (int32_t)voicePlaybackLogList, v35, v40);
  if ( *((_DWORD *)v37 + 6) <= 2u )
    goto LABEL_75;
  v42 = StringLiteral_161/*" / "*/;
  *((_QWORD *)v37 + 6) = StringLiteral_161/*" / "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 48), v42, v35, v41);
  if ( !byte_4C267D4 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D4 = 1;
  }
  v43 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v43 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v43->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_65053868(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v37 + 6) <= 3u
    || (*((_QWORD *)v37 + 7) = voicePlaybackLogList,
        sub_1C2D434((CGThumbnailListItem_o *)(v37 + 56), (int32_t)voicePlaybackLogList, v35, v44),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0),
        *((_DWORD *)v37 + 6) <= 4u) )
  {
LABEL_75:
    sub_1C2D6F4(voicePlaybackLogList, v4, v35);
  }
  *((_QWORD *)v37 + 8) = voicePlaybackLogList;
  sub_1C2D434((CGThumbnailListItem_o *)(v37 + 64), (int32_t)voicePlaybackLogList, v35, v45);
  voicePlaybackLogList = (char *)System_String__Concat_63498380((System_String_array *)v37, 0);
  v48 = v1->fields._items;
  v49 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v48 )
    goto LABEL_74;
  v50 = v1->fields._size;
  v51 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v52 = &v48->obj.klass + v50;
    v1->fields._size = v50 + 1;
    v52[4] = v51;
    sub_1C2D434((CGThumbnailListItem_o *)(v52 + 4), (int32_t)v51, v46, v47);
  }
  if ( !byte_4C267D5 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D5 = 1;
  }
  v53 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v53 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v53->static_fields->_VoiceType_k__BackingField;
  v55 = System_Environment__get_NewLine(0);
  voicePlaybackLogList = (char *)System_String__Concat_63496112(
                                   (System_String_o *)StringLiteral_331/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v55,
                                   0);
  v58 = v1->fields._items;
  v59 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v58 )
    goto LABEL_74;
  v60 = v1->fields._size;
  v61 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v60 >= LODWORD(v58->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = &v58->obj.klass + v60;
    v1->fields._size = v60 + 1;
    v62[4] = v61;
    sub_1C2D434((CGThumbnailListItem_o *)(v62 + 4), (int32_t)v61, v56, v57);
  }
  voicePlaybackLogList = (char *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v65 = *((_QWORD *)voicePlaybackLogList + 2);
  v66 = Method_System_Collections_Generic_List_List_string___Add__;
  ++*((_DWORD *)voicePlaybackLogList + 7);
  if ( !v65 )
    goto LABEL_74;
  v67 = *((int *)voicePlaybackLogList + 6);
  if ( (unsigned int)v67 >= *(_DWORD *)(v65 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)voicePlaybackLogList,
      (Il2CppObject *)v1,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v66[4] + 192LL) + 112LL));
  }
  else
  {
    v68 = v65 + 8 * v67;
    *((_DWORD *)voicePlaybackLogList + 6) = v67 + 1;
    *(_QWORD *)(v68 + 32) = v1;
    sub_1C2D434((CGThumbnailListItem_o *)(v68 + 32), (int32_t)v1, v63, v64);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v69);
}


void MotionInfo__AddVoiceLog_40756548(System_String_o *str, const MethodInfo *method)
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

  if ( (byte_4C2675A & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2675A = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C2D6DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3789350 *)Method_System_Collections_Generic_List_string___ctor__);
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
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v11[4] = (Il2CppClass *)str;
    sub_1C2D434((CGThumbnailListItem_o *)(v11 + 4), (int32_t)str, v6, v7);
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
    sub_1C2D6EC(voicePlaybackLogList, v5);
  }
  v17 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_3789B84 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    voicePlaybackLogList->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)v3;
    sub_1C2D434((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v3, v12, v13);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v19);
}


System_String_o *MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-24h] BYREF

  v6 = type;
  if ( (byte_4C26756 & 1) == 0 )
  {
    sub_1C2D490(&BattleCommand_TypeInfo);
    sub_1C2D490(&StringLiteral_25406/*"バスター"*/);
    sub_1C2D490(&StringLiteral_25385/*"クイック"*/);
    sub_1C2D490(&StringLiteral_25374/*"アーツ"*/);
    sub_1C2D490(&StringLiteral_25378/*"エクストラ"*/);
    byte_4C26756 = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0) )
  {
    case 1:
      v4 = &StringLiteral_25374/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v4 = &StringLiteral_25406/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v4 = &StringLiteral_25385/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v4 = &StringLiteral_25378/*"エクストラ"*/;
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
  __int64 v24; // x2
  const MethodInfo *v25; // x3
  char *v26; // x21
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  MotionInfo_c *v29; // x0
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  MotionInfo_c *v33; // x0
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  int32_t v37; // w1
  const MethodInfo *v38; // x3
  __int64 v39; // x1
  System_String_o *v40; // x22
  __int64 v41; // x21
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  int32_t v44; // w1
  const MethodInfo *v45; // x3
  const MethodInfo *v46; // x3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  const MethodInfo *v49; // x3
  const MethodInfo *v50; // x3
  const MethodInfo *v51; // x3
  int32_t v52; // w1
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  int32_t v58; // w1
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x3
  const MethodInfo *v61; // x3
  const MethodInfo *v62; // x3
  const MethodInfo *v63; // x3
  int32_t v64; // w1
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x3
  const MethodInfo *v67; // x3
  const MethodInfo *v68; // x3
  Il2CppObject *v69; // x21
  int32_t height; // w22
  float v71; // s8
  struct UnityEngine_GUIStyle_o **p_labelStyle; // x20
  UnityEngine_GUIStyle_o *none; // x0
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  float v76; // s13
  float v77; // s10
  float v78; // s8
  int v79; // w25
  float v80; // s9
  float width; // s12
  float v82; // s11
  int32_t v83; // w22
  __int64 v84; // x2
  __int64 v85; // x3
  __int64 v86; // x4
  Il2CppObject *v87; // x0
  System_String_o *v88; // x0
  UnityEngine_GUIStyle_o *v89; // x21
  System_String_o *v90; // x22
  _BOOL4 isLogAreaShow; // w22
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x1
  Il2CppObject **v96; // x9
  System_String_o *v97; // x21
  __int64 v98; // x2
  __int64 v99; // x3
  __int64 v100; // x4
  bool v101; // w22
  Il2CppObject *v102; // x0
  System_String_o *v103; // x21
  __int64 v104; // x2
  __int64 v105; // x3
  __int64 v106; // x4
  MotionInfo_c *v107; // x0
  float v108; // s11
  Il2CppObject *v109; // x0
  System_String_o *v110; // x21
  __int64 v111; // x2
  __int64 v112; // x3
  __int64 v113; // x4
  MotionInfo_c *v114; // x0
  Il2CppObject *v115; // x0
  System_String_o *v116; // x21
  __int64 v117; // x2
  __int64 v118; // x3
  __int64 v119; // x4
  MotionInfo_c *v120; // x0
  Il2CppObject *v121; // x0
  System_String_o *v122; // x21
  __int64 v123; // x2
  __int64 v124; // x3
  __int64 v125; // x4
  int32_t v126; // w21
  Il2CppObject *v127; // x21
  __int64 v128; // x2
  __int64 v129; // x3
  __int64 v130; // x4
  Il2CppObject *v131; // x22
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x4
  Il2CppObject *v135; // x0
  System_String_o *v136; // x21
  __int64 v137; // x2
  __int64 v138; // x3
  __int64 v139; // x4
  Il2CppObject *v140; // x0
  System_String_o *v141; // x0
  int32_t v142; // w21
  __int64 v143; // x2
  __int64 v144; // x3
  __int64 v145; // x4
  Il2CppObject *v146; // x0
  System_String_o *v147; // x0
  UnityEngine_GUIStyle_o *v148; // x20
  System_String_o *v149; // x21
  float v150; // s10
  float v151; // s9
  int32_t v152; // w0
  MotionInfo_c *v153; // x8
  float v154; // s11
  struct MotionInfo_StaticFields *v155; // x8
  UnityEngine_Vector2_o v156; // kr00_8
  MotionInfo_c *v157; // x8
  MotionInfo___c_c *v158; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v161; // x22
  struct MotionInfo___c_StaticFields *v162; // x0
  int32_t v163; // w2
  const MethodInfo *v164; // x3
  __int64 v165; // x8
  char *v166; // x20
  __int64 v167; // x9
  int *v168; // x10
  __int64 v169; // x0
  __int64 v170; // x1
  __int64 v171; // x20
  int i; // w25
  __int64 v173; // x8
  __int64 v174; // x9
  int *v175; // x10
  __int64 v176; // x0
  __int64 v177; // x8
  __int64 v178; // x9
  int *v179; // x10
  __int64 v180; // x0
  __int64 v181; // x22
  __int64 v182; // x0
  __int64 v183; // x1
  __int64 v184; // x2
  const MethodInfo *v185; // x3
  __int64 v186; // x21
  int32_t v187; // w1
  float v188; // s0
  System_String_o *v189; // x0
  __int64 v190; // x2
  const MethodInfo *v191; // x3
  __int64 v192; // x0
  __int64 v193; // x1
  __int64 v194; // x2
  const MethodInfo *v195; // x3
  int32_t v196; // w1
  __int64 v197; // x0
  __int64 v198; // x1
  __int64 v199; // x2
  const MethodInfo *v200; // x3
  __int64 v201; // x0
  __int64 v202; // x1
  __int64 v203; // x2
  const MethodInfo *v204; // x3
  int32_t v205; // w1
  System_String_o *v206; // x21
  __int64 v207; // x8
  __int64 v208; // x9
  int *v209; // x10
  __int64 v210; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v212; // [xsp+18h] [xbp-B8h]
  int v213; // [xsp+1Ch] [xbp-B4h] BYREF
  int v214; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v216; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v218; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v219; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v220; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v221; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v222; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v223; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v224; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v225; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v226; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v227; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v228; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v229; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v230; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C26755 & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Linq_Enumerable_SelectMany_List_string___string___);
    sub_1C2D490(&System_Func_List_string___IEnumerable_string___TypeInfo);
    sub_1C2D490(&UnityEngine_GUIStyle_TypeInfo);
    sub_1C2D490(&UnityEngine_GUI_TypeInfo);
    sub_1C2D490(&System_IDisposable_TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerable_string__TypeInfo);
    sub_1C2D490(&System_Collections_Generic_IEnumerator_string__TypeInfo);
    sub_1C2D490(&System_Collections_IEnumerator_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&System_Math_TypeInfo);
    sub_1C2D490(&MotionInfo_TypeInfo);
    sub_1C2D490(&float_TypeInfo);
    sub_1C2D490(&string___TypeInfo);
    sub_1C2D490(&Method_MotionInfo___c__OnGUI_b__46_0__);
    sub_1C2D490(&MotionInfo___c_TypeInfo);
    sub_1C2D490(&StringLiteral_1724/*"<size={0}>+</size>"*/);
    sub_1C2D490(&StringLiteral_25357/*"【モーションID】"*/);
    sub_1C2D490(&StringLiteral_25356/*"【ボイス・SE】"*/);
    sub_1C2D490(&StringLiteral_1728/*"<size={0}>▲</size>"*/);
    sub_1C2D490(&StringLiteral_15359/*"VoiceID : "*/);
    sub_1C2D490(&StringLiteral_25358/*"【名前】"*/);
    sub_1C2D490(&StringLiteral_332/*" 確率 / 合計 : "*/);
    sub_1C2D490(&StringLiteral_1731/*"<size={0}>ログ消去</size>"*/);
    sub_1C2D490(&StringLiteral_1723/*"<size="*/);
    sub_1C2D490(&StringLiteral_25355/*"【カード属性】"*/);
    sub_1C2D490(&StringLiteral_1126/*"0.00"*/);
    sub_1C2D490(&StringLiteral_1730/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/);
    sub_1C2D490(&StringLiteral_161/*" / "*/);
    sub_1C2D490(&StringLiteral_194/*" SEID : "*/);
    sub_1C2D490(&StringLiteral_25335/*"▶ ログ非表示"*/);
    sub_1C2D490(&StringLiteral_1729/*"<size={0}>▼</size>"*/);
    sub_1C2D490(&StringLiteral_1726/*"<size={0}>{1}/{2}</size>"*/);
    sub_1C2D490(&StringLiteral_1727/*"<size={0}>{1}</size>"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    sub_1C2D490(&StringLiteral_331/*" 分類 : "*/);
    sub_1C2D490(&StringLiteral_1526/*"</size>"*/);
    sub_1C2D490(&StringLiteral_1749/*">"*/);
    sub_1C2D490(&StringLiteral_12728/*"ServantID : "*/);
    sub_1C2D490(&StringLiteral_25336/*"◀ ログ表示　"*/);
    sub_1C2D490(&StringLiteral_1725/*"<size={0}>-</size>"*/);
    byte_4C26755 = 1;
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
  if ( !byte_4C267D0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D0 = 1;
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
    if ( !byte_4C267D1 )
    {
      sub_1C2D490(&MotionInfo_TypeInfo);
      byte_4C267D1 = 1;
    }
    v12 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v12 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v12->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0);
    v15 = System_String__Concat_63496112(
            (System_String_o *)StringLiteral_12728/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0);
    v10 = MotionInfo_TypeInfo;
    v11 = v15;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4C267D0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D0 = 1;
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
    v18 = (System_String_o **)&StringLiteral_15359/*"VoiceID : "*/;
  v19 = *v18;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4C267D2 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D2 = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v20->static_fields->_VoiceId_k__BackingField;
  v22 = System_Environment__get_NewLine(0);
  v23 = System_String__Concat_63498116(v11, v19, VoiceId_k__BackingField, v22, 0);
  normal = (char *)sub_1C2D538(string___TypeInfo, 8);
  if ( !normal )
    goto LABEL_203;
  v26 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v23;
  sub_1C2D434((CGThumbnailListItem_o *)(normal + 32), (int32_t)v23, v24, v25);
  if ( *((_DWORD *)v26 + 6) <= 1u )
    goto LABEL_196;
  v28 = StringLiteral_332/*" 確率 / 合計 : "*/;
  *((_QWORD *)v26 + 5) = StringLiteral_332/*" 確率 / 合計 : "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 40), v28, v24, v27);
  if ( !byte_4C267D3 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D3 = 1;
  }
  v29 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v29 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v29->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_65053868(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v26 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v26 + 6) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 48), (int32_t)normal, v24, v30);
  if ( *((_DWORD *)v26 + 6) <= 3u )
    goto LABEL_196;
  v32 = StringLiteral_161/*" / "*/;
  *((_QWORD *)v26 + 7) = StringLiteral_161/*" / "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 56), v32, v24, v31);
  if ( !byte_4C267D4 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D4 = 1;
  }
  v33 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v33 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v33->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_65053868(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1126/*"0.00"*/);
  if ( *((_DWORD *)v26 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v26 + 8) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 64), (int32_t)normal, v24, v34);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *((_DWORD *)v26 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v26 + 9) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 72), (int32_t)normal, v24, v35);
  if ( *((_DWORD *)v26 + 6) <= 6u )
    goto LABEL_196;
  v37 = StringLiteral_331/*" 分類 : "*/;
  *((_QWORD *)v26 + 10) = StringLiteral_331/*" 分類 : "*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 80), v37, v24, v36);
  if ( !byte_4C267D5 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D5 = 1;
  }
  normal = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    normal = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v26 + 6) <= 7u )
    goto LABEL_196;
  v39 = *(_QWORD *)(*((_QWORD *)normal + 23) + 40LL);
  *((_QWORD *)v26 + 11) = v39;
  sub_1C2D434((CGThumbnailListItem_o *)(v26 + 88), v39, v24, v38);
  v40 = System_String__Concat_63498380((System_String_array *)v26, 0);
  v41 = sub_1C2D538(string___TypeInfo, 21);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( !v41 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v41 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v41 + 32) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 32), (int32_t)normal, v24, v42);
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_196;
  v44 = StringLiteral_25358/*"【名前】"*/;
  *(_QWORD *)(v41 + 40) = StringLiteral_25358/*"【名前】"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 40), v44, v24, v43);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 48) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 48), (int32_t)normal, v24, v45);
  if ( *(_DWORD *)(v41 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v41 + 56) = static_fields->svtName;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 56), (int32_t)svtName, v24, v46);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 64) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 64), (int32_t)normal, v24, v49);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 72) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 72), (int32_t)normal, v24, v50);
  if ( *(_DWORD *)(v41 + 24) <= 6u )
    goto LABEL_196;
  v52 = StringLiteral_25357/*"【モーションID】"*/;
  *(_QWORD *)(v41 + 80) = StringLiteral_25357/*"【モーションID】"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 80), v52, v24, v51);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 88) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 88), (int32_t)normal, v24, v53);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0);
  if ( *(_DWORD *)(v41 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 96) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 96), (int32_t)normal, v24, v54);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 104) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 104), (int32_t)normal, v24, v55);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v41 + 112) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 112), (int32_t)normal, v24, v56);
  if ( *(_DWORD *)(v41 + 24) <= 0xBu )
    goto LABEL_196;
  v58 = StringLiteral_25355/*"【カード属性】"*/;
  *(_QWORD *)(v41 + 120) = StringLiteral_25355/*"【カード属性】"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 120), v58, v24, v57);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v41 + 128) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 128), (int32_t)normal, v24, v59);
  if ( *(_DWORD *)(v41 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v41 + 136) = TypeName;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 136), (int32_t)TypeName, v24, v60);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v41 + 144) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 144), (int32_t)normal, v24, v61);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v41 + 152) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 152), (int32_t)normal, v24, v62);
  if ( *(_DWORD *)(v41 + 24) <= 0x10u )
    goto LABEL_196;
  v64 = StringLiteral_25356/*"【ボイス・SE】"*/;
  *(_QWORD *)(v41 + 160) = StringLiteral_25356/*"【ボイス・SE】"*/;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 160), v64, v24, v63);
  normal = (char *)System_Environment__get_NewLine(0);
  if ( *(_DWORD *)(v41 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v41 + 168) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 168), (int32_t)normal, v24, v65);
  if ( *(_DWORD *)(v41 + 24) <= 0x12u
    || (*(_QWORD *)(v41 + 176) = v40,
        sub_1C2D434((CGThumbnailListItem_o *)(v41 + 176), (int32_t)v40, v24, v66),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v41 + 24) <= 0x13u)
    || (*(_QWORD *)(v41 + 184) = normal,
        sub_1C2D434((CGThumbnailListItem_o *)(v41 + 184), (int32_t)normal, v24, v67),
        normal = (char *)System_Environment__get_NewLine(0),
        *(_DWORD *)(v41 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1C2D6F4(normal, v7, v24);
  }
  *(_QWORD *)(v41 + 192) = normal;
  sub_1C2D434((CGThumbnailListItem_o *)(v41 + 192), (int32_t)normal, v24, v68);
  v69 = (Il2CppObject *)System_String__Concat_63498380((System_String_array *)v41, 0);
  height = UnityEngine_Screen__get_height(0);
  v71 = (float)((float)UnityEngine_Screen__get_width(0) * 0.00097656) * 0.7;
  *((float *)&format.monitor + 1) = v71 * 17.5;
  p_labelStyle = &this->fields.labelStyle;
  if ( !this->fields.labelStyle )
  {
    if ( !UnityEngine_GUIStyle_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUIStyle_TypeInfo);
    none = UnityEngine_GUIStyle__get_none(0);
    *p_labelStyle = none;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.labelStyle, (int32_t)none, v74, v75);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0);
    if ( !normal )
      goto LABEL_203;
    v218.fields.r = 1.0;
    v218.fields.g = 1.0;
    v218.fields.b = 1.0;
    v218.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v218, 0);
  }
  v76 = (float)height * 0.25;
  v77 = v71 * 40.0;
  v78 = v71 * 250.0;
  v79 = 3;
  v80 = (float)UnityEngine_Screen__get_width(0) - v78;
  do
  {
    width = v78;
    if ( this->fields.isLogAreaShow )
      v82 = 0.0;
    else
      v82 = v80;
    if ( this->fields.isLogAreaShow )
      width = (float)UnityEngine_Screen__get_width(0);
    v83 = UnityEngine_Screen__get_height(0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v219.fields.m_Height = (float)v83;
    v219.fields.m_YMin = 0.0;
    v219.fields.m_XMin = v82;
    v219.fields.m_Width = width;
    UnityEngine_GUI__Box(v219, (System_String_o *)StringLiteral_1/*""*/, 0);
    --v79;
  }
  while ( v79 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0);
  v216 = *((float *)&format.monitor + 1);
  v87 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v84, v85, v86);
  v88 = System_String__Format_63499156((System_String_o *)StringLiteral_1727/*"<size={0}>{1}</size>"*/, v87, v69, 0);
  v89 = *p_labelStyle;
  v90 = v88;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v220.fields.m_YMin = 0.0;
  v220.fields.m_XMin = v80;
  v220.fields.m_Width = v78;
  v220.fields.m_Height = v76 + v76;
  UnityEngine_GUI__Label_71292296(v220, v90, v89, 0);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v95 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v92, v93, v94);
  if ( this->fields.isLogAreaShow )
    v96 = (Il2CppObject **)&StringLiteral_25335/*"▶ ログ非表示"*/;
  else
    v96 = (Il2CppObject **)&StringLiteral_25336/*"◀ ログ表示　"*/;
  v97 = System_String__Format_63499156((System_String_o *)StringLiteral_1727/*"<size={0}>{1}</size>"*/, v95, *v96, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v221.fields.m_XMin = v80;
  v221.fields.m_YMin = (float)((float)(v76 + v76) + 10.0) + 0.0;
  v221.fields.m_Width = v78 * 0.5;
  v221.fields.m_Height = v77;
  v101 = isLogAreaShow;
  if ( UnityEngine_GUI__Button(v221, v97, 0) )
    v101 = !this->fields.isLogAreaShow;
  v216 = *((float *)&format.monitor + 1);
  v102 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v98, v99, v100);
  v103 = System_String__Format((System_String_o *)StringLiteral_1731/*"<size={0}>ログ消去</size>"*/, v102, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v222.fields.m_XMin = (float)(v78 * 0.5) + v80;
  v222.fields.m_YMin = (float)((float)(v76 + v76) + 10.0) + 0.0;
  v222.fields.m_Width = v78 * 0.5;
  v222.fields.m_Height = v77;
  if ( UnityEngine_GUI__Button(v222, v103, 0) )
  {
    v107 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v107);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v101;
    return;
  }
  v108 = v77 + 10.0;
  v216 = *((float *)&format.monitor + 1);
  v109 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v104, v105, v106);
  v110 = System_String__Format((System_String_o *)StringLiteral_1728/*"<size={0}>▲</size>"*/, v109, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v223.fields.m_XMin = v80;
  v223.fields.m_YMin = (float)((float)((float)(v76 + v76) + 10.0) + 0.0) + (float)(v77 + 10.0);
  v223.fields.m_Width = v77;
  v223.fields.m_Height = v77;
  if ( UnityEngine_GUI__RepeatButton(v223, v110, 0) )
  {
    v114 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v114 = MotionInfo_TypeInfo;
    }
    v114->static_fields->scrollPosition.fields.y = v114->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v216 = *((float *)&format.monitor + 1);
  v115 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v111, v112, v113);
  v116 = System_String__Format((System_String_o *)StringLiteral_1729/*"<size={0}>▼</size>"*/, v115, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v224.fields.m_XMin = v77 + v80;
  v224.fields.m_YMin = (float)((float)((float)(v76 + v76) + 10.0) + 0.0) + (float)(v77 + 10.0);
  v224.fields.m_Width = v77;
  v224.fields.m_Height = v77;
  if ( UnityEngine_GUI__RepeatButton(v224, v116, 0) )
  {
    v120 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v120 = MotionInfo_TypeInfo;
    }
    v120->static_fields->scrollPosition.fields.y = v120->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v216 = *((float *)&format.monitor + 1);
  v121 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v117, v118, v119);
  v122 = System_String__Format((System_String_o *)StringLiteral_1725/*"<size={0}>-</size>"*/, v121, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v225.fields.m_XMin = v77 + (float)(v77 + v80);
  v225.fields.m_YMin = (float)((float)((float)(v76 + v76) + 10.0) + 0.0) + (float)(v77 + 10.0);
  v225.fields.m_Width = v77;
  v225.fields.m_Height = v77;
  if ( UnityEngine_GUI__Button(v225, v122, 0) )
  {
    v126 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v126;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_64982040(v126, 1, 0);
  }
  v212 = v101;
  v216 = *((float *)&format.monitor + 1) * 0.9;
  v127 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v123, v124, v125);
  monitor_high = this->fields.scrollSpeed;
  v131 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v128, v129, v130);
  v214 = 10;
  v135 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v214, v132, v133, v134);
  v136 = System_String__Format_63499224((System_String_o *)StringLiteral_1726/*"<size={0}>{1}/{2}</size>"*/, v127, v131, v135, 0);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v226.fields.m_XMin = v77 + (float)(v77 + (float)(v77 + v80));
  v226.fields.m_YMin = (float)((float)((float)(v76 + v76) + 10.0) + 0.0) + (float)(v77 + 10.0);
  v226.fields.m_Width = v77 + 10.0;
  v226.fields.m_Height = v77;
  UnityEngine_GUI__Box(v226, v136, 0);
  v213 = HIDWORD(format.monitor);
  v140 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v213, v137, v138, v139);
  v141 = System_String__Format((System_String_o *)StringLiteral_1724/*"<size={0}>+</size>"*/, v140, 0);
  v227.fields.m_XMin = v108 + (float)(v77 + (float)(v77 + (float)(v77 + v80)));
  v227.fields.m_YMin = (float)((float)((float)(v76 + v76) + 10.0) + 0.0) + (float)(v77 + 10.0);
  v227.fields.m_Width = v77;
  v227.fields.m_Height = v77;
  if ( UnityEngine_GUI__Button(v227, v141, 0) )
  {
    v142 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v142;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_64982368(v142, 10, 0);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0);
  v216 = *((float *)&format.monitor + 1);
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v216, v143, v144, v145);
  v147 = System_String__Format((System_String_o *)StringLiteral_1730/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v146, 0);
  v148 = *p_labelStyle;
  v149 = v147;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v228.fields.m_Height = 40.0;
  v228.fields.m_XMin = v80;
  v228.fields.m_YMin = v108 + (float)((float)((float)((float)(v76 + v76) + 10.0) + 0.0) + (float)(v77 + 10.0));
  v228.fields.m_Width = v78;
  UnityEngine_GUI__Label_71292296(v228, v149, v148, 0);
  v150 = (float)((float)UnityEngine_Screen__get_width(0) - v78) + -10.0;
  v151 = *((float *)&format.monitor + 1) + 10.0;
  v152 = UnityEngine_Screen__get_height(0);
  v153 = MotionInfo_TypeInfo;
  v154 = (float)v152;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v153 = MotionInfo_TypeInfo;
  }
  v155 = v153->static_fields;
  v229.fields.m_YMin = 0.0;
  v229.fields.m_Width = v150;
  v229.fields.m_Height = v154;
  *(_QWORD *)&viewRect.fields.m_XMin = 0;
  viewRect.fields.m_Width = v150 + -20.0;
  viewRect.fields.m_Height = v151 * (float)v155->voicePlayLogLineSize;
  v229.fields.m_XMin = 0.0;
  v156 = UnityEngine_GUI__BeginScrollView(v229, v155->scrollPosition, viewRect, 0);
  v157 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v156;
  v158 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v157->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v158 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v158->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v158->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v158);
      v158 = MotionInfo___c_TypeInfo;
    }
    v161 = (Il2CppObject *)v158->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1C2D6DC(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v161, Method_MotionInfo___c__OnGUI_b__46_0__, 0);
    v162 = MotionInfo___c_TypeInfo->static_fields;
    v162->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1C2D434((CGThumbnailListItem_o *)&v162->__9__46_0, (int32_t)_9__46_0, v163, v164);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_3107E0C *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1C2D6EC(normal, v7);
  v165 = *(_QWORD *)normal;
  v166 = normal;
  v167 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v168 = (int *)(*(_QWORD *)(v165 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v168 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v167;
      v168 += 4;
      if ( !v167 )
        goto LABEL_159;
    }
    v169 = v165 + 16LL * *v168 + 312;
  }
  else
  {
LABEL_159:
    v169 = sub_1C7DCA8(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0);
  }
  v171 = (*(__int64 (__fastcall **)(char *, _QWORD))v169)(v166, *(_QWORD *)(v169 + 8));
  if ( !v171 )
    sub_1C2D6EC(0, v170);
  for ( i = 0; ; ++i )
  {
    v173 = *(_QWORD *)v171;
    v174 = *(unsigned __int16 *)(*(_QWORD *)v171 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v171 + 302LL) )
    {
      v175 = (int *)(*(_QWORD *)(v173 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v175 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v174;
        v175 += 4;
        if ( !v174 )
          goto LABEL_168;
      }
      v176 = v173 + 16LL * *v175 + 312;
    }
    else
    {
LABEL_168:
      v176 = sub_1C7DCA8(v171, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v176)(v171, *(_QWORD *)(v176 + 8)) & 1) == 0 )
      break;
    v177 = *(_QWORD *)v171;
    v178 = *(unsigned __int16 *)(*(_QWORD *)v171 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v171 + 302LL) )
    {
      v179 = (int *)(*(_QWORD *)(v177 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v179 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v178;
        v179 += 4;
        if ( !v178 )
          goto LABEL_175;
      }
      v180 = v177 + 16LL * *v179 + 312;
    }
    else
    {
LABEL_175:
      v180 = sub_1C7DCA8(v171, System_Collections_Generic_IEnumerator_string__TypeInfo, 0);
    }
    v181 = (*(__int64 (__fastcall **)(__int64, _QWORD))v180)(v171, *(_QWORD *)(v180 + 8));
    v182 = sub_1C2D538(string___TypeInfo, 5);
    v186 = v182;
    if ( !v182 )
      sub_1C2D6EC(0, v183);
    if ( !*(_DWORD *)(v182 + 24) )
      sub_1C2D6F4(v182, v183, v184);
    v187 = StringLiteral_1723/*"<size="*/;
    *(_QWORD *)(v182 + 32) = StringLiteral_1723/*"<size="*/;
    sub_1C2D434((CGThumbnailListItem_o *)(v182 + 32), v187, v184, v185);
    v189 = System_Single__ToString(v188, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v186 + 24) <= 1u )
      sub_1C2D6F4(v189, v189, v190);
    *(_QWORD *)(v186 + 40) = v189;
    sub_1C2D434((CGThumbnailListItem_o *)(v186 + 40), (int32_t)v189, v190, v191);
    if ( *(_DWORD *)(v186 + 24) <= 2u )
      sub_1C2D6F4(v192, v193, v194);
    v196 = StringLiteral_1749/*">"*/;
    *(_QWORD *)(v186 + 48) = StringLiteral_1749/*">"*/;
    sub_1C2D434((CGThumbnailListItem_o *)(v186 + 48), v196, v194, v195);
    if ( *(_DWORD *)(v186 + 24) <= 3u )
      sub_1C2D6F4(v197, v198, v199);
    *(_QWORD *)(v186 + 56) = v181;
    sub_1C2D434((CGThumbnailListItem_o *)(v186 + 56), v181, v199, v200);
    if ( *(_DWORD *)(v186 + 24) <= 4u )
      sub_1C2D6F4(v201, v202, v203);
    v205 = StringLiteral_1526/*"</size>"*/;
    *(_QWORD *)(v186 + 64) = StringLiteral_1526/*"</size>"*/;
    sub_1C2D434((CGThumbnailListItem_o *)(v186 + 64), v205, v203, v204);
    v206 = System_String__Concat_63498380((System_String_array *)v186, 0);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v230.fields.m_YMin = v151 * (float)i;
    v230.fields.m_XMin = 0.0;
    v230.fields.m_Width = v150 + -20.0;
    v230.fields.m_Height = v151;
    UnityEngine_GUI__Label(v230, v206, 0);
  }
  v207 = *(_QWORD *)v171;
  v208 = *(unsigned __int16 *)(*(_QWORD *)v171 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v171 + 302LL) )
  {
    v209 = (int *)(*(_QWORD *)(v207 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v209 - 1) != System_IDisposable_TypeInfo )
    {
      --v208;
      v209 += 4;
      if ( !v208 )
        goto LABEL_190;
    }
    v210 = v207 + 16LL * *v209 + 312;
  }
  else
  {
LABEL_190:
    v210 = sub_1C7DCA8(v171, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v210)(v171, *(_QWORD *)(v210 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0);
  this->fields.isLogAreaShow = v212;
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

  if ( (byte_4C26757 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C26757 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v3 = StringLiteral_1/*""*/;
  if ( !byte_4C267D6 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D6 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_VoiceServantId_k__BackingField = (struct System_String_o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, v3, v1, v2);
  v8 = StringLiteral_1/*""*/;
  if ( !byte_4C267D7 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D7 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v10 = v9->static_fields;
  v10->_VoiceId_k__BackingField = (struct System_String_o *)v8;
  sub_1C2D434((CGThumbnailListItem_o *)&v10->_VoiceId_k__BackingField, v8, v6, v7);
  if ( !byte_4C267D8 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267D8 = 1;
  }
  v13 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4C267D9 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4C267D9 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v14 = StringLiteral_1/*""*/;
  if ( !byte_4C267DA )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4C267DA = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v15 = v13->static_fields;
  v15->_VoiceType_k__BackingField = (struct System_String_o *)v14;
  sub_1C2D434((CGThumbnailListItem_o *)&v15->_VoiceType_k__BackingField, v14, v11, v12);
  if ( !byte_4C267DB )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267DB = 1;
  }
  v16 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
  }
  v16->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4C267DC )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
    byte_4C267DC = 1;
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

  if ( (byte_4C2675D & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2675D = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4C267DD )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C267DD = 1;
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

  if ( (byte_4C2675C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2675C = 1;
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
    sub_1C2D6EC(v2, v1);
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

  if ( (byte_4C26754 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26754 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1C2D434((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)svtName, (int32_t)method, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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

  if ( (byte_4C2675B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_1C2D490(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1C2D490(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2675B = 1;
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
                  (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0) )
  {
LABEL_24:
    sub_1C2D6EC(Item, v1);
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
             (const MethodInfo_37898B4 *)Method_System_Collections_Generic_List_List_string___get_Item__);
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
      (const MethodInfo_378B358 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
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

  if ( (byte_4C26750 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26750 = 1;
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

  if ( (byte_4C26752 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26752 = 1;
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

  if ( (byte_4C2674A & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2674A = 1;
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

  if ( (byte_4C2674E & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2674E = 1;
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

  if ( (byte_4C26744 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26744 = 1;
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

  if ( (byte_4C26748 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26748 = 1;
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

  if ( (byte_4C2674C & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2674C = 1;
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

  if ( (byte_4C26746 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26746 = 1;
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

  if ( (byte_4C26751 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26751 = 1;
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

  if ( (byte_4C26753 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26753 = 1;
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

  if ( (byte_4C2674B & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2674B = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4C2674F & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2674F = 1;
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

  if ( (byte_4C26745 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26745 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4C26749 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26749 = 1;
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

  if ( (byte_4C2674D & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C2674D = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4C26747 & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo_TypeInfo);
    byte_4C26747 = 1;
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

  if ( (byte_4C2675F & 1) == 0 )
  {
    sub_1C2D490(&MotionInfo___c_TypeInfo);
    byte_4C2675F = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(MotionInfo___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)MotionInfo___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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