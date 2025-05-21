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

  if ( (byte_4B43F34 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string____ctor__, v1);
    sub_1BDB878(&System_Collections_Generic_List_List_string___TypeInfo, v4);
    sub_1BDB878(&MotionInfo_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_1/*""*/, v6);
    byte_4B43F34 = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BDB81C((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)StringLiteral_1/*""*/, v2, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4B3E80A )
  {
    sub_1BDB878(&UnityEngine_Vector2_TypeInfo, v7);
    byte_4B3E80A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v9 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v10 = MotionInfo_TypeInfo->static_fields;
  v10->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v9;
  sub_1BDB81C((CGThumbnailListItem_o *)&v10->voicePlaybackLogList, (int32_t)v9, v11, v12);
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

  if ( (byte_4B43F2E & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    sub_1BDB878(&StringLiteral_11481/*"SE"*/, v5);
    byte_4B43F2E = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B43F55 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F55 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4B43F56 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_4B43F56 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4B43F54 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_4B43F54 = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4B43F58 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v8);
    byte_4B43F58 = 1;
  }
  v11 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4B43F59 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4B43F59 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4B43F5A )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4B43F5A = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsRandom_k__BackingField = 0;
  v12 = StringLiteral_11481/*"SE"*/;
  if ( !byte_4B43F57 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4B43F57 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v13 = v11->static_fields;
  v13->_VoiceType_k__BackingField = (struct System_String_o *)v12;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13->_VoiceType_k__BackingField, v12, v9, v10);
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

  if ( (byte_4B43F2F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string___Add__, v1);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v2);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1BDB878(&MotionInfo_TypeInfo, v5);
    sub_1BDB878(&string___TypeInfo, v6);
    sub_1BDB878(&StringLiteral_333/*" 確率 / 合計 : "*/, v7);
    sub_1BDB878(&StringLiteral_202/*" VoiceID : "*/, v8);
    sub_1BDB878(&StringLiteral_1146/*"0.00"*/, v9);
    sub_1BDB878(&StringLiteral_162/*" / "*/, v10);
    sub_1BDB878(&StringLiteral_886/*"--- Voice・SE Log ---"*/, v11);
    sub_1BDB878(&StringLiteral_195/*" SEID : "*/, v12);
    sub_1BDB878(&StringLiteral_332/*" 分類 : "*/, v13);
    sub_1BDB878(&StringLiteral_12697/*"ServantID : "*/, v14);
    byte_4B43F2F = 1;
  }
  LODWORD(format.klass) = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62572260((System_String_o *)StringLiteral_886/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
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
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v25[4] = v24;
    sub_1BDB81C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B43F4D )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v26);
    byte_4B43F4D = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4B43F4F )
      {
        sub_1BDB878(&MotionInfo_TypeInfo, v26);
        byte_4B43F4F = 1;
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
  if ( !byte_4B43F4E )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v26);
    byte_4B43F4E = 1;
  }
  v32 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v32 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v32->static_fields->_VoiceServantId_k__BackingField;
  v34 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62610508(
                                   (System_String_o *)StringLiteral_12697/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v34,
                                   0LL);
  v37 = v15->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v37 )
