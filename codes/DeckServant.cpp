void __fastcall DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16648360(
        DeckServant_o *this,
        int32_t sum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x2
  struct DeckServantData_array *v10; // x0
  DeckServant_Fields *p_fields; // x22
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  _QWORD **v24; // x24
  __int64 v25; // x23
  __int16 v26; // w8
  __int64 v27; // x23
  __int64 v28; // x23
  __int64 v29; // x23
  struct DeckWaveServantData_array **v30; // x8
  struct DeckWaveServantData_array *v31; // x1
  __int64 v32; // x1
  System_String_array **v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  il2cpp_array_size_t v36; // w26
  __int64 v37; // x24
  struct DeckServantData_array *svts; // x27
  DeckServantData_o *v39; // x23
  const MethodInfo *v40; // x1
  __int64 v41; // x0
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  struct DeckServantData_array *v47; // x8
  __int64 v48; // x8
  struct DeckServantData_array *v49; // x8
  il2cpp_array_size_t v50; // w9
  __int64 v51; // x8

  if ( (byte_40F5A84 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Array_Empty_DeckWaveServantData___, *(_QWORD *)&sum);
    sub_B16FFC(&DeckServantData___TypeInfo, v7);
    sub_B16FFC(&DeckServantData_TypeInfo, v8);
    byte_40F5A84 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10 = (struct DeckServantData_array *)sub_B17014(DeckServantData___TypeInfo, (unsigned int)sum, v9);
  p_fields = &this->fields;
  this->fields.svts = v10;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v10, v12, v13, v14, v15, v16, v17);
  v24 = (_QWORD **)Method_System_Array_Empty_DeckWaveServantData___;
  v25 = **((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6);
  v26 = *(_WORD *)(v25 + 306);
  if ( (v26 & 1) == 0 )
  {
    sub_AAFCFC(**((_QWORD **)Method_System_Array_Empty_DeckWaveServantData___ + 6));
    v26 = *(_WORD *)(v25 + 306);
  }
  if ( (v26 & 0x400) != 0 )
  {
    v27 = *v24[6];
    if ( (*(_BYTE *)(v27 + 306) & 1) == 0 )
      sub_AAFCFC(*v24[6]);
    if ( !*(_DWORD *)(v27 + 224) )
    {
      v28 = *v24[6];
      if ( (*(_BYTE *)(v28 + 306) & 1) == 0 )
        sub_AAFCFC(*v24[6]);
      j_il2cpp_runtime_class_init_0(v28);
    }
  }
  v29 = *v24[6];
  if ( (*(_BYTE *)(v29 + 306) & 1) == 0 )
    sub_AAFCFC(*v24[6]);
  v30 = *(struct DeckWaveServantData_array ***)(v29 + 184);
  v31 = *v30;
  this->fields.waveSvts = *v30;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.waveSvts,
    (System_Int32_array **)v31,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  if ( sum >= 1 )
  {
    v36 = 0;
    v37 = 32LL;
    do
    {
      svts = p_fields->svts;
      v39 = (DeckServantData_o *)sub_B170CC(DeckServantData_TypeInfo, v32, v33, v34, v35);
      DeckServantData___ctor(v39, v40);
      if ( !svts )
        goto LABEL_28;
      if ( v39 )
      {
        v41 = sub_B170BC(v39, svts->obj.klass->_1.element_class);
        if ( !v41 )
        {
          sub_B170F4(0LL);
          sub_B170A0();
        }
      }
      if ( v36 >= svts->max_length )
        goto LABEL_29;
      *(Il2CppClass **)((char *)&svts->obj.klass + v37) = (Il2CppClass *)v39;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)svts + v37),
        (System_Int32_array **)v39,
        v33,
        v42,
        v43,
        v44,
        v45,
        v46);
      v47 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      if ( v36 >= v47->max_length )
      {
LABEL_29:
        sub_B17100(v41, v32, v33);
        sub_B170A0();
      }
      v48 = *(__int64 *)((char *)&v47->obj.klass + v37);
      if ( !v48 )
        goto LABEL_28;
      *(_DWORD *)(v48 + 16) = v36 + 1;
      v49 = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_28;
      v50 = v36;
      if ( v36 >= v49->max_length )
        goto LABEL_29;
      v51 = *(__int64 *)((char *)&v49->obj.klass + v37);
      if ( !v51 )
LABEL_28:
        sub_B170D4();
      ++v36;
      v37 += 8LL;
      *(_DWORD *)(v51 + 60) = v50 + 1;
    }
    while ( (int)(v50 + 1) < sum );
  }
  this->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16649072(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x2
  struct DeckServantData_array *v12; // x0
  DeckServant_Fields *p_fields; // x25
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  __int64 v20; // x2
  struct DeckWaveServantData_array *v21; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  System_String_array **v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  il2cpp_array_size_t v33; // w28
  __int64 v34; // x19
  struct DeckServantData_array *svts; // x22
  DeckServantData_o *v36; // x26
  const MethodInfo *v37; // x1
  __int64 v38; // x0
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct DeckServantData_array *v44; // x8
  __int64 v45; // x9
  int v46; // w8
  int v47; // w9
  struct DeckServantData_array *v48; // x10
  __int64 v49; // x10
  il2cpp_array_size_t v50; // w27
  int v51; // w28
  struct DeckWaveServantData_array *v52; // x19
  DeckWaveServantData_o *v53; // x24
  const MethodInfo *v54; // x1
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  Il2CppClass **v60; // x0
  struct DeckWaveServantData_array *v61; // x8
  DeckWaveServantData_o *v62; // x9
  int32_t v63; // w8
  unsigned __int64 v64; // x9
  struct DeckWaveServantData_array *v65; // x10
  DeckWaveServantData_o *v66; // x10
  struct System_Int32_array *uniqueIds; // x10
  int v68; // w11
  __int64 v69; // x10
  DeckServant_o *v70; // [xsp+0h] [xbp-60h]

  if ( (byte_40F5A85 & 1) == 0 )
  {
    sub_B16FFC(&DeckServantData___TypeInfo, *(_QWORD *)&waveNum);
    sub_B16FFC(&DeckServantData_TypeInfo, v8);
    sub_B16FFC(&DeckWaveServantData___TypeInfo, v9);
    sub_B16FFC(&DeckWaveServantData_TypeInfo, v10);
    byte_40F5A85 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = (struct DeckServantData_array *)sub_B17014(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum), v11);
  p_fields = &this->fields;
  this->fields.svts = v12;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v12, v14, v15, v16, v17, v18, v19);
  v21 = (struct DeckWaveServantData_array *)sub_B17014(DeckWaveServantData___TypeInfo, (unsigned int)waveNum, v20);
  p_waveSvts = &this->fields.waveSvts;
  this->fields.waveSvts = v21;
  v70 = this;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.waveSvts,
    (System_Int32_array **)v21,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  if ( memberNum * waveNum >= 1 )
  {
    v33 = 0;
    v34 = 32LL;
    while ( 1 )
    {
      svts = p_fields->svts;
      v36 = (DeckServantData_o *)sub_B170CC(DeckServantData_TypeInfo, v29, v30, v31, v32);
      DeckServantData___ctor(v36, v37);
      if ( !svts )
        break;
      if ( v36 )
      {
        v38 = sub_B170BC(v36, svts->obj.klass->_1.element_class);
        if ( !v38 )
        {
LABEL_39:
          sub_B170F4(v38);
          sub_B170A0();
        }
      }
      if ( v33 >= svts->max_length )
        goto LABEL_38;
      *(Il2CppClass **)((char *)&svts->obj.klass + v34) = (Il2CppClass *)v36;
      sub_B16F98(
        (BattleServantConfConponent_o *)((char *)svts + v34),
        (System_Int32_array **)v36,
        v30,
        v39,
        v40,
        v41,
        v42,
        v43);
      v44 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v33 >= v44->max_length )
      {
LABEL_38:
        sub_B17100(v38, v29, v30);
        sub_B170A0();
      }
      v45 = *(__int64 *)((char *)&v44->obj.klass + v34);
      if ( !v45 )
        break;
      v46 = v33 + 1;
      *(_DWORD *)(v45 + 16) = v33 + 1;
      v47 = v33 + 1;
      if ( (int)(v33 + 1) > memberNum )
        v47 = (int)v33 % memberNum + 1;
      v48 = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( v33 >= v48->max_length )
        goto LABEL_38;
      v49 = *(__int64 *)((char *)&v48->obj.klass + v34);
      if ( !v49 )
        break;
      v34 += 8LL;
      ++v33;
      *(_DWORD *)(v49 + 60) = v47;
      if ( v46 >= memberNum * waveNum )
        goto LABEL_18;
    }
