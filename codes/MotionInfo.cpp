void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v9; // x19
  struct MotionInfo_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct MotionInfo_StaticFields *v13; // x8

  if ( (byte_4AB525B & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string____ctor__, v1);
    sub_1BAB41C(&System_Collections_Generic_List_List_string___TypeInfo, v4);
    sub_1BAB41C(&MotionInfo_TypeInfo, v5);
    sub_1BAB41C(&StringLiteral_1/*""*/, v6);
    byte_4AB525B = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)StringLiteral_1/*""*/, v2, v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4AB058A )
  {
    sub_1BAB41C(&UnityEngine_Vector2_TypeInfo, v7);
    byte_4AB058A = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v9 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v10 = MotionInfo_TypeInfo->static_fields;
  v10->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v9;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v10->voicePlaybackLogList, (int32_t)v9, v11, v12);
  v13 = MotionInfo_TypeInfo->static_fields;
  *(_QWORD *)&v13->voicePlaybackLogMaxNum = 500LL;
  v13->scrollSpeed = 1;
}


void __fastcall MotionInfo___ctor(MotionInfo_o *this, const MethodInfo *method)
{
  this->fields.show = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MotionInfo__AddSeLog(System_String_o *seId, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  MotionInfo_c *v11; // x0
  __int64 v12; // x20
  struct MotionInfo_StaticFields *v13; // x0
  const MethodInfo *v14; // x0

  if ( (byte_4AB5255 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    sub_1BAB41C(&StringLiteral_11495/*"SE"*/, v5);
    byte_4AB5255 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4AB52BC )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB52BC = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4AB52BD )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_4AB52BD = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4AB52BB )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    v6 = MotionInfo_TypeInfo;
    byte_4AB52BB = 1;
  }
  if ( !v6->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v6);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4AB52BF )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v8);
    byte_4AB52BF = 1;
  }
  v11 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4AB52C0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4AB52C0 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4AB52C1 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4AB52C1 = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v11->static_fields->_IsRandom_k__BackingField = 0;
  v12 = StringLiteral_11495/*"SE"*/;
  if ( !byte_4AB52BE )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v8);
    v11 = MotionInfo_TypeInfo;
    byte_4AB52BE = 1;
  }
  if ( !v11->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v11);
    v11 = MotionInfo_TypeInfo;
  }
  v13 = v11->static_fields;
  v13->_VoiceType_k__BackingField = (struct System_String_o *)v12;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13->_VoiceType_k__BackingField, v12, v9, v10);
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
  int32_t v20; // w3
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
  int32_t v36; // w3
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass *v40; // x1
  Il2CppClass **v41; // x0
  __int64 v42; // x1
  MotionInfo_c *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass *v49; // x1
  Il2CppClass **v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  char *v53; // x20
  int32_t v54; // w1
  __int64 v55; // x1
  MotionInfo_c *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  int32_t v59; // w2
  int32_t v60; // w3
  int32_t v61; // w1
  __int64 v62; // x1
  MotionInfo_c *v63; // x0
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w2
  int32_t v67; // w3
  int32_t v68; // w2
  int32_t v69; // w3
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
  int32_t v80; // w3
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass *v84; // x1
  Il2CppClass **v85; // x0
  int32_t v86; // w2
  int32_t v87; // w3
  __int64 v88; // x8
  _QWORD *v89; // x9
  __int64 v90; // x10
  __int64 v91; // x8
  const MethodInfo *v92; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4AB5256 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___Add__, v1);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v2);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v3);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v4);
    sub_1BAB41C(&MotionInfo_TypeInfo, v5);
    sub_1BAB41C(&string___TypeInfo, v6);
    sub_1BAB41C(&StringLiteral_358/*" 確率 / 合計 : "*/, v7);
    sub_1BAB41C(&StringLiteral_213/*" VoiceID : "*/, v8);
    sub_1BAB41C(&StringLiteral_1213/*"0.00"*/, v9);
    sub_1BAB41C(&StringLiteral_169/*" / "*/, v10);
    sub_1BAB41C(&StringLiteral_931/*"--- Voice・SE Log ---"*/, v11);
    sub_1BAB41C(&StringLiteral_205/*" SEID : "*/, v12);
    sub_1BAB41C(&StringLiteral_356/*" 分類 : "*/, v13);
    sub_1BAB41C(&StringLiteral_12660/*"ServantID : "*/, v14);
    byte_4AB5256 = 1;
  }
  LODWORD(format.klass) = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62048128((System_String_o *)StringLiteral_931/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &items->obj.klass + size;
    v15->fields._size = size + 1;
    v25[4] = v24;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v24, v19, v20);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4AB52B4 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v26);
    byte_4AB52B4 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4AB52B6 )
      {
        sub_1BAB41C(&MotionInfo_TypeInfo, v26);
        byte_4AB52B6 = 1;
      }
      v27 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v27 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v27->static_fields->_VoiceId_k__BackingField;
      v29 = System_Environment__get_NewLine(0LL);
      v30 = (System_String_o *)StringLiteral_205/*" SEID : "*/;
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
  if ( !byte_4AB52B5 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v26);
    byte_4AB52B5 = 1;
  }
  v32 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v32 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v32->static_fields->_VoiceServantId_k__BackingField;
  v34 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62059388(
                                   (System_String_o *)StringLiteral_12660/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v34,
                                   0LL);
  v37 = v15->fields._items;
  v38 = Method_System_Collections_Generic_List_string__Add__;
  ++v15->fields._version;
  if ( !v37 )
