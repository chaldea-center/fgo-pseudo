void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct SummonInfoControl_StaticFields *static_fields; // x8

  if ( (byte_4B129C8 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonInfoControl_TypeInfo, v1, v2);
    byte_4B129C8 = 1;
  }
  static_fields = SummonInfoControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OPEN_TIME = xmmword_BD3C80;
  *(_QWORD *)&static_fields->APD_SUMMON_BTN2_X = 0x4370000000000000LL;
}


void __fastcall SummonInfoControl___ctor(SummonInfoControl_o *this, const MethodInfo *method)
{
  this->fields.gachaTime = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonInfoControl__AssertCheck(SummonInfoControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonInfoControl__Awake(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_object__o *v9; // x20
  __int64 v10; // x0
  Il2CppObject *freeSummon; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  struct System_Object_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_Object_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  Il2CppClass **v51; // x0
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  struct System_Object_array *v58; // x8
  _QWORD *v59; // x9
  __int64 v60; // x10
  Il2CppClass **v61; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  int64_t v72; // x2
  int32_t v73; // w3
  System_String_o *v74; // x4
  BattleSetupInfo_o *v75; // x5
  FollowerInfo_o *v76; // x6
  PartyListViewItem_o *v77; // x7
  const MethodInfo *v78; // x1

  if ( (byte_4B129A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo, v7, v8);
    byte_4B129A9 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v9 )
    goto LABEL_29;
  freeSummon = (Il2CppObject *)this->fields.freeSummon;
  items = v9->fields._items;
  v19 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      freeSummon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &items->obj.klass + size;
    v9->fields._size = size + 1;
    v21[4] = (Il2CppClass *)freeSummon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v21 + 4), (int64_t)freeSummon, v12, v13, v14, v15, v16, v17);
  }
  freeSummon = (Il2CppObject *)this->fields.friendPointSummon;
  v28 = v9->fields._items;
  v29 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v9->fields._version;
  if ( !v28 )
    goto LABEL_29;
  v30 = v9->fields._size;
  if ( (unsigned int)v30 >= v28->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      freeSummon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v9->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)freeSummon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v31 + 4), (int64_t)freeSummon, v22, v23, v24, v25, v26, v27);
  }
  freeSummon = (Il2CppObject *)this->fields.stoneSummon;
  v38 = v9->fields._items;
  v39 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v9->fields._version;
  if ( !v38 )
    goto LABEL_29;
  v40 = v9->fields._size;
  if ( (unsigned int)v40 >= v38->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      freeSummon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = &v38->obj.klass + v40;
    v9->fields._size = v40 + 1;
    v41[4] = (Il2CppClass *)freeSummon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v41 + 4), (int64_t)freeSummon, v32, v33, v34, v35, v36, v37);
  }
  freeSummon = (Il2CppObject *)this->fields.ticketSummon;
  v48 = v9->fields._items;
  v49 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v9->fields._version;
  if ( !v48 )
    goto LABEL_29;
  v50 = v9->fields._size;
  if ( (unsigned int)v50 >= v48->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      freeSummon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
  }
  else
  {
    v51 = &v48->obj.klass + v50;
    v9->fields._size = v50 + 1;
    v51[4] = (Il2CppClass *)freeSummon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v51 + 4), (int64_t)freeSummon, v42, v43, v44, v45, v46, v47);
  }
  freeSummon = (Il2CppObject *)this->fields.chargeSummon;
  v58 = v9->fields._items;
  v59 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v9->fields._version;
  if ( !v58 )
    goto LABEL_29;
  v60 = v9->fields._size;
  if ( (unsigned int)v60 >= v58->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      freeSummon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
  }
  else
  {
    v61 = &v58->obj.klass + v60;
    v9->fields._size = v60 + 1;
    v61[4] = (Il2CppClass *)freeSummon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v61 + 4), (int64_t)freeSummon, v52, v53, v54, v55, v56, v57);
  }
  freeSummon = (Il2CppObject *)this->fields.oneExSummon;
  v68 = v9->fields._items;
  v69 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v9->fields._version;
  if ( !v68 )
LABEL_29:
    sub_1BCAA3C(v10, freeSummon);
  v70 = v9->fields._size;
  if ( (unsigned int)v70 >= v68->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v9,
      freeSummon,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
  }
  else
  {
    v71 = &v68->obj.klass + v70;
    v9->fields._size = v70 + 1;
    v71[4] = (Il2CppClass *)freeSummon;
    sub_1BCA784((PartyOrganizationUtility_o *)(v71 + 4), (int64_t)freeSummon, v62, v63, v64, v65, v66, v67);
  }
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.summonObjInfos, (int64_t)v9, v72, v73, v74, v75, v76, v77);
  SummonInfoControl__InitMasterData(this, v78);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B129C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SummonInfoControl_ClickBase__, *(_QWORD *)&seKind, method);
    byte_4B129C4 = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BCA7F8(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, seKind, 0LL);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, struct GachaRqParamData_o *, _QWORD))clickCallbackFunc->fields.m_target)(
      clickCallbackFunc->fields.original_method_info,
      this->fields.requestData,
      *(_QWORD *)&clickCallbackFunc->fields.extra_arg);
}


void __fastcall SummonInfoControl__EndAnimation(SummonInfoControl_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.animationCallback, 0LL, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0LL);
}


int32_t __fastcall SummonInfoControl__GetBonusSelectLineupCount(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_List_int__o *v29; // x20
  __int64 v30; // x1
  System_Int32_array *Master_object; // x0
  __int64 gachaBonusSelectLineupId; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v34; // x2
  __int64 v35; // x3
  GachaBonusSelectEntity_array *v36; // x19
  signed int max_length; // w8
  unsigned int v38; // w22
  GachaBonusSelectEntity_o *v39; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v43; // x19
  __int64 v44; // x1
  int32_t current; // w20
  Il2CppObject *v46; // x0
  __int64 v47; // x1
  _BOOL8 EntityList; // x0
  __int64 giftId; // x1
  GachaBonusSelectLineupEntity_array *v50; // x20
  signed int v51; // w8
  signed int i; // w22
  GachaBonusSelectLineupEntity_o *v53; // x8
  struct System_Int32_array *v54; // x8
  _QWORD *v55; // x9
  __int64 v56; // x10
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Collections_Generic_List_int__o *v60; // x20
  __int64 v61; // x1
  int32_t v62; // w19
  Il2CppObject *v63; // x0
  __int64 v64; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 objectId; // x1
  GiftEntity_array *v67; // x19
  __int64 v68; // x8
  __int64 v69; // x23
  GiftEntity_o *v70; // x9
  struct System_Int32_array *v71; // x9
  _QWORD *v72; // x10
  __int64 v73; // x11
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x0
  System_Collections_Generic_List_Enumerator_int__o v76; // [xsp+0h] [xbp-A0h] BYREF
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v78; // [xsp+20h] [xbp-80h] BYREF
  GachaBonusSelectEntity_array *entityArray; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B129C7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GiftMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Distinct_int___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_int___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Add__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__GetEnumerator__, v23, v24);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v27, v28);
    byte_4B129C7 = 1;
  }
  entityArray = 0LL;
  memset(&v78, 0, sizeof(v78));
  gachaBonusSelectLineupEntities = 0LL;
  v29 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    method,
                                                    v2,
                                                    v3);
  System_Collections_Generic_List_int____ctor(
    v29,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v30);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_68;
  Master_object = (System_Int32_array *)GachaBonusSelectMaster__TryGetEntityArray(
                                          (GachaBonusSelectMaster_o *)Master_object,
                                          &entityArray,
                                          currentSummonData->fields.id,
                                          0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v36 = entityArray;
    if ( !entityArray )
      goto LABEL_68;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v38 = 0;
      while ( 1 )
      {
        if ( v38 >= max_length )
          sub_1BCAA44(Master_object, gachaBonusSelectLineupId);
        v39 = v36->m_Items[v38];
        if ( !v39 )
          break;
        if ( !v29 )
          break;
        gachaBonusSelectLineupId = (unsigned int)v39->fields.gachaBonusSelectLineupId;
        items = v29->fields._items;
        v41 = Method_System_Collections_Generic_List_int__Add__;
        ++v29->fields._version;
        if ( !items )
          break;
        size = v29->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v29,
            gachaBonusSelectLineupId,
            *(const MethodInfo_3584C38 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v29->fields._size = size + 1;
          items->m_Items[size + 1] = gachaBonusSelectLineupId;
        }
        max_length = v36->max_length;
        if ( (int)++v38 >= max_length )
          goto LABEL_19;
      }
LABEL_68:
      sub_1BCAA3C(Master_object, gachaBonusSelectLineupId);
    }
  }
LABEL_19:
  v43 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    gachaBonusSelectLineupId,
                                                    v34,
                                                    v35);
  System_Collections_Generic_List_int____ctor(
    v43,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v29 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    v29,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v78 = v76;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v78,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v78.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v44);
    v46 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    if ( !v46 )
      sub_1BCAA3C(0LL, v47);
    EntityList = GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)v46,
                   &gachaBonusSelectLineupEntities,
                   current,
                   0LL);
    if ( EntityList )
    {
      v50 = gachaBonusSelectLineupEntities;
      if ( !gachaBonusSelectLineupEntities )
        sub_1BCAA3C(EntityList, giftId);
      v51 = gachaBonusSelectLineupEntities->max_length;
      if ( v51 >= 1 )
      {
        for ( i = 0; i < v51; ++i )
        {
          if ( i >= (unsigned int)v51 )
            sub_1BCAA44(EntityList, giftId);
          v53 = v50->m_Items[i];
          if ( !v53 )
            sub_1BCAA3C(EntityList, giftId);
          if ( !v43 )
            sub_1BCAA3C(EntityList, giftId);
          giftId = (unsigned int)v53->fields.giftId;
          v54 = v43->fields._items;
          v55 = Method_System_Collections_Generic_List_int__Add__;
          ++v43->fields._version;
          if ( !v54 )
            sub_1BCAA3C(EntityList, giftId);
          v56 = v43->fields._size;
          if ( (unsigned int)v56 >= v54->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v43,
              giftId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v55[4] + 192LL) + 112LL));
          }
          else
          {
            v43->fields._size = v56 + 1;
            v54->m_Items[v56 + 1] = giftId;
          }
          v51 = v50->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v78,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v60 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v57,
                                                    v58,
                                                    v59);
  System_Collections_Generic_List_int____ctor(
    v60,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v43 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v76,
    v43,
    (const MethodInfo_358570C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v78 = v76;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v78,
            (const MethodInfo_3312C50 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v62 = v78.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v61);
    v63 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !v63 )
      sub_1BCAA3C(0LL, v64);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v63, v62, 0LL);
    v67 = GiftListById;
    if ( !GiftListById )
      sub_1BCAA3C(0LL, objectId);
    v68 = *(_QWORD *)&GiftListById->max_length;
    if ( v68 && (int)v68 >= 1 )
    {
      v69 = 0LL;
      do
      {
        if ( (unsigned int)v69 >= (unsigned int)v68 )
          sub_1BCAA44(GiftListById, objectId);
        v70 = v67->m_Items[v69];
        if ( !v70 )
          sub_1BCAA3C(GiftListById, objectId);
        if ( v70->fields.type == 1 )
        {
          if ( !v60 )
            sub_1BCAA3C(GiftListById, objectId);
          objectId = (unsigned int)v70->fields.objectId;
          v71 = v60->fields._items;
          v72 = Method_System_Collections_Generic_List_int__Add__;
          ++v60->fields._version;
          if ( !v71 )
            sub_1BCAA3C(GiftListById, objectId);
          v73 = v60->fields._size;
          if ( (unsigned int)v73 >= v71->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v60,
              objectId,
              *(const MethodInfo_3584C38 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
            v68 = *(_QWORD *)&v67->max_length;
          }
          else
          {
            v60->fields._size = v73 + 1;
            v71->m_Items[v73 + 1] = objectId;
          }
        }
        ++v69;
      }
      while ( (int)v69 < (int)v68 );
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v78,
    (const MethodInfo_3312C4C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v74 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v60,
          (const MethodInfo_2F30074 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v74,
                    (const MethodInfo_2F4B870 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Master_object )
    goto LABEL_68;
  return Master_object->max_length;
}


UISprite_o *__fastcall SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  if ( (byte_4B129BC & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj, targetName);
    byte_4B129BC = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1BCAA3C(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1BCAA3C(this, method);
  return currentSummonData->fields.groupId;
}


bool __fastcall SummonInfoControl__GetIsFree(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.isFree;
}


int32_t __fastcall SummonInfoControl__GetSummonPrice(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.payGachaPrice;
}


int32_t __fastcall SummonInfoControl__GetUsrStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.haveStoneNum;
}


int32_t __fastcall SummonInfoControl__GetUsrTicketNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.ticketNum;
}


void __fastcall SummonInfoControl__InitMasterData(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Master_object; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  Il2CppObject *v21; // x0
  __int64 v22; // x1
  ConstantMaster_o *v23; // x20
  Il2CppObject *v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7

  if ( (byte_4B129AA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ConstantMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v4, v5);
    sub_1BCA7E0(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v6, v7);
    sub_1BCA7E0(&DataManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_14998/*"USER_FREE_STONE"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_13608/*"TUTORIAL_GACHA_ID"*/, v12, v13);
    byte_4B129AA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = (struct GachaMaster_o *)Master_object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.gachaMaster,
    (int64_t)Master_object,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  v21 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v21 )
    sub_1BCAA3C(0LL, v22);
  v23 = (ConstantMaster_o *)v21;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(
                                   (ConstantMaster_o *)v21,
                                   (System_String_o *)StringLiteral_13608/*"TUTORIAL_GACHA_ID"*/,
                                   0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v23, (System_String_o *)StringLiteral_14998/*"USER_FREE_STONE"*/, 0LL);
  v24 = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  this->fields.viewGachaFeaturedServantMaster = (struct ViewGachaFeaturedServantMaster_o *)v24;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.viewGachaFeaturedServantMaster,
    (int64_t)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
}


void __fastcall SummonInfoControl__InitStoneSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct UserGameEntity_o *usrData; // x8

  SummonInfoControl__InitSummonBtnDisp(this, method);
  SummonInfoControl__SetSummonButtonsCollider(this, 1, v3);
  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1BCAA3C(v4, v5);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  SummonInfoControl___c_c *v11; // x0
  System_Collections_Generic_List_object__o *summonObjInfos; // x20
  System_Action_object__o *_9__130_0; // x21
  Il2CppObject *v14; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B129AD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v5, v6);
    sub_1BCA7E0(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__130_0__, v7, v8);
    sub_1BCA7E0(&SummonInfoControl___c_TypeInfo, v9, v10);
    byte_4B129AD = 1;
  }
  v11 = SummonInfoControl___c_TypeInfo;
  summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos;
  if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, method);
    v11 = SummonInfoControl___c_TypeInfo;
  }
  _9__130_0 = (System_Action_object__o *)v11->static_fields->__9__130_0;
  if ( !_9__130_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = SummonInfoControl___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__130_0 = (System_Action_object__o *)sub_1BCAA2C(
                                             System_Action_SummonInfoControl_SummonObjInfo__TypeInfo,
                                             method,
                                             v2,
                                             v3);
    System_Action_object____ctor(_9__130_0, v14, Method_SummonInfoControl___c__InitSummonBtnDisp_b__130_0__, 0LL);
    static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    static_fields->__9__130_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__130_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__130_0,
      (int64_t)_9__130_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !summonObjInfos )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)_9__130_0,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


