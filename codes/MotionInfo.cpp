void __fastcall MotionInfo___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct MotionInfo_StaticFields *static_fields; // x8
  System_Collections_Generic_List_object__o *v4; // x19
  struct MotionInfo_StaticFields *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct MotionInfo_StaticFields *v8; // x8

  if ( (byte_4A5A68D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string____ctor__);
    sub_1B885B0(&System_Collections_Generic_List_List_string___TypeInfo);
    sub_1B885B0(&MotionInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A68D = 1;
  }
  MotionInfo_TypeInfo->static_fields->svtName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MotionInfo_TypeInfo->static_fields, (int32_t)StringLiteral_1/*""*/, v1, v2);
  static_fields = MotionInfo_TypeInfo->static_fields;
  *(_WORD *)&static_fields->_IsRandom_k__BackingField = 0;
  if ( !byte_4A55BDA )
  {
    sub_1B885B0(&UnityEngine_Vector2_TypeInfo);
    byte_4A55BDA = 1;
    static_fields = MotionInfo_TypeInfo->static_fields;
  }
  static_fields->scrollPosition = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  v4 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_string___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_string____ctor__);
  v5 = MotionInfo_TypeInfo->static_fields;
  v5->voicePlaybackLogList = (struct System_Collections_Generic_List_List_string___o *)v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v5->voicePlaybackLogList, (int32_t)v4, v6, v7);
  v8 = MotionInfo_TypeInfo->static_fields;
  *(_QWORD *)&v8->voicePlaybackLogMaxNum = 500LL;
  v8->scrollSpeed = 1;
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
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  MotionInfo_c *v9; // x0
  __int64 v10; // x20
  struct MotionInfo_StaticFields *v11; // x0
  const MethodInfo *v12; // x0

  if ( (byte_4A5A687 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_11486/*"SE"*/);
    byte_4A5A687 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4A5A6EE )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EE = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceWeight_k__BackingField = 100.0;
  if ( !byte_4A5A6EF )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4A5A6EF = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  v5->static_fields->_VoiceTotalWeight_k__BackingField = 100.0;
  if ( !byte_4A5A6ED )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
    byte_4A5A6ED = 1;
  }
  if ( !v5->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v5);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = seId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)seId, v2, v3);
  if ( !byte_4A5A6F1 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6F1 = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_VoiceIndex_k__BackingField = 0;
  if ( !byte_4A5A6F2 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4A5A6F2 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsSe_k__BackingField = 1;
  if ( !byte_4A5A6F3 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4A5A6F3 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v9->static_fields->_IsRandom_k__BackingField = 0;
  v10 = StringLiteral_11486/*"SE"*/;
  if ( !byte_4A5A6F0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
    byte_4A5A6F0 = 1;
  }
  if ( !v9->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v9);
    v9 = MotionInfo_TypeInfo;
  }
  v11 = v9->static_fields;
  v11->_VoiceType_k__BackingField = (struct System_String_o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v11->_VoiceType_k__BackingField, v10, v7, v8);
  MotionInfo__AddVoiceLog(v12);
}


void __fastcall MotionInfo__AddVoiceLog(const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v1; // x19
  System_String_o *NewLine; // x0
  char *voicePlaybackLogList; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
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
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass *v25; // x1
  Il2CppClass **v26; // x0
  MotionInfo_c *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  struct System_Object_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  Il2CppClass *v33; // x1
  Il2CppClass **v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  char *v37; // x20
  int32_t v38; // w1
  MotionInfo_c *v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  int32_t v42; // w2
  int32_t v43; // w3
  int32_t v44; // w1
  MotionInfo_c *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  int32_t v48; // w2
  int32_t v49; // w3
  int32_t v50; // w2
  int32_t v51; // w3
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass *v55; // x1
  Il2CppClass **v56; // x0
  MotionInfo_c *v57; // x0
  System_String_o *VoiceType_k__BackingField; // x20
  System_String_o *v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass *v65; // x1
  Il2CppClass **v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x8
  _QWORD *v70; // x9
  __int64 v71; // x10
  __int64 v72; // x8
  const MethodInfo *v73; // x0
  System_String_o format; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4A5A688 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&MotionInfo_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_363/*" 確率 / 合計 : "*/);
    sub_1B885B0(&StringLiteral_215/*" VoiceID : "*/);
    sub_1B885B0(&StringLiteral_1216/*"0.00"*/);
    sub_1B885B0(&StringLiteral_170/*" / "*/);
    sub_1B885B0(&StringLiteral_935/*"--- Voice・SE Log ---"*/);
    sub_1B885B0(&StringLiteral_207/*" SEID : "*/);
    sub_1B885B0(&StringLiteral_361/*" 分類 : "*/);
    sub_1B885B0(&StringLiteral_12633/*"ServantID : "*/);
    byte_4A5A688 = 1;
  }
  LODWORD(format.klass) = 0;
  v1 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v1,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  NewLine = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_61707032((System_String_o *)StringLiteral_935/*"--- Voice・SE Log ---"*/, NewLine, 0LL);
  if ( !v1 )
    goto LABEL_74;
  items = v1->fields._items;
  v8 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_74;
  size = v1->fields._size;
  v10 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v1->fields._size = size + 1;
    v11[4] = v10;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)v10, v5, v6);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4A5A6E6 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E6 = 1;
  }
  if ( MotionInfo_TypeInfo->_2.cctor_finished )
  {
    if ( MotionInfo_TypeInfo->static_fields->_IsSe_k__BackingField )
    {
LABEL_14:
      if ( !byte_4A5A6E8 )
      {
        sub_1B885B0(&MotionInfo_TypeInfo);
        byte_4A5A6E8 = 1;
      }
      v12 = MotionInfo_TypeInfo;
      if ( !MotionInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
        v12 = MotionInfo_TypeInfo;
      }
      VoiceId_k__BackingField = v12->static_fields->_VoiceId_k__BackingField;
      v14 = System_Environment__get_NewLine(0LL);
      v15 = (System_String_o *)StringLiteral_207/*" SEID : "*/;
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
  if ( !byte_4A5A6E7 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E7 = 1;
  }
  v17 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v17 = MotionInfo_TypeInfo;
  }
  VoiceServantId_k__BackingField = v17->static_fields->_VoiceServantId_k__BackingField;
  v19 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_61718292(
                                   (System_String_o *)StringLiteral_12633/*"ServantID : "*/,
                                   VoiceServantId_k__BackingField,
                                   v19,
                                   0LL);
  v22 = v1->fields._items;
  v23 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v22 )
