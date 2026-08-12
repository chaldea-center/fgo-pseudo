void DeckServant___ctor(DeckServant_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void DeckServant___ctor_48702276(DeckServant_o *this, int32_t sum, int64_t userEquipId, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  long double v22; // q0
  _QWORD *v23; // x23
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x0
  struct DeckWaveServantData_array **v27; // x8
  struct DeckWaveServantData_array *v28; // x1
  unsigned int v29; // w24
  __int64 v30; // x26
  struct DeckServantData_array *svts; // x27
  DeckServantData_o *v32; // x23
  const MethodInfo *v33; // x1
  __int64 v34; // x0
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x8
  __int64 v44; // x0

  if ( (byte_597032F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_DeckWaveServantData___);
    sub_2213A60(&DeckServantData___TypeInfo);
    sub_2213A60(&DeckServantData_TypeInfo);
    byte_597032F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_2213B20(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v23 = Method_System_Array_Empty_DeckWaveServantData___;
  v24 = *((_QWORD *)Method_System_Array_Empty_DeckWaveServantData___ + 7);
  if ( !v24 )
  {
    sub_224B964(Method_System_Array_Empty_DeckWaveServantData___);
    v24 = v23[7];
  }
  v25 = *(_QWORD *)(v24 + 16);
  if ( (*(_WORD *)(v25 + 309) & 1) == 0 )
    v25 = sub_224B908(v22);
  if ( !*(_DWORD *)(v25 + 228) )
    *(__n128 *)&v22 = j_il2cpp_runtime_class_init_0(v25, v15);
  v26 = *(_QWORD *)(v23[7] + 16LL);
  if ( (*(_WORD *)(v26 + 309) & 1) == 0 )
    v26 = sub_224B908(v22);
  v27 = *(struct DeckWaveServantData_array ***)(v26 + 184);
  v28 = *v27;
  this->fields.waveSvts = *v27;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.waveSvts, (int32_t)v28, v16, v17, v18, v19, v20, v21);
  if ( sum >= 1 )
  {
    v29 = 0;
    v30 = 32;
    svts = p_fields->svts;
    do
    {
      v32 = (DeckServantData_o *)sub_2213CCC(DeckServantData_TypeInfo);
      DeckServantData___ctor(v32, v33);
      if ( !svts )
        goto LABEL_22;
      if ( v32 )
      {
        v34 = sub_2213BB4(v32, svts->obj.klass->_1.element_class);
        if ( !v34 )
        {
          v44 = sub_2213D00(0, v42);
          sub_2213BA0(v44, 0);
        }
      }
      if ( v29 >= LODWORD(svts->max_length) )
        goto LABEL_23;
      *(Il2CppClass **)((char *)&svts->obj.klass + v30) = (Il2CppClass *)v32;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)svts + v30), (int32_t)v32, v36, v37, v38, v39, v40, v41);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        goto LABEL_22;
      if ( v29 >= LODWORD(svts->max_length) )
LABEL_23:
        sub_2213CE4(v34);
      v43 = *(__int64 *)((char *)&svts->obj.klass + v30);
      if ( !v43 )
LABEL_22:
        sub_2213CDC(v34, v35);
      ++v29;
      v30 += 8;
      *(_DWORD *)(v43 + 16) = v29;
      *(_DWORD *)(v43 + 76) = v29;
    }
    while ( sum != v29 );
  }
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_48702940(
        DeckServant_o *this,
        int32_t waveNum,
        int32_t memberNum,
        int64_t userEquipId,
        const MethodInfo *method)
{
  struct DeckServantData_array *v8; // x0
  DeckServant_Fields *p_fields; // x25
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct DeckWaveServantData_array *v16; // x0
  struct DeckWaveServantData_array **p_waveSvts; // x23
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w19
  __int64 v25; // x28
  struct DeckServantData_array *svts; // x29
  DeckServantData_o *v27; // x26
  const MethodInfo *v28; // x1
  __int64 v29; // x0
  __int64 v30; // x1
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  __int64 v37; // x1
  __int64 v38; // x8
  int v39; // w9
  int v40; // w10
  unsigned int v41; // w25
  struct DeckWaveServantData_array *v42; // x29
  int v43; // w28
  DeckWaveServantData_o *v44; // x24
  const MethodInfo *v45; // x1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  Il2CppClass **v52; // x0
  DeckWaveServantData_o *v53; // x8
  struct System_Int32_array *uniqueIds; // x9
  __int64 max_length_low; // x8
  int *m_Items; // x9
  int v57; // w10
  __int64 v58; // x11
  __int64 v59; // x0

  if ( (byte_5970330 & 1) == 0 )
  {
    sub_2213A60(&DeckServantData___TypeInfo);
    sub_2213A60(&DeckServantData_TypeInfo);
    sub_2213A60(&DeckWaveServantData___TypeInfo);
    sub_2213A60(&DeckWaveServantData_TypeInfo);
    byte_5970330 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = (struct DeckServantData_array *)sub_2213B20(DeckServantData___TypeInfo, (unsigned int)(memberNum * waveNum));
  this->fields.svts = v8;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v8, v10, v11, v12, v13, v14, v15);
  v16 = (struct DeckWaveServantData_array *)sub_2213B20(DeckWaveServantData___TypeInfo, (unsigned int)waveNum);
  this->fields.waveSvts = v16;
  p_waveSvts = &this->fields.waveSvts;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.waveSvts, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  if ( memberNum * waveNum >= 1 )
  {
    v24 = 0;
    v25 = 32;
    svts = p_fields->svts;
    while ( 1 )
    {
      v27 = (DeckServantData_o *)sub_2213CCC(DeckServantData_TypeInfo);
      DeckServantData___ctor(v27, v28);
      if ( !svts )
        break;
      if ( v27 )
      {
        v29 = sub_2213BB4(v27, svts->obj.klass->_1.element_class);
        if ( !v29 )
        {
LABEL_33:
          v59 = sub_2213D00(v29, v37);
          sub_2213BA0(v59, 0);
        }
      }
      if ( (unsigned int)v24 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      *(Il2CppClass **)((char *)&svts->obj.klass + v25) = (Il2CppClass *)v27;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)svts + v25), (int32_t)v27, v31, v32, v33, v34, v35, v36);
      svts = p_fields->svts;
      if ( !p_fields->svts )
        break;
      if ( (unsigned int)v24 >= LODWORD(svts->max_length) )
        goto LABEL_31;
      v38 = *(__int64 *)((char *)&svts->obj.klass + v25);
      if ( !v38 )
        break;
      v39 = v24 + 1;
      v40 = v24 + 1;
      *(_DWORD *)(v38 + 16) = v24 + 1;
      if ( v24 >= memberNum )
        v40 = v24 % memberNum + 1;
      v25 += 8;
      ++v24;
      *(_DWORD *)(v38 + 76) = v40;
      if ( memberNum * waveNum == v39 )
        goto LABEL_15;
    }