LABEL_74:
    sub_1BAB678(voicePlaybackLogList, v18);
  v39 = v15->fields._size;
  v40 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v39 >= v37->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v15,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v37->obj.klass + v39;
    v15->fields._size = v39 + 1;
    v41[4] = v40;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v41 + 4), (int32_t)v40, v35, v36);
  }
  if ( !byte_4AB52B6 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v42);
    byte_4AB52B6 = 1;
  }
  v43 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v43 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v43->static_fields->_VoiceId_k__BackingField;
  v29 = System_Environment__get_NewLine(0LL);
  v30 = (System_String_o *)StringLiteral_213/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_62059388(v30, VoiceId_k__BackingField, v29, 0LL);
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v50 = &v46->obj.klass + v48;
    v15->fields._size = v48 + 1;
    v50[4] = v49;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v50 + 4), (int32_t)v49, v44, v45);
  }
  voicePlaybackLogList = (char *)sub_1BAB4C4(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v53 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v54 = StringLiteral_358/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_358/*" 確率 / 合計 : "*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(voicePlaybackLogList + 32), v54, v51, v52);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4AB52B7 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v55);
    byte_4AB52B7 = 1;
  }
  v56 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v56 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v56->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_62936204(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v53 + 5) = voicePlaybackLogList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v53 + 40), (int32_t)voicePlaybackLogList, v57, v58);
  if ( *((_DWORD *)v53 + 6) <= 2u )
    goto LABEL_75;
  v61 = StringLiteral_169/*" / "*/;
  *((_QWORD *)v53 + 6) = StringLiteral_169/*" / "*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v53 + 48), v61, v59, v60);
  if ( !byte_4AB52B8 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v62);
    byte_4AB52B8 = 1;
  }
  v63 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v63 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v63->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_62936204(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v53 + 6) <= 3u
    || (*((_QWORD *)v53 + 7) = voicePlaybackLogList,
        sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v53 + 56), (int32_t)voicePlaybackLogList, v64, v65),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v53 + 6) <= 4u) )
  {
LABEL_75:
    sub_1BAB680(voicePlaybackLogList, v18);
  }
  *((_QWORD *)v53 + 8) = voicePlaybackLogList;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v53 + 64), (int32_t)voicePlaybackLogList, v66, v67);
  voicePlaybackLogList = (char *)System_String__Concat_62061656((System_String_array *)v53, 0LL);
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v70->obj.klass + v72;
    v15->fields._size = v72 + 1;
    v74[4] = v73;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v73, v68, v69);
  }
  if ( !byte_4AB52B9 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v75);
    byte_4AB52B9 = 1;
  }
  v76 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v76 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v76->static_fields->_VoiceType_k__BackingField;
  v78 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_62059388(
                                   (System_String_o *)StringLiteral_356/*" 分類 : "*/,
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v85 = &v81->obj.klass + v83;
    v15->fields._size = v83 + 1;
    v85[4] = v84;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v84, v79, v80);
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
  }
  else
  {
    v91 = v88 + 8 * v90;
    *((_DWORD *)voicePlaybackLogList + 6) = v90 + 1;
    *(_QWORD *)(v91 + 32) = v15;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v91 + 32), (int32_t)v15, v86, v87);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v92);
}