LABEL_74:
    sub_1B8880C(voicePlaybackLogList, v4);
  v24 = v1->fields._size;
  v25 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v26 = &v22->obj.klass + v24;
    v1->fields._size = v24 + 1;
    v26[4] = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 4), (int32_t)v25, v20, v21);
  }
  if ( !byte_4A5A6E8 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E8 = 1;
  }
  v27 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v27 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v27->static_fields->_VoiceId_k__BackingField;
  v14 = System_Environment__get_NewLine(0LL);
  v15 = (System_String_o *)StringLiteral_215/*" VoiceID : "*/;
LABEL_34:
  voicePlaybackLogList = (char *)System_String__Concat_61718292(v15, VoiceId_k__BackingField, v14, 0LL);
  v30 = v1->fields._items;
  v31 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v30 )
    goto LABEL_74;
  v32 = v1->fields._size;
  v33 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v32 >= v30->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = &v30->obj.klass + v32;
    v1->fields._size = v32 + 1;
    v34[4] = v33;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v34 + 4), (int32_t)v33, v28, v29);
  }
  voicePlaybackLogList = (char *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !voicePlaybackLogList )
    goto LABEL_74;
  v37 = voicePlaybackLogList;
  if ( !*((_DWORD *)voicePlaybackLogList + 6) )
    goto LABEL_75;
  v38 = StringLiteral_363/*" 確率 / 合計 : "*/;
  *((_QWORD *)voicePlaybackLogList + 4) = StringLiteral_363/*" 確率 / 合計 : "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(voicePlaybackLogList + 32), v38, v35, v36);
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4A5A6E9 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E9 = 1;
  }
  v39 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v39 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v39->static_fields->_VoiceWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_62595108(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v37 + 6) <= 1u )
    goto LABEL_75;
  *((_QWORD *)v37 + 5) = voicePlaybackLogList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 40), (int32_t)voicePlaybackLogList, v40, v41);
  if ( *((_DWORD *)v37 + 6) <= 2u )
    goto LABEL_75;
  v44 = StringLiteral_170/*" / "*/;
  *((_QWORD *)v37 + 6) = StringLiteral_170/*" / "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 48), v44, v42, v43);
  if ( !byte_4A5A6EA )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EA = 1;
  }
  v45 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v45 = MotionInfo_TypeInfo;
  }
  *(float *)&format.klass = v45->static_fields->_VoiceTotalWeight_k__BackingField;
  voicePlaybackLogList = (char *)System_Single__ToString_62595108(
                                   *(float *)&format.klass,
                                   &format,
                                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v37 + 6) <= 3u
    || (*((_QWORD *)v37 + 7) = voicePlaybackLogList,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 56), (int32_t)voicePlaybackLogList, v46, v47),
        voicePlaybackLogList = (char *)System_Environment__get_NewLine(0LL),
        *((_DWORD *)v37 + 6) <= 4u) )
  {
LABEL_75:
    sub_1B88814(voicePlaybackLogList, v4);
  }
  *((_QWORD *)v37 + 8) = voicePlaybackLogList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 64), (int32_t)voicePlaybackLogList, v48, v49);
  voicePlaybackLogList = (char *)System_String__Concat_61720560((System_String_array *)v37, 0LL);
  v52 = v1->fields._items;
  v53 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v52 )
    goto LABEL_74;
  v54 = v1->fields._size;
  v55 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v54 >= v52->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v56 = &v52->obj.klass + v54;
    v1->fields._size = v54 + 1;
    v56[4] = v55;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v56 + 4), (int32_t)v55, v50, v51);
  }
  if ( !byte_4A5A6EB )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EB = 1;
  }
  v57 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v57 = MotionInfo_TypeInfo;
  }
  VoiceType_k__BackingField = v57->static_fields->_VoiceType_k__BackingField;
  v59 = System_Environment__get_NewLine(0LL);
  voicePlaybackLogList = (char *)System_String__Concat_61718292(
                                   (System_String_o *)StringLiteral_361/*" 分類 : "*/,
                                   VoiceType_k__BackingField,
                                   v59,
                                   0LL);
  v62 = v1->fields._items;
  v63 = Method_System_Collections_Generic_List_string__Add__;
  ++v1->fields._version;
  if ( !v62 )
    goto LABEL_74;
  v64 = v1->fields._size;
  v65 = (Il2CppClass *)voicePlaybackLogList;
  if ( (unsigned int)v64 >= v62->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v1,
      (Il2CppObject *)voicePlaybackLogList,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v66 = &v62->obj.klass + v64;
    v1->fields._size = v64 + 1;
    v66[4] = v65;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v65, v60, v61);
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
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v70[4] + 192LL) + 112LL));
  }
  else
  {
    v72 = v69 + 8 * v71;
    *((_DWORD *)voicePlaybackLogList + 6) = v71 + 1;
    *(_QWORD *)(v72 + 32) = v1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v72 + 32), (int32_t)v1, v67, v68);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v73);
}


void __fastcall MotionInfo__AddVoiceLog_38199284(System_String_o *str, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  MotionInfo_c *v14; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x8
  const MethodInfo *v19; // x0

  if ( (byte_4A5A689 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A689 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v3 )
    goto LABEL_16;
  items = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_string__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_16;
  size = v3->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      (Il2CppObject *)str,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v11[4] = (Il2CppClass *)str;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), (int32_t)str, v6, v7);
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
    sub_1B8880C(voicePlaybackLogList, v5);
  }
  v17 = voicePlaybackLogList->fields._size;
  if ( (unsigned int)v17 >= v15->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      voicePlaybackLogList,
      (Il2CppObject *)v3,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    voicePlaybackLogList->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)v3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v3, v12, v13);
  }
  MotionInfo__UpdateVoicePlaybackLogString(v19);
}