bool __fastcall SummonInfoControl__IsDisplayFeaturedServants(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity )
    sub_1BCAA3C(0LL, v4);
  return GachaEntity__HasFlag(CurrentGachaEntity, 16, 0LL)
      && SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, v5) != 0LL;
}


void __fastcall SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  SummonInfoControl_c *v12; // x0
  __int64 v13; // x1
  TweenAlpha_o *v14; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4B129C1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&SummonInfoControl_TypeInfo, v7, v8);
    this = (SummonInfoControl_o *)sub_1BCA7E0(&StringLiteral_6059/*"EndAnimation"*/, v9, v10);
    byte_4B129C1 = 1;
  }
  if ( !target )
    goto LABEL_15;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                  target,
                                  (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v12 = SummonInfoControl_TypeInfo;
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo, v11);
    v12 = SummonInfoControl_TypeInfo;
  }
  v14 = TweenAlpha__Begin(target, v12->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v14 )
    {
      v14->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
      v14->fields.eventReceiver = gameObject;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v14->fields.eventReceiver,
        (int64_t)gameObject,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      v22 = StringLiteral_6059/*"EndAnimation"*/;
      v14->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6059/*"EndAnimation"*/;
      sub_1BCA784((PartyOrganizationUtility_o *)&v14->fields.callWhenFinished, v22, v23, v24, v25, v26, v27, v28);
      return;
    }
LABEL_15:
    sub_1BCAA3C(this, target);
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t gameObject; // x0
  const MethodInfo *v5; // x1
  int64_t v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct UnityEngine_GameObject_o *summonDetailInfo; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x8
  __int64 v33; // x23
  il2cpp_array_size_t v34; // w22
  UnityEngine_GameObject_o *v35; // x21
  struct UnityEngine_Vector3_array *infoButtonLayouts; // x8

  if ( (byte_4B129AC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, method, v2);
    byte_4B129AC = 1;
  }
  gameObject = sub_1BCA888(UnityEngine_GameObject___TypeInfo, 4LL);
  if ( !this->fields.possessionInfoButton )
    goto LABEL_27;
  v6 = gameObject;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject(
                          (UnityEngine_Component_o *)this->fields.possessionInfoButton,
                          0LL);
  if ( !v6 )
    goto LABEL_27;
  if ( !*(_DWORD *)(v6 + 24) )
    goto LABEL_26;
  *(_QWORD *)(v6 + 32) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 32), gameObject, v7, v8, v9, v10, v11, v12);
  gameObject = (int64_t)this->fields.summonHistoryButton;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 1u )
    goto LABEL_26;
  *(_QWORD *)(v6 + 40) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 40), gameObject, v13, v14, v15, v16, v17, v18);
  if ( *(_DWORD *)(v6 + 24) <= 2u )
    goto LABEL_26;
  summonDetailInfo = this->fields.summonDetailInfo;
  *(_QWORD *)(v6 + 48) = summonDetailInfo;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 48), (int64_t)summonDetailInfo, v19, v20, v21, v22, v23, v24);
  gameObject = (int64_t)this->fields.summonHelpInfo;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( *(_DWORD *)(v6 + 24) <= 3u )
    goto LABEL_26;
  *(_QWORD *)(v6 + 56) = gameObject;
  sub_1BCA784((PartyOrganizationUtility_o *)(v6 + 56), gameObject, v26, v27, v28, v29, v30, v31);
  v32 = *(_QWORD *)(v6 + 24);
  if ( (int)v32 >= 1 )
  {
    v33 = 0LL;
    v34 = 0;
    while ( (unsigned int)v33 < (unsigned int)v32 )
    {
      v35 = *(UnityEngine_GameObject_o **)(v6 + 32 + 8 * v33);
      if ( !v35 )
        goto LABEL_27;
      gameObject = UnityEngine_GameObject__get_activeSelf(*(UnityEngine_GameObject_o **)(v6 + 32 + 8 * v33), 0LL);
      if ( (gameObject & 1) != 0 )
      {
        infoButtonLayouts = this->fields.infoButtonLayouts;
        if ( !infoButtonLayouts )
          goto LABEL_27;
        if ( v34 >= infoButtonLayouts->max_length )
          break;
        GameObjectExtensions__SetLocalPosition(
          v35,
          *(UnityEngine_Vector3_o *)&infoButtonLayouts->m_Items[v34++].fields.y,
          0LL);
      }
      v32 = *(_QWORD *)(v6 + 24);
      if ( (int)++v33 >= (int)v32 )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BCAA44(gameObject, v5);
  }
  v34 = 0;
LABEL_22:
  gameObject = (int64_t)this->fields.buttonLayout;
  if ( !gameObject )
LABEL_27:
    sub_1BCAA3C(gameObject, v5);
  if ( v34 == (_DWORD)v32 )
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)gameObject, v5);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)gameObject, v5);
}


void __fastcall SummonInfoControl__OnClickChargeGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t shopIdIdx; // w6
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // [xsp+20h] [xbp-20h]

  shopIdIdx = this->fields.shopIdIdx;
  this->fields.payGachaPrice = this->fields.price;
  SummonInfoControl__SetRequestData(this, -1, -1, -1, -1, -1, shopIdIdx, -1, -1, 0LL, 0, 0LL, v5);
  SummonInfoControl__ClickBase(this, 0, v4);
}


void __fastcall SummonInfoControl__OnClickDetail(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  _QWORD *v13; // x0
  System_Reflection_MethodBase_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  __int64 v26; // x1
  System_String_o *v27; // x0
  __int64 v28; // x1
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v30; // x20

  if ( (byte_4B129C5 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, callback, method);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SummonInfoControl_OnClickDetail__, v7, v8);
    sub_1BCA7E0(&WebViewManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_15720/*"WEB_VIEW_TITLE_SUMMON"*/, v11, v12);
    byte_4B129C5 = 1;
  }
  v13 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1BCA7F8(Method_SummonInfoControl_OnClickDetail__);
  v14 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v13, v13[4]);
  OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1BCAA3C(v15, v16);
  id = currentSummonData->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v16);
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v26);
  v27 = LocalizationManager__Get((System_String_o *)StringLiteral_15720/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v30 = v27;
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v28);
  WebViewManager__OpenView(v30, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int64_t Time; // x0
  __int64 v7; // x1
  int64_t v8; // x20
  int32_t DrawNumChangeTime; // w22
  __int64 v10; // x9
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // [xsp+20h] [xbp-40h]

  if ( (byte_4B129C2 & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v4, v5);
    byte_4B129C2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  Time = NetworkManager__getTime(0LL);
  v8 = Time;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    DrawNumChangeTime = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    Time = (int64_t)BalanceConfig_TypeInfo;
    DrawNumChangeTime = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
  }
  if ( !this )
    sub_1BCAA3C(Time, v7);
  v10 = 468LL;
  if ( v8 < DrawNumChangeTime )
    v10 = 464LL;
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus + v10),
    -1,
    -1,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v12);
  SummonInfoControl__ClickBase(this, 0, v11);
}


void __fastcall SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct GachaRqParamData_o *requestData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  const MethodInfo *v8; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0LL, 0, 0LL, v8);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (requestData->fields.gachaType = 5,
          requestData->fields.gachaResourceNum = this->fields.gachaTime,
          (currentSummonData = this->fields.currentSummonData) == 0LL) )
    {
      sub_1BCAA3C(v3, v4);
    }
    requestData->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v5);
}


void __fastcall SummonInfoControl__OnClickMultiPayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0LL),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v5)) == 0LL) )
  {
    sub_1BCAA3C(CurrentGachaEntity, v4);
  }
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    CurrentGachaEntity->fields.drawNum2,
    this->fields.payGachaPrice,
    2,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v7);
  SummonInfoControl__ClickBase(this, 0, v6);
}


void __fastcall SummonInfoControl__OnClickMutiGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  const MethodInfo *v4; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    -1,
    this->fields.gachaTime * this->fields.price,
    -1,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v4);
  SummonInfoControl__ClickBase(this, 0, v3);
}