LABEL_37:
    sub_B170D4();
  }
LABEL_18:
  if ( waveNum >= 1 )
  {
    v50 = 0;
    v51 = 1;
    while ( 1 )
    {
      v52 = *p_waveSvts;
      v53 = (DeckWaveServantData_o *)sub_B170CC(DeckWaveServantData_TypeInfo, v29, v30, v31, v32);
      DeckWaveServantData___ctor(v53, v54);
      if ( !v52 )
        goto LABEL_37;
      if ( v53 )
      {
        v38 = sub_B170BC(v53, v52->obj.klass->_1.element_class);
        if ( !v38 )
          goto LABEL_39;
      }
      if ( v50 >= v52->max_length )
        goto LABEL_38;
      v60 = &v52->obj.klass + (int)v50;
      v60[4] = (Il2CppClass *)v53;
      sub_B16F98((BattleServantConfConponent_o *)(v60 + 4), (System_Int32_array **)v53, v30, v55, v56, v57, v58, v59);
      v61 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v50 >= v61->max_length )
        goto LABEL_38;
      v62 = v61->m_Items[v50];
      if ( !v62 )
        goto LABEL_37;
      v63 = v50 + 1;
      v62->fields.wave = v50 + 1;
      if ( memberNum >= 1 )
        break;
LABEL_35:
      v51 += memberNum;
      ++v50;
      if ( v63 >= waveNum )
        goto LABEL_36;
    }
    v64 = 0LL;
    while ( 1 )
    {
      v65 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_37;
      if ( v50 >= v65->max_length )
        goto LABEL_38;
      v66 = v65->m_Items[v50];
      if ( !v66 )
        goto LABEL_37;
      uniqueIds = v66->fields.uniqueIds;
      if ( !uniqueIds )
        goto LABEL_37;
      if ( v64 >= uniqueIds->max_length )
        goto LABEL_38;
      v68 = v51 + v64;
      v69 = (__int64)uniqueIds + 4 * v64++;
      *(_DWORD *)(v69 + 32) = v68;
      if ( (__int64)v64 >= memberNum )
        goto LABEL_35;
    }
  }