System_String_o *__fastcall MotionInfo__GetTypeName(MotionInfo_o *this, int32_t type, const MethodInfo *method)
{
  __int64 *v4; // x8
  System_String_o *result; // x0
  int32_t v6; // [xsp+Ch] [xbp-14h] BYREF

  v6 = type;
  if ( (byte_4A5A685 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_25315/*"バスター"*/);
    sub_1B885B0(&StringLiteral_25297/*"クイック"*/);
    sub_1B885B0(&StringLiteral_25286/*"アーツ"*/);
    sub_1B885B0(&StringLiteral_25290/*"エクストラ"*/);
    byte_4A5A685 = 1;
  }
  switch ( BattleCommand__getType(type, 0LL) )
  {
    case 1:
      v4 = &StringLiteral_25286/*"アーツ"*/;
      goto LABEL_9;
    case 2:
      v4 = &StringLiteral_25315/*"バスター"*/;
      goto LABEL_9;
    case 3:
      v4 = &StringLiteral_25297/*"クイック"*/;
      goto LABEL_9;
    case 4:
      v4 = &StringLiteral_25290/*"エクストラ"*/;
LABEL_9:
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
  char *Item; // x0
  System_String_o *TypeName; // x19
  struct BattleActionData_o *actionData; // x8
  __int64 v7; // x1
  int32_t commandType; // w19
  __int64 v9; // x9
  MotionInfo_c *v10; // x8
  System_String_o *v11; // x20
  MotionInfo_c *v12; // x0
  System_String_o *VoiceServantId_k__BackingField; // x20
  System_String_o *NewLine; // x0
  System_String_o *v15; // x0
  MotionInfo_c *v16; // x0
  uint32_t cctor_finished; // w8
  System_String_o **v18; // x9
  System_String_o *v19; // x21
  MotionInfo_c *v20; // x0
  System_String_o *VoiceId_k__BackingField; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  char *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w1
  MotionInfo_c *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w1
  MotionInfo_c *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  int32_t v39; // w2
  int32_t v40; // w3
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  System_String_o *v47; // x21
  __int64 v48; // x20
  int32_t v49; // w2
  int32_t v50; // w3
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w1
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t v56; // w2
  int32_t v57; // w3
  struct MotionInfo_StaticFields *static_fields; // x8
  struct System_String_o *svtName; // x1
  int32_t v60; // w2
  int32_t v61; // w3
  int32_t v62; // w2
  int32_t v63; // w3
  int32_t v64; // w2
  int32_t v65; // w3
  int32_t v66; // w1
  int32_t v67; // w2
  int32_t v68; // w3
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w2
  int32_t v74; // w3
  int32_t v75; // w2
  int32_t v76; // w3
  int32_t v77; // w1
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t v80; // w2
  int32_t v81; // w3
  int32_t v82; // w2
  int32_t v83; // w3
  int32_t v84; // w2
  int32_t v85; // w3
  int32_t v86; // w2
  int32_t v87; // w3
  int32_t v88; // w1
  int32_t v89; // w2
  int32_t v90; // w3
  int32_t v91; // w2
  int32_t v92; // w3
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t v95; // w2
  int32_t v96; // w3
  System_String_o *v97; // x20
  int32_t height; // w19
  float v99; // s11
  int32_t width; // w22
  int32_t v101; // w2
  int32_t v102; // w3
  char *v103; // x21
  int32_t v104; // w1
  float v105; // s0
  int32_t v106; // w2
  int32_t v107; // w3
  int32_t v108; // w2
  int32_t v109; // w3
  int32_t v110; // w1
  int32_t v111; // w2
  int32_t v112; // w3
  int32_t v113; // w2
  int32_t v114; // w3
  int32_t v115; // w1
  float v116; // s12
  float v117; // s8
  System_String_o *v118; // x19
  float v119; // s11
  int32_t v120; // w0
  float v121; // s9
  float v122; // s10
  float v123; // s13
  System_String_o *v124; // x0
  System_String_o *v125; // x0
  MotionInfo_c *v126; // x0
  float v127; // s0
  float v128; // s13
  System_String_o *v129; // x0
  System_String_o *v130; // x19
  MotionInfo_c *v131; // x0
  float v132; // s0
  float v133; // s13
  System_String_o *v134; // x0
  System_String_o *v135; // x19
  MotionInfo_c *v136; // x0
  struct MotionInfo_StaticFields *v137; // x8
  int32_t v138; // w19
  int32_t v139; // w20
  int32_t v140; // w2
  int32_t v141; // w3
  char *v142; // x19
  int32_t v143; // w1
  int32_t v144; // w2
  int32_t v145; // w3
  int32_t v146; // w2
  int32_t v147; // w3
  int32_t v148; // w1
  MotionInfo_c *v149; // x0
  int32_t v150; // w2
  int32_t v151; // w3
  int32_t v152; // w2
  int32_t v153; // w3
  int32_t v154; // w1
  int32_t v155; // w2
  int32_t v156; // w3
  int32_t v157; // w2
  int32_t v158; // w3
  int32_t v159; // w1
  System_String_o *v160; // x19
  float v161; // s0
  float v162; // s13
  System_String_o *v163; // x0
  System_String_o *v164; // x0
  MotionInfo_c *v165; // x0
  struct MotionInfo_StaticFields *v166; // x8
  int32_t v167; // w19
  float v168; // s11
  int32_t v169; // w0
  MotionInfo_c *v170; // x8
  float v171; // s14
  float *v172; // x8
  float v173; // s14
  float v174; // s12
  float v175; // s13
  float v176; // s15
  struct UnityEngine_Vector2_o v177; // kr00_8
  int32_t v178; // w19
  int v179; // w24
  System_Collections_Generic_List_object__o *voicePlaybackLogList; // x8
  Il2CppObject *current; // x21
  __int64 v182; // x0
  __int64 v183; // x1
  int32_t v184; // w2
  int32_t v185; // w3
  __int64 v186; // x20
  int32_t v187; // w1
  float v188; // s0
  System_String_o *v189; // x0
  int32_t v190; // w2
  int32_t v191; // w3
  __int64 v192; // x0
  __int64 v193; // x1
  int32_t v194; // w2
  int32_t v195; // w3
  int32_t v196; // w1
  __int64 v197; // x0
  __int64 v198; // x1
  int32_t v199; // w2
  int32_t v200; // w3
  __int64 v201; // x0
  __int64 v202; // x1
  int32_t v203; // w2
  int32_t v204; // w3
  int32_t v205; // w1
  System_String_o *v206; // x20
  UnityEngine_Rect_o viewRect; // [xsp+0h] [xbp-100h]
  System_Collections_Generic_List_Enumerator_object__o v208; // [xsp+18h] [xbp-E8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v209; // [xsp+30h] [xbp-D0h] BYREF
  int v210; // [xsp+50h] [xbp-B0h] BYREF
  MethodInfo format; // [xsp+54h] [xbp-ACh] BYREF
  UnityEngine_Vector2_o v212; // 0:s4.4,4:s5.4
  UnityEngine_Rect_o v213; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v214; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v215; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v216; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v217; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v218; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v219; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Rect_o v220; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A5A684 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1B885B0(&UnityEngine_GUI_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&MotionInfo_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_1864/*">+</size>"*/);
    sub_1B885B0(&StringLiteral_1872/*">▼</size>"*/);
    sub_1B885B0(&StringLiteral_25272/*"【モーションID】"*/);
    sub_1B885B0(&StringLiteral_25271/*"【ボイス・SE】"*/);
    sub_1B885B0(&StringLiteral_15375/*"VoiceID : "*/);
    sub_1B885B0(&StringLiteral_25273/*"【名前】"*/);
    sub_1B885B0(&StringLiteral_363/*" 確率 / 合計 : "*/);
    sub_1B885B0(&StringLiteral_1871/*">▲</size>"*/);
    sub_1B885B0(&StringLiteral_1840/*"<size="*/);
    sub_1B885B0(&StringLiteral_25270/*"【カード属性】"*/);
    sub_1B885B0(&StringLiteral_1865/*">-</size>"*/);
    sub_1B885B0(&StringLiteral_1216/*"0.00"*/);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    sub_1B885B0(&StringLiteral_170/*" / "*/);
    sub_1B885B0(&StringLiteral_207/*" SEID : "*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_361/*" 分類 : "*/);
    sub_1B885B0(&StringLiteral_1628/*"</size>"*/);
    sub_1B885B0(&StringLiteral_1861/*">"*/);
    sub_1B885B0(&StringLiteral_12633/*"ServantID : "*/);
    byte_4A5A684 = 1;
  }
  HIDWORD(format.methodPointer) = 0;
  v210 = 0;
  memset(&v209, 0, sizeof(v209));
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
    v9 = 60LL;
    if ( commandType == -1 )
      v9 = 56LL;
    TypeName = MotionInfo__GetTypeName((MotionInfo_o *)Item, *(_DWORD *)((char *)&actionData->klass + v9), v2);
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4A5A6E6 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E6 = 1;
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
    if ( !byte_4A5A6E7 )
    {
      sub_1B885B0(&MotionInfo_TypeInfo);
      byte_4A5A6E7 = 1;
    }
    v12 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v12 = MotionInfo_TypeInfo;
    }
    VoiceServantId_k__BackingField = v12->static_fields->_VoiceServantId_k__BackingField;
    NewLine = System_Environment__get_NewLine(0LL);
    v15 = System_String__Concat_61718292(
            (System_String_o *)StringLiteral_12633/*"ServantID : "*/,
            VoiceServantId_k__BackingField,
            NewLine,
            0LL);
    v10 = MotionInfo_TypeInfo;
    v11 = v15;
  }
  if ( !v10->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(v10);
  if ( !byte_4A5A6E6 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E6 = 1;
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
    v18 = (System_String_o **)&StringLiteral_15375/*"VoiceID : "*/;
  v19 = *v18;
  if ( !cctor_finished )
    j_il2cpp_runtime_class_init_0(v16);
  if ( !byte_4A5A6E8 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E8 = 1;
  }
  v20 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v20 = MotionInfo_TypeInfo;
  }
  VoiceId_k__BackingField = v20->static_fields->_VoiceId_k__BackingField;
  v22 = System_Environment__get_NewLine(0LL);
  v23 = System_String__Concat_61720296(v11, v19, VoiceId_k__BackingField, v22, 0LL);
  Item = (char *)sub_1B88658(string___TypeInfo, 8LL);
  if ( !Item )
    goto LABEL_165;
  v26 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  *((_QWORD *)Item + 4) = v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Item + 32), (int32_t)v23, v24, v25);
  if ( *((_DWORD *)v26 + 6) <= 1u )
    goto LABEL_166;
  v29 = StringLiteral_363/*" 確率 / 合計 : "*/;
  *((_QWORD *)v26 + 5) = StringLiteral_363/*" 確率 / 合計 : "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 40), v29, v27, v28);
  if ( !byte_4A5A6E9 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6E9 = 1;
  }
  v30 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v30 = MotionInfo_TypeInfo;
  }
  *(float *)&format.methodPointer = v30->static_fields->_VoiceWeight_k__BackingField;
  Item = (char *)System_Single__ToString_62595108(
                   *(float *)&format.methodPointer,
                   (System_String_o *)&format,
                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v26 + 6) <= 2u )
    goto LABEL_166;
  *((_QWORD *)v26 + 6) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 48), (int32_t)Item, v31, v32);
  if ( *((_DWORD *)v26 + 6) <= 3u )
    goto LABEL_166;
  v35 = StringLiteral_170/*" / "*/;
  *((_QWORD *)v26 + 7) = StringLiteral_170/*" / "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 56), v35, v33, v34);
  if ( !byte_4A5A6EA )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EA = 1;
  }
  v36 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v36 = MotionInfo_TypeInfo;
  }
  *(float *)&format.methodPointer = v36->static_fields->_VoiceTotalWeight_k__BackingField;
  Item = (char *)System_Single__ToString_62595108(
                   *(float *)&format.methodPointer,
                   (System_String_o *)&format,
                   (const MethodInfo *)StringLiteral_1216/*"0.00"*/);
  if ( *((_DWORD *)v26 + 6) <= 4u )
    goto LABEL_166;
  *((_QWORD *)v26 + 8) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 64), (int32_t)Item, v37, v38);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *((_DWORD *)v26 + 6) <= 5u )
    goto LABEL_166;
  *((_QWORD *)v26 + 9) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 72), (int32_t)Item, v39, v40);
  if ( *((_DWORD *)v26 + 6) <= 6u )
    goto LABEL_166;
  v43 = StringLiteral_361/*" 分類 : "*/;
  *((_QWORD *)v26 + 10) = StringLiteral_361/*" 分類 : "*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 80), v43, v41, v42);
  if ( !byte_4A5A6EB )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EB = 1;
  }
  Item = (char *)MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    Item = (char *)MotionInfo_TypeInfo;
  }
  if ( *((_DWORD *)v26 + 6) <= 7u )
LABEL_166:
    sub_1B88814(Item, v7);
  v46 = *(_QWORD *)(*((_QWORD *)Item + 23) + 40LL);
  *((_QWORD *)v26 + 11) = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 88), v46, v44, v45);
  v47 = System_String__Concat_61720560((System_String_array *)v26, 0LL);
  v48 = sub_1B88658(string___TypeInfo, 21LL);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( !v48 )
    goto LABEL_165;
  if ( !*(_DWORD *)(v48 + 24) )
    goto LABEL_166;
  *(_QWORD *)(v48 + 32) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 32), (int32_t)Item, v49, v50);
  if ( *(_DWORD *)(v48 + 24) <= 1u )
    goto LABEL_166;
  v53 = StringLiteral_25273/*"【名前】"*/;
  *(_QWORD *)(v48 + 40) = StringLiteral_25273/*"【名前】"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 40), v53, v51, v52);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 2u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 48) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 48), (int32_t)Item, v54, v55);
  if ( *(_DWORD *)(v48 + 24) <= 3u )
    goto LABEL_166;
  static_fields = MotionInfo_TypeInfo->static_fields;
  svtName = static_fields->svtName;
  *(_QWORD *)(v48 + 56) = static_fields->svtName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 56), (int32_t)svtName, v56, v57);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 4u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 64) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 64), (int32_t)Item, v60, v61);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 5u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 72) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 72), (int32_t)Item, v62, v63);
  if ( *(_DWORD *)(v48 + 24) <= 6u )
    goto LABEL_166;
  v66 = StringLiteral_25272/*"【モーションID】"*/;
  *(_QWORD *)(v48 + 80) = StringLiteral_25272/*"【モーションID】"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 80), v66, v64, v65);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 7u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 88) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 88), (int32_t)Item, v67, v68);
  Item = (char *)System_Int32__ToString((int32_t)&format.virtualMethodPointer, 0LL);
  if ( *(_DWORD *)(v48 + 24) <= 8u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 96) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 96), (int32_t)Item, v69, v70);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 9u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 104) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 104), (int32_t)Item, v71, v72);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0xAu )
    goto LABEL_166;
  *(_QWORD *)(v48 + 112) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 112), (int32_t)Item, v73, v74);
  if ( *(_DWORD *)(v48 + 24) <= 0xBu )
    goto LABEL_166;
  v77 = StringLiteral_25270/*"【カード属性】"*/;
  *(_QWORD *)(v48 + 120) = StringLiteral_25270/*"【カード属性】"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 120), v77, v75, v76);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0xCu )
    goto LABEL_166;
  *(_QWORD *)(v48 + 128) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 128), (int32_t)Item, v78, v79);
  if ( *(_DWORD *)(v48 + 24) <= 0xDu )
    goto LABEL_166;
  *(_QWORD *)(v48 + 136) = TypeName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 136), (int32_t)TypeName, v80, v81);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0xEu )
    goto LABEL_166;
  *(_QWORD *)(v48 + 144) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 144), (int32_t)Item, v82, v83);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0xFu )
    goto LABEL_166;
  *(_QWORD *)(v48 + 152) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 152), (int32_t)Item, v84, v85);
  if ( *(_DWORD *)(v48 + 24) <= 0x10u )
    goto LABEL_166;
  v88 = StringLiteral_25271/*"【ボイス・SE】"*/;
  *(_QWORD *)(v48 + 160) = StringLiteral_25271/*"【ボイス・SE】"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 160), v88, v86, v87);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0x11u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 168) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 168), (int32_t)Item, v89, v90);
  if ( *(_DWORD *)(v48 + 24) <= 0x12u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 176) = v47;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 176), (int32_t)v47, v91, v92);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0x13u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 184) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 184), (int32_t)Item, v93, v94);
  Item = (char *)System_Environment__get_NewLine(0LL);
  if ( *(_DWORD *)(v48 + 24) <= 0x14u )
    goto LABEL_166;
  *(_QWORD *)(v48 + 192) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v48 + 192), (int32_t)Item, v95, v96);
  v97 = System_String__Concat_61720560((System_String_array *)v48, 0LL);
  height = UnityEngine_Screen__get_height(0LL);
  v99 = (float)((float)UnityEngine_Screen__get_width(0LL) * 0.00097656) * 0.7;
  *((float *)&format.methodPointer + 1) = v99 * 17.5;
  width = UnityEngine_Screen__get_width(0LL);
  Item = (char *)sub_1B88658(string___TypeInfo, 5LL);
  if ( !Item )
    goto LABEL_165;
  v103 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  v104 = StringLiteral_1840/*"<size="*/;
  *((_QWORD *)Item + 4) = StringLiteral_1840/*"<size="*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Item + 32), v104, v101, v102);
  Item = (char *)System_Single__ToString(v105, (const MethodInfo *)((char *)&format.methodPointer + 4));
  if ( *((_DWORD *)v103 + 6) <= 1u )
    goto LABEL_166;
  *((_QWORD *)v103 + 5) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 40), (int32_t)Item, v106, v107);
  if ( *((_DWORD *)v103 + 6) <= 2u )
    goto LABEL_166;
  v110 = StringLiteral_1861/*">"*/;
  *((_QWORD *)v103 + 6) = StringLiteral_1861/*">"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 48), v110, v108, v109);
  if ( *((_DWORD *)v103 + 6) <= 3u )
    goto LABEL_166;
  *((_QWORD *)v103 + 7) = v97;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 56), (int32_t)v97, v111, v112);
  if ( *((_DWORD *)v103 + 6) <= 4u )
    goto LABEL_166;
  v115 = StringLiteral_1628/*"</size>"*/;
  v116 = (float)height * 0.25;
  v117 = v99 * 250.0;
  *((_QWORD *)v103 + 8) = StringLiteral_1628/*"</size>"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v103 + 64), v115, v113, v114);
  v118 = System_String__Concat_61720560((System_String_array *)v103, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v213.fields.m_YMin = 10.0;
  v213.fields.m_XMin = (float)width - (float)(v99 * 250.0);
  v213.fields.m_Width = v99 * 250.0;
  v213.fields.m_Height = v116 * 4.0;
  UnityEngine_GUI__Box(v213, v118, 0LL);
  v119 = v99 * 40.0;
  v120 = UnityEngine_Screen__get_width(0LL);
  v121 = v116 + v116;
  v122 = (float)(v116 + v116) + 10.0;
  v123 = (float)v120 - v117;
  v124 = System_Single__ToString((float)v120, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v125 = System_String__Concat_61718292(
           (System_String_o *)StringLiteral_1840/*"<size="*/,
           v124,
           (System_String_o *)StringLiteral_1871/*">▲</size>"*/,
           0LL);
  v214.fields.m_XMin = v123;
  v214.fields.m_YMin = v122 - v119;
  v214.fields.m_Width = v119;
  v214.fields.m_Height = v119;
  if ( UnityEngine_GUI__RepeatButton(v214, v125, 0LL) )
  {
    v126 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v126 = MotionInfo_TypeInfo;
    }
    v126->static_fields->scrollPosition.fields.y = v126->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v126->static_fields->scrollSpeed * -10.0);
  }
  v127 = (float)UnityEngine_Screen__get_width(0LL) - v117;
  v128 = v119 + v127;
  v129 = System_Single__ToString(v127, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v130 = System_String__Concat_61718292(
           (System_String_o *)StringLiteral_1840/*"<size="*/,
           v129,
           (System_String_o *)StringLiteral_1872/*">▼</size>"*/,
           0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v215.fields.m_XMin = v128;
  v215.fields.m_YMin = v122 - v119;
  v215.fields.m_Width = v119;
  v215.fields.m_Height = v119;
  if ( UnityEngine_GUI__RepeatButton(v215, v130, 0LL) )
  {
    v131 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v131 = MotionInfo_TypeInfo;
    }
    v131->static_fields->scrollPosition.fields.y = v131->static_fields->scrollPosition.fields.y
                                                 + (float)((float)v131->static_fields->scrollSpeed * 10.0);
  }
  v132 = (float)UnityEngine_Screen__get_width(0LL) - v117;
  v133 = (float)(v119 + v119) + v132;
  v134 = System_Single__ToString(v132, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v135 = System_String__Concat_61718292(
           (System_String_o *)StringLiteral_1840/*"<size="*/,
           v134,
           (System_String_o *)StringLiteral_1865/*">-</size>"*/,
           0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v216.fields.m_XMin = v133;
  v216.fields.m_YMin = v122 - v119;
  v216.fields.m_Width = v119;
  v216.fields.m_Height = v119;
  if ( UnityEngine_GUI__Button(v216, v135, 0LL) )
  {
    v136 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v136 = MotionInfo_TypeInfo;
    }
    v137 = v136->static_fields;
    v138 = v137->scrollSpeed - 1;
    v137->scrollSpeed = v138;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Max_62525680(v138, 1, 0LL);
  }
  v139 = UnityEngine_Screen__get_width(0LL);
  Item = (char *)sub_1B88658(string___TypeInfo, 7LL);
  if ( !Item )
LABEL_165:
    sub_1B8880C(Item, v7);
  v142 = Item;
  if ( !*((_DWORD *)Item + 6) )
    goto LABEL_166;
  v143 = StringLiteral_1840/*"<size="*/;
  *((_QWORD *)Item + 4) = StringLiteral_1840/*"<size="*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(Item + 32), v143, v140, v141);
  *(float *)&format.methodPointer = *((float *)&format.methodPointer + 1) * 0.9;
  Item = (char *)System_Single__ToString(*((float *)&format.methodPointer + 1) * 0.9, &format);
  if ( *((_DWORD *)v142 + 6) <= 1u )
    goto LABEL_166;
  *((_QWORD *)v142 + 5) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 40), (int32_t)Item, v144, v145);
  if ( *((_DWORD *)v142 + 6) <= 2u )
    goto LABEL_166;
  v148 = StringLiteral_1861/*">"*/;
  *((_QWORD *)v142 + 6) = StringLiteral_1861/*">"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 48), v148, v146, v147);
  v149 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v149 = MotionInfo_TypeInfo;
  }
  Item = (char *)System_Int32__ToString((unsigned int)v149->static_fields + 80, 0LL);
  if ( *((_DWORD *)v142 + 6) <= 3u )
    goto LABEL_166;
  *((_QWORD *)v142 + 7) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 56), (int32_t)Item, v150, v151);
  if ( *((_DWORD *)v142 + 6) <= 4u )
    goto LABEL_166;
  v154 = StringLiteral_1123/*"/"*/;
  *((_QWORD *)v142 + 8) = StringLiteral_1123/*"/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 64), v154, v152, v153);
  v210 = 10;
  Item = (char *)System_Int32__ToString((int32_t)&v210, 0LL);
  if ( *((_DWORD *)v142 + 6) <= 5u )
    goto LABEL_166;
  *((_QWORD *)v142 + 9) = Item;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 72), (int32_t)Item, v155, v156);
  if ( *((_DWORD *)v142 + 6) <= 6u )
    goto LABEL_166;
  v159 = StringLiteral_1628/*"</size>"*/;
  *((_QWORD *)v142 + 10) = StringLiteral_1628/*"</size>"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v142 + 80), v159, v157, v158);
  v160 = System_String__Concat_61720560((System_String_array *)v142, 0LL);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v217.fields.m_XMin = (float)(v119 * 3.0) + (float)((float)v139 - v117);
  v217.fields.m_YMin = v122 + (float)(v119 * -0.75);
  v217.fields.m_Width = v119;
  v217.fields.m_Height = v119;
  UnityEngine_GUI__Box(v217, v160, 0LL);
  v161 = (float)UnityEngine_Screen__get_width(0LL) - v117;
  v162 = (float)(v119 * 4.0) + v161;
  v163 = System_Single__ToString(v161, (const MethodInfo *)((char *)&format.methodPointer + 4));
  v164 = System_String__Concat_61718292(
           (System_String_o *)StringLiteral_1840/*"<size="*/,
           v163,
           (System_String_o *)StringLiteral_1864/*">+</size>"*/,
           0LL);
  v218.fields.m_XMin = v162;
  v218.fields.m_YMin = v122 - v119;
  v218.fields.m_Width = v119;
  v218.fields.m_Height = v119;
  if ( UnityEngine_GUI__Button(v218, v164, 0LL) )
  {
    v165 = MotionInfo_TypeInfo;
    if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
      v165 = MotionInfo_TypeInfo;
    }
    v166 = v165->static_fields;
    v167 = v166->scrollSpeed + 1;
    v166->scrollSpeed = v167;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    MotionInfo_TypeInfo->static_fields->scrollSpeed = System_Math__Min_62526008(v167, 10, 0LL);
  }
  v168 = *((float *)&format.methodPointer + 1) + 10.0;
  v169 = UnityEngine_Screen__get_width(0LL);
  v170 = MotionInfo_TypeInfo;
  v171 = (float)v169;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v170 = MotionInfo_TypeInfo;
  }
  v172 = (float *)v170->static_fields;
  v173 = v171 - v117;
  v175 = v172[14];
  v174 = v172[15];
  v176 = v168 * (float)*((int *)v172 + 19);
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  v219.fields.m_XMin = v173;
  v219.fields.m_YMin = v122;
  v219.fields.m_Width = v117;
  v219.fields.m_Height = v121;
  v212.fields.x = v175;
  v212.fields.y = v174;
  viewRect.fields.m_Height = v176;
  viewRect.fields.m_Width = 500.0;
  *(_QWORD *)&viewRect.fields.m_XMin = 0LL;
  v177 = UnityEngine_GUI__BeginScrollView(v219, v212, viewRect, 0LL);
  v178 = 0;
  v179 = 0;
  Item = (char *)MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->scrollPosition = v177;
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
    if ( v178 >= voicePlaybackLogList->fields._size )
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
                     v178,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_165;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v208,
      (System_Collections_Generic_List_object__o *)Item,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v209 = v208;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v209,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v209.fields._current;
      v182 = sub_1B88658(string___TypeInfo, 5LL);
      v186 = v182;
      if ( !v182 )
        sub_1B8880C(0LL, v183);
      if ( !*(_DWORD *)(v182 + 24) )
        sub_1B88814(v182, v183);
      v187 = StringLiteral_1840/*"<size="*/;
      *(_QWORD *)(v182 + 32) = StringLiteral_1840/*"<size="*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v182 + 32), v187, v184, v185);
      v189 = System_Single__ToString(v188, (const MethodInfo *)((char *)&format.methodPointer + 4));
      if ( *(_DWORD *)(v186 + 24) <= 1u )
        sub_1B88814(v189, v189);
      *(_QWORD *)(v186 + 40) = v189;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v186 + 40), (int32_t)v189, v190, v191);
      if ( *(_DWORD *)(v186 + 24) <= 2u )
        sub_1B88814(v192, v193);
      v196 = StringLiteral_1861/*">"*/;
      *(_QWORD *)(v186 + 48) = StringLiteral_1861/*">"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v186 + 48), v196, v194, v195);
      if ( *(_DWORD *)(v186 + 24) <= 3u )
        sub_1B88814(v197, v198);
      *(_QWORD *)(v186 + 56) = current;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v186 + 56), (int32_t)current, v199, v200);
      if ( *(_DWORD *)(v186 + 24) <= 4u )
        sub_1B88814(v201, v202);
      v205 = StringLiteral_1628/*"</size>"*/;
      *(_QWORD *)(v186 + 64) = StringLiteral_1628/*"</size>"*/;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v186 + 64), v205, v203, v204);
      v206 = System_String__Concat_61720560((System_String_array *)v186, 0LL);
      if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
      v220.fields.m_YMin = v168 * (float)v179;
      v220.fields.m_XMin = 0.0;
      v220.fields.m_Width = 500.0;
      v220.fields.m_Height = v168;
      UnityEngine_GUI__Label(v220, v206, 0LL);
      ++v179;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v209,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    ++v178;
    Item = (char *)MotionInfo_TypeInfo;
  }
  if ( !UnityEngine_GUI_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_GUI_TypeInfo);
  UnityEngine_GUI__EndScrollView(0LL);
}