void __fastcall SummonInfoControl__OnClickSinglePayExGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonInfoControl_o *v3; // x19
  int32_t *currentSummonData; // x9
  const MethodInfo *v5; // x2
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  const MethodInfo *v8; // [xsp+20h] [xbp-30h]

  v3 = this;
  if ( (byte_4B129C3 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BCA7E0(&Method_SummonInfoControl_OnClickSinglePayExGacha__, method, v2);
    byte_4B129C3 = 1;
  }
  if ( v3->fields.isPayExUsePossible )
  {
    currentSummonData = (int32_t *)v3->fields.currentSummonData;
    v3->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_1BCAA3C(this, method);
    SummonInfoControl__SetRequestData(
      v3,
      currentSummonData[28],
      -1,
      -1,
      currentSummonData[27],
      1,
      currentSummonData[26],
      -1,
      -1,
      0LL,
      1,
      0LL,
      v8);
    SummonInfoControl__ClickBase(v3, 0, v5);
  }
  else
  {
    v6 = Method_SummonInfoControl_OnClickSinglePayExGacha__;
    if ( (*((_BYTE *)Method_SummonInfoControl_OnClickSinglePayExGacha__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1BCA7F8(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v7 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0LL);
  }
}


void __fastcall SummonInfoControl__OnClickSinglePayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t shopIdIdx; // w6
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // [xsp+20h] [xbp-20h]

  shopIdIdx = this->fields.shopIdIdx;
  this->fields.payGachaPrice = this->fields.price;
  SummonInfoControl__SetRequestData(this, -1, -1, -1, -1, -1, shopIdIdx, -1, -1, 0LL, 0, 0LL, v5);
  SummonInfoControl__ClickBase(this, 0, v4);
}


void __fastcall SummonInfoControl__SetAlphaSummonBtn(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_animationCallback; // x20
  const MethodInfo *v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *klass; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8

  p_animationCallback = (PartyOrganizationUtility_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.animationCallback,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  beforeSummonData = this->fields.beforeSummonData;
  if ( beforeSummonData
    && (((__int64 (__fastcall *)(struct VaildGachaInfo_o *, struct VaildGachaInfo_o *, Il2CppMethodPointer))beforeSummonData->klass->vtable._0_Equals.method)(
          beforeSummonData,
          this->fields.currentSummonData,
          beforeSummonData->klass->vtable._1_Finalize.methodPtr) & 1) == 0 )
  {
    SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, v10);
    if ( this->fields.isDispPayExSummon )
    {
      oneExSummon = this->fields.oneExSummon;
      if ( !oneExSummon )
        sub_1BCAA3C(v18, v19);
      SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v20);
    }
  }
  else
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_1BCA784(p_animationCallback, 0LL, (int64_t)v10, v11, v12, v13, v14, v15);
    ActionExtensions__Call(klass, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v9; // x1

  if ( (byte_4B129C0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, button, onOff);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B129C0 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !button
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1BCAA3C(gameObject, v9);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, onOff, 0LL);
  }
}


void __fastcall SummonInfoControl__SetButtonLocalPosX(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjInfo_o *summonInfo,
        float onePayX,
        float multiPayX,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UnityEngine_GameObject_o *v11; // x0

  if ( !summonInfo
    || (onePay = summonInfo->fields.onePay) == 0LL
    || (this = (SummonInfoControl_o *)onePay->fields.button) == 0LL
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__SetLocalPositionX(gameObject, onePayX, 0LL),
        (multiPay = summonInfo->fields.multiPay) == 0LL)
    || (this = (SummonInfoControl_o *)multiPay->fields.button) == 0LL )
  {
    sub_1BCAA3C(this, summonInfo);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0LL);
}


void __fastcall SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  System_String_o *Empty; // x1
  const MethodInfo *v20; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v23; // x4
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v27; // x4
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  const MethodInfo *v30; // x1
  char v31; // w20
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *v33; // x22
  const MethodInfo *v34; // x1
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  UILabel_o *bonusSelectTopLabel; // x21
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  struct SummonInfoControl_SummonObjInfo_o *v40; // x8
  struct SummonInfoControl_SummonObjParts_o *v41; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v43; // s0
  struct SummonInfoControl_SummonObjInfo_o *v44; // x8
  struct SummonInfoControl_SummonObjParts_o *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  struct SummonInfoControl_SummonObjInfo_o *v47; // x8
  struct SummonInfoControl_SummonObjParts_o *v48; // x8
  UnityEngine_GameObject_o *v49; // x0
  const MethodInfo *v50; // x6
  struct SummonInfoControl_SummonObjInfo_o *v51; // x8
  int32_t BonusSelectLineupCount; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B129B7 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&string_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3071/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_3072/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_9337/*"N0"*/, v14, v15);
    byte_4B129B7 = 1;
  }
  BonusSelectLineupCount = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v16);
  SummonInfoControl__SetSummonInfo_33776020(this, v17);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_42;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_25238/*"{0}"*/, v20);
  v24 = this->fields.chargeSummon;
  if ( !v24 )
    goto LABEL_42;
  v25 = v24->fields.multiPay;
  if ( !v25 )
    goto LABEL_42;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(
    this,
    v25->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_25188/*"{0:#,0}"*/,
    v23);
  v28 = this->fields.chargeSummon;
  if ( !v28 )
    goto LABEL_42;
  v29 = v28->fields.multiPay;
  if ( !v29 )
    goto LABEL_42;
  SummonInfoControl__SetElevenBonusInfoSingle(
    CurrentGachaEntity,
    this->fields.gachaTime,
    v29->fields.numImg,
    v29->fields.bonusInfo,
    v27);
  CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v30);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0LL);
  if ( !this->fields.bonusSelectLabel )
    goto LABEL_42;
  v31 = (char)CurrentGachaEntity;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v31 & 1, 0LL);
  CurrentGachaEntity = (SummonInfoControl_o *)this->fields.bonusSelectTopLabel;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v31 & 1, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v31 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, Empty);
    v33 = LocalizationManager__Get((System_String_o *)StringLiteral_3072/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, 0LL);
    BonusSelectLineupCount = SummonInfoControl__GetBonusSelectLineupCount(this, v34);
    v35 = (Il2CppObject *)System_Int32__ToString_63206828(
                            (int32_t)&BonusSelectLineupCount,
                            (System_String_o *)StringLiteral_9337/*"N0"*/,
                            0LL);
    CurrentGachaEntity = (SummonInfoControl_o *)System_String__Format(v33, v35, 0LL);
    if ( bonusSelectLabel )
    {
      UILabel__set_text(bonusSelectLabel, (System_String_o *)CurrentGachaEntity, 0LL);
      bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v36);
      CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3071/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, 0LL);
      Empty = (System_String_o *)CurrentGachaEntity;
      goto LABEL_24;
    }
LABEL_42:
    sub_1BCAA3C(CurrentGachaEntity, Empty);
  }
  if ( !bonusSelectLabel )
    goto LABEL_42;
  UILabel__set_text(this->fields.bonusSelectLabel, string_TypeInfo->static_fields->Empty, 0LL);
  bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
  Empty = string_TypeInfo->static_fields->Empty;
LABEL_24:
  if ( !bonusSelectTopLabel )
    goto LABEL_42;
  UILabel__set_text(bonusSelectTopLabel, Empty, 0LL);
  v38 = this->fields.chargeSummon;
  if ( !v38 )
    goto LABEL_42;
  v39 = v38->fields.multiPay;
  if ( !v39 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v39->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, (v31 & 1) == 0, 0LL);
  v40 = this->fields.chargeSummon;
  if ( !v40 )
    goto LABEL_42;
  v41 = v40->fields.multiPay;
  if ( !v41 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v41->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  v43 = 0.0;
  if ( (v31 & 1) != 0 )
    v43 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v43, 0LL);
  v44 = this->fields.chargeSummon;
  if ( !v44 )
    goto LABEL_42;
  v45 = v44->fields.multiPay;
  if ( !v45 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v45->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalScale_34333224(v46, 1.0, 1.0, 0LL);
  v47 = this->fields.chargeSummon;
  if ( !v47 )
    goto LABEL_42;
  v48 = v47->fields.multiPay;
  if ( !v48 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v48->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalPositionY(v49, 0.0, 0LL);
  v51 = this->fields.chargeSummon;
  if ( !v51 )
    goto LABEL_42;
  SummonInfoControl__SetSummonGiftDisp(this, v51->fields.multiPay, 0, 1, 0, 1, v50);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetCurrentSummonInfo(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        bool isSingle,
        const MethodInfo *method)
{
  SummonInfoControl_o *v6; // x19
  UnityEngine_Object_o *singleSummonInfo; // x22
  SummonInfoControl_o **p_fields; // x23
  SummonInfoControl_o **p_multiSummonInfo; // x21
  UnityEngine_Object_o *v10; // x22
  struct UnityEngine_GameObject_o *multiSummonInfo; // t1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t *v18; // x8
  int64_t v19; // x1

  v6 = this;
  if ( (byte_4B129BD & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, summonObjInfo, isSingle);
    byte_4B129BD = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_19;
  p_fields = (SummonInfoControl_o **)&summonObjInfo->fields;
  singleSummonInfo = (UnityEngine_Object_o *)summonObjInfo->fields.singleSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjInfo);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0LL, 0LL) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isSingle, 0LL);
  }
  multiSummonInfo = summonObjInfo->fields.multiSummonInfo;
  p_multiSummonInfo = (SummonInfoControl_o **)&summonObjInfo->fields.multiSummonInfo;
  v10 = (UnityEngine_Object_o *)multiSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjInfo);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = *p_multiSummonInfo;
    if ( !*p_multiSummonInfo )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isSingle, 0LL);
  }
  v18 = (int64_t *)(isSingle ? p_fields : p_multiSummonInfo);
  if ( !v6 )
LABEL_19:
    sub_1BCAA3C(this, summonObjInfo);
  v19 = *v18;
  v6->fields.currentBtnInfo = (struct UnityEngine_GameObject_o *)*v18;
  sub_1BCA784((PartyOrganizationUtility_o *)&v6->fields.currentBtnInfo, v19, v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
  SummonInfoControl_o *v10; // x22
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjParts_o **p_onePay; // x25
  UISprite_o *numImg; // x24
  Il2CppObject *v40; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w23
  UnityEngine_GameObject_o *v43; // x0
  struct SummonInfoControl_SummonObjParts_o *v44; // x8
  int v45; // w23
  UISprite_o *v46; // x23
  Il2CppObject *v47; // x0
  UnityEngine_GameObject_o *v48; // x0
  const MethodInfo *v49; // x3
  UnityEngine_GameObject_o *v50; // x0
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  UISprite_o *bonusCount; // x24
  Il2CppObject *v53; // x0
  UnityEngine_GameObject_o *v54; // x0
  SummonInfoControl_o *v55; // x0
  const MethodInfo *v56; // x3
  UISprite_o *BonusSprite; // x24
  int v58; // w27
  Il2CppObject *v59; // x0
  SummonInfoControl_o *v60; // x0
  const MethodInfo *v61; // x3
  UISprite_o *v62; // x23
  Il2CppObject *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  UnityEngine_GameObject_o *v65; // x0
  System_String_o **v66; // x23
  const MethodInfo *v67; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  int v69; // [xsp+8h] [xbp-58h] BYREF
  int32_t v70; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B129B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, ent, ticket);
    sub_1BCA7E0(&int_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13, v14);
    sub_1BCA7E0(&StringLiteral_17736/*"btn_txt_bonus_10times_plus1"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_17720/*"btn_summon_bg2"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_17719/*"btn_summon_bg1"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17737/*"btn_txt_bonus_1plus1"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17740/*"btn_txt_bonus_{0}_glow"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_17738/*"btn_txt_bonus_count_{0}"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_22419/*"num1"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_17721/*"btn_summon_bg3"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22420/*"num1_glow"*/, v33, v34);
    this = (SummonInfoControl_o *)sub_1BCA7E0(&StringLiteral_17739/*"btn_txt_bonus_{0}"*/, v35, v36);
    byte_4B129B4 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v70 = oneCount;
  v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v40, 0LL);
  if ( !numImg )
    goto LABEL_93;
  UISprite__set_spriteName(numImg, (System_String_o *)this, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0LL);
  if ( !ent )
    goto LABEL_93;
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_93;
  extraGroupId1 = ent->fields.extraGroupId1;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  if ( !extraGroupId1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !this )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    if ( ticket )
      goto LABEL_87;
    goto LABEL_42;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_93;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v43, 30.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  ent->fields.extraGroupId1,
                                  0LL);
  v44 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v45 = (int)this;
  if ( (_DWORD)this != 9 )
  {
    this = (SummonInfoControl_o *)v44->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17736/*"btn_txt_bonus_10times_plus1"*/, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPosition_34331044(v50, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0LL);
    v51 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v51->fields.singleDigit;
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_96;
      if ( !*p_onePay )
        goto LABEL_93;
      this = (SummonInfoControl_o *)(*p_onePay)->fields.doubleDigits;
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_96:
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
        if ( !this )
          goto LABEL_93;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_93;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v54, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        v55 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        v55,
                        (UnityEngine_GameObject_o *)v55,
                        (System_String_o *)StringLiteral_22419/*"num1"*/,
                        v56);
        v58 = 9 - v45;
        v70 = 9 - v45;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17739/*"btn_txt_bonus_{0}"*/, v59, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0LL);
        v60 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v62 = SummonInfoControl__GetBonusSprite(
                v60,
                (UnityEngine_GameObject_o *)v60,
                (System_String_o *)StringLiteral_22420/*"num1_glow"*/,
                v61);
        v69 = v58;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17740/*"btn_txt_bonus_{0}_glow"*/, v63, 0LL);
        if ( !v62 )
          goto LABEL_93;
        UISprite__set_spriteName(v62, (System_String_o *)this, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v64, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v65, -29.7, 0LL);
        goto LABEL_79;
      }
      if ( !*p_onePay )
        goto LABEL_93;
      this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
      if ( !this )
        goto LABEL_93;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v51 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    bonusCount = v51->fields.bonusCount;
    v70 = 9 - v45;
    v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17738/*"btn_txt_bonus_count_{0}"*/, v53, 0LL);
    if ( !bonusCount )
      goto LABEL_93;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
      v66 = (System_String_o **)(ticket ? &StringLiteral_17721/*"btn_summon_bg3"*/ : &StringLiteral_17719/*"btn_summon_bg1"*/);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, *v66, 0LL);
        if ( *p_onePay )
        {
          this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
          if ( this )
          {
            UIButton__set_normalSprite((UIButton_o *)this, *v66, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_1BCAA3C(this, ent);
  }
  v46 = v44->fields.numImg;
  v70 = 2;
  v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v70);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v47, 0LL);
  if ( !v46 )
    goto LABEL_93;
  UISprite__set_spriteName(v46, (System_String_o *)this, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17737/*"btn_txt_bonus_1plus1"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_34331044(v48, 0.0, -35.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  UIWidget__SetDimensions((UIWidget_o *)this, 208, 38, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
  if ( !this )
    goto LABEL_93;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17720/*"btn_summon_bg2"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
  if ( !this )
    goto LABEL_93;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17720/*"btn_summon_bg2"*/, 0LL);
  if ( !ticket )
  {
LABEL_42:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
      if ( this )
      {
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
          goto LABEL_87;
        }
      }
    }
    goto LABEL_93;
  }