LABEL_36:
  v70->fields.userEquipId = userEquipId;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckServant___ctor_16649976(
        DeckServant_o *this,
        int32_t sum,
        DeckServant_o *deckInfo,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  struct DeckServantData_array *v9; // x0
  DeckServant_Fields *p_fields; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x0
  __int64 v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  unsigned __int64 v25; // x23
  signed __int64 v26; // x24
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length; // x9
  unsigned int *v29; // x26
  System_Int32_array **v30; // x22
  unsigned int *v31; // x0
  unsigned int *v32; // x26
  DeckServantData_o *v33; // x22
  const MethodInfo *v34; // x1
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  unsigned int *v40; // x0
  struct DeckServantData_array *v41; // x8
  DeckServantData_o *v42; // x8

  if ( (byte_40F5A86 & 1) == 0 )
  {
    sub_B16FFC(&DeckServantData___TypeInfo, *(_QWORD *)&sum);
    sub_B16FFC(&DeckServantData_TypeInfo, v7);
    byte_40F5A86 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v9 = (struct DeckServantData_array *)sub_B17014(DeckServantData___TypeInfo, (unsigned int)sum, v8);
  p_fields = &this->fields;
  this->fields.svts = v9;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v9, v11, v12, v13, v14, v15, v16);
  if ( !deckInfo )
LABEL_24:
    sub_B170D4();
  if ( sum >= 1 )
  {
    v25 = 0LL;
    v26 = sum;
    do
    {
      svts = deckInfo->fields.svts;
      if ( svts && (max_length = svts->max_length, (__int64)v25 < (int)max_length) )
      {
        if ( v25 >= max_length )
          goto LABEL_25;
        v29 = (unsigned int *)p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        v30 = (System_Int32_array **)svts->m_Items[v25];
        if ( v30 )
        {
          v17 = sub_B170BC(v30, *(_QWORD *)(*(_QWORD *)v29 + 64LL));
          if ( !v17 )
            goto LABEL_26;
        }
        if ( v25 >= v29[6] )
          goto LABEL_25;
        v31 = &v29[2 * v25];
        *((_QWORD *)v31 + 4) = v30;
        sub_B16F98((BattleServantConfConponent_o *)(v31 + 8), v30, v19, v20, v21, v22, v23, v24);
        ++v25;
      }
      else
      {
        v32 = (unsigned int *)p_fields->svts;
        v33 = (DeckServantData_o *)sub_B170CC(DeckServantData_TypeInfo, v18, v19, v20, v21);
        DeckServantData___ctor(v33, v34);
        if ( !v32 )
          goto LABEL_24;
        if ( v33 )
        {
          v17 = sub_B170BC(v33, *(_QWORD *)(*(_QWORD *)v32 + 64LL));
          if ( !v17 )
          {
LABEL_26:
            sub_B170F4(v17);
            sub_B170A0();
          }
        }
        if ( v25 >= v32[6] )
          goto LABEL_25;
        v40 = &v32[2 * v25];
        *((_QWORD *)v40 + 4) = v33;
        sub_B16F98((BattleServantConfConponent_o *)(v40 + 8), (System_Int32_array **)v33, v19, v35, v36, v37, v38, v39);
        v41 = p_fields->svts;
        if ( !p_fields->svts )
          goto LABEL_24;
        if ( v25 >= v41->max_length )
        {
LABEL_25:
          sub_B17100(v17, v18, v19);
          sub_B170A0();
        }
        v42 = v41->m_Items[v25];
        if ( !v42 )
          goto LABEL_24;
        v42->fields.id = ++v25;
      }
    }
    while ( (__int64)v25 < v26 );
  }
  this->fields.userEquipId = deckInfo->fields.userEquipId;
}