void __fastcall MotionInfo__ResetVoiceLog(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  struct System_String_o *v3; // x20
  MotionInfo_c *v4; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  struct System_String_o *v8; // x20
  MotionInfo_c *v9; // x0
  struct MotionInfo_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  MotionInfo_c *v13; // x0
  struct System_String_o *v14; // x20
  struct MotionInfo_StaticFields *v15; // x0
  MotionInfo_c *v16; // x0

  if ( (byte_4A5A686 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5A686 = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  v3 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A5A6EC )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EC = 1;
  }
  v4 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v4 = MotionInfo_TypeInfo;
  }
  static_fields = v4->static_fields;
  static_fields->_VoiceServantId_k__BackingField = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceServantId_k__BackingField, (int32_t)v3, v1, v2);
  v8 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A5A6ED )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6ED = 1;
  }
  v9 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v9 = MotionInfo_TypeInfo;
  }
  v10 = v9->static_fields;
  v10->_VoiceId_k__BackingField = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->_VoiceId_k__BackingField, (int32_t)v8, v6, v7);
  if ( !byte_4A5A6EE )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6EE = 1;
  }
  v13 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceWeight_k__BackingField = 0.0;
  if ( !byte_4A5A6EF )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4A5A6EF = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v13->static_fields->_VoiceTotalWeight_k__BackingField = 0.0;
  v14 = (struct System_String_o *)StringLiteral_1/*""*/;
  if ( !byte_4A5A6F0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v13 = MotionInfo_TypeInfo;
    byte_4A5A6F0 = 1;
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MotionInfo_TypeInfo;
  }
  v15 = v13->static_fields;
  v15->_VoiceType_k__BackingField = v14;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v15->_VoiceType_k__BackingField, (int32_t)v14, v11, v12);
  if ( !byte_4A5A6F1 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6F1 = 1;
  }
  v16 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
  }
  v16->static_fields->_VoiceIndex_k__BackingField = -1;
  if ( !byte_4A5A6F2 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    v16 = MotionInfo_TypeInfo;
    byte_4A5A6F2 = 1;
  }
  if ( !v16->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v16);
    v16 = MotionInfo_TypeInfo;
  }
  v16->static_fields->_IsSe_k__BackingField = 0;
}