LABEL_87:
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v49);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v67);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetElevenBonusInfoSingle(
        SummonInfoControl_o *this,
        int32_t multiCount,
        UISprite_o *multiNumImg,
        UISprite_o *multiBonusInfo,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  int32_t v14; // w21
  Il2CppObject *v15; // x0
  System_String_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B129B5 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&multiCount, multiNumImg);
    sub_1BCA7E0(&System_Math_TypeInfo, v8, v9);
    sub_1BCA7E0(&StringLiteral_17735/*"btn_txt_bonus_10plus1"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v12, v13);
    byte_4B129B5 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&multiCount);
  v14 = System_Math__Min_63220524(multiCount, 11, 0LL);
  v18 = v14;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v15, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0LL), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0LL)) == 0LL )
  {
    sub_1BCAA3C(gameObject, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v14 > 10, 0LL);
  if ( v14 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17735/*"btn_txt_bonus_10plus1"*/, 0LL);
}


void __fastcall SummonInfoControl__SetEnableSummonBtn(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct VaildGachaInfo_o *currentSummonData; // x1
  const MethodInfo *v11; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v13; // x2
  UnityEngine_GameObject_o *gameObject; // x21
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.beforeSummonData,
    (int64_t)currentSummonData,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v13);
  currentBtnInfo = this->fields.summonDetailInfo;
  if ( !currentBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !currentBtnInfo )
    goto LABEL_13;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0LL);
  if ( !currentBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton;
  if ( !currentBtnInfo )
    goto LABEL_13;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0LL);
  currentBtnInfo = (UnityEngine_GameObject_o *)(isEnable
                                             && (__int64)SummonInfoControl__IsDisplayFeaturedServants(this, v11));
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)currentBtnInfo & 1, 0LL),
        (oneExSummon = this->fields.oneExSummon) == 0LL)
    || (currentBtnInfo = oneExSummon->fields.singleSummonInfo) == 0LL )
  {
LABEL_13:
    sub_1BCAA3C(currentBtnInfo, v11);
  }
  UnityEngine_GameObject__SetActive(currentBtnInfo, this->fields.isDispPayExSummon && isEnable, 0LL);
}


void __fastcall SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v19; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  char v22; // w20
  __int64 v23; // x1
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v25; // x22
  Il2CppObject *v26; // x23
  Il2CppObject *v27; // x0
  int64_t Time; // x0
  BalanceConfig_c *v29; // x8
  int64_t v30; // x20
  int64_t DrawNumChangeTime; // x21
  const MethodInfo *v32; // x3
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF
  int32_t maxNum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4B129AE & 1) == 0 )
  {
    sub_1BCA7E0(&BalanceConfig_TypeInfo, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v4, v5);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&UserGachaMaster_TypeInfo, v10, v11);
    sub_1BCA7E0(&StringLiteral_6639/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1209/*"0"*/, v16, v17);
    byte_4B129AE = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_31;
  id = currentSummonData->fields.id;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v19);
  gameObject = (UnityEngine_GameObject_o *)UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                                             id,
                                             &maxNum[1],
                                             maxNum,
                                             0LL);
  if ( !this->fields.freeSummonCampaignLabel )
    goto LABEL_31;
  v22 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                 0LL);
  if ( !gameObject )
    goto LABEL_31;
  UnityEngine_GameObject__SetActive(gameObject, v22 & 1, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v22 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6639/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0LL);
    v34 = maxNum[1];
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34);
    v33 = maxNum[0];
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_62415592(v25, v26, v27, 0LL);
    v19 = (System_String_o *)gameObject;
  }
  else
  {
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !freeSummonCampaignLabel )
    goto LABEL_31;
  UILabel__set_text(freeSummonCampaignLabel, v19, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v22 & 1) != 0 || this->fields.isFree )
  {
    gameObject = this->fields.freeSummonCampaignNeedInfo;
    if ( !gameObject )
      goto LABEL_31;
    gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_31;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.freeSummonCampaignNeedNum;
    if ( !gameObject )
      goto LABEL_31;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1209/*"0"*/, 0LL);
    if ( this->fields.isFree )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
      Time = NetworkManager__getTime(0LL);
      v29 = BalanceConfig_TypeInfo;
      v30 = Time;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v19);
        v29 = BalanceConfig_TypeInfo;
      }
      gameObject = this->fields.freeTxtInfoObj;
      if ( gameObject )
      {
        DrawNumChangeTime = v29->static_fields->DrawNumChangeTime;
        UnityEngine_GameObject__SetActive(gameObject, v30 < DrawNumChangeTime, 0LL);
        gameObject = this->fields.freeTenInfoObj;
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, v30 >= DrawNumChangeTime, 0LL);
          SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v32);
          return;
        }
      }
LABEL_31:
      sub_1BCAA3C(gameObject, v19);
    }
  }
  SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v19);
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1BCAA3C(this, 0LL);
  UISprite__set_atlas(sprite, this->fields.gachaAtlas, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetHelpBtnDisp(SummonInfoControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *summonHelpInfo; // x0

  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo
    || (summonHelpInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(summonHelpInfo, 0LL)) == 0LL )
  {
    sub_1BCAA3C(summonHelpInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonHelpInfo, isDisp, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetOneTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  GachaAppendMaster_o *Master_object; // x0
  __int64 v28; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v30; // w21
  struct VaildGachaInfo_o *v31; // x9
  struct VaildGachaInfo_o *v32; // x10
  GachaAppendEntity_o *v33; // x10
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  SummonInfoControl_o *v38; // x0
  __int64 v39; // x8
  SummonInfoControl_SummonObjInfo_o *v40; // x20
  float *summonInfoLayout; // x8
  struct SummonInfoControl_SummonObjInfo_o *v42; // x8
  struct SummonInfoControl_SummonObjInfo_o *v43; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v46; // x8
  struct SummonInfoControl_SummonObjParts_o *v47; // x8
  UnityEngine_GameObject_o *v48; // x0
  struct SummonInfoControl_SummonObjInfo_o *v49; // x8
  struct SummonInfoControl_SummonObjParts_o *v50; // x8
  UnityEngine_GameObject_o *v51; // x0
  struct SummonInfoControl_SummonObjInfo_o *v52; // x8
  struct SummonInfoControl_SummonObjParts_o *v53; // x8
  UnityEngine_GameObject_o *v54; // x0
  struct SummonInfoControl_SummonObjInfo_o *v55; // x8
  struct SummonInfoControl_SummonObjParts_o *v56; // x8
  UnityEngine_GameObject_o *v57; // x0
  struct SummonInfoControl_SummonObjInfo_o *v58; // x8
  struct SummonInfoControl_SummonObjParts_o *v59; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v61; // x8
  struct SummonInfoControl_SummonObjParts_o *v62; // x8
  struct SummonInfoControl_SummonObjInfo_o *v63; // x8
  struct SummonInfoControl_SummonObjParts_o *v64; // x8
  struct SummonInfoControl_SummonObjInfo_o *v65; // x8
  struct SummonInfoControl_SummonObjParts_o *v66; // x8
  const MethodInfo *v67; // x3
  struct SummonInfoControl_SummonObjInfo_o *v68; // x8
  struct SummonInfoControl_SummonObjParts_o *v69; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v71; // x8
  struct SummonInfoControl_SummonObjParts_o *v72; // x8
  float v73; // s0
  float v74; // s3
  float v75; // s1
  float v76; // s2
  struct SummonInfoControl_SummonObjInfo_o *v77; // x8
  struct SummonInfoControl_SummonObjParts_o *v78; // x8
  float v79; // s0
  float v80; // s3
  float v81; // s1
  float v82; // s2
  struct SummonInfoControl_SummonObjInfo_o *v83; // x8
  struct SummonInfoControl_SummonObjParts_o *v84; // x8
  const MethodInfo *v85; // x6
  struct SummonInfoControl_SummonObjInfo_o *v86; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B129B6 & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, gachaEnt, isTicket);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaAppendMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&SummonInfoControl_TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_17722/*"btn_summon_bg5"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17783/*"btn_txt_reset"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_20478/*"img_bg_saintquartzuse3"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_23922/*"summon_txt_done"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17801/*"btn_txt_summon01"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17774/*"btn_txt_only_1"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_1262/*"1"*/, v25, v26);
    byte_4B129B6 = 1;
  }
  appendEnt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gachaEnt);
  Master_object = (GachaAppendMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_object )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(
                                           Master_object,
                                           gachaEnt,
                                           &appendEnt,
                                           0LL);
  currentSummonData = this->fields.currentSummonData;
  v30 = (int)Master_object;
  v31 = (_DWORD)Master_object ? this->fields.currentSummonData : 0LL;
  v32 = (_DWORD)Master_object ? 0LL : this->fields.currentSummonData;
  if ( (_DWORD)Master_object )
  {
    v33 = appendEnt;
    if ( !appendEnt )
      goto LABEL_78;
    if ( !v31 )
      goto LABEL_78;
    v31->fields.appendPayType = appendEnt->fields.type;
    v31->fields.appendShopIdIndex = v33->fields.idx;
    if ( !currentSummonData )
      goto LABEL_78;
    drawNum = v33->fields.drawNum;
  }
  else
  {
    if ( !v32 )
      goto LABEL_78;
    drawNum = 0;
    v32->fields.appendPayType = 7;
    currentSummonData->fields.appendShopIdIndex = 0;
  }
  currentSummonData->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v30 != 0, 0LL);
  this->fields.isDispPayExSummon = v30 != 0;
  this->fields.isPayExUsePossible = v30 == 2;
  v38 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  v39 = 48LL;
  if ( isTicket )
    v39 = 56LL;
  v40 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v39);
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo, v36);
    v38 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  summonInfoLayout = (float *)v38->fields.summonInfoLayout;
  if ( !v30 )
  {
    SummonInfoControl__SetButtonLocalPosX(v38, v40, summonInfoLayout[1], summonInfoLayout[2], v37);
    return;
  }
  SummonInfoControl__SetButtonLocalPosX(v38, v40, summonInfoLayout[4], summonInfoLayout[5], v37);
  v42 = this->fields.oneExSummon;
  if ( !v42 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v42->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v43 = this->fields.oneExSummon;
  if ( !v43 )
    goto LABEL_78;
  single = v43->fields.single;
  if ( !single )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)single->fields.button;
  if ( !Master_object )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X, 0LL);
  v46 = this->fields.oneExSummon;
  if ( !v46 )
    goto LABEL_78;
  v47 = v46->fields.single;
  if ( !v47 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v47->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPosition_34331148(v48, 0.0, 34.0, 0.0, 0LL);
  v49 = this->fields.oneExSummon;
  if ( !v49 )
    goto LABEL_78;
  v50 = v49->fields.single;
  if ( !v50 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v50->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v51, 1.0, 0LL);
  v52 = this->fields.oneExSummon;
  if ( !v52 )
    goto LABEL_78;
  v53 = v52->fields.single;
  if ( !v53 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v53->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v54 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScaleX(v54, 1.0, 0LL);
  v55 = this->fields.oneExSummon;
  if ( !v55 )
    goto LABEL_78;
  v56 = v55->fields.single;
  if ( !v56 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v56->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScaleX(v57, 1.0, 0LL);
  v58 = this->fields.oneExSummon;
  if ( !v58 )
    goto LABEL_78;
  v59 = v58->fields.single;
  if ( !v59 )
    goto LABEL_78;
  buttonImg = v59->fields.buttonImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           buttonImg,
                                           (System_String_o *)StringLiteral_17722/*"btn_summon_bg5"*/,
                                           0LL);
  v61 = this->fields.oneExSummon;
  if ( !v61 )
    goto LABEL_78;
  v62 = v61->fields.single;
  if ( !v62 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           v62->fields.bonusCount,
                                           (System_String_o *)StringLiteral_17783/*"btn_txt_reset"*/,
                                           0LL);
  v63 = this->fields.oneExSummon;
  if ( !v63 )
    goto LABEL_78;
  v64 = v63->fields.single;
  if ( !v64 )
    goto LABEL_78;
  AtlasManager__SetEventSprite(v64->fields.bonusInfo, (System_String_o *)StringLiteral_17774/*"btn_txt_only_1"*/, 0LL);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           this->fields.oneExSummonSingleInfoSprite,
                                           (System_String_o *)StringLiteral_20478/*"img_bg_saintquartzuse3"*/,
                                           0LL);
  v65 = this->fields.oneExSummon;
  if ( !v65 )
    goto LABEL_78;
  v66 = v65->fields.single;
  if ( !v66 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v66->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1262/*"1"*/, 0LL);
  v68 = this->fields.oneExSummon;
  if ( !v68 )
    goto LABEL_78;
  v69 = v68->fields.single;
  if ( !v69 )
    goto LABEL_78;
  numImg = v69->fields.numImg;
  if ( this->fields.isPayExUsePossible )
  {
    SummonInfoControl__SetGachaSprite(this, numImg, (System_String_o *)StringLiteral_17801/*"btn_txt_summon01"*/, v67);
  }
  else
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v28);
    Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                             numImg,
                                             (System_String_o *)StringLiteral_23922/*"summon_txt_done"*/,
                                             0LL);
  }
  v71 = this->fields.oneExSummon;
  if ( !v71 )
    goto LABEL_78;
  v72 = v71->fields.single;
  if ( !v72 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v72->fields.buttonImg;
  v73 = 1.0;
  if ( !this->fields.isPayExUsePossible )
    v73 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v74 = 1.0;
  v75 = v73;
  v76 = v73;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v73, 0LL);
  v77 = this->fields.oneExSummon;
  if ( !v77 )
    goto LABEL_78;
  v78 = v77->fields.single;
  if ( !v78 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v78->fields.button;
  v79 = 1.0;
  if ( !this->fields.isPayExUsePossible )
    v79 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v80 = 1.0;
  v81 = v79;
  v82 = v79;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)Master_object, *(UnityEngine_Color_o *)&v79, 0LL);
  v83 = this->fields.oneExSummon;
  if ( !v83
    || (v84 = v83->fields.single) == 0LL
    || (Master_object = (GachaAppendMaster_o *)v84->fields.numImg) == 0LL
    || (Master_object = (GachaAppendMaster_o *)((__int64 (__fastcall *)(GachaAppendMaster_o *, Il2CppMethodPointer))Master_object->klass[1].vtable._5_ForForceDerived.method)(
                                                 Master_object,
                                                 Master_object->klass[1].vtable._6_preProcess.methodPtr),
        (v86 = this->fields.oneExSummon) == 0LL) )
  {
LABEL_78:
    sub_1BCAA3C(Master_object, v28);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v86->fields.single, 0, 0, 1, 0, v85);
}