void __fastcall DeckServant__CollectUserSvtId(
        DeckServant_o *this,
        System_Collections_Generic_List_long__o *svtCollectList,
        System_Collections_Generic_List_long__o *equipCollectList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v14; // x1
  __int64 v15; // x2
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v17; // x22
  unsigned int v18; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v20; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  unsigned int v23; // w28
  __int64 v24; // x9
  DeckServantData_o *v25; // x10
  unsigned __int64 v26; // x28
  DeckServantData_o *v27; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 v29; // x10
  int64_t v30; // x23
  int32_t v31; // w8
  unsigned int v32; // w26

  if ( (byte_40F5A8C & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, svtCollectList);
    sub_B16FFC(&long___TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__Add__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Count__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_long__get_Item__, v10);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_40F5A8C = 1;
  }
  if ( this->fields.svts )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_50;
    MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                           (DataManager_o *)Instance,
                                           (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_50;
    v17 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
    v18 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v18 >= (int)max_length )
        return;
      if ( v18 >= max_length )
        goto LABEL_52;
      v20 = svts->m_Items[v18];
      if ( !v20 )
        goto LABEL_50;
      userSvtId = v20->fields.userSvtId;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v15);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_50;
      v14 = MasterData_WarQuestSelectionMaster;
      if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
        goto LABEL_52;
      MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)userSvtId;
      if ( !v17 )
        goto LABEL_50;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase__isEntityExistsFromId(
                                                                          v17,
                                                                          (System_Int64_array *)MasterData_WarQuestSelectionMaster,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !svtCollectList )
          goto LABEL_50;
        size = svtCollectList->fields._size;
        if ( size < 1 )
        {
LABEL_21:
          if ( userSvtId >= 1 )
            System_Collections_Generic_List_long___Add(
              svtCollectList,
              userSvtId,
              (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
        }
        else
        {
          v23 = 0;
          while ( 1 )
          {
            if ( size <= v23 )
              System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
            if ( svtCollectList->fields._items->m_Items[v23] == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( (int)++v23 >= size )
              goto LABEL_21;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_50;
        v24 = *(_QWORD *)&svts->max_length;
        if ( v18 >= (unsigned int)v24 )
          goto LABEL_52;
        v25 = svts->m_Items[v18];
        if ( !v25 )
          goto LABEL_50;
        if ( v25->fields.userSvtEquipIds )
        {
          if ( v18 >= (unsigned int)v24 )
          {
LABEL_52:
            sub_B17100(MasterData_WarQuestSelectionMaster, v14, v15);
            sub_B170A0();
          }
          v26 = 0LL;
          while ( 1 )
          {
            v27 = svts->m_Items[v18];
            if ( !v27 )
              break;
            userSvtEquipIds = v27->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              break;
            v29 = userSvtEquipIds->max_length;
            if ( (__int64)v26 >= (int)v29 )
              goto LABEL_49;
            if ( v26 >= v29 )
              goto LABEL_52;
            v30 = userSvtEquipIds->m_Items[v26];
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v15);
            if ( !MasterData_WarQuestSelectionMaster )
              break;
            v14 = MasterData_WarQuestSelectionMaster;
            if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
              goto LABEL_52;
            MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v30;
            MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase__isEntityExistsFromId(
                                                                                v17,
                                                                                (System_Int64_array *)MasterData_WarQuestSelectionMaster,
                                                                                0LL);
            if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
            {
              if ( !equipCollectList )
                break;
              v31 = equipCollectList->fields._size;
              if ( v31 < 1 )
              {
LABEL_43:
                if ( v30 >= 1 )
                  System_Collections_Generic_List_long___Add(
                    equipCollectList,
                    v30,
                    (const MethodInfo_2F164A0 *)Method_System_Collections_Generic_List_long__Add__);
              }
              else
              {
                v32 = 0;
                while ( 1 )
                {
                  if ( v31 <= v32 )
                    System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
                  if ( equipCollectList->fields._items->m_Items[v32] == v30 )
                    break;
                  v31 = equipCollectList->fields._size;
                  if ( (int)++v32 >= v31 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            if ( !svts )
              break;
            ++v26;
            if ( v18 >= svts->max_length )
              goto LABEL_52;
          }
LABEL_50:
          sub_B170D4();
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_49:
      ++v18;
      if ( !svts )
        goto LABEL_50;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *__fastcall DeckServant__GetEquipList(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  BalanceConfig_c *v8; // x0
  __int64 isEntityExistsFromId; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  struct DeckServantData_array *svts; // x11
  int max_length; // w8
  System_Int64_array *v14; // x19
  __int64 v15; // x9
  DeckServantData_o **m_Items; // x11
  DeckServantData_o *v17; // x23
  WebViewManager_o *Instance; // x0
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x20
  __int64 v21; // x2
  struct System_Int64_array *userSvtEquipIds; // x23
  unsigned __int64 v23; // x24
  int64_t *v24; // x26
  BalanceConfig_c *v25; // x0

  if ( (byte_40F5A88 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, *(_QWORD *)&menber);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&long___TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F5A88 = 1;
  }
  v8 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v8 = BalanceConfig_TypeInfo;
  }
  isEntityExistsFromId = sub_B17014(long___TypeInfo, (unsigned int)v8->static_fields->SvtEquipMax, method);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_39;
  max_length = svts->max_length;
  v14 = (System_Int64_array *)isEntityExistsFromId;
  if ( max_length >= 1 )
  {
    v15 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v15 >= max_length )
        goto LABEL_40;
      v17 = m_Items[v15];
      if ( !v17 )
        goto LABEL_39;
      if ( v17->fields.id == menber + 1 )
        break;
      if ( (int)++v15 >= max_length )
        return v14;
    }
    if ( !v17->fields.isFollowerSvt && v17->fields.userSvtId >= 1 )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( Instance )
      {
        MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)Instance,
                                                                   (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
        isEntityExistsFromId = sub_B17014(long___TypeInfo, 1LL, v21);
        if ( isEntityExistsFromId )
        {
          v10 = isEntityExistsFromId;
          if ( !*(_DWORD *)(isEntityExistsFromId + 24) )
          {
LABEL_40:
            sub_B17100(isEntityExistsFromId, v10, v11);
            sub_B170A0();
          }
          *(_QWORD *)(isEntityExistsFromId + 32) = v17->fields.userSvtId;
          if ( MasterData_WarQuestSelectionMaster )
          {
            if ( DataMasterBase__isEntityExistsFromId(
                   MasterData_WarQuestSelectionMaster,
                   (System_Int64_array *)isEntityExistsFromId,
                   0LL) )
            {
              userSvtEquipIds = v17->fields.userSvtEquipIds;
              if ( userSvtEquipIds )
              {
                v23 = 0LL;
                v24 = userSvtEquipIds->m_Items;
                while ( 1 )
                {
                  v25 = BalanceConfig_TypeInfo;
                  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !BalanceConfig_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
                    v25 = BalanceConfig_TypeInfo;
                  }
                  if ( (__int64)v23 >= v25->static_fields->SvtEquipMax
                    || (__int64)v23 >= (int)userSvtEquipIds->max_length )
                  {
                    break;
                  }
                  isEntityExistsFromId = sub_B17014(long___TypeInfo, 1LL, v11);
                  if ( v23 >= userSvtEquipIds->max_length )
                    goto LABEL_40;
                  v10 = isEntityExistsFromId;
                  if ( !isEntityExistsFromId )
                    goto LABEL_39;
                  if ( !*(_DWORD *)(isEntityExistsFromId + 24) )
                    goto LABEL_40;
                  *(_QWORD *)(isEntityExistsFromId + 32) = v24[v23];
                  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                                           MasterData_WarQuestSelectionMaster,
                                           (System_Int64_array *)isEntityExistsFromId,
                                           0LL);
                  if ( (isEntityExistsFromId & 1) != 0 )
                  {
                    if ( v23 >= userSvtEquipIds->max_length )
                      goto LABEL_40;
                    if ( !v14 )
                      goto LABEL_39;
                    if ( v23 >= v14->max_length )
                      goto LABEL_40;
                    v14->m_Items[v23] = v24[v23];
                  }
                  ++v23;
                }
              }
            }
            return v14;
          }
        }
      }
LABEL_39:
      sub_B170D4();
    }
  }
  return v14;
}


System_Int64_array *__fastcall DeckServant__GetEquipList_16651320(
        DeckServant_o *this,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  WebViewManager_o *Instance; // x0
  __int64 v9; // x2
  DataMasterBase_o *MasterData_WarQuestSelectionMaster; // x19
  BalanceConfig_c *v11; // x8
  System_Int64_array *v12; // x20
  __int64 v13; // x2
  __int64 isEntityExistsFromId; // x0
  __int64 v15; // x2
  __int64 v16; // x1
  struct DeckServantData_array *svts; // x10
  int max_length; // w8
  __int64 v19; // x9
  DeckServantData_o **m_Items; // x10
  DeckServantData_o *v21; // x11
  struct System_Int64_array *userSvtEquipIds; // x21
  unsigned __int64 v24; // x22
  int64_t *v25; // x26
  BalanceConfig_c *v26; // x0

  if ( (byte_40F5A89 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, userSvtId);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, v5);
    sub_B16FFC(&long___TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v7);
    byte_40F5A89 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_38;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)Instance,
                                                             (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  v11 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v11 = BalanceConfig_TypeInfo;
  }
  v12 = (System_Int64_array *)sub_B17014(long___TypeInfo, (unsigned int)v11->static_fields->SvtEquipMax, v9);
  isEntityExistsFromId = sub_B17014(long___TypeInfo, 1LL, v13);
  if ( !isEntityExistsFromId )
    goto LABEL_38;
  v16 = isEntityExistsFromId;
  if ( !*(_DWORD *)(isEntityExistsFromId + 24) )
  {
LABEL_39:
    sub_B17100(isEntityExistsFromId, v16, v15);
    sub_B170A0();
  }
  *(_QWORD *)(isEntityExistsFromId + 32) = userSvtId;
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_38;
  isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                           MasterData_WarQuestSelectionMaster,
                           (System_Int64_array *)isEntityExistsFromId,
                           0LL);
  if ( (isEntityExistsFromId & 1) == 0 )
    return v12;
  svts = this->fields.svts;
  if ( !svts )
LABEL_38:
    sub_B170D4();
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v19 = 0LL;
    m_Items = svts->m_Items;
    while ( 1 )
    {
      if ( (unsigned int)v19 >= max_length )
        goto LABEL_39;
      v21 = m_Items[v19];
      if ( !v21 )
        goto LABEL_38;
      if ( v21->fields.userSvtId == userSvtId )
        break;
      if ( (int)++v19 >= max_length )
        return v12;
    }
    if ( !v21->fields.isFollowerSvt )
    {
      userSvtEquipIds = v21->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v24 = 0LL;
        v25 = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v26 = BalanceConfig_TypeInfo;
          if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !BalanceConfig_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
            v26 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v24 >= v26->static_fields->SvtEquipMax || (__int64)v24 >= (int)userSvtEquipIds->max_length )
            break;
          isEntityExistsFromId = sub_B17014(long___TypeInfo, 1LL, v15);
          if ( v24 >= userSvtEquipIds->max_length )
            goto LABEL_39;
          v16 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_38;
          if ( !*(_DWORD *)(isEntityExistsFromId + 24) )
            goto LABEL_39;
          *(_QWORD *)(isEntityExistsFromId + 32) = v25[v24];
          isEntityExistsFromId = DataMasterBase__isEntityExistsFromId(
                                   MasterData_WarQuestSelectionMaster,
                                   (System_Int64_array *)isEntityExistsFromId,
                                   0LL);
          if ( (isEntityExistsFromId & 1) != 0 )
          {
            if ( v24 >= userSvtEquipIds->max_length )
              goto LABEL_39;
            if ( !v12 )
              goto LABEL_38;
            if ( v24 >= v12->max_length )
              goto LABEL_39;
            v12->m_Items[v24] = v25[v24];
          }
          ++v24;
        }
      }
    }
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *__fastcall DeckServant__GetUserServant(
        DeckServant_o *this,
        int32_t menber,
        const MethodInfo *method)
{
  DeckServant_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  struct DeckServantData_array *svts; // x8
  __int64 v8; // x21
  int v9; // w20
  int max_length; // w9
  DeckServantData_o *v11; // x25
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x0
  UserServantEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_40F5A87 & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, *(_QWORD *)&menber);
    sub_B16FFC(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__, v5);
    this = (DeckServant_o *)sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F5A87 = 1;
  }
  entity = 0LL;
  svts = v4->fields.svts;
  if ( !svts )