LABEL_32:
    sub_2213CDC(v29, v30);
  }
LABEL_15:
  if ( waveNum >= 1 )
  {
    v41 = 0;
    v42 = *p_waveSvts;
    v43 = 1;
    while ( 1 )
    {
      v44 = (DeckWaveServantData_o *)sub_2213CCC(DeckWaveServantData_TypeInfo);
      DeckWaveServantData___ctor(v44, v45);
      if ( !v42 )
        goto LABEL_32;
      if ( v44 )
      {
        v29 = sub_2213BB4(v44, v42->obj.klass->_1.element_class);
        if ( !v29 )
          goto LABEL_33;
      }
      if ( v41 >= LODWORD(v42->max_length) )
        goto LABEL_31;
      v52 = &v42->obj.klass + v41;
      v52[4] = (Il2CppClass *)v44;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v52 + 4), (int32_t)v44, v46, v47, v48, v49, v50, v51);
      v42 = *p_waveSvts;
      if ( !*p_waveSvts )
        goto LABEL_32;
      if ( v41 >= LODWORD(v42->max_length) )
        goto LABEL_31;
      v53 = v42->m_Items[v41];
      if ( !v53 )
        goto LABEL_32;
      v53->fields.wave = ++v41;
      if ( memberNum >= 1 )
        break;