void __fastcall MotionInfo__AddVoiceLog_38579092(System_String_o *str, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  MotionInfo_c *v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x8
  const MethodInfo *v23; // x0

  if ( (byte_4AB5257 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___Add__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__Add__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BAB41C(&System_Collections_Generic_List_string__TypeInfo, v5);
    sub_1BAB41C(&MotionInfo_TypeInfo, v6);
    byte_4AB5257 = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BAB668(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_354D088 *)Method_System_Collections_Generic_List_string___ctor__);
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
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v7->fields._size = size + 1;
    v15[4] = (Il2CppClass *)str;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)str, v10, v11);
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
    sub_1BAB678(voicePlaybackLogList, v9);
  }
  v21 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v21 >= v19->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v7,
      *(const MethodInfo_354D8BC **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v22 = &v19->obj.klass + v21;
    voicePlaybackLogList->fields._size = v21 + 1;
    v22[4] = (Il2CppClass *)v7;
    sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v7, v16, v17);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v23);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 *v7; // x8
  System_String_o *result; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = type;
  if ( (byte_4AB5253 & 1) == 0 )
  {
    sub_1BAB41C(&StringLiteral_25358/*"バスター"*/, *(_QWORD *)&type);
    sub_1BAB41C(&StringLiteral_25340/*"クイック"*/, v4);
    sub_1BAB41C(&StringLiteral_25329/*"アーツ"*/, v5);
    sub_1BAB41C(&StringLiteral_25333/*"エクストラ"*/, v6);
    byte_4AB5253 = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v7 = &StringLiteral_25329/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v7 = &StringLiteral_25358/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v7 = &StringLiteral_25340/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v7 = &StringLiteral_25333/*"エクストラ"*/;
LABEL_9:
      result = (System_String_o *)*v7;
      break;
    default:
      result = System_Int32__ToString((int32_t)&v9, 0LL);
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
  char *Item; // x0
  System_String_o *TypeName; // x19
  struct BattleActionData_o *actionData; // x8
  __int64 v36; // x1
  int32_t commandType; // w19
  __int64 v38; // x9
  MotionInfo_c *v39; // x8
  System_String_o *v40; // x20
  MotionInfo_c *v41; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *NewLine; // x0
  System_String_o *v44; // x0
  MotionInfo_c *v45; // x0
  uint32_t cctor_finished; // w8
  System_String_o **v47; // x9
  System_String_o *v48; // x21
  MotionInfo_c *v49; // x0
  System_String_o *VoiceId_k__BackingField; // x22
  System_String_o *v51; // x0
  System_String_o *v52; // x21
  int32_t v53; // w2
  int32_t v54; // w3
  char *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  int32_t v58; // w1
  __int64 v59; // x1
  MotionInfo_c *v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  int32_t v63; // w2
  int32_t v64; // w3
  int32_t v65; // w1
  __int64 v66; // x1
  MotionInfo_c *v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  int32_t v70; // w2
  int32_t v71; // w3
  int32_t v72; // w2
  int32_t v73; // w3
  int32_t v74; // w1
  int32_t v75; // w2
  int32_t v76; // w3
  __int64 v77; // x1
  System_String_o *v78; // x21
  __int64 v79; // x20
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  int32_t v84; // w1
  int32_t v85; // w2
  int32_t v86; // w3
  int32_t v87; // w2
  int32_t v88; // w3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  int32_t v97; // w1
  int32_t v98; // w2
  int32_t v99; // w3
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w2
  int32_t v103; // w3
  int32_t v104; // w2
  int32_t v105; // w3
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w1
  int32_t v109; // w2
  int32_t v110; // w3
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w2
  int32_t v116; // w3
  int32_t v117; // w2
  int32_t v118; // w3
  int32_t v119; // w1
  int32_t v120; // w2
  int32_t v121; // w3
  int32_t v122; // w2
  int32_t v123; // w3
  int32_t v124; // w2
  int32_t v125; // w3
  int32_t v126; // w2
  int32_t v127; // w3
  System_String_o *v128; // x20
  int32_t height; // w19
  float v130; // s11
  int32_t width; // w22
  int32_t v132; // w2
  int32_t v133; // w3
  char *v134; // x21
  int32_t v135; // w1
  float v136; // s0
  int32_t v137; // w2
  int32_t v138; // w3
  int32_t v139; // w2
  int32_t v140; // w3
  int32_t v141; // w1
  int32_t v142; // w2
  int32_t v143; // w3
  int32_t v144; // w2
  int32_t v145; // w3
  int32_t v146; // w1
  float v147; // s12
  float v148; // s8
  System_String_o *v149; // x19
  float v150; // s11
  int32_t v151; // w0
  float v152; // s9
  float v153; // s10
  float v154; // s13
  System_String_o *v155; // x0
  System_String_o *v156; // x0
  MotionInfo_c *v157; // x0
  float v158; // s0
  float v159; // s13
  System_String_o *v160; // x0
  System_String_o *v161; // x19
  MotionInfo_c *v162; // x0
  float v163; // s0
  float v164; // s13
  System_String_o *v165; // x0
  System_String_o *v166; // x19
  MotionInfo_c *v167; // x0
  struct MotionInfo_StaticFields *v168; // x8
  int32_t v169; // w19
  int32_t v170; // w20
  int32_t v171; // w2
  int32_t v172; // w3
  char *v173; // x19
  int32_t v174; // w1
  int32_t v175; // w2
  int32_t v176; // w3
  int32_t v177; // w2
  int32_t v178; // w3
  int32_t v179; // w1
  MotionInfo_c *v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  int32_t v183; // w2
  int32_t v184; // w3
  int32_t v185; // w1
  int32_t v186; // w2
  int32_t v187; // w3
  int32_t v188; // w2
  int32_t v189; // w3
  int32_t v190; // w1
  System_String_o *v191; // x19
  float v192; // s0
  float v193; // s13
  System_String_o *v194; // x0
  System_String_o *v195; // x0
  MotionInfo_c *v196; // x0
  struct MotionInfo_StaticFields *v197; // x8
  int32_t v198; // w19
  float v199; // s11
  int32_t v200; // w0
  MotionInfo_c *v201; // x8
  float v202; // s14
  float *v203; // x8
  float v204; // s14
  float v205; // s12
  float v206; // s13
  float v207; // s15
  struct UnityEngine_Vector2_o v208; // kr00_8
  int32_t v209; // w19
  int v210; // w24
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  Il2CppObject *current; // x21
  __int64 v213; // x0
  __int64 v214; // x1
  int32_t v215; // w2
  int32_t v216; // w3
  __int64 v217; // x20
  int32_t v218; // w1
  float v219; // s0
  System_String_o *v220; // x0
  int32_t v221; // w2
  int32_t v222; // w3
  __int64 v223; // x0
  __int64 v224; // x1
  int32_t v225; // w2
  int32_t v226; // w3
  int32_t v227; // w1
  __int64 v228; // x0
  __int64 v229; // x1
  int32_t v230; // w2
  int32_t v231; // w3
  __int64 v232; // x0
  __int64 v233; // x1
  int32_t v234; // w2
  int32_t v235; // w3
  int32_t v236; // w1
  System_String_o *v237; // x20
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v239; // [xsp+18h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v240; // [xsp+30h] [xbp-D0h] BYREF
  int v241; // [xsp+50h] [xbp-B0h] BYREF
  MethodInfo format; // [xsp+54h] [xbp-ACh] BYREF
  UnityEngine_Vector2_o v243; // 0:s4.4,4:s5.4
  UnityEngine_Rect_o v244; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v245; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v246; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v247; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v248; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v249; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v250; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v251; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4AB5252 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, method);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_1BAB41C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_1BAB41C(&UnityEngine_GUI_TypeInfo, v6);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___get_Count__, v8);
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___get_Item__, v9);
    sub_1BAB41C(&System_Math_TypeInfo, v10);
    sub_1BAB41C(&MotionInfo_TypeInfo, v11);
    sub_1BAB41C(&string___TypeInfo, v12);
    sub_1BAB41C(&StringLiteral_1861/*">+</size>"*/, v13);
    sub_1BAB41C(&StringLiteral_1869/*">▼</size>"*/, v14);
    sub_1BAB41C(&StringLiteral_25315/*"【モーションID】"*/, v15);
    sub_1BAB41C(&StringLiteral_25314/*"【ボイス・SE】"*/, v16);
    sub_1BAB41C(&StringLiteral_15406/*"VoiceID : "*/, v17);
    sub_1BAB41C(&StringLiteral_25316/*"【名前】"*/, v18);
    sub_1BAB41C(&StringLiteral_358/*" 確率 / 合計 : "*/, v19);
    sub_1BAB41C(&StringLiteral_1868/*">▲</size>"*/, v20);
    sub_1BAB41C(&StringLiteral_1837/*"<size="*/, v21);
    sub_1BAB41C(&StringLiteral_25313/*"【カード属性】"*/, v22);
    sub_1BAB41C(&StringLiteral_1862/*">-</size>"*/, v23);
    sub_1BAB41C(&StringLiteral_1213/*"0.00"*/, v24);
    sub_1BAB41C(&StringLiteral_1120/*"/"*/, v25);
    sub_1BAB41C(&StringLiteral_169/*" / "*/, v26);
    sub_1BAB41C(&StringLiteral_205/*" SEID : "*/, v27);
    sub_1BAB41C(&StringLiteral_1/*""*/, v28);
    sub_1BAB41C(&StringLiteral_356/*" 分類 : "*/, v29);
    sub_1BAB41C(&StringLiteral_1625/*"</size>"*/, v30);
    sub_1BAB41C(&StringLiteral_1858/*">"*/, v31);
    sub_1BAB41C(&StringLiteral_12660/*"ServantID : "*/, v32);
    byte_4AB5252 = 1;
  }
  HIDWORD(format.methodPointer) = 0;
  v241 = 0;
  memset(&v240, 0, sizeof(v240));
  if ( !this->fields.show )
    return;
  Item = (char *)MotionInfo_TypeInfo;
  LODWORD(format.virtualMethodPointer) = 0;
  TypeName = (System_String_o *)StringLiteral_1/*""*/;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    Item = (char *)MotionInfo_TypeInfo;
  }
  actionData = *(struct BattleActionData_o **)(*((_QWORD *)Item + 23) + 8LL);
  if ( actionData )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = (char *)MotionInfo_TypeInfo;
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_165;
    }
    LODWORD(format.virtualMethodPointer) = actionData->fields.motionId;
    commandType = actionData->fields.commandType;
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      actionData = MotionInfo_TypeInfo->static_fields->actionData;
      if ( !actionData )
        goto LABEL_165;
    }
    v38 = 60LL;
    if ( commandType == -1 )
      v38 = 56LL;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)Item, *(_DWORD *)((char *)&actionData->klass + v38), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4AB52B4 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB52B4 = 1;
  }
  v39 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v39 = MotionInfo_TypeInfo;
  }
  if ( v39->static_fields->_IsSe_k__BackingField )
  {
    v40 = (System_String_o *)StringLiteral_1/*""*/;
  }
  else
  {
    if ( !v39->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v39);
    if ( !byte_4AB52B5 )
    {
      sub_1BAB41C(&MotionInfo_TypeInfo, method);
      byte_4AB52B5 = 1;
    }
    v41 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v41 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v41->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v44 = System_String__Concat_62059388(
            (System_String_o *)StringLiteral_12660/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v39 = MotionInfo_TypeInfo;
    v40 = v44;
  }
  if ( !v39->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v39);
  if ( !byte_4AB52B4 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB52B4 = 1;
  }
  v45 = MotionInfo_TypeInfo;
  cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  if ( !cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v45 = MotionInfo_TypeInfo;
    cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
  }
  if ( v45->static_fields->_IsSe_k__BackingField )
    v47 = (System_String_o **)&StringLiteral_205/*" SEID : "*/;
  else
    v47 = (System_String_o **)&StringLiteral_15406/*"VoiceID : "*/;
  v48 = *v47;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v45);
  if ( !byte_4AB52B6 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB52B6 = 1;
  }
  v49 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v49 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v49->static_fields->_VoiceId_k__BackingField;
  v51 = System_Environment__get_NewLine(0LL);
  v52 = System_String__Concat_62061392(v40, v48, VoiceId_k__BackingField, v51, 0LL);
  Item = (char *)sub_1BAB4C4(string___TypeInfo, 8LL);
  if ( !Item )
    goto LABEL_165;
  v55 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  *((_QWORD *)Item + 4) = v52;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Item + 32), (int32_t)v52, v53, v54);
  if ( *((_DWORD *)v55 + 6) <= 1u )
    goto LABEL_166;
  v58 = StringLiteral_358/*" 確率 / 合計 : "*/;
  *((_QWORD *)v55 + 5) = StringLiteral_358/*" 確率 / 合計 : "*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 40), v58, v56, v57);
  if ( !byte_4AB52B7 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v59);
    byte_4AB52B7 = 1;
  }
  v60 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v60 = MotionInfo_TypeInfo;
  }
  *(float *)&format.methodPointer = v60->static_fields->_VoiceWeight_k__BackingField;
  Item = (char *)System_Single__ToString_62936204(
                   *(float *)&format.methodPointer,
                   (System_String_o *)&format,
                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v55 + 6) <= 2u )
    goto LABEL_166;
  *((_QWORD *)v55 + 6) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 48), (int32_t)Item, v61, v62);
  if ( *((_DWORD *)v55 + 6) <= 3u )
    goto LABEL_166;
  v65 = StringLiteral_169/*" / "*/;
  *((_QWORD *)v55 + 7) = StringLiteral_169/*" / "*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 56), v65, v63, v64);
  if ( !byte_4AB52B8 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v66);
    byte_4AB52B8 = 1;
  }
  v67 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v67 = MotionInfo_TypeInfo;
  }
  *(float *)&format.methodPointer = v67->static_fields->_VoiceTotalWeight_k__BackingField;
  Item = (char *)System_Single__ToString_62936204(
                   *(float *)&format.methodPointer,
                   (System_String_o *)&format,
                   (const MethodInfo *)StringLiteral_1213/*"0.00"*/);
  if ( *((_DWORD *)v55 + 6) <= 4u )
    goto LABEL_166;
  *((_QWORD *)v55 + 8) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 64), (int32_t)Item, v68, v69);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v55 + 6) <= 5u )
    goto LABEL_166;
  *((_QWORD *)v55 + 9) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 72), (int32_t)Item, v70, v71);
  if ( *((_DWORD *)v55 + 6) <= 6u )
    goto LABEL_166;
  v74 = StringLiteral_356/*" 分類 : "*/;
  *((_QWORD *)v55 + 10) = StringLiteral_356/*" 分類 : "*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 80), v74, v72, v73);
  if ( !byte_4AB52B9 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v36);
    byte_4AB52B9 = 1;
  }
  Item = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    Item = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v55 + 6) <= 7u )
LABEL_166:
    sub_1BAB680(Item, v36);
  v77 = *(_QWORD *)(*((_QWORD *)Item + 23) + 40LL);
  *((_QWORD *)v55 + 11) = v77;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v55 + 88), v77, v75, v76);
  v78 = System_String__Concat_62061656((System_String_array *)v55, 0LL);
  v79 = sub_1BAB4C4(string___TypeInfo, 21LL);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( !v79 )
    goto LABEL_165;
  if ( !*(_DWORD *)(v79 + 24) )
    goto LABEL_166;
  *(_QWORD *)(v79 + 32) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 32), (int32_t)Item, v80, v81);
  if ( *(_DWORD *)(v79 + 24) <= 1u )
    goto LABEL_166;
  v84 = StringLiteral_25316/*"【名前】"*/;
  *(_QWORD *)(v79 + 40) = StringLiteral_25316/*"【名前】"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 40), v84, v82, v83);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 2u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 48) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 48), (int32_t)Item, v85, v86);
  if ( *(_DWORD *)(v79 + 24) <= 3u )
    goto LABEL_166;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v79 + 56) = static_fields->svtName;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 56), (int32_t)svtName, v87, v88);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 4u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 64) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 64), (int32_t)Item, v91, v92);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 5u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 72) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 72), (int32_t)Item, v93, v94);
  if ( *(_DWORD *)(v79 + 24) <= 6u )
    goto LABEL_166;
  v97 = StringLiteral_25315/*"【モーションID】"*/;
  *(_QWORD *)(v79 + 80) = StringLiteral_25315/*"【モーションID】"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 80), v97, v95, v96);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 7u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 88) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 88), (int32_t)Item, v98, v99);
  Item = (char *)System_Int32__ToString((int32_t)&format.virtualMethodPointer, 0LL);
  if ( *(_DWORD *)(v79 + 24) <= 8u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 96) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 96), (int32_t)Item, v100, v101);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 9u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 104) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 104), (int32_t)Item, v102, v103);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0xAu )
    goto LABEL_166;
  *(_QWORD *)(v79 + 112) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 112), (int32_t)Item, v104, v105);
  if ( *(_DWORD *)(v79 + 24) <= 0xBu )
    goto LABEL_166;
  v108 = StringLiteral_25313/*"【カード属性】"*/;
  *(_QWORD *)(v79 + 120) = StringLiteral_25313/*"【カード属性】"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 120), v108, v106, v107);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0xCu )
    goto LABEL_166;
  *(_QWORD *)(v79 + 128) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 128), (int32_t)Item, v109, v110);
  if ( *(_DWORD *)(v79 + 24) <= 0xDu )
    goto LABEL_166;
  *(_QWORD *)(v79 + 136) = TypeName;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 136), (int32_t)TypeName, v111, v112);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0xEu )
    goto LABEL_166;
  *(_QWORD *)(v79 + 144) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 144), (int32_t)Item, v113, v114);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0xFu )
    goto LABEL_166;
  *(_QWORD *)(v79 + 152) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 152), (int32_t)Item, v115, v116);
  if ( *(_DWORD *)(v79 + 24) <= 0x10u )
    goto LABEL_166;
  v119 = StringLiteral_25314/*"【ボイス・SE】"*/;
  *(_QWORD *)(v79 + 160) = StringLiteral_25314/*"【ボイス・SE】"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 160), v119, v117, v118);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0x11u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 168) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 168), (int32_t)Item, v120, v121);
  if ( *(_DWORD *)(v79 + 24) <= 0x12u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 176) = v78;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 176), (int32_t)v78, v122, v123);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0x13u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 184) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 184), (int32_t)Item, v124, v125);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v79 + 24) <= 0x14u )
    goto LABEL_166;
  *(_QWORD *)(v79 + 192) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v79 + 192), (int32_t)Item, v126, v127);
  v128 = System_String__Concat_62061656((System_String_array *)v79, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v130 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.methodPointer + 1) = v130 * 17.5;
  width = UnityEngine_Screen__get_width(0LL);
  Item = (char *)sub_1BAB4C4(string___TypeInfo, 5LL);
  if ( !Item )
    goto LABEL_165;
  v134 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  v135 = StringLiteral_1837/*"<size="*/;
  *((_QWORD *)Item + 4) = StringLiteral_1837/*"<size="*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Item + 32), v135, v132, v133);
  Item = (char *)System_Single__ToString(v136, (const MethodInfo *)((char *)&format.methodPointer + 4));
  if ( *((_DWORD *)v134 + 6) <= 1u )
    goto LABEL_166;
  *((_QWORD *)v134 + 5) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v134 + 40), (int32_t)Item, v137, v138);
  if ( *((_DWORD *)v134 + 6) <= 2u )
    goto LABEL_166;
  v141 = StringLiteral_1858/*">"*/;
  *((_QWORD *)v134 + 6) = StringLiteral_1858/*">"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v134 + 48), v141, v139, v140);
  if ( *((_DWORD *)v134 + 6) <= 3u )
    goto LABEL_166;
  *((_QWORD *)v134 + 7) = v128;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v134 + 56), (int32_t)v128, v142, v143);
  if ( *((_DWORD *)v134 + 6) <= 4u )
    goto LABEL_166;
  v146 = StringLiteral_1625/*"</size>"*/;
  v147 = (float)height * 0.25;
  v148 = v130 * 250.0;
  *((_QWORD *)v134 + 8) = StringLiteral_1625/*"</size>"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v134 + 64), v146, v144, v145);
  v149 = System_String__Concat_62061656((System_String_array *)v134, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v244.fields.m_YMin = 10.0;
  v244.fields.m_XMin = (float)width - (float)(v130 * 250.0);
  v244.fields.m_Width = v130 * 250.0;
  v244.fields.m_Height = v147 * 4.0;
  UnityEngine_GUI__Box(v244, v149, 0LL);
  v150 = v130 * 40.0;
  v151 = UnityEngine_Screen__get_width(0LL);
  v152 = v147 + v147;
  v153 = (float)(v147 + v147) + 10.0;
  v154 = (float)v151 - v148;
  v155 = System_Single__ToString((float)v151, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v156 = System_String__Concat_62059388(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v155,
           (System_String_o *)StringLiteral_1868/*">▲</size>"*/,
           0LL);
  v245.fields.m_XMin = v154;
  v245.fields.m_YMin = v153 - v150;
  v245.fields.m_Width = v150;
  v245.fields.m_Height = v150;
  if ( UnityEngine_GUI__RepeatButton(v245, v156, 0LL) )
  {
    v157 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v157 = MotionInfo_TypeInfo;
    }
    v157->static_fields->scrollPosition.fields.y = v157->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v157->static_fields->scrollSpeed * -10.0);
  }
  v158 = (float)UnityEngine_Screen__get_width(0LL) - v148;
  v159 = v150 + v158;
  v160 = System_Single__ToString(v158, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v161 = System_String__Concat_62059388(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v160,
           (System_String_o *)StringLiteral_1869/*">▼</size>"*/,
           0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v246.fields.m_XMin = v159;
  v246.fields.m_YMin = v153 - v150;
  v246.fields.m_Width = v150;
  v246.fields.m_Height = v150;
  if ( UnityEngine_GUI__RepeatButton(v246, v161, 0LL) )
  {
    v162 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v162 = MotionInfo_TypeInfo;
    }
    v162->static_fields->scrollPosition.fields.y = v162->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v162->static_fields->scrollSpeed * 10.0);
  }
  v163 = (float)UnityEngine_Screen__get_width(0LL) - v148;
  v164 = (float)(v150 + v150) + v163;
  v165 = System_Single__ToString(v163, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v166 = System_String__Concat_62059388(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v165,
           (System_String_o *)StringLiteral_1862/*">-</size>"*/,
           0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v247.fields.m_XMin = v164;
  v247.fields.m_YMin = v153 - v150;
  v247.fields.m_Width = v150;
  v247.fields.m_Height = v150;
  if ( UnityEngine_GUI__Button(v247, v166, 0LL) )
  {
    v167 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v167 = MotionInfo_TypeInfo;
    }
    v168 = v167->static_fields;
    v169 = v168->scrollSpeed - 1;
    v168->scrollSpeed = v169;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Max_62866776(v169, 1, 0LL);
  }
  v170 = UnityEngine_Screen__get_width(0LL);
  Item = (char *)sub_1BAB4C4(string___TypeInfo, 7LL);
  if ( !Item )
LABEL_165:
    sub_1BAB678(Item, v36);
  v173 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  v174 = StringLiteral_1837/*"<size="*/;
  *((_QWORD *)Item + 4) = StringLiteral_1837/*"<size="*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(Item + 32), v174, v171, v172);
  *(float *)&format.methodPointer = *((float *)&format.methodPointer + 1) * 0.9;
  Item = (char *)System_Single__ToString(*((float *)&format.methodPointer + 1) * 0.9, &format);
  if ( *((_DWORD *)v173 + 6) <= 1u )
    goto LABEL_166;
  *((_QWORD *)v173 + 5) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v173 + 40), (int32_t)Item, v175, v176);
  if ( *((_DWORD *)v173 + 6) <= 2u )
    goto LABEL_166;
  v179 = StringLiteral_1858/*">"*/;
  *((_QWORD *)v173 + 6) = StringLiteral_1858/*">"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v173 + 48), v179, v177, v178);
  v180 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v180 = MotionInfo_TypeInfo;
  }
  Item = (char *)System_Int32__ToString((unsigned int)v180->static_fields + 80, 0LL);
  if ( *((_DWORD *)v173 + 6) <= 3u )
    goto LABEL_166;
  *((_QWORD *)v173 + 7) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v173 + 56), (int32_t)Item, v181, v182);
  if ( *((_DWORD *)v173 + 6) <= 4u )
    goto LABEL_166;
  v185 = StringLiteral_1120/*"/"*/;
  *((_QWORD *)v173 + 8) = StringLiteral_1120/*"/"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v173 + 64), v185, v183, v184);
  v241 = 10;
  Item = (char *)System_Int32__ToString((int32_t)&v241, 0LL);
  if ( *((_DWORD *)v173 + 6) <= 5u )
    goto LABEL_166;
  *((_QWORD *)v173 + 9) = Item;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v173 + 72), (int32_t)Item, v186, v187);
  if ( *((_DWORD *)v173 + 6) <= 6u )
    goto LABEL_166;
  v190 = StringLiteral_1625/*"</size>"*/;
  *((_QWORD *)v173 + 10) = StringLiteral_1625/*"</size>"*/;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v173 + 80), v190, v188, v189);
  v191 = System_String__Concat_62061656((System_String_array *)v173, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v248.fields.m_XMin = (float)(v150 * 3.0) + (float)((float)v170 - v148);
  v248.fields.m_YMin = v153 + (float)(v150 * -0.75);
  v248.fields.m_Width = v150;
  v248.fields.m_Height = v150;
  UnityEngine_GUI__Box(v248, v191, 0LL);
  v192 = (float)UnityEngine_Screen__get_width(0LL) - v148;
  v193 = (float)(v150 * 4.0) + v192;
  v194 = System_Single__ToString(v192, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v195 = System_String__Concat_62059388(
           (System_String_o *)StringLiteral_1837/*"<size="*/,
           v194,
           (System_String_o *)StringLiteral_1861/*">+</size>"*/,
           0LL);
  v249.fields.m_XMin = v193;
  v249.fields.m_YMin = v153 - v150;
  v249.fields.m_Width = v150;
  v249.fields.m_Height = v150;
  if ( UnityEngine_GUI__Button(v249, v195, 0LL) )
  {
    v196 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v196 = MotionInfo_TypeInfo;
    }
    v197 = v196->static_fields;
    v198 = v197->scrollSpeed + 1;
    v197->scrollSpeed = v198;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Min_62867104(v198, 10, 0LL);
  }
  v199 = *((float *)&format.methodPointer + 1) + 10.0;
  v200 = UnityEngine_Screen__get_width(0LL);
  v201 = MotionInfo_TypeInfo;
  v202 = (float)v200;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v201 = MotionInfo_TypeInfo;
  }
  v203 = (float *)v201->static_fields;
  v204 = v202 - v148;
  v206 = v203[14];
  v205 = v203[15];
  v207 = v199 * (float)*((int *)v203 + 19);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v250.fields.m_XMin = v204;
  v250.fields.m_YMin = v153;
  v250.fields.m_Width = v148;
  v250.fields.m_Height = v152;
  v243.fields.x = v206;
  v243.fields.y = v205;
  viewRect.fields.m_Height = v207;
  viewRect.fields.m_Width = 500.0;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  v208 = UnityEngine_GUI__BeginScrollView(v250, v243, viewRect, 0LL);
  v209 = 0;
  v210 = 0;
  Item = (char *)MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v208;
  while ( 1 )
  {
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      Item = (char *)MotionInfo_TypeInfo;
    }
    voicePlaybackLogList = *(System_Collections_Generic_List_object__o **)(*((_QWORD *)Item + 23) + 64LL);
    if ( !voicePlaybackLogList )
      goto LABEL_165;
    if ( v209 >= voicePlaybackLogList->fields._size )
      break;
    if ( !*((_DWORD *)Item + 56) )
    {
      j_il2cpp_runtime_class_init_0(Item);
      voicePlaybackLogList = (System_Collections_Generic_List_object__o *)MotionInfo_TypeInfo->static_fields->voicePlaybackLogList;
      if ( !voicePlaybackLogList )
        goto LABEL_165;
    }
    Item = (char *)System_Collections_Generic_List_object___get_Item(
                     voicePlaybackLogList,
                     v209,
                     (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_165;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v239,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_354E3B4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v240 = v239;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v240,
              (const MethodInfo_32C4C78 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v240.fields._current;
      v213 = sub_1BAB4C4(string___TypeInfo, 5LL);
      v217 = v213;
      if ( !v213 )
        sub_1BAB678(0LL, v214);
      if ( !*(_DWORD *)(v213 + 24) )
        sub_1BAB680(v213, v214);
      v218 = StringLiteral_1837/*"<size="*/;
      *(_QWORD *)(v213 + 32) = StringLiteral_1837/*"<size="*/;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v213 + 32), v218, v215, v216);
      v220 = System_Single__ToString(v219, (const MethodInfo *)((char *)&format.methodPointer + 4));
      if ( *(_DWORD *)(v217 + 24) <= 1u )
        sub_1BAB680(v220, v220);
      *(_QWORD *)(v217 + 40) = v220;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v217 + 40), (int32_t)v220, v221, v222);
      if ( *(_DWORD *)(v217 + 24) <= 2u )
        sub_1BAB680(v223, v224);
      v227 = StringLiteral_1858/*">"*/;
      *(_QWORD *)(v217 + 48) = StringLiteral_1858/*">"*/;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v217 + 48), v227, v225, v226);
      if ( *(_DWORD *)(v217 + 24) <= 3u )
        sub_1BAB680(v228, v229);
      *(_QWORD *)(v217 + 56) = current;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v217 + 56), (int32_t)current, v230, v231);
      if ( *(_DWORD *)(v217 + 24) <= 4u )
        sub_1BAB680(v232, v233);
      v236 = StringLiteral_1625/*"</size>"*/;
      *(_QWORD *)(v217 + 64) = StringLiteral_1625/*"</size>"*/;
      sub_1BAB3C0((ServantStatusBattleListViewItem_o *)(v217 + 64), v236, v234, v235);
      v237 = System_String__Concat_62061656((System_String_array *)v217, 0LL);
      if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
      v251.fields.m_YMin = v199 * (float)v210;
      v251.fields.m_XMin = 0.0;
      v251.fields.m_Width = 500.0;
      v251.fields.m_Height = v199;
      UnityEngine_GUI__Label(v251, v237, 0LL);
      ++v210;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v240,
      (const MethodInfo_32C4C74 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    ++v209;
    Item = (char *)MotionInfo_TypeInfo;
  }
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
}