LABEL_16:
    sub_B170D4();
  v8 = 0LL;
  v9 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v8 >= max_length )
      return 0LL;
    if ( (unsigned int)v8 >= max_length )
    {
      sub_B17100(this, *(_QWORD *)&menber, method);
      sub_B170A0();
    }
    v11 = svts->m_Items[v8];
    if ( !v11 )
      goto LABEL_16;
    if ( v11->fields.id == v9 && !v11->fields.isFollowerSvt && v11->fields.userSvtId >= 1 )
      break;
LABEL_15:
    ++v8;
    if ( !svts )
      goto LABEL_16;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                            MasterData_WarQuestSelectionMaster,
                            &entity,
                            v11->fields.userSvtId,
                            (const MethodInfo_266F60C *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return entity;
}


bool __fastcall DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v9; // x1
  __int64 v10; // x2
  struct DeckServantData_array *svts; // x8
  DataMasterBase_o *v12; // x21
  il2cpp_array_size_t v13; // w22
  il2cpp_array_size_t max_length; // w9
  DeckServantData_o *v15; // x25
  DeckServantData_o *v16; // x9
  struct System_Int64_array *userSvtEquipIds; // x11
  int v18; // w9
  __int64 v19; // x10
  int64_t *m_Items; // x11

  if ( (byte_40F5A8A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&long___TypeInfo, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_40F5A8A = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_32;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_32;
  v12 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
  v13 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v13 >= (int)max_length )
      return 0;
    if ( v13 >= max_length )
      goto LABEL_33;
    v15 = svts->m_Items[v13];
    if ( !v15 )
      goto LABEL_32;
    if ( !v15->fields.isFollowerSvt && v15->fields.userSvtId >= 1 )
    {
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v10);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_32;
      v9 = MasterData_WarQuestSelectionMaster;
      if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
        goto LABEL_33;
      MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v15->fields.userSvtId;
      if ( !v12 )
        goto LABEL_32;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase__isEntityExistsFromId(
                                                                          v12,
                                                                          (System_Int64_array *)MasterData_WarQuestSelectionMaster,
                                                                          0LL);
      svts = this->fields.svts;
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_32;
        if ( v13 >= svts->max_length )
          goto LABEL_33;
        v16 = svts->m_Items[v13];
        if ( !v16 )
          goto LABEL_32;
        userSvtEquipIds = v16->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v18 = userSvtEquipIds->max_length;
          if ( v18 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v13;
    if ( !svts )
      goto LABEL_32;
  }
  v19 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    if ( (unsigned int)v19 >= v18 )
      goto LABEL_33;
    if ( m_Items[v19] == userSvtId )
      break;
    if ( (int)++v19 >= v18 )
      goto LABEL_11;
  }
  MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v10);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_32:
    sub_B170D4();
  v9 = MasterData_WarQuestSelectionMaster;
  if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
  {
LABEL_33:
    sub_B17100(MasterData_WarQuestSelectionMaster, v9, v10);
    sub_B170A0();
  }
  MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v12, (System_Int64_array *)MasterData_WarQuestSelectionMaster, 0LL);
}