LABEL_29:
      v43 += memberNum;
      if ( v41 == waveNum )
        goto LABEL_30;
    }
    uniqueIds = v53->fields.uniqueIds;
    if ( uniqueIds )
    {
      max_length_low = LODWORD(uniqueIds->max_length);
      m_Items = uniqueIds->m_Items;
      v57 = v43;
      v58 = (unsigned int)memberNum;
      while ( max_length_low )
      {
        *m_Items++ = v57;
        --v58;
        --max_length_low;
        ++v57;
        if ( !v58 )
          goto LABEL_29;
      }
LABEL_31:
      sub_2213CE4(v29);
    }
    goto LABEL_32;
  }
LABEL_30:
  this->fields.userEquipId = userEquipId;
}


void DeckServant___ctor_48703748(DeckServant_o *this, int32_t sum, DeckServant_o *deckInfo, const MethodInfo *method)
{
  struct DeckServantData_array *v7; // x0
  DeckServant_Fields *p_fields; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  DeckServantData_o *v15; // x0
  const MethodInfo *v16; // x1
  unsigned __int64 v17; // x23
  __int64 v18; // x25
  struct DeckServantData_array *svts; // x8
  unsigned __int64 max_length_low; // x9
  unsigned int *v21; // x26
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  DeckServantData_o *v28; // x22
  __int64 v29; // x1
  unsigned int *v30; // x0
  DeckServantData_o *v31; // x22
  const MethodInfo *v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  unsigned int *v39; // x0
  struct DeckServantData_array *v40; // x8
  DeckServantData_o *v41; // x8
  __int64 v42; // x0

  if ( (byte_5970331 & 1) == 0 )
  {
    sub_2213A60(&DeckServantData___TypeInfo);
    sub_2213A60(&DeckServantData_TypeInfo);
    byte_5970331 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v7 = (struct DeckServantData_array *)sub_2213B20(DeckServantData___TypeInfo, (unsigned int)sum);
  this->fields.svts = v7;
  p_fields = &this->fields;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  if ( sum >= 1 )
  {
    if ( deckInfo )
    {
      v17 = 0;
      v18 = (unsigned int)sum;
      while ( 1 )
      {
        svts = deckInfo->fields.svts;
        if ( svts )
        {
          max_length_low = LODWORD(svts->max_length);
          v21 = (unsigned int *)p_fields->svts;
          if ( (__int64)v17 < (int)max_length_low )
          {
            if ( v17 >= max_length_low )
              goto LABEL_29;
            v15 = svts->m_Items[v17];
            if ( !v15 )
              break;
            v15 = DeckServantData__Clone(v15, v16);
            if ( !v21 )
              break;
            v28 = v15;
            if ( v15 )
            {
              v15 = (DeckServantData_o *)sub_2213BB4(v15, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
              if ( !v15 )
                goto LABEL_30;
            }
            if ( v17 >= v21[6] )
              goto LABEL_29;
            v30 = &v21[2 * v17];
            *((_QWORD *)v30 + 4) = v28;
            sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 8), (int32_t)v28, v22, v23, v24, v25, v26, v27);
            ++v17;
            goto LABEL_24;
          }
        }
        else
        {
          v21 = (unsigned int *)p_fields->svts;
        }
        v31 = (DeckServantData_o *)sub_2213CCC(DeckServantData_TypeInfo);
        DeckServantData___ctor(v31, v32);
        if ( !v21 )
          break;
        if ( v31 )
        {
          v15 = (DeckServantData_o *)sub_2213BB4(v31, *(_QWORD *)(*(_QWORD *)v21 + 64LL));
          if ( !v15 )
          {
LABEL_30:
            v42 = sub_2213D00(v15, v29);
            sub_2213BA0(v42, 0);
          }
        }
        if ( v17 >= v21[6] )
          goto LABEL_29;
        v39 = &v21[2 * v17];
        *((_QWORD *)v39 + 4) = v31;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v39 + 8), (int32_t)v31, v33, v34, v35, v36, v37, v38);
        v40 = p_fields->svts;
        if ( !p_fields->svts )
          break;
        if ( v17 >= LODWORD(v40->max_length) )
LABEL_29:
          sub_2213CE4(v15);
        v41 = v40->m_Items[v17];
        if ( !v41 )
          break;
        v41->fields.id = ++v17;
LABEL_24:
        if ( v17 == v18 )
          goto LABEL_27;
      }
    }