void __fastcall SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaEntity_o *v8; // x20
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  ticketNum = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v3);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1BCAA3C(CurrentGachaEntity, v5);
  v8 = CurrentGachaEntity;
  if ( currentSummonData->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v6);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v6) )
  {
    SummonInfoControl__TicketGacha(this, v8, ticketNum, v10);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v8, v9);
  }
}


void __fastcall SummonInfoControl__SetPointSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x0
  __int64 v18; // x0
  DataManager_o *MasterData_object; // x0
  struct UserGameEntity_o *usrData; // x8
  int m_CancellationTokenSource; // w21
  int32_t Price; // w0
  __int64 v23; // x1
  int32_t v24; // w20
  int v25; // w0
  const MethodInfo *v26; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v28; // x4
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x20
  Il2CppObject *v34; // x0
  const MethodInfo *v35; // x4
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v38; // x4
  struct SummonInfoControl_SummonObjInfo_o *v39; // x8
  struct SummonInfoControl_SummonObjParts_o *v40; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B129AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_TblUserMaster___, method, v2);
    sub_1BCA7E0(&int_TypeInfo, v5, v6);
    sub_1BCA7E0(&System_Math_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v9, v10);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v15, v16);
    byte_4B129AF = 1;
  }
  v17 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C1C6BC(v3);
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C1C6BC(v3);
  MasterData_object = **(DataManager_o ***)(v18 + 184);
  if ( !MasterData_object )
    goto LABEL_26;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_26;
  if ( !MasterData_object )
    goto LABEL_26;
  MasterData_object = (DataManager_o *)TblUserMaster__getUserData(
                                         (TblUserMaster_o *)MasterData_object,
                                         usrData->fields.userId,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_26;
  m_CancellationTokenSource = (int)MasterData_object->fields.m_CancellationTokenSource;
  MasterData_object = (DataManager_o *)SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !MasterData_object )
    goto LABEL_26;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_object, 0LL);
  this->fields.price = Price;
  v24 = Price;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v23);
  v25 = System_Math__Min_63220524(m_CancellationTokenSource / v24, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v25;
  if ( v25 < 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v26);
    v29 = this->fields.friendPointSummon;
    if ( v29 )
    {
      single = v29->fields.single;
      if ( single )
      {
        SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_25238/*"{0}"*/, v28);
        return;
      }
    }