bool __fastcall DeckServant__IsEquip_16652380(
        DeckServant_o *this,
        int64_t userSvtId,
        int64_t *equipedUserSvtId,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  WebViewManager_o *Instance; // x0
  WarQuestSelectionMaster_o *MasterData_WarQuestSelectionMaster; // x0
  WarQuestSelectionMaster_o *v11; // x1
  __int64 v12; // x2
  struct DeckServantData_array *svts; // x8
  int max_length; // w23
  DataMasterBase_o *v15; // x22
  il2cpp_array_size_t v16; // w24
  DeckServantData_o *v17; // x26
  struct System_Int64_array *userSvtEquipIds; // x10
  int v19; // w8
  __int64 v20; // x9
  int64_t *m_Items; // x10

  if ( (byte_40F5A8B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_UserServantMaster___, userSvtId);
    sub_B16FFC(&long___TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_40F5A8B = 1;
  }
  *equipedUserSvtId = 0LL;
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_29;
  MasterData_WarQuestSelectionMaster = DataManager__GetMasterData_WarQuestSelectionMaster_(
                                         (DataManager_o *)Instance,
                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_29;
  max_length = svts->max_length;
  if ( max_length < 1 )
    return 0;
  v15 = (DataMasterBase_o *)MasterData_WarQuestSelectionMaster;
  v16 = 0;
  while ( 1 )
  {
    if ( v16 >= svts->max_length )
      goto LABEL_30;
    v17 = svts->m_Items[v16];
    if ( !v17 )
      goto LABEL_29;
    if ( !v17->fields.isFollowerSvt && v17->fields.userSvtId >= 1 )
    {
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v12);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_29;
      v11 = MasterData_WarQuestSelectionMaster;
      if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
        goto LABEL_30;
      MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)v17->fields.userSvtId;
      if ( !v15 )
        goto LABEL_29;
      MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)DataMasterBase__isEntityExistsFromId(
                                                                          v15,
                                                                          (System_Int64_array *)MasterData_WarQuestSelectionMaster,
                                                                          0LL);
      if ( ((unsigned __int8)MasterData_WarQuestSelectionMaster & 1) != 0 )
      {
        userSvtEquipIds = v17->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v19 = userSvtEquipIds->max_length;
          if ( v19 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    if ( (int)++v16 >= max_length )
      return 0;
    svts = this->fields.svts;
    if ( !svts )
      goto LABEL_29;
  }
  v20 = 0LL;
  m_Items = userSvtEquipIds->m_Items;
  while ( m_Items[v20] != userSvtId )
  {
    if ( (int)++v20 >= v19 )
      goto LABEL_11;
  }
  *equipedUserSvtId = v17->fields.userSvtId;
  MasterData_WarQuestSelectionMaster = (WarQuestSelectionMaster_o *)sub_B17014(long___TypeInfo, 1LL, v12);
  if ( !MasterData_WarQuestSelectionMaster )
LABEL_29:
    sub_B170D4();
  v11 = MasterData_WarQuestSelectionMaster;
  if ( !LODWORD(MasterData_WarQuestSelectionMaster->fields._MasterName_k__BackingField) )
  {
LABEL_30:
    sub_B17100(MasterData_WarQuestSelectionMaster, v11, v12);
    sub_B170A0();
  }
  MasterData_WarQuestSelectionMaster->fields.list = (struct System_Collections_ObjectModel_ObservableCollection_DataEntityBase__o *)userSvtId;
  return DataMasterBase__isEntityExistsFromId(v15, (System_Int64_array *)MasterData_WarQuestSelectionMaster, 0LL);
}


void __fastcall DeckServant__ResetInitPos(DeckServant_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct DeckServantData_array *svts; // x9
  __int64 v4; // x8
  int max_length; // w10
  DeckServantData_o *v6; // x9

  svts = this->fields.svts;
  if ( !svts )
LABEL_7:
    sub_B170D4();
  v4 = 0LL;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v4 >= max_length )
      break;
    if ( (unsigned int)v4 >= max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    v6 = svts->m_Items[v4];
    if ( v6 )
    {
      v6->fields.initPos = ++v4;
      svts = this->fields.svts;
      if ( svts )
        continue;
    }
    goto LABEL_7;
  }
}