void __fastcall MotionInfo__ResetVoiceLogStatus(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4A5A68C & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A68C = 1;
  }
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
  if ( !byte_4A5A6F3 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A6F3 = 1;
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

  if ( (byte_4A5A68B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___Clear__);
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A68B = 1;
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
    sub_1B8880C(v2, v1);
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
  MotionInfo_c *v6; // x0
  struct MotionInfo_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A683 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A683 = 1;
  }
  v6 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v6 = MotionInfo_TypeInfo;
  }
  v6->static_fields->svtName = svtName;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)MotionInfo_TypeInfo->static_fields,
    (int32_t)svtName,
    (int32_t)method,
    v3);
  static_fields = MotionInfo_TypeInfo->static_fields;
  static_fields->actionData = actionData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->actionData, (int32_t)actionData, v8, v9);
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
  uint32_t cctor_finished; // w9
  struct MotionInfo_StaticFields *v9; // x8
  int32_t v10; // w23
  int32_t voicePlaybackLogMaxNum; // w24
  int32_t v12; // w22
  struct MotionInfo_StaticFields *v13; // x8
  int32_t v14; // w9

  if ( (byte_4A5A68A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___RemoveAt__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_string___get_Item__);
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A68A = 1;
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
                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_string___get_Item__)) == 0LL) )
  {
LABEL_22:
    sub_1B8880C(Item, v1);
  }
  v6 = Item;
  v7 = MotionInfo_TypeInfo;
  MotionInfo_TypeInfo->static_fields->voicePlayLogLineSize = v6[6] + voicePlayLogLineSize;
  while ( 1 )
  {
    cctor_finished = v7->_2.cctor_finished;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = MotionInfo_TypeInfo;
      cctor_finished = MotionInfo_TypeInfo->_2.cctor_finished;
    }
    v9 = v7->static_fields;
    voicePlaybackLogMaxNum = v9->voicePlaybackLogMaxNum;
    v10 = v9->voicePlayLogLineSize;
    if ( !cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v9 = MotionInfo_TypeInfo->static_fields;
    }
    v12 = v9->voicePlayLogLineSize;
    if ( v10 < voicePlaybackLogMaxNum )
      break;
    Item = v9->voicePlaybackLogList;
    if ( !Item )
      goto LABEL_22;
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)Item,
             0,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_string___get_Item__);
    if ( !Item )
      goto LABEL_22;
    v13 = MotionInfo_TypeInfo->static_fields;
    v14 = v12 - *((_DWORD *)Item + 6);
    Item = v13->voicePlaybackLogList;
    v13->voicePlayLogLineSize = v14;
    if ( !Item )
      goto LABEL_22;
    System_Collections_Generic_List_object___RemoveAt(
      (System_Collections_Generic_List_object__o *)Item,
      0,
      (const MethodInfo_34FF008 *)Method_System_Collections_Generic_List_List_string___RemoveAt__);
    v7 = MotionInfo_TypeInfo;
  }
  MotionInfo_TypeInfo->static_fields->scrollPosition.fields.y = (float)(UnityEngine_Screen__get_height(0LL) * v12);
}