LABEL_26:
    sub_1BCAA3C(MasterData_object, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v26);
  v31 = this->fields.friendPointSummon;
  if ( !v31 )
    goto LABEL_26;
  multiPay = v31->fields.multiPay;
  if ( !multiPay )
    goto LABEL_26;
  numImg = multiPay->fields.numImg;
  gachaTime = this->fields.gachaTime;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
  MasterData_object = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v34, 0LL);
  if ( !numImg )
    goto LABEL_26;
  UISprite__set_spriteName(numImg, (System_String_o *)MasterData_object, 0LL);
  v36 = this->fields.friendPointSummon;
  if ( !v36 )
    goto LABEL_26;
  onePay = v36->fields.onePay;
  if ( !onePay )
    goto LABEL_26;
  SummonInfoControl__SetPriceText(
    this,
    onePay->fields.infoLabel,
    this->fields.price,
    (System_String_o *)StringLiteral_25188/*"{0:#,0}"*/,
    v35);
  v39 = this->fields.friendPointSummon;
  if ( !v39 )
    goto LABEL_26;
  v40 = v39->fields.multiPay;
  if ( !v40 )
    goto LABEL_26;
  SummonInfoControl__SetPriceText(
    this,
    v40->fields.infoLabel,
    this->fields.gachaTime * this->fields.price,
    (System_String_o *)StringLiteral_25188/*"{0:#,0}"*/,
    v38);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  int32_t v6; // w21
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v6 = price;
  if ( (byte_4B129B8 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, label, *(_QWORD *)&price);
    byte_4B129B8 = 1;
  }
  if ( (v6 & 0x80000000) != 0 )
    v6 = this->fields.price;
  v12 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_1BCAA3C(v10, v11);
  UILabel__set_text(label, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetRequestData(
        SummonInfoControl_o *this,
        int32_t gachaType,
        int32_t gachaId,
        int32_t warId,
        int32_t gachaTime,
        int32_t gachaResourceNum,
        int32_t shopIdIdx,
        int32_t ticketItemId,
        int32_t gachaSubId,
        System_Int32_array *storyAdjustIds,
        bool isAppendSummon,
        SelectBonus_array *selectBonusList,
        const MethodInfo *method)
{
  System_Int32_array *adjustStoryGachaIds; // x28
  int32_t v14; // w29
  int32_t v19; // w23
  int32_t id; // w24
  int32_t summonType; // w22
  SummonInfoControl_o *v22; // x21
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct VaildGachaInfo_o *v24; // x8
  struct VaildGachaInfo_o *v25; // x8
  struct VaildGachaInfo_o *v26; // x8
  int v27; // w26
  GachaRqParamData_o *v28; // x27
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  adjustStoryGachaIds = storyAdjustIds;
  v14 = gachaSubId;
  v19 = warId;
  id = gachaId;
  summonType = gachaType;
  v22 = this;
  if ( (byte_4B129BE & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    this = (SummonInfoControl_o *)sub_1BCA7E0(&GachaRqParamData_TypeInfo, *(_QWORD *)&gachaType, *(_QWORD *)&gachaId);
    byte_4B129BE = 1;
    if ( (summonType & 0x80000000) == 0 )
    {
LABEL_3:
      if ( (id & 0x80000000) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  summonType = v22->fields.summonType;
  if ( (id & 0x80000000) == 0 )
  {
LABEL_4:
    if ( (v19 & 0x80000000) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_12:
  currentSummonData = v22->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_25;
  id = currentSummonData->fields.id;
  if ( (v19 & 0x80000000) == 0 )
  {
LABEL_5:
    if ( (gachaTime & 0x80000000) == 0 )
      goto LABEL_6;
    goto LABEL_16;
  }
LABEL_14:
  v24 = v22->fields.currentSummonData;
  if ( !v24 )
    goto LABEL_25;
  v19 = v24->fields.warId;
  if ( (gachaTime & 0x80000000) == 0 )
  {
LABEL_6:
    if ( (gachaResourceNum & 0x80000000) == 0 )
      goto LABEL_7;
    goto LABEL_17;
  }
LABEL_16:
  gachaTime = v22->fields.gachaTime;
  if ( (gachaResourceNum & 0x80000000) == 0 )
  {
LABEL_7:
    if ( (gachaSubId & 0x80000000) == 0 )
      goto LABEL_8;
    goto LABEL_18;
  }
LABEL_17:
  gachaResourceNum = v22->fields.price;
  if ( (gachaSubId & 0x80000000) == 0 )
  {
LABEL_8:
    if ( storyAdjustIds )
      goto LABEL_22;
    goto LABEL_20;
  }
LABEL_18:
  v25 = v22->fields.currentSummonData;
  if ( !v25 )
    goto LABEL_25;
  v14 = v25->fields.gachaSubId;
  if ( storyAdjustIds )
    goto LABEL_22;
LABEL_20:
  v26 = v22->fields.currentSummonData;
  if ( !v26 )
LABEL_25:
    sub_1BCAA3C(this, *(_QWORD *)&gachaType);
  adjustStoryGachaIds = v26->fields.adjustStoryGachaIds;
LABEL_22:
  v27 = ticketItemId & ~(ticketItemId >> 31);
  if ( shopIdIdx < 0 )
    shopIdIdx = 1;
  v28 = (GachaRqParamData_o *)sub_1BCAA2C(
                                GachaRqParamData_TypeInfo,
                                *(_QWORD *)&gachaType,
                                *(_QWORD *)&gachaId,
                                *(_QWORD *)&warId);
  GachaRqParamData___ctor_33636948(
    v28,
    summonType,
    id,
    v19,
    gachaTime,
    gachaResourceNum,
    shopIdIdx,
    v27,
    v14,
    adjustStoryGachaIds,
    isAppendSummon,
    selectBonusList,
    0LL);
  v22->fields.requestData = v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&v22->fields.requestData, (int64_t)v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1BCAA3C(this, method);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetSummonButtonsCollider(
        SummonInfoControl_o *this,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *summonObjInfos; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Action_object__o *v25; // x20

  if ( (byte_4B129BF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, onOff, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v6, v7);
    sub_1BCA7E0(&Method_SummonInfoControl___c__DisplayClass155_0__SetSummonButtonsCollider_b__0__, v8, v9);
    sub_1BCA7E0(&SummonInfoControl___c__DisplayClass155_0_TypeInfo, v10, v11);
    byte_4B129BF = 1;
  }
  v12 = sub_1BCAA2C(SummonInfoControl___c__DisplayClass155_0_TypeInfo, onOff, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 16) = this,
        sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)this, v15, v16, v17, v18, v19, v20),
        *(_BYTE *)(v12 + 24) = onOff,
        summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos,
        v25 = (System_Action_object__o *)sub_1BCAA2C(
                                           System_Action_SummonInfoControl_SummonObjInfo__TypeInfo,
                                           v22,
                                           v23,
                                           v24),
        System_Action_object____ctor(
          v25,
          (Il2CppObject *)v12,
          Method_SummonInfoControl___c__DisplayClass155_0__SetSummonButtonsCollider_b__0__,
          0LL),
        !summonObjInfos) )
  {
    sub_1BCAA3C(v13, v14);
  }
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)v25,
    (const MethodInfo_35A269C *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void __fastcall SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  struct UserGameEntity_o *SelfUserGame; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  const MethodInfo *v13; // x2
  __int64 v14; // x1
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v17; // x1
  UnityEngine_GameObject_o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_int__o *v22; // x21
  const MethodInfo *v23; // x1
  const MethodInfo *v24; // x1

  if ( (byte_4B129AB & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_int__TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SummonInfoControl__SetSummonDispInfo_b__127_0__, v4, v5);
    byte_4B129AB = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.usrData, (int64_t)SelfUserGame, v7, v8, v9, v10, v11, v12);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v13);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        summonDetailInfo = (UnityEngine_GameObject_o *)SummonInfoControl__IsDisplayFeaturedServants(this, v17),
        !gameObject) )
  {
    sub_1BCAA3C(summonDetailInfo, v14);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)summonDetailInfo & 1, 0LL);
  *(_WORD *)&this->fields.isPayExUsePossible = 0;
  v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v22 = (System_Action_int__o *)sub_1BCAA2C(System_Action_int__TypeInfo, v19, v20, v21);
  System_Action_int____ctor(v22, (Il2CppObject *)this, Method_SummonInfoControl__SetSummonDispInfo_b__127_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v18, v22, 0, 0LL);
  SummonInfoControl__SetUpSummonInfos(this, v23);
  SummonInfoControl__OffSetInfoBtn(this, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetSummonGiftDisp(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjParts_o *summonObjParts,
        bool isOnePay,
        bool isMulti,
        bool isSingle,
        bool isChargeSummon,
        const MethodInfo *method)
{
  SummonInfoControl_o *v12; // x22
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_String_o *v48; // x20
  SummonInfoControl___c_c *v49; // x8
  System_Func_T__TResult__o *_9__149_0; // x25
  Il2CppObject *v51; // x26
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  SummonInfoControl_o *v60; // x20
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_String_o *v64; // x20
  SummonInfoControl___c_c *v65; // x8
  System_Func_T__TResult__o *_9__149_1; // x23
  Il2CppObject *v67; // x24
  struct SummonInfoControl___c_StaticFields *v68; // x0
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v75; // x0
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  System_String_o *v79; // x20
  SummonInfoControl___c_c *v80; // x8
  System_Func_T__TResult__o *_9__149_3; // x21
  Il2CppObject *v82; // x22
  struct SummonInfoControl___c_StaticFields *v83; // x0
  int64_t v84; // x2
  int32_t v85; // w3
  System_String_o *v86; // x4
  BattleSetupInfo_o *v87; // x5
  FollowerInfo_o *v88; // x6
  PartyListViewItem_o *v89; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v90; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v96; // x0
  UnityEngine_GameObject_o *v97; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SummonInfoControl_o *v99; // x0
  const MethodInfo *v100; // x3
  UnityEngine_Object_o *v101; // x22
  SummonInfoControl_o *v102; // x0
  const MethodInfo *v103; // x3
  UnityEngine_Object_o *v104; // x21
  SummonInfoControl_o *v105; // x0
  const MethodInfo *v106; // x3
  __int64 v107; // x1
  UISprite_o *v108; // x23
  __int64 v109; // x1
  _BOOL8 v110; // x0
  System_String_o *v111; // x0
  Il2CppObject *friendPointSummon; // x1
  System_String_o *v113; // x0
  int v114; // w21
  bool v115; // w1
  SummonInfoControl_o *v116; // x0
  const MethodInfo *v117; // x3
  UnityEngine_Component_o *v118; // x24
  SummonInfoControl_o *v119; // x0
  const MethodInfo *v120; // x3
  UnityEngine_Component_o *v121; // x23
  SummonInfoControl_o *v122; // x0
  const MethodInfo *v123; // x3
  UISprite_o *v124; // x22
  SummonInfoControl_o *v125; // x0
  const MethodInfo *v126; // x3
  SummonInfoControl_o *v127; // x0
  const MethodInfo *v128; // x3
  __int64 v129; // x1
  UISprite_o *BonusSprite; // x25
  __int64 v131; // x1
  System_String_o *v132; // x0
  System_String_o *v133; // x0
  __int64 v134; // x1
  __int64 v135; // x2
  __int64 v136; // x3
  System_String_o *v137; // x20
  SummonInfoControl___c_c *v138; // x8
  System_Func_T__TResult__o *_9__149_2; // x23
  Il2CppObject *v140; // x24
  struct SummonInfoControl___c_StaticFields *v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v148; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v151; // x0
  UnityEngine_GameObject_o *v152; // x0

  v12 = this;
  if ( (byte_4B129BB & 1) == 0 )
  {
    sub_1BCA7E0(&AtlasManager_TypeInfo, summonObjParts, isOnePay);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_char__string___, v13, v14);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_string___, v15, v16);
    sub_1BCA7E0(&System_Func_char__string__TypeInfo, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_0__, v21, v22);
    sub_1BCA7E0(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_1__, v23, v24);
    sub_1BCA7E0(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_2__, v25, v26);
    sub_1BCA7E0(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_3__, v27, v28);
    sub_1BCA7E0(&SummonInfoControl___c_TypeInfo, v29, v30);
    sub_1BCA7E0(&StringLiteral_17740/*"btn_txt_bonus_{0}_glow"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_22421/*"num2"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_22419/*"num1"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_8229/*"Item"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_22420/*"num1_glow"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_22422/*"num2_glow"*/, v41, v42);
    this = (SummonInfoControl_o *)sub_1BCA7E0(&StringLiteral_17739/*"btn_txt_bonus_{0}"*/, v43, v44);
    byte_4B129BB = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v48 = System_Int32__ToString((int)v12 + 360, 0LL);
    v49 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v45);
      v49 = SummonInfoControl___c_TypeInfo;
    }
    _9__149_0 = (System_Func_T__TResult__o *)v49->static_fields->__9__149_0;
    if ( !_9__149_0 )
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49, v45);
        v49 = SummonInfoControl___c_TypeInfo;
      }
      v51 = (Il2CppObject *)v49->static_fields->__9;
      _9__149_0 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_char__string__TypeInfo, v45, v46, v47);
      System_Func_char__object____ctor(_9__149_0, v51, Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_0__, 0LL);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__149_0 = (struct System_Func_char__string__o *)_9__149_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__149_0,
        (int64_t)_9__149_0,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                                 (System_Func_TSource__TResult__o *)_9__149_0,
                                                                 (const MethodInfo_2F3E6CC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v59,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
    v60 = this;
    if ( !isMulti )
      goto LABEL_22;
  }
  else
  {
    v60 = 0LL;
    if ( !isMulti )
      goto LABEL_22;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v64 = System_Int32__ToString((int)v12 + 364, 0LL);
    v65 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v61);
      v65 = SummonInfoControl___c_TypeInfo;
    }
    _9__149_1 = (System_Func_T__TResult__o *)v65->static_fields->__9__149_1;
    if ( !_9__149_1 )
    {
      if ( !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65, v61);
        v65 = SummonInfoControl___c_TypeInfo;
      }
      v67 = (Il2CppObject *)v65->static_fields->__9;
      _9__149_1 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_char__string__TypeInfo, v61, v62, v63);
      System_Func_char__object____ctor(_9__149_1, v67, Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_1__, 0LL);
      v68 = SummonInfoControl___c_TypeInfo->static_fields;
      v68->__9__149_1 = (struct System_Func_char__string__o *)_9__149_1;
      sub_1BCA784((PartyOrganizationUtility_o *)&v68->__9__149_1, (int64_t)_9__149_1, v69, v70, v71, v72, v73, v74);
    }
    v75 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v64,
                                                                 (System_Func_TSource__TResult__o *)_9__149_1,
                                                                 (const MethodInfo_2F3E6CC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v75,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
    v60 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v137 = System_Int32__ToString((int)v12 + 360, 0LL);
    v138 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v134);
      v138 = SummonInfoControl___c_TypeInfo;
    }
    _9__149_2 = (System_Func_T__TResult__o *)v138->static_fields->__9__149_2;
    if ( !_9__149_2 )
    {
      if ( !v138->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v138, v134);
        v138 = SummonInfoControl___c_TypeInfo;
      }
      v140 = (Il2CppObject *)v138->static_fields->__9;
      _9__149_2 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_char__string__TypeInfo, v134, v135, v136);
      System_Func_char__object____ctor(_9__149_2, v140, Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_2__, 0LL);
      v141 = SummonInfoControl___c_TypeInfo->static_fields;
      v141->__9__149_2 = (struct System_Func_char__string__o *)_9__149_2;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v141->__9__149_2,
        (int64_t)_9__149_2,
        v142,
        v143,
        v144,
        v145,
        v146,
        v147);
    }
    v148 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v137,
                                                                  (System_Func_TSource__TResult__o *)_9__149_2,
                                                                  (const MethodInfo_2F3E6CC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v148,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v60 = this;
    button = (UnityEngine_Object_o *)summonObjParts->fields.button;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(button, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.button;
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScale_34333164(gameObject, 0.9, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        v151 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v151, -6.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
        if ( !this )
          goto LABEL_131;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( !this )
          goto LABEL_131;
        this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
        if ( !this )
          goto LABEL_131;
        this = (SummonInfoControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        if ( !this )
          goto LABEL_131;
        v152 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v152, 45.0, 0LL);
      }
    }
  }
LABEL_22:
  if ( isSingle && v12->fields.appendGiftNum )
  {
    v79 = System_Int32__ToString((int)v12 + 368, 0LL);
    v80 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v76);
      v80 = SummonInfoControl___c_TypeInfo;
    }
    _9__149_3 = (System_Func_T__TResult__o *)v80->static_fields->__9__149_3;
    if ( !_9__149_3 )
    {
      if ( !v80->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v80, v76);
        v80 = SummonInfoControl___c_TypeInfo;
      }
      v82 = (Il2CppObject *)v80->static_fields->__9;
      _9__149_3 = (System_Func_T__TResult__o *)sub_1BCAA2C(System_Func_char__string__TypeInfo, v76, v77, v78);
      System_Func_char__object____ctor(_9__149_3, v82, Method_SummonInfoControl___c__SetSummonGiftDisp_b__149_3__, 0LL);
      v83 = SummonInfoControl___c_TypeInfo->static_fields;
      v83->__9__149_3 = (struct System_Func_char__string__o *)_9__149_3;
      sub_1BCA784((PartyOrganizationUtility_o *)&v83->__9__149_3, (int64_t)_9__149_3, v84, v85, v86, v87, v88, v89);
    }
    v90 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v79,
                                                                 (System_Func_TSource__TResult__o *)_9__149_3,
                                                                 (const MethodInfo_2F3E6CC *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v90,
                                    (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v60 = this;
    bonusCount = (UnityEngine_Object_o *)summonObjParts->fields.bonusCount;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
    if ( UnityEngine_Object__op_Inequality(bonusCount, 0LL, 0LL) )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_131;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL) )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v92 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v92, 42.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v93 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v93, -34.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v94, 0.9, 0LL);
      }
    }
    bonusInfo = (UnityEngine_Object_o *)summonObjParts->fields.bonusInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(bonusInfo, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v96 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v96, -60.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v97 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v97, 0.9, 0LL);
      }
    }
  }
  if ( !v60 || (m_CancellationTokenSource = v60->fields.m_CancellationTokenSource) == 0LL )
  {
    if ( !summonObjParts )
      goto LABEL_131;
    goto LABEL_71;
  }
  if ( !summonObjParts )
    goto LABEL_131;
  if ( (_DWORD)m_CancellationTokenSource != 1 )
  {
    this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
    if ( !this )
      goto LABEL_131;
    v116 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v116,
                                    (UnityEngine_GameObject_o *)v116,
                                    (System_String_o *)StringLiteral_22419/*"num1"*/,
                                    v117);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v118 = (UnityEngine_Component_o *)this;
    v119 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                    0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v119,
                                    (UnityEngine_GameObject_o *)v119,
                                    (System_String_o *)StringLiteral_22421/*"num2"*/,
                                    v120);
    if ( !v118 )
      goto LABEL_131;
    v121 = (UnityEngine_Component_o *)this;
    v122 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v118, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v122,
                                    (UnityEngine_GameObject_o *)v122,
                                    (System_String_o *)StringLiteral_22420/*"num1_glow"*/,
                                    v123);
    if ( !v121 )
      goto LABEL_131;
    v124 = (UISprite_o *)this;
    v125 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v121, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v125,
                                    (UnityEngine_GameObject_o *)v125,
                                    (System_String_o *)StringLiteral_22422/*"num2_glow"*/,
                                    v126);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v104 = (UnityEngine_Object_o *)this;
    v127 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                    (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                    0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    v127,
                    (UnityEngine_GameObject_o *)v127,
                    (System_String_o *)StringLiteral_8229/*"Item"*/,
                    v128);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v129);
    AtlasManager__SetItem(BonusSprite, 7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v131);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v118, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v121, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v124, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
          v110 = UnityEngine_Object__op_Inequality(v104, 0LL, 0LL);
          if ( v110 )
          {
            if ( LODWORD(v60->fields.m_CancellationTokenSource) )
            {
              v132 = System_String__Format(
                       (System_String_o *)StringLiteral_17739/*"btn_txt_bonus_{0}"*/,
                       (Il2CppObject *)v60->fields.freeSummon,
                       0LL);
              UISprite__set_spriteName((UISprite_o *)v118, v132, 0LL);
              if ( LODWORD(v60->fields.m_CancellationTokenSource) > 1 )
              {
                v133 = System_String__Format(
                         (System_String_o *)StringLiteral_17739/*"btn_txt_bonus_{0}"*/,
                         (Il2CppObject *)v60->fields.friendPointSummon,
                         0LL);
                UISprite__set_spriteName((UISprite_o *)v121, v133, 0LL);
                if ( LODWORD(v60->fields.m_CancellationTokenSource) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17740/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v60->fields.freeSummon,
                                                  0LL);
                  if ( !v124 )
                    goto LABEL_131;
                  UISprite__set_spriteName(v124, (System_String_o *)this, 0LL);
                  if ( LODWORD(v60->fields.m_CancellationTokenSource) > 1 )
                  {
                    friendPointSummon = (Il2CppObject *)v60->fields.friendPointSummon;
                    v113 = (System_String_o *)StringLiteral_17740/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_68;
                  }
                }
              }
            }