LABEL_28:
    sub_2213CDC(v15, v16);
  }
  if ( !deckInfo )
    goto LABEL_28;
LABEL_27:
  this->fields.userEquipId = deckInfo->fields.userEquipId;
}


void DeckServant__CollectUserSvtId(
        DeckServant_o *this,
        System_Collections_Generic_List_long__o *svtCollectList,
        System_Collections_Generic_List_long__o *equipCollectList,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v8; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x22
  unsigned int v11; // w29
  unsigned int max_length; // w9
  DeckServantData_o *v13; // x8
  int64_t userSvtId; // x23
  int32_t size; // w8
  int32_t v16; // w24
  struct System_Int64_array *items; // x9
  _QWORD *v18; // x10
  DeckServantData_o *v19; // x9
  unsigned __int64 v20; // x25
  DeckServantData_o *v21; // x9
  struct System_Int64_array *userSvtEquipIds; // x9
  unsigned __int64 max_length_low; // x10
  int64_t v24; // x23
  const MethodInfo_3F12868 *v25; // x2
  int32_t v26; // w8
  int32_t v27; // w24
  struct System_Int64_array *v28; // x9
  _QWORD *v29; // x10

  if ( (byte_5970336 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_long__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_List_long__get_Item__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970336 = 1;
  }
  if ( this->fields.svts )
  {
    Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (__int64)DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___),
          (svts = this->fields.svts) == 0) )
    {
LABEL_51:
      sub_2213CDC(Instance, v8);
    }
    v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v11 = 0;
    while ( 1 )
    {
      max_length = svts->max_length;
      if ( (int)v11 >= (int)max_length )
        break;
      if ( v11 >= max_length )
        goto LABEL_53;
      v13 = svts->m_Items[v11];
      if ( !v13 )
        goto LABEL_51;
      userSvtId = v13->fields.userSvtId;
      Instance = sub_2213B20(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_51;
      v8 = Instance;
      if ( !*(_DWORD *)(Instance + 24) )
        goto LABEL_53;
      *(_QWORD *)(Instance + 32) = userSvtId;
      if ( !v10 )
        goto LABEL_51;
      Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                   v10,
                   (System_Int64_array *)Instance,
                   (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      if ( (Instance & 1) != 0 )
      {
        if ( !svtCollectList )
          goto LABEL_51;
        size = svtCollectList->fields._size;
        if ( size < 1 )
        {
LABEL_19:
          if ( userSvtId >= 1 )
          {
            items = svtCollectList->fields._items;
            v18 = Method_System_Collections_Generic_List_long__Add__;
            ++svtCollectList->fields._version;
            if ( !items )
              goto LABEL_51;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_long___AddWithResize(
                svtCollectList,
                userSvtId,
                *(const MethodInfo_446C29C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
            }
            else
            {
              svtCollectList->fields._size = size + 1;
              items->m_Items[size] = userSvtId;
            }
          }
        }
        else
        {
          v16 = 0;
          while ( 1 )
          {
            Instance = System_Collections_Generic_List_long___get_Item(
                         svtCollectList,
                         v16,
                         (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
            if ( Instance == userSvtId )
              break;
            size = svtCollectList->fields._size;
            if ( ++v16 >= size )
              goto LABEL_19;
          }
        }
        svts = this->fields.svts;
        if ( !svts )
          goto LABEL_51;
        if ( v11 >= LODWORD(svts->max_length) )
          goto LABEL_53;
        v19 = svts->m_Items[v11];
        if ( !v19 )
          goto LABEL_51;
        if ( v19->fields.userSvtEquipIds )
        {
          v20 = 0;
          while ( v11 < LODWORD(svts->max_length) )
          {
            v21 = svts->m_Items[v11];
            if ( !v21 )
              goto LABEL_51;
            userSvtEquipIds = v21->fields.userSvtEquipIds;
            if ( !userSvtEquipIds )
              goto LABEL_51;
            max_length_low = LODWORD(userSvtEquipIds->max_length);
            if ( (__int64)v20 >= (int)max_length_low )
              goto LABEL_50;
            if ( v20 >= max_length_low )
              break;
            v24 = userSvtEquipIds->m_Items[v20];
            Instance = sub_2213B20(long___TypeInfo, 1);
            if ( !Instance )
              goto LABEL_51;
            if ( !*(_DWORD *)(Instance + 24) )
              break;
            v25 = (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__;
            *(_QWORD *)(Instance + 32) = v24;
            Instance = DataMasterBase_object__object__long___isEntityExistsFromId(
                         v10,
                         (System_Int64_array *)Instance,
                         v25);
            if ( (Instance & 1) != 0 )
            {
              if ( !equipCollectList )
                goto LABEL_51;
              v26 = equipCollectList->fields._size;
              if ( v26 < 1 )
              {
LABEL_43:
                if ( v24 >= 1 )
                {
                  v28 = equipCollectList->fields._items;
                  v29 = Method_System_Collections_Generic_List_long__Add__;
                  ++equipCollectList->fields._version;
                  if ( !v28 )
                    goto LABEL_51;
                  if ( (unsigned int)v26 >= LODWORD(v28->max_length) )
                  {
                    System_Collections_Generic_List_long___AddWithResize(
                      equipCollectList,
                      v24,
                      *(const MethodInfo_446C29C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    equipCollectList->fields._size = v26 + 1;
                    v28->m_Items[v26] = v24;
                  }
                }
              }
              else
              {
                v27 = 0;
                while ( 1 )
                {
                  Instance = System_Collections_Generic_List_long___get_Item(
                               equipCollectList,
                               v27,
                               (const MethodInfo_446BFA8 *)Method_System_Collections_Generic_List_long__get_Item__);
                  if ( Instance == v24 )
                    break;
                  v26 = equipCollectList->fields._size;
                  if ( ++v27 >= v26 )
                    goto LABEL_43;
                }
              }
            }
            svts = this->fields.svts;
            ++v20;
            if ( !svts )
              goto LABEL_51;
          }
LABEL_53:
          sub_2213CE4(Instance);
        }
      }
      else
      {
        svts = this->fields.svts;
      }
LABEL_50:
      ++v11;
      if ( !svts )
        goto LABEL_51;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
System_Int64_array *DeckServant__GetEquipList(DeckServant_o *this, int32_t memberIdx, const MethodInfo *method)
{
  int32_t v3; // w19
  DeckServant_o *v4; // x20
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v7; // w10
  DeckServantData_o *v8; // x20
  BalanceConfig_c *v9; // x0
  Il2CppObject *Master_object; // x19
  struct System_Int64_array *userSvtEquipIds; // x20
  __int64 v13; // x21
  unsigned __int64 v14; // x24
  int64_t *m_Items; // x25
  const MethodInfo_3F12868 *v16; // x2

  v3 = memberIdx;
  v4 = this;
  if ( (byte_5970333 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    this = (DeckServant_o *)sub_2213A60(&long___TypeInfo);
    byte_5970333 = 1;
  }
  svts = v4->fields.svts;
  if ( !svts )
    goto LABEL_36;
  max_length = svts->max_length;
  if ( max_length < 1 )
    goto LABEL_12;
  v7 = 0;
  while ( 1 )
  {
    if ( max_length == v7 )
      goto LABEL_37;
    v8 = svts->m_Items[v7];
    if ( !v8 )
      goto LABEL_36;
    if ( v8->fields.id == v3 + 1 && !v8->fields.isFollowerSvt && v8->fields.userSvtId >= 1 )
      break;
    if ( (max_length & ~(max_length >> 31)) == ++v7 )
      goto LABEL_12;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&memberIdx);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  this = (DeckServant_o *)sub_2213B20(long___TypeInfo, 1);
  if ( !this )
    goto LABEL_36;
  *(_QWORD *)&memberIdx = this;
  if ( !LODWORD(this->fields.userEquipId) )
    goto LABEL_37;
  this->fields.waveSvts = (struct DeckWaveServantData_array *)v8->fields.userSvtId;
  if ( !Master_object )
    goto LABEL_36;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          (System_Int64_array *)this,
          (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__) )
    goto LABEL_12;
  userSvtEquipIds = v8->fields.userSvtEquipIds;
  this = (DeckServant_o *)BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)userSvtEquipIds, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  if ( !userSvtEquipIds )
LABEL_36:
    sub_2213CDC(this, *(_QWORD *)&memberIdx);
  v13 = sub_2213B20(long___TypeInfo, LODWORD(userSvtEquipIds->max_length));
  if ( SLODWORD(userSvtEquipIds->max_length) >= 1 )
  {
    v14 = 0;
    m_Items = userSvtEquipIds->m_Items;
    while ( 1 )
    {
      this = (DeckServant_o *)sub_2213B20(long___TypeInfo, 1);
      if ( v14 >= LODWORD(userSvtEquipIds->max_length) )
        break;
      *(_QWORD *)&memberIdx = this;
      if ( !this )
        goto LABEL_36;
      if ( !LODWORD(this->fields.userEquipId) )
        break;
      v16 = (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__;
      this->fields.waveSvts = (struct DeckWaveServantData_array *)m_Items[v14];
      this = (DeckServant_o *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                (System_Int64_array *)this,
                                v16);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( v14 >= LODWORD(userSvtEquipIds->max_length) )
          break;
        if ( !v13 )
          goto LABEL_36;
        if ( v14 >= *(unsigned int *)(v13 + 24) )
          break;
        *(_QWORD *)(v13 + 32 + 8 * v14) = m_Items[v14];
      }
      if ( (__int64)++v14 >= SLODWORD(userSvtEquipIds->max_length) )
        goto LABEL_34;
    }
LABEL_37:
    sub_2213CE4(this);
  }
LABEL_34:
  if ( v13 )
    return (System_Int64_array *)v13;
LABEL_12:
  v9 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&memberIdx);
    v9 = BalanceConfig_TypeInfo;
  }
  return (System_Int64_array *)sub_2213B20(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
}


System_Int64_array *DeckServant__GetEquipList_48705416(
        DeckServant_o *this,
        int64_t userSvtId,
        bool isInterruption,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  BalanceConfig_c *v9; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v10; // x20
  __int64 v11; // x21
  System_Int64_array *isEntityExistsFromId; // x0
  System_Int64_array *v13; // x1
  __int64 v14; // x1
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v17; // w11
  DeckServantData_o *v18; // x12
  struct System_Int64_array *userSvtEquipIds; // x22
  unsigned __int64 v21; // x23
  int64_t *m_Items; // x27
  BalanceConfig_c *v23; // x0
  const MethodInfo_3F12868 *v24; // x2

  if ( (byte_5970334 & 1) == 0 )
  {
    sub_2213A60(&BalanceConfig_TypeInfo);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantCollectionMaster___);
    sub_2213A60(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_2213A60(&DataManager_TypeInfo);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    byte_5970334 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, userSvtId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantMaster___);
  v9 = BalanceConfig_TypeInfo;
  v10 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
    v9 = BalanceConfig_TypeInfo;
  }
  v11 = sub_2213B20(long___TypeInfo, (unsigned int)v9->static_fields->SvtEquipMax);
  isEntityExistsFromId = (System_Int64_array *)sub_2213B20(long___TypeInfo, 1);
  if ( !isEntityExistsFromId )
    goto LABEL_40;
  v13 = isEntityExistsFromId;
  if ( !LODWORD(isEntityExistsFromId->max_length) )
LABEL_41:
    sub_2213CE4(isEntityExistsFromId);
  isEntityExistsFromId->m_Items[0] = userSvtId;
  if ( !v10 )
    goto LABEL_40;
  if ( !DataMasterBase_object__object__long___isEntityExistsFromId(
          v10,
          isEntityExistsFromId,
          (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__)
    && !isInterruption )
  {
    return (System_Int64_array *)v11;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  isEntityExistsFromId = (System_Int64_array *)DataManager__GetMaster_object_((const MethodInfo_3856318 *)Method_DataManager_GetMaster_UserServantCollectionMaster___);
  svts = this->fields.svts;
  if ( !svts )
LABEL_40:
    sub_2213CDC(isEntityExistsFromId, v13);
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( max_length == v17 )
        goto LABEL_41;
      v18 = svts->m_Items[v17];
      if ( !v18 )
        goto LABEL_40;
      if ( v18->fields.userSvtId == userSvtId )
        break;
      if ( (max_length & ~(max_length >> 31)) == ++v17 )
        return (System_Int64_array *)v11;
    }
    if ( !v18->fields.isFollowerSvt )
    {
      userSvtEquipIds = v18->fields.userSvtEquipIds;
      if ( userSvtEquipIds )
      {
        v21 = 0;
        m_Items = userSvtEquipIds->m_Items;
        while ( 1 )
        {
          v23 = BalanceConfig_TypeInfo;
          if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v13);
            v23 = BalanceConfig_TypeInfo;
          }
          if ( (__int64)v21 >= v23->static_fields->SvtEquipMax || (__int64)v21 >= SLODWORD(userSvtEquipIds->max_length) )
            break;
          isEntityExistsFromId = (System_Int64_array *)sub_2213B20(long___TypeInfo, 1);
          if ( v21 >= LODWORD(userSvtEquipIds->max_length) )
            goto LABEL_41;
          v13 = isEntityExistsFromId;
          if ( !isEntityExistsFromId )
            goto LABEL_40;
          if ( !LODWORD(isEntityExistsFromId->max_length) )
            goto LABEL_41;
          v24 = (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__;
          isEntityExistsFromId->m_Items[0] = m_Items[v21];
          isEntityExistsFromId = (System_Int64_array *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                                         v10,
                                                         isEntityExistsFromId,
                                                         v24);
          if ( ((unsigned __int8)isEntityExistsFromId & 1) != 0 || isInterruption )
          {
            if ( v21 >= LODWORD(userSvtEquipIds->max_length) )
              goto LABEL_41;
            if ( !v11 )
              goto LABEL_40;
            if ( v21 >= *(unsigned int *)(v11 + 24) )
              goto LABEL_41;
            *(_QWORD *)(v11 + 32 + 8 * v21) = m_Items[v21];
          }
          ++v21;
        }
      }
    }
  }
  return (System_Int64_array *)v11;
}


// local variable allocation has failed, the output may be wrong!
int64_t DeckServant__GetNpcFollowerServantId(DeckServant_o *this, int32_t pos, const MethodInfo *method)
{
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v5; // w10
  DeckServantData_o *v6; // x13

  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_11;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( max_length == v5 )
        sub_2213CE4(this);
      v6 = svts->m_Items[v5];
      if ( !v6 )
        break;
      if ( v6->fields.id == pos + 1 )
      {
        this = (DeckServant_o *)v6->fields.npcFollowerSvtId;
        if ( (__int64)this > 0 )
          return (int64_t)this;
      }
      if ( (max_length & ~(max_length >> 31)) == ++v5 )
        return 0;
    }
LABEL_11:
    sub_2213CDC(this, *(_QWORD *)&pos);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
UserServantEntity_o *DeckServant__GetUserServant(DeckServant_o *this, int32_t menber, const MethodInfo *method)
{
  DeckServant_o *v4; // x19
  struct DeckServantData_array *svts; // x8
  unsigned int v6; // w21
  int v7; // w20
  unsigned int max_length; // w9
  DeckServantData_o *v9; // x25
  Il2CppObject *entity; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_5970332 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
    this = (DeckServant_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970332 = 1;
  }
  svts = v4->fields.svts;
  entity = 0;
  if ( !svts )
LABEL_16:
    sub_2213CDC(this, *(_QWORD *)&menber);
  v6 = 0;
  v7 = menber + 1;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v6 >= (int)max_length )
      return 0;
    if ( v6 >= max_length )
      sub_2213CE4(this);
    v9 = svts->m_Items[v6];
    if ( !v9 )
      goto LABEL_16;
    if ( v9->fields.id == v7 && !v9->fields.isFollowerSvt && v9->fields.userSvtId >= 1 )
      break;
LABEL_15:
    ++v6;
    if ( !svts )
      goto LABEL_16;
  }
  this = (DeckServant_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataManager__GetMasterData_object_(
                            (DataManager_o *)this,
                            (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !this )
    goto LABEL_16;
  this = (DeckServant_o *)DataMasterBase_object__object__long___TryGetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            &entity,
                            v9->fields.userSvtId,
                            (const MethodInfo_3F131DC *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    svts = v4->fields.svts;
    goto LABEL_15;
  }
  return (UserServantEntity_o *)entity;
}


bool DeckServant__IsEquip(DeckServant_o *this, int64_t userSvtId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *v6; // x1
  struct DeckServantData_array *svts; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x21
  unsigned int v9; // w24
  unsigned int max_length; // w9
  DeckServantData_o *v11; // x26
  DeckServantData_o *v12; // x9
  struct System_Int64_array *userSvtEquipIds; // x10
  int v14; // w9
  int64_t *m_Items; // x10
  __int64 v16; // t1
  const MethodInfo_3F12868 *v18; // x2

  if ( (byte_5970335 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_2213A60(&Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
    sub_2213A60(&long___TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5970335 = 1;
  }
  if ( !this->fields.svts )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_31;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_UserServantMaster___);
  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_31;
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
  v9 = 0;
  while ( 1 )
  {
    max_length = svts->max_length;
    if ( (int)v9 >= (int)max_length )
      return 0;
    if ( v9 >= max_length )
      goto LABEL_32;
    v11 = svts->m_Items[v9];
    if ( !v11 )
      goto LABEL_31;
    if ( !v11->fields.isFollowerSvt && v11->fields.userSvtId >= 1 )
    {
      Instance = (Il2CppObject *)sub_2213B20(long___TypeInfo, 1);
      if ( !Instance )
        goto LABEL_31;
      v6 = Instance;
      if ( !LODWORD(Instance[1].monitor) )
        goto LABEL_32;
      Instance[2].klass = (Il2CppClass *)v11->fields.userSvtId;
      if ( !v8 )
        goto LABEL_31;
      Instance = (Il2CppObject *)DataMasterBase_object__object__long___isEntityExistsFromId(
                                   v8,
                                   (System_Int64_array *)Instance,
                                   (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__);
      svts = this->fields.svts;
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !svts )
          goto LABEL_31;
        if ( v9 >= LODWORD(svts->max_length) )
          goto LABEL_32;
        v12 = svts->m_Items[v9];
        if ( !v12 )
          goto LABEL_31;
        userSvtEquipIds = v12->fields.userSvtEquipIds;
        if ( userSvtEquipIds )
        {
          v14 = userSvtEquipIds->max_length;
          if ( v14 >= 1 )
            break;
        }
      }
    }
LABEL_11:
    ++v9;
    if ( !svts )
      goto LABEL_31;
  }
  m_Items = userSvtEquipIds->m_Items;
  while ( 1 )
  {
    v16 = *m_Items++;
    if ( v16 == userSvtId )
      break;
    if ( !--v14 )
      goto LABEL_11;
  }
  Instance = (Il2CppObject *)sub_2213B20(long___TypeInfo, 1);
  if ( !Instance )
LABEL_31:
    sub_2213CDC(Instance, v6);
  if ( !LODWORD(Instance[1].monitor) )
LABEL_32:
    sub_2213CE4(Instance);
  v18 = (const MethodInfo_3F12868 *)Method_DataMasterBase_UserServantMaster__UserServantEntity__long__isEntityExistsFromId__;
  Instance[2].klass = (Il2CppClass *)userSvtId;
  return DataMasterBase_object__object__long___isEntityExistsFromId(v8, (System_Int64_array *)Instance, v18);
}


void DeckServant__ResetInitPos(DeckServant_o *this, const MethodInfo *method)
{
  struct DeckServantData_array *svts; // x8
  int max_length; // w9
  int v4; // w11
  DeckServantData_o *v5; // x12

  svts = this->fields.svts;
  if ( !svts )
    goto LABEL_8;
  max_length = svts->max_length;
  if ( max_length >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      if ( max_length == v4 )
        sub_2213CE4(this);
      v5 = svts->m_Items[v4];
      if ( !v5 )
        break;
      v5->fields.initPos = ++v4;
      if ( (max_length & ~(max_length >> 31)) == v4 )
        return;
    }
LABEL_8:
    sub_2213CDC(this, method);
  }
}