bool __fastcall MotionInfo__get_IsRandom(const MethodInfo *method)
{
  MotionInfo_c *v1; // x0

  if ( (byte_4A5A67F & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A67F = 1;
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

  if ( (byte_4A5A681 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A681 = 1;
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

  if ( (byte_4A5A679 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A679 = 1;
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

  if ( (byte_4A5A67D & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A67D = 1;
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

  if ( (byte_4A5A673 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A673 = 1;
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

  if ( (byte_4A5A677 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A677 = 1;
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

  if ( (byte_4A5A67B & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A67B = 1;
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

  if ( (byte_4A5A675 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A675 = 1;
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

  if ( (byte_4A5A680 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A680 = 1;
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

  if ( (byte_4A5A682 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A682 = 1;
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

  if ( (byte_4A5A67A & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A67A = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceId_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceId_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceIndex(int32_t value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4A5A67E & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A67E = 1;
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

  if ( (byte_4A5A674 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A674 = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceServantId_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&static_fields->_VoiceServantId_k__BackingField,
    (int32_t)value,
    v2,
    v3);
}


void __fastcall MotionInfo__set_VoiceTotalWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4A5A678 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A678 = 1;
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
  int32_t v2; // w2
  int32_t v3; // w3
  MotionInfo_c *v5; // x0
  struct MotionInfo_StaticFields *static_fields; // x0

  if ( (byte_4A5A67C & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A67C = 1;
  }
  v5 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v5 = MotionInfo_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->_VoiceType_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->_VoiceType_k__BackingField, (int32_t)value, v2, v3);
}


void __fastcall MotionInfo__set_VoiceWeight(float value, const MethodInfo *method)
{
  MotionInfo_c *v3; // x0

  if ( (byte_4A5A676 & 1) == 0 )
  {
    sub_1B885B0(&MotionInfo_TypeInfo);
    byte_4A5A676 = 1;
  }
  v3 = MotionInfo_TypeInfo;
  if ( !MotionInfo_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MotionInfo_TypeInfo);
    v3 = MotionInfo_TypeInfo;
  }
  v3->static_fields->_VoiceWeight_k__BackingField = value;
}