LABEL_74:
    sub_1BDBAD4(voicePlaybackLogList, v18);
  v39 = v15->fields._size;
  v40 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v37->obj.klass + v39;
    v15->fields._size = v39 + 1;
    v41[4] = v40;
    sub_1BDB81C((CGThumbnailListItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
  }
  if ( !byte_4B43F4F )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v42);
    byte_4B43F4F = 1;
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
  voicePlaybackLogList = (char *)System_String__Concat_62610508(v30, VoiceId_k__BackingField, v29, 0LL);
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
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v46->obj.klass + v48;
    v15->fields._size = v48 + 1;
    v50[4] = v49;
    sub_1BDB81C((CGThumbnailListItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
  }
  voicePlaybackLogList = (char *)sub_1BDB920(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v53 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v54 = StringLiteral_333/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_333/*" 確率 / 合計 : "*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(voicePlaybackLogList + 32), v54, v51, v52);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B43F50 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v55);
    byte_4B43F50 = 1;
  }
  v56 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v56 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v56->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_64172632(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1146/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v53 + 5) = voicePlaybackLogList;
  sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 40), (int32_t)voicePlaybackLogList, v51, v57);
  if ( *((_DWORD *)v53 + 6) <= 2u )
    goto LABEL_75;
  v59 = StringLiteral_162/*" / "*/;
  *((_QWORD *)v53 + 6) = StringLiteral_162/*" / "*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 48), v59, v51, v58);
  if ( !byte_4B43F51 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v60);
    byte_4B43F51 = 1;
  }
  v61 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v61 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v61->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_64172632(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1146/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 3u
    || (*((_QWORD *)v53 + 7) = voicePlaybackLogList,
        sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 56), (int32_t)voicePlaybackLogList, v51, v62),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v53 + 6) <= 4u) )
  {
LABEL_75:
    sub_1BDBADC(voicePlaybackLogList, v18, v51);
  }
  *((_QWORD *)v53 + 8) = voicePlaybackLogList;
  sub_1BDB81C((CGThumbnailListItem_o *)(v53 + 64), (int32_t)voicePlaybackLogList, v51, v63);
  voicePlaybackLogList = (char *)System_String__Concat_62612776((System_String_array *)v53, 0LL);
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
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
  }
  else
  {
    v70 = &v66->obj.klass + v68;
    v15->fields._size = v68 + 1;
    v70[4] = v69;
    sub_1BDB81C((CGThumbnailListItem_o *)(v70 + 4), (int32_t)v69, v64, v65);
  }
  if ( !byte_4B43F52 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v71);
    byte_4B43F52 = 1;
  }
  v72 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v72 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v72->static_fields->_VoiceType_k__BackingField;
  v74 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62610508(
                                   (System_String_o *)StringLiteral_332/*" 分類 : "*/,
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
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
  }
  else
  {
    v81 = &v77->obj.klass + v79;
    v15->fields._size = v79 + 1;
    v81[4] = v80;
    sub_1BDB81C((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v80, v75, v76);
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
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = v84 + 8 * v86;
    *((_DWORD *)voicePlaybackLogList + 6) = v86 + 1;
    *(_QWORD *)(v87 + 32) = v15;
    sub_1BDB81C((CGThumbnailListItem_o *)(v87 + 32), (int32_t)v15, v82, v83);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v88);
}


void __fastcall MotionInfo__AddVoiceLog_39990820(System_String_o *str, const MethodInfo *method)
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

  if ( (byte_4B43F30 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string___Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BDB878(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BDB878(&MotionInfo_TypeInfo, v6);
    byte_4B43F30 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_string___ctor__);
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
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_1BDB81C((CGThumbnailListItem_o *)(v15 + 4), (int32_t)str, v10, v11);
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
    sub_1BDBAD4(voicePlaybackLogList, v9);
  }
  v21 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v7,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    voicePlaybackLogList->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v7;
    sub_1BDB81C((CGThumbnailListItem_o *)(v22 + 4), (int32_t)v7, v16, v17);
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
  if ( (byte_4B43F2C & 1) == 0 )
  {
    sub_1BDB878(&BattleCommand_TypeInfo, *(_QWORD *)&type);
    sub_1BDB878(&StringLiteral_25513/*"バスター"*/, v4);
    sub_1BDB878(&StringLiteral_25495/*"クイック"*/, v5);
    sub_1BDB878(&StringLiteral_25484/*"アーツ"*/, v6);
    sub_1BDB878(&StringLiteral_25488/*"エクストラ"*/, v7);
    byte_4B43F2C = 1;
  }
  if ( !BattleCommand_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleCommand_TypeInfo);
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v8 = &StringLiteral_25484/*"アーツ"*/;
      goto LABEL_11;
    case 2:
      v8 = &StringLiteral_25513/*"バスター"*/;
      goto LABEL_11;
    case 3:
      v8 = &StringLiteral_25495/*"クイック"*/;
      goto LABEL_11;
    case 4:
      v8 = &StringLiteral_25488/*"エクストラ"*/;
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
  bool v139; // w0
  bool v140; // w21
  __int64 v141; // x2
  __int64 v142; // x3
  __int64 v143; // x4
  MotionInfo_c *v144; // x0
  float v145; // s11
  Il2CppObject *v146; // x0
  System_String_o *v147; // x21
  __int64 v148; // x2
  __int64 v149; // x3
  __int64 v150; // x4
  MotionInfo_c *v151; // x0
  Il2CppObject *v152; // x0
  System_String_o *v153; // x21
  __int64 v154; // x2
  __int64 v155; // x3
  __int64 v156; // x4
  MotionInfo_c *v157; // x0
  Il2CppObject *v158; // x0
  System_String_o *v159; // x21
  __int64 v160; // x2
  __int64 v161; // x3
  __int64 v162; // x4
  int32_t v163; // w21
  Il2CppObject *v164; // x21
  __int64 v165; // x2
  __int64 v166; // x3
  __int64 v167; // x4
  Il2CppObject *v168; // x22
  __int64 v169; // x2
  __int64 v170; // x3
  __int64 v171; // x4
  Il2CppObject *v172; // x0
  System_String_o *v173; // x21
  __int64 v174; // x2
  __int64 v175; // x3
  __int64 v176; // x4
  Il2CppObject *v177; // x0
  System_String_o *v178; // x0
  int32_t v179; // w21
  __int64 v180; // x2
  __int64 v181; // x3
  __int64 v182; // x4
  Il2CppObject *v183; // x0
  System_String_o *v184; // x0
  UnityEngine_GUIStyle_o *v185; // x20
  System_String_o *v186; // x21
  float v187; // s10
  float v188; // s9
  int32_t v189; // w0
  MotionInfo_c *v190; // x8
  float v191; // s11
  struct MotionInfo_StaticFields *v192; // x8
  struct UnityEngine_Vector2_o v193; // kr00_8
  MotionInfo_c *v194; // x8
  MotionInfo___c_c *v195; // x0
  System_Collections_Generic_IEnumerable_TSource__o *voicePlaybackLogList; // x20
  System_Func_object__object__o *_9__46_0; // x21
  Il2CppObject *v198; // x22
  struct MotionInfo___c_StaticFields *v199; // x0
  int32_t v200; // w2
  const MethodInfo *v201; // x3
  __int64 v202; // x8
  char *v203; // x20
  __int64 v204; // x9
  int *v205; // x10
  __int64 v206; // x0
  __int64 v207; // x1
  __int64 v208; // x20
  int i; // w25
  __int64 v210; // x8
  __int64 v211; // x9
  int *v212; // x10
  __int64 v213; // x0
  __int64 v214; // x8
  __int64 v215; // x9
  int *v216; // x10
  __int64 v217; // x0
  __int64 v218; // x22
  __int64 v219; // x0
  __int64 v220; // x1
  __int64 v221; // x2
  const MethodInfo *v222; // x3
  __int64 v223; // x21
  int32_t v224; // w1
  float v225; // s0
  System_String_o *v226; // x0
  __int64 v227; // x2
  const MethodInfo *v228; // x3
  __int64 v229; // x0
  __int64 v230; // x1
  __int64 v231; // x2
  const MethodInfo *v232; // x3
  int32_t v233; // w1
  __int64 v234; // x0
  __int64 v235; // x1
  __int64 v236; // x2
  const MethodInfo *v237; // x3
  __int64 v238; // x0
  __int64 v239; // x1
  __int64 v240; // x2
  const MethodInfo *v241; // x3
  int32_t v242; // w1
  System_String_o *v243; // x21
  __int64 v244; // x8
  __int64 v245; // x9
  int *v246; // x10
  __int64 v247; // x0
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-D0h]
  bool v249; // [xsp+18h] [xbp-B8h]
  int v250; // [xsp+1Ch] [xbp-B4h] BYREF
  int v251; // [xsp+20h] [xbp-B0h] BYREF
  int32_t monitor_high; // [xsp+24h] [xbp-ACh] BYREF
  float v253; // [xsp+28h] [xbp-A8h] BYREF
  System_String_o format; // [xsp+2Ch] [xbp-A4h] BYREF
  UnityEngine_Color_o v255; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v256; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v257; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v258; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v259; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v260; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v261; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v262; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v263; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v264; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v265; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v266; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v267; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B43F2B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_SelectMany_List_string___string___, method);
    sub_1BDB878(&System_Func_List_string___IEnumerable_string___TypeInfo, v4);
    sub_1BDB878(&UnityEngine_GUIStyle_TypeInfo, v5);
    sub_1BDB878(&UnityEngine_GUI_TypeInfo, v6);
    sub_1BDB878(&System_IDisposable_TypeInfo, v7);
    sub_1BDB878(&System_Collections_Generic_IEnumerable_string__TypeInfo, v8);
    sub_1BDB878(&System_Collections_Generic_IEnumerator_string__TypeInfo, v9);
    sub_1BDB878(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&System_Math_TypeInfo, v12);
    sub_1BDB878(&MotionInfo_TypeInfo, v13);
    sub_1BDB878(&float_TypeInfo, v14);
    sub_1BDB878(&string___TypeInfo, v15);
    sub_1BDB878(&Method_MotionInfo___c__OnGUI_b__46_0__, v16);
    sub_1BDB878(&MotionInfo___c_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_1748/*"<size={0}>+</size>"*/, v18);
    sub_1BDB878(&StringLiteral_1755/*"<size={fontSize}>ログ消去</size>"*/, v19);
    sub_1BDB878(&StringLiteral_25467/*"【モーションID】"*/, v20);
    sub_1BDB878(&StringLiteral_25466/*"【ボイス・SE】"*/, v21);
    sub_1BDB878(&StringLiteral_1752/*"<size={0}>▲</size>"*/, v22);
    sub_1BDB878(&StringLiteral_15347/*"VoiceID : "*/, v23);
    sub_1BDB878(&StringLiteral_25468/*"【名前】"*/, v24);
    sub_1BDB878(&StringLiteral_333/*" 確率 / 合計 : "*/, v25);
    sub_1BDB878(&StringLiteral_1747/*"<size="*/, v26);
    sub_1BDB878(&StringLiteral_25465/*"【カード属性】"*/, v27);
    sub_1BDB878(&StringLiteral_1146/*"0.00"*/, v28);
    sub_1BDB878(&StringLiteral_1754/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v29);
    sub_1BDB878(&StringLiteral_162/*" / "*/, v30);
    sub_1BDB878(&StringLiteral_195/*" SEID : "*/, v31);
    sub_1BDB878(&StringLiteral_25445/*"▶ ログ非表示"*/, v32);
    sub_1BDB878(&StringLiteral_1753/*"<size={0}>▼</size>"*/, v33);
    sub_1BDB878(&StringLiteral_1750/*"<size={0}>{1}/{2}</size>"*/, v34);
    sub_1BDB878(&StringLiteral_1751/*"<size={0}>{1}</size>"*/, v35);
    sub_1BDB878(&StringLiteral_1/*""*/, v36);
    sub_1BDB878(&StringLiteral_332/*" 分類 : "*/, v37);
    sub_1BDB878(&StringLiteral_1551/*"</size>"*/, v38);
    sub_1BDB878(&StringLiteral_1773/*">"*/, v39);
    sub_1BDB878(&StringLiteral_12697/*"ServantID : "*/, v40);
    sub_1BDB878(&StringLiteral_25446/*"◀ ログ表示　"*/, v41);
    sub_1BDB878(&StringLiteral_1749/*"<size={0}>-</size>"*/, v42);
    byte_4B43F2B = 1;
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
  if ( !byte_4B43F4D )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F4D = 1;
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
    if ( !byte_4B43F4E )
    {
      sub_1BDB878(&MotionInfo_TypeInfo, method);
      byte_4B43F4E = 1;
    }
    v51 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v51 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v51->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v54 = System_String__Concat_62610508(
            (System_String_o *)StringLiteral_12697/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v49 = MotionInfo_TypeInfo;
    v50 = v54;
  }
  if ( !v49->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v49);
  if ( !byte_4B43F4D )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F4D = 1;
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
    v57 = (System_String_o **)&StringLiteral_15347/*"VoiceID : "*/;
  v58 = *v57;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v55);
  if ( !byte_4B43F4F )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F4F = 1;
  }
  v59 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v59 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v59->static_fields->_VoiceId_k__BackingField;
  v61 = System_Environment__get_NewLine(0LL);
  v62 = System_String__Concat_62612512(v50, v58, VoiceId_k__BackingField, v61, 0LL);
  normal = (char *)sub_1BDB920(string___TypeInfo, 8LL);
  if ( !normal )
    goto LABEL_203;
  v65 = normal;
  if ( !*((_DWORD *)normal + 6) )
    goto LABEL_196;
  *((_QWORD *)normal + 4) = v62;
  sub_1BDB81C((CGThumbnailListItem_o *)(normal + 32), (int32_t)v62, v63, v64);
  if ( *((_DWORD *)v65 + 6) <= 1u )
    goto LABEL_196;
  v67 = StringLiteral_333/*" 確率 / 合計 : "*/;
  *((_QWORD *)v65 + 5) = StringLiteral_333/*" 確率 / 合計 : "*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 40), v67, v63, v66);
  if ( !byte_4B43F50 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v68);
    byte_4B43F50 = 1;
  }
  v69 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v69 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v69->static_fields->_VoiceWeight_k__BackingField;
  normal = (char *)System_Single__ToString_64172632(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1146/*"0.00"*/);
  if ( *((_DWORD *)v65 + 6) <= 2u )
    goto LABEL_196;
  *((_QWORD *)v65 + 6) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 48), (int32_t)normal, v63, v70);
  if ( *((_DWORD *)v65 + 6) <= 3u )
    goto LABEL_196;
  v72 = StringLiteral_162/*" / "*/;
  *((_QWORD *)v65 + 7) = StringLiteral_162/*" / "*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 56), v72, v63, v71);
  if ( !byte_4B43F51 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v73);
    byte_4B43F51 = 1;
  }
  v74 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v74 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v74->static_fields->_VoiceTotalWeight_k__BackingField;
  normal = (char *)System_Single__ToString_64172632(
                     *(float *)&format.klass,
                     &format,
                     (const MethodInfo *)StringLiteral_1146/*"0.00"*/);
  if ( *((_DWORD *)v65 + 6) <= 4u )
    goto LABEL_196;
  *((_QWORD *)v65 + 8) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 64), (int32_t)normal, v63, v75);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v65 + 6) <= 5u )
    goto LABEL_196;
  *((_QWORD *)v65 + 9) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 72), (int32_t)normal, v63, v76);
  if ( *((_DWORD *)v65 + 6) <= 6u )
    goto LABEL_196;
  v78 = StringLiteral_332/*" 分類 : "*/;
  *((_QWORD *)v65 + 10) = StringLiteral_332/*" 分類 : "*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 80), v78, v63, v77);
  if ( !byte_4B43F52 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v46);
    byte_4B43F52 = 1;
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
  sub_1BDB81C((CGThumbnailListItem_o *)(v65 + 88), v80, v63, v79);
  v81 = System_String__Concat_62612776((System_String_array *)v65, 0LL);
  v82 = sub_1BDB920(string___TypeInfo, 21LL);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( !v82 )
    goto LABEL_203;
  if ( !*(_DWORD *)(v82 + 24) )
    goto LABEL_196;
  *(_QWORD *)(v82 + 32) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 32), (int32_t)normal, v63, v83);
  if ( *(_DWORD *)(v82 + 24) <= 1u )
    goto LABEL_196;
  v85 = StringLiteral_25468/*"【名前】"*/;
  *(_QWORD *)(v82 + 40) = StringLiteral_25468/*"【名前】"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 40), v85, v63, v84);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 2u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 48) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 48), (int32_t)normal, v63, v86);
  if ( *(_DWORD *)(v82 + 24) <= 3u )
    goto LABEL_196;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v82 + 56) = static_fields->svtName;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 56), (int32_t)svtName, v63, v87);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 4u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 64) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 64), (int32_t)normal, v63, v90);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 5u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 72) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 72), (int32_t)normal, v63, v91);
  if ( *(_DWORD *)(v82 + 24) <= 6u )
    goto LABEL_196;
  v93 = StringLiteral_25467/*"【モーションID】"*/;
  *(_QWORD *)(v82 + 80) = StringLiteral_25467/*"【モーションID】"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 80), v93, v63, v92);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 7u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 88) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 88), (int32_t)normal, v63, v94);
  normal = (char *)System_Int32__ToString((int32_t)&format.fields, 0LL);
  if ( *(_DWORD *)(v82 + 24) <= 8u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 96) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 96), (int32_t)normal, v63, v95);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 9u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 104) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 104), (int32_t)normal, v63, v96);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xAu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 112) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 112), (int32_t)normal, v63, v97);
  if ( *(_DWORD *)(v82 + 24) <= 0xBu )
    goto LABEL_196;
  v99 = StringLiteral_25465/*"【カード属性】"*/;
  *(_QWORD *)(v82 + 120) = StringLiteral_25465/*"【カード属性】"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 120), v99, v63, v98);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xCu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 128) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 128), (int32_t)normal, v63, v100);
  if ( *(_DWORD *)(v82 + 24) <= 0xDu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 136) = TypeName;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 136), (int32_t)TypeName, v63, v101);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xEu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 144) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 144), (int32_t)normal, v63, v102);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0xFu )
    goto LABEL_196;
  *(_QWORD *)(v82 + 152) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 152), (int32_t)normal, v63, v103);
  if ( *(_DWORD *)(v82 + 24) <= 0x10u )
    goto LABEL_196;
  v105 = StringLiteral_25466/*"【ボイス・SE】"*/;
  *(_QWORD *)(v82 + 160) = StringLiteral_25466/*"【ボイス・SE】"*/;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 160), v105, v63, v104);
  normal = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v82 + 24) <= 0x11u )
    goto LABEL_196;
  *(_QWORD *)(v82 + 168) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 168), (int32_t)normal, v63, v106);
  if ( *(_DWORD *)(v82 + 24) <= 0x12u
    || (*(_QWORD *)(v82 + 176) = v81,
        sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 176), (int32_t)v81, v63, v107),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v82 + 24) <= 0x13u)
    || (*(_QWORD *)(v82 + 184) = normal,
        sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 184), (int32_t)normal, v63, v108),
        normal = (char *)System_Environment__get_NewLine(0LL),
        *(_DWORD *)(v82 + 24) <= 0x14u) )
  {
LABEL_196:
    sub_1BDBADC(normal, v46, v63);
  }
  *(_QWORD *)(v82 + 192) = normal;
  sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 192), (int32_t)normal, v63, v109);
  v110 = (Il2CppObject *)System_String__Concat_62612776((System_String_array *)v82, 0LL);
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
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.labelStyle, (int32_t)none, v115, v116);
    normal = (char *)*p_labelStyle;
    if ( !*p_labelStyle )
      goto LABEL_203;
    normal = (char *)UnityEngine_GUIStyle__get_normal((UnityEngine_GUIStyle_o *)normal, 0LL);
    if ( !normal )
      goto LABEL_203;
    v255.fields.r = 1.0;
    v255.fields.g = 1.0;
    v255.fields.b = 1.0;
    v255.fields.a = 1.0;
    UnityEngine_GUIStyleState__set_textColor((UnityEngine_GUIStyleState_o *)normal, v255, 0LL);
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
    v256.fields.m_Height = (float)v124;
    v256.fields.m_YMin = 0.0;
    v256.fields.m_XMin = v123;
    v256.fields.m_Width = width;
    UnityEngine_GUI__Box(v256, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    --v120;
  }
  while ( v120 );
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 1, 0LL);
  v253 = *((float *)&format.monitor + 1);
  v128 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v253, v125, v126, v127);
  v129 = System_String__Format_62613552((System_String_o *)StringLiteral_1751/*"<size={0}>{1}</size>"*/, v128, v110, 0LL);
  v130 = *p_labelStyle;
  v131 = v129;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v257.fields.m_YMin = 0.0;
  v257.fields.m_XMin = v121;
  v257.fields.m_Width = v119;
  v257.fields.m_Height = v117 + v117;
  UnityEngine_GUI__Label_70413496(v257, v131, v130, 0LL);
  isLogAreaShow = this->fields.isLogAreaShow;
  monitor_high = HIDWORD(format.monitor);
  v136 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &monitor_high, v133, v134, v135);
  if ( this->fields.isLogAreaShow )
    v137 = (Il2CppObject **)&StringLiteral_25445/*"▶ ログ非表示"*/;
  else
    v137 = (Il2CppObject **)&StringLiteral_25446/*"◀ ログ表示　"*/;
  v138 = System_String__Format_62613552((System_String_o *)StringLiteral_1751/*"<size={0}>{1}</size>"*/, v136, *v137, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v258.fields.m_XMin = v121;
  v258.fields.m_YMin = (float)((float)(v117 + v117) + 10.0) + 0.0;
  v258.fields.m_Width = v119 * 0.5;
  v258.fields.m_Height = v118;
  v139 = UnityEngine_GUI__Button(v258, v138, 0LL);
  v140 = isLogAreaShow;
  if ( v139 )
    v140 = !this->fields.isLogAreaShow;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v259.fields.m_XMin = (float)(v119 * 0.5) + v121;
  v259.fields.m_YMin = (float)((float)(v117 + v117) + 10.0) + 0.0;
  v259.fields.m_Width = v119 * 0.5;
  v259.fields.m_Height = v118;
  if ( UnityEngine_GUI__Button(v259, (System_String_o *)StringLiteral_1755/*"<size={fontSize}>ログ消去</size>"*/, 0LL) )
  {
    v144 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    MotionInfo__ResetVoicePlaybackLog((const MethodInfo *)v144);
  }
  if ( !this->fields.isLogAreaShow )
  {
    this->fields.isLogAreaShow = v140;
    return;
  }
  v145 = v118 + 10.0;
  v249 = v140;
  v253 = *((float *)&format.monitor + 1);
  v146 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v253, v141, v142, v143);
  v147 = System_String__Format((System_String_o *)StringLiteral_1752/*"<size={0}>▲</size>"*/, v146, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v260.fields.m_XMin = v121;
  v260.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v260.fields.m_Width = v118;
  v260.fields.m_Height = v118;
  if ( UnityEngine_GUI__RepeatButton(v260, v147, 0LL) )
  {
    v151 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v151 = MotionInfo_TypeInfo;
    }
    v151->static_fields->scrollPosition.fields.y = v151->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * -10.0);
  }
  v253 = *((float *)&format.monitor + 1);
  v152 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v253, v148, v149, v150);
  v153 = System_String__Format((System_String_o *)StringLiteral_1753/*"<size={0}>▼</size>"*/, v152, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v261.fields.m_XMin = v118 + v121;
  v261.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v261.fields.m_Width = v118;
  v261.fields.m_Height = v118;
  if ( UnityEngine_GUI__RepeatButton(v261, v153, 0LL) )
  {
    v157 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v157 = MotionInfo_TypeInfo;
    }
    v157->static_fields->scrollPosition.fields.y = v157->static_fields->scrollPosition.fields.y
                                                 + (float)((float)this->fields.scrollSpeed * 10.0);
  }
  v253 = *((float *)&format.monitor + 1);
  v158 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v253, v154, v155, v156);
  v159 = System_String__Format((System_String_o *)StringLiteral_1749/*"<size={0}>-</size>"*/, v158, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v262.fields.m_XMin = v118 + (float)(v118 + v121);
  v262.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v262.fields.m_Width = v118;
  v262.fields.m_Height = v118;
  if ( UnityEngine_GUI__Button(v262, v159, 0LL) )
  {
    v163 = this->fields.scrollSpeed - 1;
    this->fields.scrollSpeed = v163;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Max_64100580(v163, 1, 0LL);
  }
  v253 = *((float *)&format.monitor + 1) * 0.9;
  v164 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v253, v160, v161, v162);
  monitor_high = this->fields.scrollSpeed;
  v168 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &monitor_high, v165, v166, v167);
  v251 = 10;
  v172 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v251, v169, v170, v171);
  v173 = System_String__Format_62613620((System_String_o *)StringLiteral_1750/*"<size={0}>{1}/{2}</size>"*/, v164, v168, v172, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v263.fields.m_XMin = v118 + (float)(v118 + (float)(v118 + v121));
  v263.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v263.fields.m_Width = v118 + 10.0;
  v263.fields.m_Height = v118;
  UnityEngine_GUI__Box(v263, v173, 0LL);
  v250 = HIDWORD(format.monitor);
  v177 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v250, v174, v175, v176);
  v178 = System_String__Format((System_String_o *)StringLiteral_1748/*"<size={0}>+</size>"*/, v177, 0LL);
  v264.fields.m_XMin = v145 + (float)(v118 + (float)(v118 + (float)(v118 + v121)));
  v264.fields.m_YMin = (float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0);
  v264.fields.m_Width = v118;
  v264.fields.m_Height = v118;
  if ( UnityEngine_GUI__Button(v264, v178, 0LL) )
  {
    v179 = this->fields.scrollSpeed + 1;
    this->fields.scrollSpeed = v179;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    this->fields.scrollSpeed = System_Math__Min_64100908(v179, 10, 0LL);
  }
  normal = (char *)*p_labelStyle;
  if ( !*p_labelStyle )
    goto LABEL_203;
  UnityEngine_GUIStyle__set_alignment((UnityEngine_GUIStyle_o *)normal, 0, 0LL);
  v253 = *((float *)&format.monitor + 1);
  v183 = (Il2CppObject *)j_il2cpp_value_box_0(float_TypeInfo, &v253, v180, v181, v182);
  v184 = System_String__Format((System_String_o *)StringLiteral_1754/*"<size={0}>スクロール操作用UI\n　▲▼：上下移動\n　－＋：速度変更(～10倍)</size>"*/, v183, 0LL);
  v185 = *p_labelStyle;
  v186 = v184;
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v265.fields.m_Height = 40.0;
  v265.fields.m_XMin = v121;
  v265.fields.m_YMin = v145 + (float)((float)((float)((float)(v117 + v117) + 10.0) + 0.0) + (float)(v118 + 10.0));
  v265.fields.m_Width = v119;
  UnityEngine_GUI__Label_70413496(v265, v186, v185, 0LL);
  v187 = (float)((float)UnityEngine_Screen__get_width(0LL) - v119) + -10.0;
  v188 = *((float *)&format.monitor + 1) + 10.0;
  v189 = UnityEngine_Screen__get_height(0LL);
  v190 = MotionInfo_TypeInfo;
  v191 = (float)v189;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v190 = MotionInfo_TypeInfo;
  }
  v192 = v190->static_fields;
  v266.fields.m_YMin = 0.0;
  v266.fields.m_Width = v187;
  v266.fields.m_Height = v191;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  viewRect.fields.m_Width = v187 + -20.0;
  viewRect.fields.m_Height = v188 * (float)v192->voicePlayLogLineSize;
  v266.fields.m_XMin = 0.0;
  v193 = UnityEngine_GUI__BeginScrollView(v266, v192->scrollPosition, viewRect, 0LL);
  v194 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v193;
  v195 = MotionInfo___c_TypeInfo;
  voicePlaybackLogList = (System_Collections_Generic_IEnumerable_TSource__o *)v194->static_fields->voicePlaybackLogList;
  if ( !MotionInfo___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo___c_TypeInfo);
    v195 = MotionInfo___c_TypeInfo;
  }
  _9__46_0 = (System_Func_object__object__o *)v195->static_fields->__9__46_0;
  if ( !_9__46_0 )
  {
    if ( !v195->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v195);
      v195 = MotionInfo___c_TypeInfo;
    }
    v198 = (Il2CppObject *)v195->static_fields->__9;
    _9__46_0 = (System_Func_object__object__o *)sub_1BDBAC4(System_Func_List_string___IEnumerable_string___TypeInfo);
    System_Func_object__object____ctor(_9__46_0, v198, Method_MotionInfo___c__OnGUI_b__46_0__, 0LL);
    v199 = MotionInfo___c_TypeInfo->static_fields;
    v199->__9__46_0 = (struct System_Func_List_string___IEnumerable_string___o *)_9__46_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&v199->__9__46_0, (int32_t)_9__46_0, v200, v201);
  }
  normal = (char *)System_Linq_Enumerable__SelectMany_object__object_(
                     voicePlaybackLogList,
                     (System_Func_TSource__IEnumerable_TResult___o *)_9__46_0,
                     (const MethodInfo_306AA08 *)Method_System_Linq_Enumerable_SelectMany_List_string___string___);
  if ( !normal )