LABEL_132:
            sub_1BCAA44(v110, summonObjParts);
          }
        }
      }
    }
LABEL_71:
    v114 = 0;
    goto LABEL_72;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  v99 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v99,
                                  (UnityEngine_GameObject_o *)v99,
                                  (System_String_o *)StringLiteral_22419/*"num1"*/,
                                  v100);
  if ( !this )
    goto LABEL_131;
  v101 = (UnityEngine_Object_o *)this;
  v102 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v102,
                                  (UnityEngine_GameObject_o *)v102,
                                  (System_String_o *)StringLiteral_22420/*"num1_glow"*/,
                                  v103);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_131;
  v104 = (UnityEngine_Object_o *)this;
  v105 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                  (UnityEngine_Component_o *)summonObjParts->fields.singleDigit,
                                  0LL);
  v108 = SummonInfoControl__GetBonusSprite(
           v105,
           (UnityEngine_GameObject_o *)v105,
           (System_String_o *)StringLiteral_8229/*"Item"*/,
           v106);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v107);
  AtlasManager__SetItem(v108, 7, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v109);
  if ( !UnityEngine_Object__op_Inequality(v101, 0LL, 0LL) )
    goto LABEL_71;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts);
  v110 = UnityEngine_Object__op_Inequality(v101, 0LL, 0LL);
  if ( !v110 )
    goto LABEL_71;
  if ( !LODWORD(v60->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  v111 = System_String__Format((System_String_o *)StringLiteral_17739/*"btn_txt_bonus_{0}"*/, (Il2CppObject *)v60->fields.freeSummon, 0LL);
  UISprite__set_spriteName((UISprite_o *)v101, v111, 0LL);
  if ( !LODWORD(v60->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  friendPointSummon = (Il2CppObject *)v60->fields.freeSummon;
  v113 = (System_String_o *)StringLiteral_17740/*"btn_txt_bonus_{0}_glow"*/;
LABEL_68:
  this = (SummonInfoControl_o *)System_String__Format(v113, friendPointSummon, 0LL);
  if ( !v104 )
    goto LABEL_131;
  UISprite__set_spriteName((UISprite_o *)v104, (System_String_o *)this, 0LL);
  v114 = 1;
LABEL_72:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v114 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
      if ( this )
      {
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( this )
        {
          v115 = 0;
          goto LABEL_83;
        }
      }
    }
LABEL_131:
    sub_1BCAA3C(this, summonObjParts);
  }
  if ( !v60 )
    goto LABEL_131;
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    SLODWORD(v60->fields.m_CancellationTokenSource) < 2,
    0LL);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_131;
  v115 = SLODWORD(v60->fields.m_CancellationTokenSource) > 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v115, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  char *Instance; // x0
  __int64 v9; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v11; // x8
  char *v12; // x20
  __int64 v13; // x22
  char *v14; // x23
  __int64 v15; // x9
  __int64 v16; // x8
  __int64 v17; // x9
  int v18; // w9

  if ( (byte_4B129BA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, method, v2);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_GiftMaster___, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B129BA = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !Instance )
    {
LABEL_31:
      sub_1BCAA3C(Instance, v9);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0LL);
    if ( Instance )
    {
      v11 = *((_QWORD *)Instance + 3);
      v12 = Instance;
      if ( v11 )
      {
        if ( (int)v11 >= 1 )
        {
          v13 = 0LL;
          v14 = Instance + 32;
          do
          {
            if ( (unsigned int)v13 >= (unsigned int)v11 )
LABEL_32:
              sub_1BCAA44(Instance, v9);
            v15 = *(_QWORD *)&v14[8 * v13];
            if ( !v15 )
              goto LABEL_31;
            if ( *(_DWORD *)(v15 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v13 >= *((_DWORD *)v12 + 6) )
                goto LABEL_32;
              v16 = *(_QWORD *)&v14[8 * v13];
              if ( !v16 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v16 + 24), 0LL);
              v11 = *((_QWORD *)v12 + 3);
              if ( (unsigned int)v13 >= (unsigned int)v11 )
                goto LABEL_32;
              v17 = *(_QWORD *)&v14[8 * v13];
              if ( !v17 )
                goto LABEL_31;
              v18 = *(_DWORD *)(v17 + 20);
              switch ( v18 )
              {
                case 3:
                  if ( !Instance )
                    goto LABEL_31;
                  this->fields.appendGiftNum = *((_DWORD *)Instance + 7);
                  break;
                case 2:
                  if ( !Instance )
                    goto LABEL_31;
                  this->fields.shopId2GiftNum = *((_DWORD *)Instance + 7);
                  break;
                case 1:
                  if ( !Instance )
                    goto LABEL_31;
                  this->fields.shopId1GiftNum = *((_DWORD *)Instance + 7);
                  break;
              }
            }
            ++v13;
          }
          while ( (int)v13 < (int)v11 );
        }
      }
    }
  }
}


void __fastcall SummonInfoControl__SetSummonHistorySprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  UIAtlas_o *Component_object; // x0
  __int64 v10; // x1

  if ( (byte_4B129C6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, bannerAtlas, imgName);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B129C6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bannerAtlas);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_object, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonHistoryButton) == 0LL) )
    {
      sub_1BCAA3C(Component_object, v10);
    }
    UIButton__set_normalSprite((UIButton_o *)Component_object, imgName, 0LL);
  }
}


void __fastcall SummonInfoControl__SetSummonInfo(
        SummonInfoControl_o *this,
        VaildGachaInfo_o *gachaData,
        SummonInfoControl_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0LL;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_1BCAA3C(this, 0LL);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.clickCallbackFunc,
    (int64_t)callback,
    (int64_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.currentSummonData,
    (int64_t)gachaData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  SummonInfoControl__SetSummonGiftInfo(this, v16);
  SummonInfoControl__SetSummonDispInfo(this, v17);
}


void __fastcall SummonInfoControl__SetSummonInfo_33776020(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int klass; // w22
  int32_t PayOneTimePrice; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x20
  int klass_high; // w22
  int32_t PayMultiTimePrice; // w21
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B129B9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, method, v2);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&SummonInfoControl_SummonInfo_TypeInfo, v8, v9);
    byte_4B129B9 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          currentSummonData->fields.id,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity )
    goto LABEL_17;
  if ( SHIDWORD(entity[3].klass) >= 1 )
  {
    klass = (int)entity[4].klass;
    PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
    v18 = sub_1BCAA2C(SummonInfoControl_SummonInfo_TypeInfo, v15, v16, v17);
    System_Object___ctor((Il2CppObject *)v18, 0LL);
    *(_DWORD *)(v18 + 16) = klass;
    *(_DWORD *)(v18 + 20) = PayOneTimePrice;
    *(_DWORD *)(v18 + 24) = 1;
    Master_object = entity;
    if ( entity )
    {
      if ( SLODWORD(entity[3].monitor) < 1 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_17:
    sub_1BCAA3C(Master_object, v11);
  }
  if ( SLODWORD(entity[3].monitor) < 1 )
    return;
LABEL_14:
  klass_high = HIDWORD(Master_object[4].klass);
  PayMultiTimePrice = GachaEntity__getPayMultiTimePrice((GachaEntity_o *)Master_object, 0LL);
  v18 = sub_1BCAA2C(SummonInfoControl_SummonInfo_TypeInfo, v21, v22, v23);
  System_Object___ctor((Il2CppObject *)v18, 0LL);
  *(_DWORD *)(v18 + 16) = klass_high;
  *(_DWORD *)(v18 + 20) = PayMultiTimePrice;
  *(_DWORD *)(v18 + 24) = 2;
LABEL_15:
  *(int32x2_t *)&this->fields.price = vrev64_s32(*(int32x2_t *)(v18 + 16));
  this->fields.shopIdIdx = *(_DWORD *)(v18 + 24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetTutorialBtnEnable(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  SummonInfoControl_o *v5; // x20
  bool v6; // w21

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon )
    goto LABEL_7;
  multiPay = stoneSummon->fields.multiPay;
  if ( !multiPay
    || (v5 = this, (this = (SummonInfoControl_o *)multiPay->fields.button) == 0LL)
    || (v6 = isEnable,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL),
        (this = (SummonInfoControl_o *)v5->fields.summonDetailBtn) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v6, 0LL),
        (this = (SummonInfoControl_o *)v5->fields.summonHelpInfo) == 0LL) )
  {
LABEL_7:
    sub_1BCAA3C(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetTutorialExeBtnEnable(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  SummonInfoControl_o *v5; // x20
  struct SummonInfoControl_SummonObjInfo_o *v7; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon
    || (onePay = stoneSummon->fields.onePay) == 0LL
    || (v5 = this, (this = (SummonInfoControl_o *)onePay->fields.button) == 0LL)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL),
        (v7 = v5->fields.stoneSummon) == 0LL)
    || (single = v7->fields.single) == 0LL
    || (this = (SummonInfoControl_o *)single->fields.button) == 0LL )
  {
    sub_1BCAA3C(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL);
}


void __fastcall SummonInfoControl__SetUpSummonInfos(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t summonType; // w8
  UnityEngine_Component_o *possessionInfoButton; // x0
  const MethodInfo *v5; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  UnityEngine_GameObject_o *v9; // x20
  const MethodInfo *v10; // x1
  const MethodInfo *v11; // x1

  summonType = this->fields.summonType;
  switch ( summonType )
  {
    case 1:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
      if ( !possessionInfoButton )
        goto LABEL_15;
      gameObject = UnityEngine_Component__get_gameObject(possessionInfoButton, 0LL);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__IsDisplayFeaturedServants(this, v7);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)possessionInfoButton & 1, 0LL);
      SummonInfoControl__SetPaySummonInfo(this, v8);
      break;
    case 7:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
      if ( !possessionInfoButton )
        goto LABEL_15;
      v9 = UnityEngine_Component__get_gameObject(possessionInfoButton, 0LL);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__IsDisplayFeaturedServants(this, v10);
      if ( !v9 )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(v9, (unsigned __int8)possessionInfoButton & 1, 0LL);
      SummonInfoControl__SetChargeSummonInfo(this, v11);
      break;
    case 3:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.summonDetailInfo;
      if ( possessionInfoButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)possessionInfoButton, 0, 0LL);
        possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
        if ( possessionInfoButton )
        {
          possessionInfoButton = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                              possessionInfoButton,
                                                              0LL);
          if ( possessionInfoButton )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)possessionInfoButton, 0, 0LL);
            SummonInfoControl__SetFreeSummonInfo(this, v5);
            return;
          }
        }
      }