void __fastcall MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  struct System_String_o *v5; // x20
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_String_o *v11; // x20
  MotionInfo_c *v12; // x0
  struct MotionInfo_StaticFields *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  MotionInfo_c *v17; // x0
  struct System_String_o *v18; // x20
  struct MotionInfo_StaticFields *v19; // x0
  __int64 v20; // x1
  MotionInfo_c *v21; // x0

  if ( (byte_4AB5254 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    sub_1BAB41C(&StringLiteral_1/*""*/, v4);
    byte_4AB5254 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v5 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4AB52BA )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB52BA = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  static_fields = v6->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v5;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)v5, v2, v3);
  v11 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4AB52BB )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v8);
    byte_4AB52BB = 1;
  }
  v12 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v12 = MotionInfo_TypeInfo;
  }
  v13 = v12->static_fields;
  v13->_VoiceId_k__BackingField = v11;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v13->_VoiceId_k__BackingField, (int32_t)v11, v9, v10);
  if ( !byte_4AB52BC )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v14);
    byte_4AB52BC = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4AB52BD )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_4AB52BD = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v17->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v18 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4AB52BE )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v14);
    v17 = MotionInfo_TypeInfo;
    byte_4AB52BE = 1;
  }
  if ( !v17->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v17);
    v17 = MotionInfo_TypeInfo;
  }
  v19 = v17->static_fields;
  v19->_VoiceType_k__BackingField = v18;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&v19->_VoiceType_k__BackingField, (int32_t)v18, v15, v16);
  if ( !byte_4AB52BF )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v20);
    byte_4AB52BF = 1;
  }
  v21 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v21 = MotionInfo_TypeInfo;
  }
  v21->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4AB52C0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v20);
    v21 = MotionInfo_TypeInfo;
    byte_4AB52C0 = 1;
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

  if ( (byte_4AB525A & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB525A = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4AB52C1 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB52C1 = 1;
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

  if ( (byte_4AB5259 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___Clear__, v1);
    sub_1BAB41C(&MotionInfo_TypeInfo, v2);
    byte_4AB5259 = 1;
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
    sub_1BAB678(v3, v1);
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
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4AB5251 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, svtName);
    byte_4AB5251 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)MotionInfo_TypeInfo->static_fields,
    (int32_t)svtName,
    (int32_t)method,
    v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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
  uint32_t cctor_finished; // w9
  struct MotionInfo_StaticFields *v13; // x8
  int32_t v14; // w23
  int32_t voicePlaybackLogMaxNum; // w24
  int32_t v16; // w22
  struct MotionInfo_StaticFields *v17; // x8
  int32_t v18; // w9

  if ( (byte_4AB5258 & 1) == 0 )
  {
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___RemoveAt__, v1);
    sub_1BAB41C(&Method_System_Collections_Generic_List_string__get_Count__, v2);
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___get_Count__, v3);
    sub_1BAB41C(&Method_System_Collections_Generic_List_List_string___get_Item__, v4);
    sub_1BAB41C(&MotionInfo_TypeInfo, v5);
    byte_4AB5258 = 1;
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
    goto LABEL_22;
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
                  (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_22:
    sub_1BAB678(Item, v1);
  }
  v10 = Item;
  v11 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v10[6] + voicePlayLogLineSize;
  while ( 1 )
  {
    cctor_finished = v11->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = MotionInfo_TypeInfo;
      cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
    }
    v13 = v11->static_fields;
    voicePlaybackLogMaxNum = v13->voicePlaybackLogMaxNum;
    v14 = v13->voicePlayLogLineSize;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v13 = MotionInfo_TypeInfo->static_fields;
    }
    v16 = v13->voicePlayLogLineSize;
    if ( v14 < voicePlaybackLogMaxNum )
      break;
    Item = v13->voicePlaybackLogList;
    if ( !Item )
      goto LABEL_22;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_354D5EC *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_22;
    v17 = MotionInfo_TypeInfo->static_fields;
    v18 = v16 - *((_DWORD *)Item + 6);
    Item = v17->voicePlaybackLogList;
    v17->voicePlayLogLineSize = v18;
    if ( !Item )
      goto LABEL_22;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Item,
      0,
      (const MethodInfo_354F090 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v11 = MotionInfo_TypeInfo;
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v16);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  __int64 v1; // x1
  MotionInfo_c *v2; // x0

  if ( (byte_4AB524D & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB524D = 1;
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

  if ( (byte_4AB524F & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB524F = 1;
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

  if ( (byte_4AB5247 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB5247 = 1;
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

  if ( (byte_4AB524B & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB524B = 1;
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

  if ( (byte_4AB5241 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB5241 = 1;
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

  if ( (byte_4AB5245 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB5245 = 1;
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

  if ( (byte_4AB5249 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB5249 = 1;
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

  if ( (byte_4AB5243 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v1);
    byte_4AB5243 = 1;
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

  if ( (byte_4AB524E & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB524E = 1;
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

  if ( (byte_4AB5250 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB5250 = 1;
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
  int32_t v3; // w3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4AB5248 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB5248 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4AB524C & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB524C = 1;
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
  int32_t v3; // w3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4AB5242 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB5242 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1BAB3C0(
    (ServantStatusBattleListViewItem_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_4AB5246 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v2);
    byte_4AB5246 = 1;
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
  int32_t v3; // w3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4AB524A & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, method);
    byte_4AB524A = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1BAB3C0((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  __int64 v2; // x1
  MotionInfo_c *v4; // x0

  if ( (byte_4AB5244 & 1) == 0 )
  {
    sub_1BAB41C(&MotionInfo_TypeInfo, v2);
    byte_4AB5244 = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  v4->static_fields->_VoiceWeight_k__BackingField = value;
}