LABEL_203:
    sub_1BDBAD4(normal, v46);
  v202 = *(_QWORD *)normal;
  v203 = normal;
  v204 = *(unsigned __int16 *)(*(_QWORD *)normal + 302LL);
  if ( *(_WORD *)(*(_QWORD *)normal + 302LL) )
  {
    v205 = (int *)(*(_QWORD *)(v202 + 176) + 8LL);
    while ( *((System_Collections_Generic_IEnumerable_string__c **)v205 - 1) != System_Collections_Generic_IEnumerable_string__TypeInfo )
    {
      --v204;
      v205 += 4;
      if ( !v204 )
        goto LABEL_159;
    }
    v206 = v202 + 16LL * *v205 + 312;
  }
  else
  {
LABEL_159:
    v206 = sub_1C2C00C(normal, System_Collections_Generic_IEnumerable_string__TypeInfo, 0LL);
  }
  v208 = (*(__int64 (__fastcall **)(char *, _QWORD))v206)(v203, *(_QWORD *)(v206 + 8));
  if ( !v208 )
    sub_1BDBAD4(0LL, v207);
  for ( i = 0; ; ++i )
  {
    v210 = *(_QWORD *)v208;
    v211 = *(unsigned __int16 *)(*(_QWORD *)v208 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v208 + 302LL) )
    {
      v212 = (int *)(*(_QWORD *)(v210 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v212 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v211;
        v212 += 4;
        if ( !v211 )
          goto LABEL_168;
      }
      v213 = v210 + 16LL * *v212 + 312;
    }
    else
    {
LABEL_168:
      v213 = sub_1C2C00C(v208, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v213)(v208, *(_QWORD *)(v213 + 8)) & 1) == 0 )
      break;
    v214 = *(_QWORD *)v208;
    v215 = *(unsigned __int16 *)(*(_QWORD *)v208 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v208 + 302LL) )
    {
      v216 = (int *)(*(_QWORD *)(v214 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_string__c **)v216 - 1) != System_Collections_Generic_IEnumerator_string__TypeInfo )
      {
        --v215;
        v216 += 4;
        if ( !v215 )
          goto LABEL_175;
      }
      v217 = v214 + 16LL * *v216 + 312;
    }
    else
    {
LABEL_175:
      v217 = sub_1C2C00C(v208, System_Collections_Generic_IEnumerator_string__TypeInfo, 0LL);
    }
    v218 = (*(__int64 (__fastcall **)(__int64, _QWORD))v217)(v208, *(_QWORD *)(v217 + 8));
    v219 = sub_1BDB920(string___TypeInfo, 5LL);
    v223 = v219;
    if ( !v219 )
      sub_1BDBAD4(0LL, v220);
    if ( !*(_DWORD *)(v219 + 24) )
      sub_1BDBADC(v219, v220, v221);
    v224 = StringLiteral_1747/*"<size="*/;
    *(_QWORD *)(v219 + 32) = StringLiteral_1747/*"<size="*/;
    sub_1BDB81C((CGThumbnailListItem_o *)(v219 + 32), v224, v221, v222);
    v226 = System_Single__ToString(v225, (const MethodInfo *)((char *)&format.monitor + 4));
    if ( *(_DWORD *)(v223 + 24) <= 1u )
      sub_1BDBADC(v226, v226, v227);
    *(_QWORD *)(v223 + 40) = v226;
    sub_1BDB81C((CGThumbnailListItem_o *)(v223 + 40), (int32_t)v226, v227, v228);
    if ( *(_DWORD *)(v223 + 24) <= 2u )
      sub_1BDBADC(v229, v230, v231);
    v233 = StringLiteral_1773/*">"*/;
    *(_QWORD *)(v223 + 48) = StringLiteral_1773/*">"*/;
    sub_1BDB81C((CGThumbnailListItem_o *)(v223 + 48), v233, v231, v232);
    if ( *(_DWORD *)(v223 + 24) <= 3u )
      sub_1BDBADC(v234, v235, v236);
    *(_QWORD *)(v223 + 56) = v218;
    sub_1BDB81C((CGThumbnailListItem_o *)(v223 + 56), v218, v236, v237);
    if ( *(_DWORD *)(v223 + 24) <= 4u )
      sub_1BDBADC(v238, v239, v240);
    v242 = StringLiteral_1551/*"</size>"*/;
    *(_QWORD *)(v223 + 64) = StringLiteral_1551/*"</size>"*/;
    sub_1BDB81C((CGThumbnailListItem_o *)(v223 + 64), v242, v240, v241);
    v243 = System_String__Concat_62612776((System_String_array *)v223, 0LL);
    if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
    v267.fields.m_YMin = v188 * (float)i;
    v267.fields.m_XMin = 0.0;
    v267.fields.m_Width = v187 + -20.0;
    v267.fields.m_Height = v188;
    UnityEngine_GUI__Label(v267, v243, 0LL);
  }
  v244 = *(_QWORD *)v208;
  v245 = *(unsigned __int16 *)(*(_QWORD *)v208 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v208 + 302LL) )
  {
    v246 = (int *)(*(_QWORD *)(v244 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v246 - 1) != System_IDisposable_TypeInfo )
    {
      --v245;
      v246 += 4;
      if ( !v245 )
        goto LABEL_190;
    }
    v247 = v244 + 16LL * *v246 + 312;
  }
  else
  {
LABEL_190:
    v247 = sub_1C2C00C(v208, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v247)(v208, *(_QWORD *)(v247 + 8));
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
  this->fields.isLogAreaShow = v249;
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

  if ( (byte_4B43F2D & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B43F2D = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v5 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B43F53 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F53 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)v5, v2, v3);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B43F54 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v8);
    byte_4B43F54 = 1;
  }
  v12 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v12 = MotionInfo_TypeInfo;
  }
  v13 = v12->static_fields;
  v13->_VoiceId_k__BackingField = v11;
  sub_1BDB81C((CGThumbnailListItem_o *)&v13->_VoiceId_k__BackingField, (int32_t)v11, v9, v10);
  if ( !byte_4B43F55 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v14);
    byte_4B43F55 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4B43F56 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_4B43F56 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v18 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4B43F57 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_4B43F57 = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = v18;
  sub_1BDB81C((CGThumbnailListItem_o *)&v19->_VoiceType_k__BackingField, (int32_t)v18, v15, v16);
  if ( !byte_4B43F58 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v20);
    byte_4B43F58 = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4B43F59 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v20);
    v21 = MotionInfo_TypeInfo;
    byte_4B43F59 = 1;
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

  if ( (byte_4B43F33 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F33 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4B43F5A )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F5A = 1;
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

  if ( (byte_4B43F32 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string___Clear__, v1);
    sub_1BDB878(&MotionInfo_TypeInfo, v2);
    byte_4B43F32 = 1;
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
    sub_1BDBAD4(v3, v1);
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

  if ( (byte_4B43F2A & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, svtName);
    byte_4B43F2A = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1BDB81C((CGThumbnailListItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)svtName, (int32_t)method, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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

  if ( (byte_4B43F31 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1);
    sub_1BDB878(&Method_System_Collections_Generic_List_string__get_Count__, v2);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string___get_Count__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_List_string___get_Item__, v4);
    sub_1BDB878(&MotionInfo_TypeInfo, v5);
    byte_4B43F31 = 1;
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
                  (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_24:
    sub_1BDBAD4(Item, v1);
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
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_List_string___get_Item__);
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
      (const MethodInfo_36D7598 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
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

  if ( (byte_4B43F26 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F26 = 1;
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

  if ( (byte_4B43F28 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F28 = 1;
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

  if ( (byte_4B43F20 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F20 = 1;
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

  if ( (byte_4B43F24 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F24 = 1;
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

  if ( (byte_4B43F1A & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F1A = 1;
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

  if ( (byte_4B43F1E & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F1E = 1;
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

  if ( (byte_4B43F22 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F22 = 1;
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

  if ( (byte_4B43F1C & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v1);
    byte_4B43F1C = 1;
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

  if ( (byte_4B43F27 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F27 = 1;
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

  if ( (byte_4B43F29 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F29 = 1;
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

  if ( (byte_4B43F21 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F21 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4B43F25 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F25 = 1;
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

  if ( (byte_4B43F1B & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F1B = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_4B43F1F & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v2);
    byte_4B43F1F = 1;
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

  if ( (byte_4B43F23 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, method);
    byte_4B43F23 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_4B43F1D & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo_TypeInfo, v2);
    byte_4B43F1D = 1;
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

  if ( (byte_4B43F35 & 1) == 0 )
  {
    sub_1BDB878(&MotionInfo___c_TypeInfo, v1);
    byte_4B43F35 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(MotionInfo___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MotionInfo___c_TypeInfo->static_fields->__9 = (struct MotionInfo___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)MotionInfo___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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