LABEL_15:
      sub_1BCAA3C(possessionInfoButton, method);
  }
}


void __fastcall SummonInfoControl__StoneGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  GachaEntity_o *v4; // x20
  SummonInfoControl_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v13; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x6
  struct SummonInfoControl_SummonObjInfo_o *v19; // x8
  const MethodInfo *v20; // x6
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x1
  int gachaTime; // w8
  System_String_o *v25; // x20
  Il2CppObject *v26; // x0
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v29; // x4
  struct SummonInfoControl_SummonObjInfo_o *v30; // x8
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  int v32; // [xsp+Ch] [xbp-24h] BYREF

  v4 = payGachaEnt;
  v5 = this;
  if ( (byte_4B129B3 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, payGachaEnt, method);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v6, v7);
    this = (SummonInfoControl_o *)sub_1BCA7E0(&StringLiteral_17802/*"btn_txt_summon{0:00}"*/, v8, v9);
    byte_4B129B3 = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  if ( v4->fields.shopId1 >= 1 && v4->fields.shopId2 > 0 )
  {
    SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 0, v3);
    v5->fields.gachaTime = v4->fields.drawNum1;
    this = (SummonInfoControl_o *)GachaEntity__getPayOneTimePrice(v4, 0LL);
    stoneSummon = v5->fields.stoneSummon;
    v5->fields.price = (int)this;
    v5->fields.shopIdIdx = 1;
    if ( stoneSummon )
    {
      onePay = stoneSummon->fields.onePay;
      if ( onePay )
      {
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_25238/*"{0}"*/, v10);
        v13 = v5->fields.stoneSummon;
        if ( v13 )
        {
          multiPay = v13->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v4, 0LL);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_25238/*"{0}"*/,
              v17);
            v19 = v5->fields.stoneSummon;
            if ( v19 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v19->fields.onePay, 1, 0, 0, 0, v18);
              v21 = v5->fields.stoneSummon;
              if ( v21 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v21->fields.multiPay, 0, 1, 0, 0, v20);
                SummonInfoControl__SetElevenBonusInfo(v5, v4, 0, v5->fields.stoneSummon, v5->fields.gachaTime, v22);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BCAA3C(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_33776020(v5, v23);
  gachaTime = v5->fields.gachaTime;
  v25 = (System_String_o *)StringLiteral_17802/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v32 = gachaTime;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v32);
  this = (SummonInfoControl_o *)System_String__Format(v25, v26, 0LL);
  v27 = v5->fields.stoneSummon;
  if ( !v27 )
    goto LABEL_21;
  single = v27->fields.single;
  if ( !single )
    goto LABEL_21;
  payGachaEnt = (GachaEntity_o *)this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)payGachaEnt, 0LL);
  v30 = v5->fields.stoneSummon;
  if ( !v30 )
    goto LABEL_21;
  v31 = v30->fields.single;
  if ( !v31 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v31->fields.infoLabel, -1, (System_String_o *)StringLiteral_25238/*"{0}"*/, v29);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v14; // x4
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *v16; // x8
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x6
  struct SummonInfoControl_SummonObjInfo_o *v23; // x8
  const MethodInfo *v24; // x5

  if ( (byte_4B129B2 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, payGachaEnt, *(_QWORD *)&ticketNum);
    sub_1BCA7E0(&StringLiteral_25188/*"{0:#,0}"*/, v7, v8);
    byte_4B129B2 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_25238/*"{0}"*/, v11);
  v15 = this->fields.ticketSummon;
  if ( !v15 )
    goto LABEL_12;
  v16 = v15->fields.onePay;
  if ( !v16
    || (SummonInfoControl__SetPriceText(
          this,
          v16->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_25188/*"{0:#,0}"*/,
          v14),
        (v17 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v17->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_25238/*"{0}"*/, v21),
        (v23 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_1BCAA3C(v9, v10);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v23->fields.multiPay, 0, 1, 0, 0, v22);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v24);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v11; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B129B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserItemMaster___, ticketNum, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v5, v6);
    byte_4B129B1 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, ticketNum);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserItemMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_14;
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_14;
  Master_object = (Il2CppObject *)UserItemMaster__TryGetEntity(
                                    (UserItemMaster_o *)Master_object,
                                    &entity,
                                    usrData->fields.userId,
                                    currentSummonData->fields.ticketItemId,
                                    0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      v11 = entity->fields.num > 0;
LABEL_12:
      num = entity->fields.num;
      result = v11;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BCAA3C(Master_object, v8);
  }
  v11 = 0;
  result = 0;
  num = 0;
  if ( entity )
    goto LABEL_12;
LABEL_13:
  *ticketNum = num;
  return result;
}


void __fastcall SummonInfoControl__TutorialGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Master_object; // x0
  __int64 v11; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  __int64 v13; // x1
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  __int64 v16; // x9
  const MethodInfo *v17; // x6
  int32_t v18; // w8
  struct SummonInfoControl_SummonObjInfo_o *v19; // x9
  const MethodInfo *v20; // x4
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v23; // x4
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B129B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserServantMaster___, payGachaEnt, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_25238/*"{0}"*/, v8, v9);
    byte_4B129B0 = 1;
  }
  *(_QWORD *)servantEquipSum = 0LL;
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.stoneSummon, 1, v3);
  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon )
    goto LABEL_19;
  GameObjectExtensions__SetLocalPositionY(stoneSummon->fields.singleSummonInfo, 0.0, 0LL);
  haveStoneNum = this->fields.haveStoneNum;
  userFreeStone = this->fields.userFreeStone;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v13);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)UserServantMaster__getCountWithoutMaterial(
                                    (UserServantMaster_o *)Master_object,
                                    &servantEquipSum[1],
                                    servantEquipSum,
                                    0LL);
  if ( !payGachaEnt )
    goto LABEL_19;
  v16 = 64LL;
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
    v16 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v16);
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL);
    v18 = 2;
  }
  else
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
    v18 = 1;
  }
  v19 = this->fields.stoneSummon;
  this->fields.price = (int)Master_object;
  this->fields.shopIdIdx = v18;
  if ( !v19
    || (SummonInfoControl__SetSummonGiftDisp(this, v19->fields.single, 0, 1, 0, 0, v17),
        (v21 = this->fields.stoneSummon) == 0LL)
    || (single = v21->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_25238/*"{0}"*/, v20),
        (v24 = this->fields.stoneSummon) == 0LL)
    || (v25 = v24->fields.single) == 0LL )
  {
LABEL_19:
    sub_1BCAA3C(Master_object, v11);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_object,
    this->fields.gachaTime,
    v25->fields.numImg,
    v25->fields.bonusInfo,
    v23);
}


void __fastcall SummonInfoControl___SetSummonDispInfo_b__127_0(
        SummonInfoControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v5; // x1
  UserGameEntity_o *v6; // x8
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    v6 = entity;
    if ( !entity )
      sub_1BCAA3C(SelfUserGame, v5);
    this->fields.haveStoneNum = entity->fields.stone;
    *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&v6->fields.freeStone;
  }
}


GachaEntity_o *__fastcall SummonInfoControl__get_CurrentGachaEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  SummonInfoControl_o *v3; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v3 = this;
  if ( (byte_4B129A8 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BCA7E0(
                                    &Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__,
                                    method,
                                    v2);
    byte_4B129A8 = 1;
  }
  currentSummonData = v3->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v3->fields.gachaMaster) == 0LL )
    sub_1BCAA3C(this, method);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_31B2E40 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


ViewGachaFeaturedServantEntity_o *__fastcall SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8
  ViewGachaFeaturedServantEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0LL;
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)this->fields.viewGachaFeaturedServantMaster) == 0LL )
    sub_1BCAA3C(this, method);
  if ( ViewGachaFeaturedServantMaster__TryGetEntity(
         (ViewGachaFeaturedServantMaster_o *)this,
         &entity,
         currentSummonData->fields.id,
         0LL) )
  {
    return entity;
  }
  else
  {
    return 0LL;
  }
}


int32_t __fastcall SummonInfoControl__get_HaveChargeStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._HaveChargeStoneNum_k__BackingField;
}


int32_t __fastcall SummonInfoControl__get_HaveFreeStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._HaveFreeStoneNum_k__BackingField;
}


SummonInfoLayout_o *__fastcall SummonInfoControl__get_SummonInfoLayout(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  return this->fields.summonInfoLayout;
}


void __fastcall SummonInfoControl__set_HaveChargeStoneNum(
        SummonInfoControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HaveChargeStoneNum_k__BackingField = value;
}


void __fastcall SummonInfoControl__set_HaveFreeStoneNum(
        SummonInfoControl_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._HaveFreeStoneNum_k__BackingField = value;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl_ClickDelegate___ctor(
        SummonInfoControl_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x20
  int v12; // w22
  Il2CppObject *v13; // x8
  struct System_Reflection_MethodInfo_o *v14; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = (Il2CppObject *)sub_1A08E4C;
LABEL_16:
      this->fields.m_target = v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v15 = sub_1BCA898(v10);
        v16 = sub_1BCAD54(v10);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = (Il2CppObject *)sub_1A08F48;
          else
            v13 = (Il2CppObject *)sub_1A08F0C;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = (Il2CppObject *)sub_1A08E88;
        }
        else
        {
          v13 = (Il2CppObject *)sub_1A08E5C;
        }
      }
      else
      {
        v13 = (Il2CppObject *)sub_1A08E2C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v17, 0LL);
    }
  }
  v14 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v14;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A08DE4;
}


System_IAsyncResult_o *__fastcall SummonInfoControl_ClickDelegate__BeginInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GachaRqParamData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = paramData;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall SummonInfoControl_ClickDelegate__Invoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, GachaRqParamData_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    paramData,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall SummonInfoControl_InfoButtonLayout___ctor(
        SummonInfoControl_InfoButtonLayout_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  *(_OWORD *)&this->fields.Top.fields.x = xmmword_BD2360;
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712LL;
  if ( !byte_4B109C1 )
  {
    sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, method, v2);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.Buttom.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.Buttom.fields.z = z;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl_SummonInfo___ctor(
        SummonInfoControl_SummonInfo_o *this,
        int32_t drawNum,
        int32_t price,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.drawNum = drawNum;
  this->fields.price = price;
  this->fields.shopIdIdx = shopIdIdx;
}


void __fastcall SummonInfoControl_SummonObjInfo___ctor(
        SummonInfoControl_SummonObjInfo_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl_SummonObjParts___ctor(
        SummonInfoControl_SummonObjParts_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B129C9 & 1) == 0 )
  {
    sub_1BCA7E0(&SummonInfoControl___c_TypeInfo, v1, v2);
    byte_4B129C9 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(SummonInfoControl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  SummonInfoControl___c_TypeInfo->static_fields->__9 = (struct SummonInfoControl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)SummonInfoControl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall SummonInfoControl___c___ctor(SummonInfoControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c___InitSummonBtnDisp_b__130_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_4B129CA & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B129CA = 1;
  }
  if ( !x )
    goto LABEL_15;
  singleSummonInfo = (UnityEngine_Object_o *)x->fields.singleSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0LL, 0LL) )
  {
    this = (SummonInfoControl___c_o *)x->fields.singleSummonInfo;
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  multiSummonInfo = (UnityEngine_Object_o *)x->fields.multiSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  if ( UnityEngine_Object__op_Inequality(multiSummonInfo, 0LL, 0LL) )
  {
    this = (SummonInfoControl___c_o *)x->fields.multiSummonInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1BCAA3C(this, x);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__149_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B129CB & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, x, method);
    byte_4B129CB = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo, x);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__149_1(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B129CC & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, x, method);
    byte_4B129CC = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo, x);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__149_2(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B129CD & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, x, method);
    byte_4B129CD = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo, x);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__149_3(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B129CE & 1) == 0 )
  {
    sub_1BCA7E0(&char_TypeInfo, x, method);
    byte_4B129CE = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo, x);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass155_0___ctor(
        SummonInfoControl___c__DisplayClass155_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass155_0___SetSummonButtonsCollider_b__0(
        SummonInfoControl___c__DisplayClass155_0_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v7; // x3
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v9; // x3
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8

  if ( !x
    || (single = x->fields.single) == 0LL
    || !this->fields.__4__this
    || (SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, single->fields.button, this->fields.onOff, v3),
        (onePay = x->fields.onePay) == 0LL)
    || !this->fields.__4__this
    || (SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, onePay->fields.button, this->fields.onOff, v7),
        (multiPay = x->fields.multiPay) == 0LL)
    || !this->fields.__4__this )
  {
    sub_1BCAA3C(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, this->fields.onOff, v9);
}