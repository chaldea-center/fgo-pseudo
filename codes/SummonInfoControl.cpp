void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonInfoControl_StaticFields *static_fields; // x8

  if ( (byte_49F8D6A & 1) == 0 )
  {
    sub_1B640C8(&SummonInfoControl_TypeInfo, v1);
    byte_49F8D6A = 1;
  }
  static_fields = SummonInfoControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OPEN_TIME = xmmword_BA4250;
  *(_QWORD *)&static_fields->APD_SUMMON_BTN2_X = 0x4370000000000000LL;
  *(_QWORD *)&static_fields->BONUS_SELECT_LABEL_Y = 0x1241B00000LL;
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
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  __int64 v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  Il2CppObject *freeSummon; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *friendPointSummon; // x1
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  Il2CppObject *stoneSummon; // x1
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  Il2CppObject *ticketSummon; // x1
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  Il2CppObject *chargeSummon; // x1
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *oneExSummon; // x1
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  const MethodInfo *v52; // x1

  if ( (byte_49F8D4B & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo, v5);
    byte_49F8D4B = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v6 )
    goto LABEL_29;
  freeSummon = (Il2CppObject *)this->fields.freeSummon;
  items = v6->fields._items;
  v12 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v6->fields._version;
  if ( !items )
    goto LABEL_29;
  size = v6->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      freeSummon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
  }
  else
  {
    v14 = &items->obj.klass + size;
    v6->fields._size = size + 1;
    v14[4] = (Il2CppClass *)freeSummon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v14 + 4), (int32_t)freeSummon, v8, v9);
  }
  friendPointSummon = (Il2CppObject *)this->fields.friendPointSummon;
  v18 = v6->fields._items;
  v19 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v6->fields._version;
  if ( !v18 )
    goto LABEL_29;
  v20 = v6->fields._size;
  if ( (unsigned int)v20 >= v18->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      friendPointSummon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v21 = &v18->obj.klass + v20;
    v6->fields._size = v20 + 1;
    v21[4] = (Il2CppClass *)friendPointSummon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)friendPointSummon, v15, v16);
  }
  stoneSummon = (Il2CppObject *)this->fields.stoneSummon;
  v25 = v6->fields._items;
  v26 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v6->fields._version;
  if ( !v25 )
    goto LABEL_29;
  v27 = v6->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      stoneSummon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    v6->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)stoneSummon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)stoneSummon, v22, v23);
  }
  ticketSummon = (Il2CppObject *)this->fields.ticketSummon;
  v32 = v6->fields._items;
  v33 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v6->fields._version;
  if ( !v32 )
    goto LABEL_29;
  v34 = v6->fields._size;
  if ( (unsigned int)v34 >= v32->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      ticketSummon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v6->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)ticketSummon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)ticketSummon, v29, v30);
  }
  chargeSummon = (Il2CppObject *)this->fields.chargeSummon;
  v39 = v6->fields._items;
  v40 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v6->fields._version;
  if ( !v39 )
    goto LABEL_29;
  v41 = v6->fields._size;
  if ( (unsigned int)v41 >= v39->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      chargeSummon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
  }
  else
  {
    v42 = &v39->obj.klass + v41;
    v6->fields._size = v41 + 1;
    v42[4] = (Il2CppClass *)chargeSummon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v42 + 4), (int32_t)chargeSummon, v36, v37);
  }
  oneExSummon = (Il2CppObject *)this->fields.oneExSummon;
  v46 = v6->fields._items;
  v47 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v6->fields._version;
  if ( !v46 )
LABEL_29:
    sub_1B64324(v7);
  v48 = v6->fields._size;
  if ( (unsigned int)v48 >= v46->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v6,
      oneExSummon,
      *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v6->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)oneExSummon;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v49 + 4), (int32_t)oneExSummon, v43, v44);
  }
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v6;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.summonObjInfos, (int32_t)v6, v50, v51);
  SummonInfoControl__InitMasterData(this, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_49F8D66 & 1) == 0 )
  {
    sub_1B640C8(&Method_SummonInfoControl_ClickBase__, *(_QWORD *)&seKind);
    byte_49F8D66 = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B640E0(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.animationCallback, 0, v2, v3);
  ActionExtensions__Call(animationCallback, 0LL);
}


int32_t __fastcall SummonInfoControl__GetBonusSelectLineupCount(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
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
  System_Collections_Generic_List_int__o *v16; // x20
  System_Int32_array *Master_object; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 gachaBonusSelectLineupId; // x1
  __int64 v20; // x2
  GachaBonusSelectEntity_array *v21; // x19
  signed int max_length; // w8
  unsigned int v23; // w22
  GachaBonusSelectEntity_o *v24; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v28; // x19
  int32_t current; // w20
  Il2CppObject *v30; // x0
  _BOOL8 EntityList; // x0
  __int64 giftId; // x1
  GachaBonusSelectLineupEntity_array *v33; // x20
  signed int v34; // w8
  signed int i; // w22
  GachaBonusSelectLineupEntity_o *v36; // x8
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x1
  __int64 v41; // x2
  System_Collections_Generic_List_int__o *v42; // x20
  int32_t v43; // w19
  Il2CppObject *v44; // x0
  GiftEntity_array *GiftListById; // x0
  __int64 objectId; // x1
  GiftEntity_array *v47; // x19
  __int64 v48; // x8
  __int64 v49; // x23
  GiftEntity_o *v50; // x9
  struct System_Int32_array *v51; // x9
  _QWORD *v52; // x10
  __int64 v53; // x11
  System_Collections_Generic_IEnumerable_TSource__o *v54; // x0
  System_Collections_Generic_List_Enumerator_int__o v56; // [xsp+0h] [xbp-A0h] BYREF
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v58; // [xsp+20h] [xbp-80h] BYREF
  GachaBonusSelectEntity_array *entityArray; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_49F8D69 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v4);
    sub_1B640C8(&Method_DataManager_GetMaster_GiftMaster___, v5);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_Distinct_int___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v13);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v14);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v15);
    byte_49F8D69 = 1;
  }
  entityArray = 0LL;
  memset(&v58, 0, sizeof(v58));
  gachaBonusSelectLineupEntities = 0LL;
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, method, v2);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
    v21 = entityArray;
    if ( !entityArray )
      goto LABEL_68;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        if ( v23 >= max_length )
          sub_1B6432C(Master_object, gachaBonusSelectLineupId);
        v24 = v21->m_Items[v23];
        if ( !v24 )
          break;
        if ( !v16 )
          break;
        gachaBonusSelectLineupId = (unsigned int)v24->fields.gachaBonusSelectLineupId;
        items = v16->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          break;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v16,
            gachaBonusSelectLineupId,
            *(const MethodInfo_348FEDC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v16->fields._size = size + 1;
          items->m_Items[size + 1] = gachaBonusSelectLineupId;
        }
        max_length = v21->max_length;
        if ( (int)++v23 >= max_length )
          goto LABEL_19;
      }
LABEL_68:
      sub_1B64324(Master_object);
    }
  }
LABEL_19:
  v28 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    gachaBonusSelectLineupId,
                                                    v20);
  System_Collections_Generic_List_int____ctor(
    v28,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v16 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v16,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v58 = v56;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v58,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v58.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v30 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    if ( !v30 )
      sub_1B64324(0LL);
    EntityList = GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)v30,
                   &gachaBonusSelectLineupEntities,
                   current,
                   0LL);
    if ( EntityList )
    {
      v33 = gachaBonusSelectLineupEntities;
      if ( !gachaBonusSelectLineupEntities )
        sub_1B64324(EntityList);
      v34 = gachaBonusSelectLineupEntities->max_length;
      if ( v34 >= 1 )
      {
        for ( i = 0; i < v34; ++i )
        {
          if ( i >= (unsigned int)v34 )
            sub_1B6432C(EntityList, giftId);
          v36 = v33->m_Items[i];
          if ( !v36 )
            sub_1B64324(EntityList);
          if ( !v28 )
            sub_1B64324(EntityList);
          giftId = (unsigned int)v36->fields.giftId;
          v37 = v28->fields._items;
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++v28->fields._version;
          if ( !v37 )
            sub_1B64324(EntityList);
          v39 = v28->fields._size;
          if ( (unsigned int)v39 >= v37->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v28,
              giftId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
          }
          else
          {
            v28->fields._size = v39 + 1;
            v37->m_Items[v39 + 1] = giftId;
          }
          v34 = v33->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v58,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v42 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v40, v41);
  System_Collections_Generic_List_int____ctor(
    v42,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v28 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v28,
    (const MethodInfo_3490A50 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v58 = v56;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v58,
            (const MethodInfo_3225FE4 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v43 = v58.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v44 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !v44 )
      sub_1B64324(0LL);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v44, v43, 0LL);
    v47 = GiftListById;
    if ( !GiftListById )
      sub_1B64324(0LL);
    v48 = *(_QWORD *)&GiftListById->max_length;
    if ( v48 && (int)v48 >= 1 )
    {
      v49 = 0LL;
      do
      {
        if ( (unsigned int)v49 >= (unsigned int)v48 )
          sub_1B6432C(GiftListById, objectId);
        v50 = v47->m_Items[v49];
        if ( !v50 )
          sub_1B64324(GiftListById);
        if ( v50->fields.type == 1 )
        {
          if ( !v42 )
            sub_1B64324(GiftListById);
          objectId = (unsigned int)v50->fields.objectId;
          v51 = v42->fields._items;
          v52 = Method_System_Collections_Generic_List_int__Add__;
          ++v42->fields._version;
          if ( !v51 )
            sub_1B64324(GiftListById);
          v53 = v42->fields._size;
          if ( (unsigned int)v53 >= v51->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v42,
              objectId,
              *(const MethodInfo_348FEDC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
            v48 = *(_QWORD *)&v47->max_length;
          }
          else
          {
            v42->fields._size = v53 + 1;
            v51->m_Items[v53 + 1] = objectId;
          }
        }
        ++v49;
      }
      while ( (int)v49 < (int)v48 );
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v58,
    (const MethodInfo_3225FE0 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v54 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v42,
          (const MethodInfo_2E57DA0 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v54,
                    (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_49F8D5E & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    byte_49F8D5E = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1B64324(this);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1B64324(this);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  Il2CppObject *v11; // x0
  ConstantMaster_o *v12; // x20
  Il2CppObject *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_49F8D4C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, v3);
    sub_1B640C8(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v4);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    sub_1B640C8(&StringLiteral_14762/*"USER_FREE_STONE"*/, v6);
    sub_1B640C8(&StringLiteral_13376/*"TUTORIAL_GACHA_ID"*/, v7);
    byte_49F8D4C = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = (struct GachaMaster_o *)Master_object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.gachaMaster, (int32_t)Master_object, v9, v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v11 )
    sub_1B64324(0LL);
  v12 = (ConstantMaster_o *)v11;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(
                                   (ConstantMaster_o *)v11,
                                   (System_String_o *)StringLiteral_13376/*"TUTORIAL_GACHA_ID"*/,
                                   0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v12, (System_String_o *)StringLiteral_14762/*"USER_FREE_STONE"*/, 0LL);
  v13 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  this->fields.viewGachaFeaturedServantMaster = (struct ViewGachaFeaturedServantMaster_o *)v13;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.viewGachaFeaturedServantMaster, (int32_t)v13, v14, v15);
}


void __fastcall SummonInfoControl__InitStoneSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x0
  struct UserGameEntity_o *usrData; // x8

  SummonInfoControl__InitSummonBtnDisp(this, method);
  SummonInfoControl__SetSummonButtonsCollider(this, 1, v3);
  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1B64324(v4);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  SummonInfoControl___c_c *v7; // x0
  System_Collections_Generic_List_object__o *summonObjInfos; // x20
  System_Action_object__o *_9__132_0; // x21
  Il2CppObject *v10; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49F8D4F & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v4);
    sub_1B640C8(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__132_0__, v5);
    sub_1B640C8(&SummonInfoControl___c_TypeInfo, v6);
    byte_49F8D4F = 1;
  }
  v7 = SummonInfoControl___c_TypeInfo;
  summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos;
  if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v7 = SummonInfoControl___c_TypeInfo;
  }
  _9__132_0 = (System_Action_object__o *)v7->static_fields->__9__132_0;
  if ( !_9__132_0 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SummonInfoControl___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__132_0 = (System_Action_object__o *)sub_1B64314(
                                             System_Action_SummonInfoControl_SummonObjInfo__TypeInfo,
                                             method,
                                             v2);
    System_Action_object____ctor(_9__132_0, v10, Method_SummonInfoControl___c__InitSummonBtnDisp_b__132_0__, 0LL);
    static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    static_fields->__9__132_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__132_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__132_0, (int32_t)_9__132_0, v12, v13);
  }
  if ( !summonObjInfos )
    sub_1B64324(v7);
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)_9__132_0,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


bool __fastcall SummonInfoControl__IsDisplayFeaturedServants(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v4; // x1

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity )
    sub_1B64324(0LL);
  return GachaEntity__HasFlag(CurrentGachaEntity, 16, 0LL)
      && SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, v4) != 0LL;
}


void __fastcall SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  SummonInfoControl_c *v8; // x0
  TweenAlpha_o *v9; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_49F8D63 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v5);
    sub_1B640C8(&SummonInfoControl_TypeInfo, v6);
    this = (SummonInfoControl_o *)sub_1B640C8(&StringLiteral_5919/*"EndAnimation"*/, v7);
    byte_49F8D63 = 1;
  }
  if ( !target )
    goto LABEL_15;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                  target,
                                  (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, float))this->klass[1]._1.castClass)(
    this,
    this->klass[1]._1.declaringType,
    0.0);
  v8 = SummonInfoControl_TypeInfo;
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v8 = SummonInfoControl_TypeInfo;
  }
  v9 = TweenAlpha__Begin(target, v8->static_fields->OPEN_TIME, 1.0, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v9, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v9 )
    {
      v9->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0LL);
      v9->fields.eventReceiver = gameObject;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.eventReceiver, (int32_t)gameObject, v11, v12);
      v13 = StringLiteral_5919/*"EndAnimation"*/;
      v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5919/*"EndAnimation"*/;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v9->fields.callWhenFinished, v13, v14, v15);
      return;
    }
LABEL_15:
    sub_1B64324(this);
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Component_o *v4; // x20
  const MethodInfo *v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct UnityEngine_GameObject_o *summonDetailInfo; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  UnityEngine_Component_c *klass; // x8
  __int64 v16; // x23
  il2cpp_array_size_t v17; // w22
  UnityEngine_GameObject_o *v18; // x21
  struct UnityEngine_Vector3_array *infoButtonLayouts; // x8

  if ( (byte_49F8D4E & 1) == 0 )
  {
    sub_1B640C8(&UnityEngine_GameObject___TypeInfo, method);
    byte_49F8D4E = 1;
  }
  gameObject = (UnityEngine_Component_o *)sub_1B64170(UnityEngine_GameObject___TypeInfo, 4LL);
  if ( !this->fields.possessionInfoButton )
    goto LABEL_27;
  v4 = gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.possessionInfoButton,
                                            0LL);
  if ( !v4 )
    goto LABEL_27;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_26;
  v4[1].monitor = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4[1].monitor, (int32_t)gameObject, v6, v7);
  gameObject = (UnityEngine_Component_o *)this->fields.summonHistoryButton;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( LODWORD(v4[1].klass) <= 1 )
    goto LABEL_26;
  *(_QWORD *)&v4[1].fields.m_CachedPtr = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4[1].fields, (int32_t)gameObject, v8, v9);
  if ( LODWORD(v4[1].klass) <= 2 )
    goto LABEL_26;
  summonDetailInfo = this->fields.summonDetailInfo;
  v4[2].klass = (UnityEngine_Component_c *)summonDetailInfo;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4[2], (int32_t)summonDetailInfo, v10, v11);
  gameObject = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( LODWORD(v4[1].klass) <= 3 )
    goto LABEL_26;
  v4[2].monitor = gameObject;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4[2].monitor, (int32_t)gameObject, v13, v14);
  klass = v4[1].klass;
  if ( (int)klass >= 1 )
  {
    v16 = 0LL;
    v17 = 0;
    while ( (unsigned int)v16 < (unsigned int)klass )
    {
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v4[1].monitor + v16);
      if ( !v18 )
        goto LABEL_27;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                *((UnityEngine_GameObject_o **)&v4[1].monitor + v16),
                                                0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        infoButtonLayouts = this->fields.infoButtonLayouts;
        if ( !infoButtonLayouts )
          goto LABEL_27;
        if ( v17 >= infoButtonLayouts->max_length )
          break;
        GameObjectExtensions__SetLocalPosition(
          v18,
          *(UnityEngine_Vector3_o *)&infoButtonLayouts->m_Items[v17++].fields.y,
          0LL);
      }
      klass = v4[1].klass;
      if ( (int)++v16 >= (int)klass )
        goto LABEL_22;
    }
LABEL_26:
    sub_1B6432C(gameObject, v5);
  }
  v17 = 0;
LABEL_22:
  gameObject = (UnityEngine_Component_o *)this->fields.buttonLayout;
  if ( !gameObject )
LABEL_27:
    sub_1B64324(gameObject);
  if ( v17 == (_DWORD)klass )
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v19; // x20

  if ( (byte_49F8D67 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, callback);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&Method_SummonInfoControl_OnClickDetail__, v6);
    sub_1B640C8(&WebViewManager_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_15485/*"WEB_VIEW_TITLE_SUMMON"*/, v8);
    byte_49F8D67 = 1;
  }
  v9 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1B640E0(Method_SummonInfoControl_OnClickDetail__);
  v10 = (System_Reflection_MethodBase_o *)sub_1B640AC(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1B64324(v11);
  id = currentSummonData->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v15, v16);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v17 = LocalizationManager__Get((System_String_o *)StringLiteral_15485/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v19 = v17;
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v19, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  int64_t v5; // x20
  int32_t DrawNumChangeTime; // w22
  __int64 v7; // x9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // [xsp+20h] [xbp-40h]

  if ( (byte_49F8D64 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&NetworkManager_TypeInfo, v3);
    byte_49F8D64 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v5 = Time;
  if ( BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    DrawNumChangeTime = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
  }
  else
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    Time = (int64_t)BalanceConfig_TypeInfo;
    DrawNumChangeTime = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  }
  if ( !this )
    sub_1B64324(Time);
  v7 = 456LL;
  if ( v5 < DrawNumChangeTime )
    v7 = 452LL;
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus + v7),
    -1,
    -1,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v9);
  SummonInfoControl__ClickBase(this, 0, v8);
}


void __fastcall SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x2
  struct GachaRqParamData_o *requestData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0LL, 0, 0LL, v7);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (requestData->fields.gachaType = 5,
          requestData->fields.gachaResourceNum = this->fields.gachaTime,
          (currentSummonData = this->fields.currentSummonData) == 0LL) )
    {
      sub_1B64324(v3);
    }
    requestData->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v4);
}


void __fastcall SummonInfoControl__OnClickMultiPayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0LL),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v4)) == 0LL) )
  {
    sub_1B64324(CurrentGachaEntity);
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
    v6);
  SummonInfoControl__ClickBase(this, 0, v5);
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
  SummonInfoControl_o *v2; // x19
  int32_t *currentSummonData; // x9
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_49F8D65 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1B640C8(&Method_SummonInfoControl_OnClickSinglePayExGacha__, method);
    byte_49F8D65 = 1;
  }
  if ( v2->fields.isPayExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_1B64324(this);
    SummonInfoControl__SetRequestData(
      v2,
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
      v7);
    SummonInfoControl__ClickBase(v2, 0, v4);
  }
  else
  {
    v5 = Method_SummonInfoControl_OnClickSinglePayExGacha__;
    if ( (*((_BYTE *)Method_SummonInfoControl_OnClickSinglePayExGacha__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B640E0(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B640AC(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0LL);
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
  ServantStatusBattleListViewItem_o *p_animationCallback; // x20
  const MethodInfo *v6; // x2
  int32_t v7; // w3
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *klass; // x19
  __int64 v10; // x0
  const MethodInfo *v11; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8

  p_animationCallback = (ServantStatusBattleListViewItem_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.animationCallback,
    (int32_t)callback,
    (int32_t)method,
    v3);
  beforeSummonData = this->fields.beforeSummonData;
  if ( beforeSummonData
    && (((__int64 (__fastcall *)(struct VaildGachaInfo_o *, struct VaildGachaInfo_o *, Il2CppMethodPointer))beforeSummonData->klass->vtable._0_Equals.method)(
          beforeSummonData,
          this->fields.currentSummonData,
          beforeSummonData->klass->vtable._1_Finalize.methodPtr) & 1) == 0 )
  {
    SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, v6);
    if ( this->fields.isDispPayExSummon )
    {
      oneExSummon = this->fields.oneExSummon;
      if ( !oneExSummon )
        sub_1B64324(v10);
      SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v11);
    }
  }
  else
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_1B6406C(p_animationCallback, 0, (int32_t)v6, v7);
    ActionExtensions__Call(klass, 0LL);
  }
}


void __fastcall SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v6; // x1
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_49F8D62 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, button);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49F8D62 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)button, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !button
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0LL)) == 0LL
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1B64324(gameObject);
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
    sub_1B64324(this);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0LL);
}


void __fastcall SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  const MethodInfo *v12; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v15; // x4
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *v17; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v19; // x4
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *v21; // x8
  const MethodInfo *v22; // x1
  char v23; // w20
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *v25; // x22
  const MethodInfo *v26; // x1
  Il2CppObject *v27; // x0
  UILabel_o *bonusSelectTopLabel; // x21
  System_String_o *Empty; // x1
  struct SummonInfoControl_SummonObjInfo_o *v30; // x8
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *v33; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v35; // s0
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  struct SummonInfoControl_SummonObjInfo_o *v39; // x8
  struct SummonInfoControl_SummonObjParts_o *v40; // x8
  UnityEngine_GameObject_o *v41; // x0
  const MethodInfo *v42; // x6
  struct SummonInfoControl_SummonObjInfo_o *v43; // x8
  int32_t BonusSelectLineupCount; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8D59 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&string_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v4);
    sub_1B640C8(&StringLiteral_3029/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, v5);
    sub_1B640C8(&StringLiteral_3030/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, v6);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v7);
    sub_1B640C8(&StringLiteral_9164/*"N0"*/, v8);
    byte_49F8D59 = 1;
  }
  BonusSelectLineupCount = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v9);
  SummonInfoControl__SetSummonInfo_32901468(this, v10);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_42;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_24883/*"{0}"*/, v12);
  v16 = this->fields.chargeSummon;
  if ( !v16 )
    goto LABEL_42;
  v17 = v16->fields.multiPay;
  if ( !v17 )
    goto LABEL_42;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(
    this,
    v17->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_24834/*"{0:#,0}"*/,
    v15);
  v20 = this->fields.chargeSummon;
  if ( !v20 )
    goto LABEL_42;
  v21 = v20->fields.multiPay;
  if ( !v21 )
    goto LABEL_42;
  SummonInfoControl__SetElevenBonusInfoSingle(
    CurrentGachaEntity,
    this->fields.gachaTime,
    v21->fields.numImg,
    v21->fields.bonusInfo,
    v19);
  CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v22);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0LL);
  if ( !this->fields.bonusSelectLabel )
    goto LABEL_42;
  v23 = (char)CurrentGachaEntity;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v23 & 1, 0LL);
  CurrentGachaEntity = (SummonInfoControl_o *)this->fields.bonusSelectTopLabel;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v23 & 1, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v23 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3030/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, 0LL);
    BonusSelectLineupCount = SummonInfoControl__GetBonusSelectLineupCount(this, v26);
    v27 = (Il2CppObject *)System_Int32__ToString_62180668(
                            (int32_t)&BonusSelectLineupCount,
                            (System_String_o *)StringLiteral_9164/*"N0"*/,
                            0LL);
    CurrentGachaEntity = (SummonInfoControl_o *)System_String__Format(v25, v27, 0LL);
    if ( bonusSelectLabel )
    {
      UILabel__set_text(bonusSelectLabel, (System_String_o *)CurrentGachaEntity, 0LL);
      bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3029/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, 0LL);
      Empty = (System_String_o *)CurrentGachaEntity;
      goto LABEL_24;
    }
LABEL_42:
    sub_1B64324(CurrentGachaEntity);
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
  v30 = this->fields.chargeSummon;
  if ( !v30 )
    goto LABEL_42;
  v31 = v30->fields.multiPay;
  if ( !v31 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v31->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, (v23 & 1) == 0, 0LL);
  v32 = this->fields.chargeSummon;
  if ( !v32 )
    goto LABEL_42;
  v33 = v32->fields.multiPay;
  if ( !v33 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v33->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  v35 = 0.0;
  if ( (v23 & 1) != 0 )
    v35 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v35, 0LL);
  v36 = this->fields.chargeSummon;
  if ( !v36 )
    goto LABEL_42;
  v37 = v36->fields.multiPay;
  if ( !v37 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v37->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalScale_33377528(v38, 1.0, 1.0, 0LL);
  v39 = this->fields.chargeSummon;
  if ( !v39 )
    goto LABEL_42;
  v40 = v39->fields.multiPay;
  if ( !v40 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v40->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0LL);
  GameObjectExtensions__SetLocalPositionY(v41, 0.0, 0LL);
  v43 = this->fields.chargeSummon;
  if ( !v43 )
    goto LABEL_42;
  SummonInfoControl__SetSummonGiftDisp(this, v43->fields.multiPay, 0, 1, 0, 1, v42);
}


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
  int32_t v12; // w2
  int32_t v13; // w3
  struct UnityEngine_GameObject_o **v14; // x8
  struct UnityEngine_GameObject_o *v15; // x1

  v6 = this;
  if ( (byte_49F8D5F & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, summonObjInfo);
    byte_49F8D5F = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_19;
  p_fields = (SummonInfoControl_o **)&summonObjInfo->fields;
  singleSummonInfo = (UnityEngine_Object_o *)summonObjInfo->fields.singleSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v10, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = *p_multiSummonInfo;
    if ( !*p_multiSummonInfo )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isSingle, 0LL);
  }
  v14 = (struct UnityEngine_GameObject_o **)(isSingle ? p_fields : p_multiSummonInfo);
  if ( !v6 )
LABEL_19:
    sub_1B64324(this);
  v15 = *v14;
  v6->fields.currentBtnInfo = *v14;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v6->fields.currentBtnInfo, (int32_t)v15, v12, v13);
}


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
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjParts_o **p_onePay; // x25
  UISprite_o *numImg; // x24
  Il2CppObject *v27; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w23
  UnityEngine_GameObject_o *v30; // x0
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  int v32; // w23
  UISprite_o *v33; // x23
  Il2CppObject *v34; // x0
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x3
  UnityEngine_GameObject_o *v37; // x0
  struct SummonInfoControl_SummonObjParts_o *v38; // x8
  UISprite_o *bonusCount; // x24
  Il2CppObject *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  SummonInfoControl_o *v42; // x0
  const MethodInfo *v43; // x3
  UISprite_o *BonusSprite; // x24
  int v45; // w27
  Il2CppObject *v46; // x0
  SummonInfoControl_o *v47; // x0
  const MethodInfo *v48; // x3
  UISprite_o *v49; // x23
  Il2CppObject *v50; // x0
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  System_String_o **v53; // x23
  const MethodInfo *v54; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  int v56; // [xsp+8h] [xbp-58h] BYREF
  int32_t v57; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_49F8D56 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, ent);
    sub_1B640C8(&int_TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1B640C8(&StringLiteral_17489/*"btn_txt_bonus_10times_plus1"*/, v13);
    sub_1B640C8(&StringLiteral_17473/*"btn_summon_bg2"*/, v14);
    sub_1B640C8(&StringLiteral_17472/*"btn_summon_bg1"*/, v15);
    sub_1B640C8(&StringLiteral_17490/*"btn_txt_bonus_1plus1"*/, v16);
    sub_1B640C8(&StringLiteral_17493/*"btn_txt_bonus_{0}_glow"*/, v17);
    sub_1B640C8(&StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v18);
    sub_1B640C8(&StringLiteral_17491/*"btn_txt_bonus_count_{0}"*/, v19);
    sub_1B640C8(&StringLiteral_22091/*"num1"*/, v20);
    sub_1B640C8(&StringLiteral_17474/*"btn_summon_bg3"*/, v21);
    sub_1B640C8(&StringLiteral_22092/*"num1_glow"*/, v22);
    this = (SummonInfoControl_o *)sub_1B640C8(&StringLiteral_17492/*"btn_txt_bonus_{0}"*/, v23);
    byte_49F8D56 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v57 = oneCount;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v27, 0LL);
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
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPositionY(v30, 30.0, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_93;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  this = (SummonInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  ent->fields.extraGroupId1,
                                  0LL);
  v31 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v32 = (int)this;
  if ( (_DWORD)this != 9 )
  {
    this = (SummonInfoControl_o *)v31->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17489/*"btn_txt_bonus_10times_plus1"*/, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPosition_33375460(v37, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0LL);
    v38 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v38->fields.singleDigit;
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
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v41, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        v42 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        v42,
                        (UnityEngine_GameObject_o *)v42,
                        (System_String_o *)StringLiteral_22091/*"num1"*/,
                        v43);
        v45 = 9 - v32;
        v57 = 9 - v32;
        v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17492/*"btn_txt_bonus_{0}"*/, v46, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0LL);
        v47 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v49 = SummonInfoControl__GetBonusSprite(
                v47,
                (UnityEngine_GameObject_o *)v47,
                (System_String_o *)StringLiteral_22092/*"num1_glow"*/,
                v48);
        v56 = v45;
        v50 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v56);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17493/*"btn_txt_bonus_{0}_glow"*/, v50, 0LL);
        if ( !v49 )
          goto LABEL_93;
        UISprite__set_spriteName(v49, (System_String_o *)this, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v51, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v52, -29.7, 0LL);
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
      v38 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    bonusCount = v38->fields.bonusCount;
    v57 = 9 - v32;
    v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17491/*"btn_txt_bonus_count_{0}"*/, v40, 0LL);
    if ( !bonusCount )
      goto LABEL_93;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
      v53 = (System_String_o **)(ticket ? &StringLiteral_17474/*"btn_summon_bg3"*/ : &StringLiteral_17472/*"btn_summon_bg1"*/);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, *v53, 0LL);
        if ( *p_onePay )
        {
          this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
          if ( this )
          {
            UIButton__set_normalSprite((UIButton_o *)this, *v53, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_1B64324(this);
  }
  v33 = v31->fields.numImg;
  v57 = 2;
  v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v57);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v34, 0LL);
  if ( !v33 )
    goto LABEL_93;
  UISprite__set_spriteName(v33, (System_String_o *)this, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17490/*"btn_txt_bonus_1plus1"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_33375460(v35, 0.0, -35.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17473/*"btn_summon_bg2"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
  if ( !this )
    goto LABEL_93;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17473/*"btn_summon_bg2"*/, 0LL);
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
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v36);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v54);
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
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w21
  Il2CppObject *v12; // x0
  System_String_o *gameObject; // x0
  int32_t v14; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8D57 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, *(_QWORD *)&multiCount);
    sub_1B640C8(&System_Math_TypeInfo, v8);
    sub_1B640C8(&StringLiteral_17488/*"btn_txt_bonus_10plus1"*/, v9);
    sub_1B640C8(&StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v10);
    byte_49F8D57 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_62194364(multiCount, 11, 0LL);
  v14 = v11;
  v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v12, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0LL), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0LL)) == 0LL )
  {
    sub_1B64324(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11 > 10, 0LL);
  if ( v11 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17488/*"btn_txt_bonus_10plus1"*/, 0LL);
}


void __fastcall SummonInfoControl__SetEnableSummonBtn(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  int32_t v3; // w3
  struct VaildGachaInfo_o *currentSummonData; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *gameObject; // x21
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.beforeSummonData,
    (int32_t)currentSummonData,
    (int32_t)method,
    v3);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v8);
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
                                             && (__int64)SummonInfoControl__IsDisplayFeaturedServants(this, v9));
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)currentBtnInfo & 1, 0LL),
        (oneExSummon = this->fields.oneExSummon) == 0LL)
    || (currentBtnInfo = oneExSummon->fields.singleSummonInfo) == 0LL )
  {
LABEL_13:
    sub_1B64324(currentBtnInfo);
  }
  UnityEngine_GameObject__SetActive(currentBtnInfo, this->fields.isDispPayExSummon && isEnable, 0LL);
}


void __fastcall SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  SummonControl_c *v11; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  UnityEngine_GameObject_o *gameObject; // x0
  char v14; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v16; // x22
  Il2CppObject *v17; // x23
  Il2CppObject *v18; // x0
  System_String_o *v19; // x1
  const MethodInfo *v20; // x1
  int64_t Time; // x0
  BalanceConfig_c *v22; // x8
  int64_t v23; // x20
  int64_t DrawNumChangeTime; // x21
  const MethodInfo *v25; // x3
  int32_t v26; // [xsp+8h] [xbp-48h] BYREF
  int32_t v27; // [xsp+Ch] [xbp-44h] BYREF
  int32_t maxNum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49F8D50 & 1) == 0 )
  {
    sub_1B640C8(&BalanceConfig_TypeInfo, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&LocalizationManager_TypeInfo, v4);
    sub_1B640C8(&NetworkManager_TypeInfo, v5);
    sub_1B640C8(&SummonControl_TypeInfo, v6);
    sub_1B640C8(&UserGachaMaster_TypeInfo, v7);
    sub_1B640C8(&StringLiteral_6492/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, v8);
    sub_1B640C8(&StringLiteral_1/*""*/, v9);
    sub_1B640C8(&StringLiteral_1213/*"0"*/, v10);
    byte_49F8D50 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  v11 = SummonControl_TypeInfo;
  if ( !SummonControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
    v11 = SummonControl_TypeInfo;
  }
  FRIEND_POINT_SUMMON_ID = v11->static_fields->FRIEND_POINT_SUMMON_ID;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                                             FRIEND_POINT_SUMMON_ID,
                                             &maxNum[1],
                                             maxNum,
                                             0LL);
  if ( !this->fields.freeSummonCampaignLabel )
    goto LABEL_32;
  v14 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, v14 & 1, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v14 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6492/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0LL);
    v27 = maxNum[1];
    v17 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v27);
    v26 = maxNum[0];
    v18 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_61389768(v16, v17, v18, 0LL);
    v19 = (System_String_o *)gameObject;
  }
  else
  {
    v19 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !freeSummonCampaignLabel )
    goto LABEL_32;
  UILabel__set_text(freeSummonCampaignLabel, v19, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v14 & 1) != 0 || this->fields.isFree )
  {
    gameObject = this->fields.freeSummonCampaignNeedInfo;
    if ( !gameObject )
      goto LABEL_32;
    gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.freeSummonCampaignNeedNum;
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1213/*"0"*/, 0LL);
    if ( this->fields.isFree )
    {
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      Time = NetworkManager__getTime(0LL);
      v22 = BalanceConfig_TypeInfo;
      v23 = Time;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        v22 = BalanceConfig_TypeInfo;
      }
      gameObject = this->fields.freeTxtInfoObj;
      if ( gameObject )
      {
        DrawNumChangeTime = v22->static_fields->DrawNumChangeTime;
        UnityEngine_GameObject__SetActive(gameObject, v23 < DrawNumChangeTime, 0LL);
        gameObject = this->fields.freeTenInfoObj;
        if ( gameObject )
        {
          UnityEngine_GameObject__SetActive(gameObject, v23 >= DrawNumChangeTime, 0LL);
          SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v25);
          return;
        }
      }
LABEL_32:
      sub_1B64324(gameObject);
    }
  }
  SummonInfoControl__SetPointSummonInfo(this, v20);
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1B64324(this);
  UISprite__set_atlas(sprite, this->fields.gachaAtlas, 0LL);
  UISprite__set_spriteName(sprite, spriteName, 0LL);
}


void __fastcall SummonInfoControl__SetHelpBtnDisp(SummonInfoControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *summonHelpInfo; // x0

  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo
    || (summonHelpInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(summonHelpInfo, 0LL)) == 0LL )
  {
    sub_1B64324(summonHelpInfo);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  GachaAppendMaster_o *Master_object; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v19; // w21
  struct VaildGachaInfo_o *v20; // x9
  struct VaildGachaInfo_o *v21; // x10
  GachaAppendEntity_o *v22; // x10
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v25; // x2
  SummonInfoControl_o *v26; // x0
  __int64 v27; // x8
  SummonInfoControl_SummonObjInfo_o *v28; // x20
  float *summonInfoLayout; // x8
  struct SummonInfoControl_SummonObjInfo_o *v30; // x8
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  struct SummonInfoControl_SummonObjInfo_o *v37; // x8
  struct SummonInfoControl_SummonObjParts_o *v38; // x8
  UnityEngine_GameObject_o *v39; // x0
  struct SummonInfoControl_SummonObjInfo_o *v40; // x8
  struct SummonInfoControl_SummonObjParts_o *v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  struct SummonInfoControl_SummonObjInfo_o *v43; // x8
  struct SummonInfoControl_SummonObjParts_o *v44; // x8
  UnityEngine_GameObject_o *v45; // x0
  struct SummonInfoControl_SummonObjInfo_o *v46; // x8
  struct SummonInfoControl_SummonObjParts_o *v47; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v49; // x8
  struct SummonInfoControl_SummonObjParts_o *v50; // x8
  struct SummonInfoControl_SummonObjInfo_o *v51; // x8
  struct SummonInfoControl_SummonObjParts_o *v52; // x8
  struct SummonInfoControl_SummonObjInfo_o *v53; // x8
  struct SummonInfoControl_SummonObjParts_o *v54; // x8
  const MethodInfo *v55; // x3
  struct SummonInfoControl_SummonObjInfo_o *v56; // x8
  struct SummonInfoControl_SummonObjParts_o *v57; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v59; // x8
  struct SummonInfoControl_SummonObjParts_o *v60; // x8
  float v61; // s0
  float v62; // s3
  float v63; // s1
  float v64; // s2
  struct SummonInfoControl_SummonObjInfo_o *v65; // x8
  struct SummonInfoControl_SummonObjParts_o *v66; // x8
  float v67; // s0
  float v68; // s3
  float v69; // s1
  float v70; // s2
  struct SummonInfoControl_SummonObjInfo_o *v71; // x8
  struct SummonInfoControl_SummonObjParts_o *v72; // x8
  const MethodInfo *v73; // x6
  struct SummonInfoControl_SummonObjInfo_o *v74; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8D58 & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, gachaEnt);
    sub_1B640C8(&Method_DataManager_GetMaster_GachaAppendMaster___, v7);
    sub_1B640C8(&DataManager_TypeInfo, v8);
    sub_1B640C8(&SummonInfoControl_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_17475/*"btn_summon_bg5"*/, v10);
    sub_1B640C8(&StringLiteral_17536/*"btn_txt_reset"*/, v11);
    sub_1B640C8(&StringLiteral_20183/*"img_bg_saintquartzuse3"*/, v12);
    sub_1B640C8(&StringLiteral_23577/*"summon_txt_done"*/, v13);
    sub_1B640C8(&StringLiteral_17553/*"btn_txt_summon01"*/, v14);
    sub_1B640C8(&StringLiteral_17527/*"btn_txt_only_1"*/, v15);
    sub_1B640C8(&StringLiteral_1267/*"1"*/, v16);
    byte_49F8D58 = 1;
  }
  appendEnt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_object )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(
                                           Master_object,
                                           gachaEnt,
                                           &appendEnt,
                                           0LL);
  currentSummonData = this->fields.currentSummonData;
  v19 = (int)Master_object;
  v20 = (_DWORD)Master_object ? this->fields.currentSummonData : 0LL;
  v21 = (_DWORD)Master_object ? 0LL : this->fields.currentSummonData;
  if ( (_DWORD)Master_object )
  {
    v22 = appendEnt;
    if ( !appendEnt )
      goto LABEL_78;
    if ( !v20 )
      goto LABEL_78;
    v20->fields.appendPayType = appendEnt->fields.type;
    v20->fields.appendShopIdIndex = v22->fields.idx;
    if ( !currentSummonData )
      goto LABEL_78;
    drawNum = v22->fields.drawNum;
  }
  else
  {
    if ( !v21 )
      goto LABEL_78;
    drawNum = 0;
    v21->fields.appendPayType = 7;
    currentSummonData->fields.appendShopIdIndex = 0;
  }
  currentSummonData->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v19 != 0, 0LL);
  this->fields.isDispPayExSummon = v19 != 0;
  this->fields.isPayExUsePossible = v19 == 2;
  v26 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  v27 = 48LL;
  if ( isTicket )
    v27 = 56LL;
  v28 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v27);
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v26 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  summonInfoLayout = (float *)v26->fields.summonInfoLayout;
  if ( !v19 )
  {
    SummonInfoControl__SetButtonLocalPosX(v26, v28, summonInfoLayout[1], summonInfoLayout[2], v25);
    return;
  }
  SummonInfoControl__SetButtonLocalPosX(v26, v28, summonInfoLayout[4], summonInfoLayout[5], v25);
  v30 = this->fields.oneExSummon;
  if ( !v30 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v30->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v31 = this->fields.oneExSummon;
  if ( !v31 )
    goto LABEL_78;
  single = v31->fields.single;
  if ( !single )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)single->fields.button;
  if ( !Master_object )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X, 0LL);
  v34 = this->fields.oneExSummon;
  if ( !v34 )
    goto LABEL_78;
  v35 = v34->fields.single;
  if ( !v35 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v35->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPosition_33375564(v36, 0.0, 34.0, 0.0, 0LL);
  v37 = this->fields.oneExSummon;
  if ( !v37 )
    goto LABEL_78;
  v38 = v37->fields.single;
  if ( !v38 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v38->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v39, 1.0, 0LL);
  v40 = this->fields.oneExSummon;
  if ( !v40 )
    goto LABEL_78;
  v41 = v40->fields.single;
  if ( !v41 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v41->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScaleX(v42, 1.0, 0LL);
  v43 = this->fields.oneExSummon;
  if ( !v43 )
    goto LABEL_78;
  v44 = v43->fields.single;
  if ( !v44 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v44->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScaleX(v45, 1.0, 0LL);
  v46 = this->fields.oneExSummon;
  if ( !v46 )
    goto LABEL_78;
  v47 = v46->fields.single;
  if ( !v47 )
    goto LABEL_78;
  buttonImg = v47->fields.buttonImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           buttonImg,
                                           (System_String_o *)StringLiteral_17475/*"btn_summon_bg5"*/,
                                           0LL);
  v49 = this->fields.oneExSummon;
  if ( !v49 )
    goto LABEL_78;
  v50 = v49->fields.single;
  if ( !v50 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           v50->fields.bonusCount,
                                           (System_String_o *)StringLiteral_17536/*"btn_txt_reset"*/,
                                           0LL);
  v51 = this->fields.oneExSummon;
  if ( !v51 )
    goto LABEL_78;
  v52 = v51->fields.single;
  if ( !v52 )
    goto LABEL_78;
  AtlasManager__SetEventSprite(v52->fields.bonusInfo, (System_String_o *)StringLiteral_17527/*"btn_txt_only_1"*/, 0LL);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           this->fields.oneExSummonSingleInfoSprite,
                                           (System_String_o *)StringLiteral_20183/*"img_bg_saintquartzuse3"*/,
                                           0LL);
  v53 = this->fields.oneExSummon;
  if ( !v53 )
    goto LABEL_78;
  v54 = v53->fields.single;
  if ( !v54 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v54->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1267/*"1"*/, 0LL);
  v56 = this->fields.oneExSummon;
  if ( !v56 )
    goto LABEL_78;
  v57 = v56->fields.single;
  if ( !v57 )
    goto LABEL_78;
  numImg = v57->fields.numImg;
  if ( this->fields.isPayExUsePossible )
  {
    SummonInfoControl__SetGachaSprite(this, numImg, (System_String_o *)StringLiteral_17553/*"btn_txt_summon01"*/, v55);
  }
  else
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                             numImg,
                                             (System_String_o *)StringLiteral_23577/*"summon_txt_done"*/,
                                             0LL);
  }
  v59 = this->fields.oneExSummon;
  if ( !v59 )
    goto LABEL_78;
  v60 = v59->fields.single;
  if ( !v60 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v60->fields.buttonImg;
  v61 = 1.0;
  if ( !this->fields.isPayExUsePossible )
    v61 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v62 = 1.0;
  v63 = v61;
  v64 = v61;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v61, 0LL);
  v65 = this->fields.oneExSummon;
  if ( !v65 )
    goto LABEL_78;
  v66 = v65->fields.single;
  if ( !v66 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v66->fields.button;
  v67 = 1.0;
  if ( !this->fields.isPayExUsePossible )
    v67 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v68 = 1.0;
  v69 = v67;
  v70 = v67;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)Master_object, *(UnityEngine_Color_o *)&v67, 0LL);
  v71 = this->fields.oneExSummon;
  if ( !v71
    || (v72 = v71->fields.single) == 0LL
    || (Master_object = (GachaAppendMaster_o *)v72->fields.numImg) == 0LL
    || (Master_object = (GachaAppendMaster_o *)((__int64 (__fastcall *)(GachaAppendMaster_o *, Il2CppMethodPointer))Master_object->klass[1].vtable._5_ForForceDerived.method)(
                                                 Master_object,
                                                 Master_object->klass[1].vtable._6_preProcess.methodPtr),
        (v74 = this->fields.oneExSummon) == 0LL) )
  {
LABEL_78:
    sub_1B64324(Master_object);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v74->fields.single, 0, 0, 1, 0, v73);
}


void __fastcall SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v5; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaEntity_o *v7; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  ticketNum = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v3);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1B64324(CurrentGachaEntity);
  v7 = CurrentGachaEntity;
  if ( currentSummonData->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v5);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v5) )
  {
    SummonInfoControl__TicketGacha(this, v7, ticketNum, v9);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v7, v8);
  }
}


void __fastcall SummonInfoControl__SetPointSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x0
  DataManager_o *MasterData_object; // x0
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v13; // x1
  int m_CancellationTokenSource; // w21
  int32_t Price; // w0
  int32_t v16; // w20
  int v17; // w0
  const MethodInfo *v18; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v20; // x4
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  struct SummonInfoControl_SummonObjInfo_o *v23; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x20
  Il2CppObject *v26; // x0
  const MethodInfo *v27; // x4
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v30; // x4
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  int32_t gachaTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_49F8D51 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_1B640C8(&int_TypeInfo, v3);
    sub_1B640C8(&System_Math_TypeInfo, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v6);
    sub_1B640C8(&StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v7);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v8);
    byte_49F8D51 = 1;
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1BB5FA4(v9);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1BB5FA4(v10);
  MasterData_object = **(DataManager_o ***)(v10 + 184);
  if ( !MasterData_object )
    goto LABEL_26;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_TblUserMaster___);
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
  MasterData_object = (DataManager_o *)SummonInfoControl__get_CurrentGachaEntity(this, v13);
  if ( !MasterData_object )
    goto LABEL_26;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_object, 0LL);
  this->fields.price = Price;
  v16 = Price;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = System_Math__Min_62194364(m_CancellationTokenSource / v16, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v17;
  if ( v17 < 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v18);
    v21 = this->fields.friendPointSummon;
    if ( v21 )
    {
      single = v21->fields.single;
      if ( single )
      {
        SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_24883/*"{0}"*/, v20);
        return;
      }
    }
LABEL_26:
    sub_1B64324(MasterData_object);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v18);
  v23 = this->fields.friendPointSummon;
  if ( !v23 )
    goto LABEL_26;
  multiPay = v23->fields.multiPay;
  if ( !multiPay )
    goto LABEL_26;
  numImg = multiPay->fields.numImg;
  gachaTime = this->fields.gachaTime;
  v26 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
  MasterData_object = (DataManager_o *)System_String__Format((System_String_o *)StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v26, 0LL);
  if ( !numImg )
    goto LABEL_26;
  UISprite__set_spriteName(numImg, (System_String_o *)MasterData_object, 0LL);
  v28 = this->fields.friendPointSummon;
  if ( !v28 )
    goto LABEL_26;
  onePay = v28->fields.onePay;
  if ( !onePay )
    goto LABEL_26;
  SummonInfoControl__SetPriceText(
    this,
    onePay->fields.infoLabel,
    this->fields.price,
    (System_String_o *)StringLiteral_24834/*"{0:#,0}"*/,
    v27);
  v31 = this->fields.friendPointSummon;
  if ( !v31 )
    goto LABEL_26;
  v32 = v31->fields.multiPay;
  if ( !v32 )
    goto LABEL_26;
  SummonInfoControl__SetPriceText(
    this,
    v32->fields.infoLabel,
    this->fields.gachaTime * this->fields.price,
    (System_String_o *)StringLiteral_24834/*"{0:#,0}"*/,
    v30);
}


void __fastcall SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  int32_t v11; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49F8D5A & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, label);
    byte_49F8D5A = 1;
  }
  if ( (price & 0x80000000) != 0 )
    price = this->fields.price;
  v11 = price;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_1B64324(v10);
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
  int32_t id; // w24
  int32_t summonType; // w22
  SummonInfoControl_o *v22; // x21
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct VaildGachaInfo_o *v24; // x8
  struct VaildGachaInfo_o *v25; // x8
  struct VaildGachaInfo_o *v26; // x8
  int v27; // w26
  GachaRqParamData_o *v28; // x27
  int32_t v29; // w2
  int32_t v30; // w3

  adjustStoryGachaIds = storyAdjustIds;
  v14 = gachaSubId;
  id = gachaId;
  summonType = gachaType;
  v22 = this;
  if ( (byte_49F8D60 & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    this = (SummonInfoControl_o *)sub_1B640C8(&GachaRqParamData_TypeInfo, *(_QWORD *)&gachaType);
    byte_49F8D60 = 1;
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
    if ( (warId & 0x80000000) == 0 )
      goto LABEL_5;
    goto LABEL_14;
  }
LABEL_12:
  currentSummonData = v22->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_25;
  id = currentSummonData->fields.id;
  if ( (warId & 0x80000000) == 0 )
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
  warId = v24->fields.warId;
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
    sub_1B64324(this);
  adjustStoryGachaIds = v26->fields.adjustStoryGachaIds;
LABEL_22:
  v27 = ticketItemId & ~(ticketItemId >> 31);
  if ( shopIdIdx < 0 )
    shopIdIdx = 1;
  v28 = (GachaRqParamData_o *)sub_1B64314(GachaRqParamData_TypeInfo, *(_QWORD *)&gachaType, *(_QWORD *)&gachaId);
  GachaRqParamData___ctor_32764036(
    v28,
    summonType,
    id,
    warId,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v22->fields.requestData, (int32_t)v28, v29, v30);
}


void __fastcall SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1B64324(this);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__SetSummonButtonsCollider(
        SummonInfoControl_o *this,
        bool onOff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *summonObjInfos; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_object__o *v15; // x20

  if ( (byte_49F8D61 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, onOff);
    sub_1B640C8(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v5);
    sub_1B640C8(&Method_SummonInfoControl___c__DisplayClass157_0__SetSummonButtonsCollider_b__0__, v6);
    sub_1B640C8(&SummonInfoControl___c__DisplayClass157_0_TypeInfo, v7);
    byte_49F8D61 = 1;
  }
  v8 = sub_1B64314(SummonInfoControl___c__DisplayClass157_0_TypeInfo, onOff, method);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v10, v11),
        *(_BYTE *)(v8 + 24) = onOff,
        summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos,
        v15 = (System_Action_object__o *)sub_1B64314(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, v13, v14),
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v8,
          Method_SummonInfoControl___c__DisplayClass157_0__SetSummonButtonsCollider_b__0__,
          0LL),
        !summonObjInfos) )
  {
    sub_1B64324(v9);
  }
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)v15,
    (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void __fastcall SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  const MethodInfo *v7; // x2
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  System_Action_int__o *v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_49F8D4D & 1) == 0 )
  {
    sub_1B640C8(&System_Action_int__TypeInfo, method);
    sub_1B640C8(&Method_SummonInfoControl__SetSummonDispInfo_b__129_0__, v3);
    byte_49F8D4D = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v5, v6);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v7);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton) == 0LL)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        summonDetailInfo = (UnityEngine_GameObject_o *)SummonInfoControl__IsDisplayFeaturedServants(this, v10),
        !gameObject) )
  {
    sub_1B64324(summonDetailInfo);
  }
  UnityEngine_GameObject__SetActive(gameObject, (unsigned __int8)summonDetailInfo & 1, 0LL);
  *(_WORD *)&this->fields.isPayExUsePossible = 0;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = (System_Action_int__o *)sub_1B64314(System_Action_int__TypeInfo, v12, v13);
  System_Action_int____ctor(v14, (Il2CppObject *)this, Method_SummonInfoControl__SetSummonDispInfo_b__129_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v11, v14, 0, 0LL);
  SummonInfoControl__SetUpSummonInfos(this, v15);
  SummonInfoControl__OffSetInfoBtn(this, v16);
}


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
  __int64 v30; // x2
  System_String_o *v31; // x20
  SummonInfoControl___c_c *v32; // x8
  System_Func_T__TResult__o *_9__151_0; // x25
  Il2CppObject *v34; // x26
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  SummonInfoControl_o *v39; // x20
  __int64 v40; // x1
  __int64 v41; // x2
  System_String_o *v42; // x20
  SummonInfoControl___c_c *v43; // x8
  System_Func_T__TResult__o *_9__151_1; // x23
  Il2CppObject *v45; // x24
  struct SummonInfoControl___c_StaticFields *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  System_String_o *v52; // x20
  SummonInfoControl___c_c *v53; // x8
  System_Func_T__TResult__o *_9__151_3; // x21
  Il2CppObject *v55; // x22
  struct SummonInfoControl___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v59; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v61; // x0
  UnityEngine_GameObject_o *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v65; // x0
  UnityEngine_GameObject_o *v66; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SummonInfoControl_o *v68; // x0
  const MethodInfo *v69; // x3
  UnityEngine_Object_o *v70; // x22
  SummonInfoControl_o *v71; // x0
  const MethodInfo *v72; // x3
  UnityEngine_Object_o *v73; // x21
  SummonInfoControl_o *v74; // x0
  const MethodInfo *v75; // x3
  UISprite_o *v76; // x23
  _BOOL8 v77; // x0
  __int64 v78; // x1
  System_String_o *v79; // x0
  Il2CppObject *friendPointSummon; // x1
  System_String_o *v81; // x0
  int v82; // w21
  bool v83; // w1
  SummonInfoControl_o *v84; // x0
  const MethodInfo *v85; // x3
  UnityEngine_Component_o *v86; // x24
  SummonInfoControl_o *v87; // x0
  const MethodInfo *v88; // x3
  UnityEngine_Component_o *v89; // x23
  SummonInfoControl_o *v90; // x0
  const MethodInfo *v91; // x3
  UISprite_o *v92; // x22
  SummonInfoControl_o *v93; // x0
  const MethodInfo *v94; // x3
  SummonInfoControl_o *v95; // x0
  const MethodInfo *v96; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v98; // x0
  System_String_o *v99; // x0
  __int64 v100; // x1
  __int64 v101; // x2
  System_String_o *v102; // x20
  SummonInfoControl___c_c *v103; // x8
  System_Func_T__TResult__o *_9__151_2; // x23
  Il2CppObject *v105; // x24
  struct SummonInfoControl___c_StaticFields *v106; // x0
  int32_t v107; // w2
  int32_t v108; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v109; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v112; // x0
  UnityEngine_GameObject_o *v113; // x0

  v12 = this;
  if ( (byte_49F8D5D & 1) == 0 )
  {
    sub_1B640C8(&AtlasManager_TypeInfo, summonObjParts);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_char__string___, v13);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_string___, v14);
    sub_1B640C8(&System_Func_char__string__TypeInfo, v15);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v16);
    sub_1B640C8(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_0__, v17);
    sub_1B640C8(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_1__, v18);
    sub_1B640C8(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_2__, v19);
    sub_1B640C8(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_3__, v20);
    sub_1B640C8(&SummonInfoControl___c_TypeInfo, v21);
    sub_1B640C8(&StringLiteral_17493/*"btn_txt_bonus_{0}_glow"*/, v22);
    sub_1B640C8(&StringLiteral_22093/*"num2"*/, v23);
    sub_1B640C8(&StringLiteral_22091/*"num1"*/, v24);
    sub_1B640C8(&StringLiteral_8068/*"Item"*/, v25);
    sub_1B640C8(&StringLiteral_22092/*"num1_glow"*/, v26);
    sub_1B640C8(&StringLiteral_22094/*"num2_glow"*/, v27);
    this = (SummonInfoControl_o *)sub_1B640C8(&StringLiteral_17492/*"btn_txt_bonus_{0}"*/, v28);
    byte_49F8D5D = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v31 = System_Int32__ToString((int)v12 + 360, 0LL);
    v32 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v32 = SummonInfoControl___c_TypeInfo;
    }
    _9__151_0 = (System_Func_T__TResult__o *)v32->static_fields->__9__151_0;
    if ( !_9__151_0 )
    {
      if ( !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        v32 = SummonInfoControl___c_TypeInfo;
      }
      v34 = (Il2CppObject *)v32->static_fields->__9;
      _9__151_0 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_char__string__TypeInfo, v29, v30);
      System_Func_char__object____ctor(_9__151_0, v34, Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_0__, 0LL);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__151_0 = (struct System_Func_char__string__o *)_9__151_0;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__151_0, (int32_t)_9__151_0, v36, v37);
    }
    v38 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v31,
                                                                 (System_Func_TSource__TResult__o *)_9__151_0,
                                                                 (const MethodInfo_2E6638C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v38,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
    v39 = this;
    if ( !isMulti )
      goto LABEL_22;
  }
  else
  {
    v39 = 0LL;
    if ( !isMulti )
      goto LABEL_22;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v42 = System_Int32__ToString((int)v12 + 364, 0LL);
    v43 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v43 = SummonInfoControl___c_TypeInfo;
    }
    _9__151_1 = (System_Func_T__TResult__o *)v43->static_fields->__9__151_1;
    if ( !_9__151_1 )
    {
      if ( !v43->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v43);
        v43 = SummonInfoControl___c_TypeInfo;
      }
      v45 = (Il2CppObject *)v43->static_fields->__9;
      _9__151_1 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_char__string__TypeInfo, v40, v41);
      System_Func_char__object____ctor(_9__151_1, v45, Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_1__, 0LL);
      v46 = SummonInfoControl___c_TypeInfo->static_fields;
      v46->__9__151_1 = (struct System_Func_char__string__o *)_9__151_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v46->__9__151_1, (int32_t)_9__151_1, v47, v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v42,
                                                                 (System_Func_TSource__TResult__o *)_9__151_1,
                                                                 (const MethodInfo_2E6638C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v49,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
    v39 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v102 = System_Int32__ToString((int)v12 + 360, 0LL);
    v103 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v103 = SummonInfoControl___c_TypeInfo;
    }
    _9__151_2 = (System_Func_T__TResult__o *)v103->static_fields->__9__151_2;
    if ( !_9__151_2 )
    {
      if ( !v103->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v103);
        v103 = SummonInfoControl___c_TypeInfo;
      }
      v105 = (Il2CppObject *)v103->static_fields->__9;
      _9__151_2 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_char__string__TypeInfo, v100, v101);
      System_Func_char__object____ctor(_9__151_2, v105, Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_2__, 0LL);
      v106 = SummonInfoControl___c_TypeInfo->static_fields;
      v106->__9__151_2 = (struct System_Func_char__string__o *)_9__151_2;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v106->__9__151_2, (int32_t)_9__151_2, v107, v108);
    }
    v109 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v102,
                                                                  (System_Func_TSource__TResult__o *)_9__151_2,
                                                                  (const MethodInfo_2E6638C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v109,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v39 = this;
    button = (UnityEngine_Object_o *)summonObjParts->fields.button;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        GameObjectExtensions__SetLocalScale_33377468(gameObject, 0.9, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        v112 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v112, -6.0, 0LL);
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
        v113 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v113, 45.0, 0LL);
      }
    }
  }
LABEL_22:
  if ( isSingle && v12->fields.appendGiftNum )
  {
    v52 = System_Int32__ToString((int)v12 + 368, 0LL);
    v53 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v53 = SummonInfoControl___c_TypeInfo;
    }
    _9__151_3 = (System_Func_T__TResult__o *)v53->static_fields->__9__151_3;
    if ( !_9__151_3 )
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        v53 = SummonInfoControl___c_TypeInfo;
      }
      v55 = (Il2CppObject *)v53->static_fields->__9;
      _9__151_3 = (System_Func_T__TResult__o *)sub_1B64314(System_Func_char__string__TypeInfo, v50, v51);
      System_Func_char__object____ctor(_9__151_3, v55, Method_SummonInfoControl___c__SetSummonGiftDisp_b__151_3__, 0LL);
      v56 = SummonInfoControl___c_TypeInfo->static_fields;
      v56->__9__151_3 = (struct System_Func_char__string__o *)_9__151_3;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&v56->__9__151_3, (int32_t)_9__151_3, v57, v58);
    }
    v59 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v52,
                                                                 (System_Func_TSource__TResult__o *)_9__151_3,
                                                                 (const MethodInfo_2E6638C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v59,
                                    (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v39 = this;
    bonusCount = (UnityEngine_Object_o *)summonObjParts->fields.bonusCount;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v61 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v61, 42.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v62 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v62, -34.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v63, 0.9, 0LL);
      }
    }
    bonusInfo = (UnityEngine_Object_o *)summonObjParts->fields.bonusInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v65, -60.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v66, 0.9, 0LL);
      }
    }
  }
  if ( !v39 || (m_CancellationTokenSource = v39->fields.m_CancellationTokenSource) == 0LL )
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
    v84 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v84,
                                    (UnityEngine_GameObject_o *)v84,
                                    (System_String_o *)StringLiteral_22091/*"num1"*/,
                                    v85);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v86 = (UnityEngine_Component_o *)this;
    v87 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v87,
                                    (UnityEngine_GameObject_o *)v87,
                                    (System_String_o *)StringLiteral_22093/*"num2"*/,
                                    v88);
    if ( !v86 )
      goto LABEL_131;
    v89 = (UnityEngine_Component_o *)this;
    v90 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v86, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v90,
                                    (UnityEngine_GameObject_o *)v90,
                                    (System_String_o *)StringLiteral_22092/*"num1_glow"*/,
                                    v91);
    if ( !v89 )
      goto LABEL_131;
    v92 = (UISprite_o *)this;
    v93 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v89, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v93,
                                    (UnityEngine_GameObject_o *)v93,
                                    (System_String_o *)StringLiteral_22094/*"num2_glow"*/,
                                    v94);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v73 = (UnityEngine_Object_o *)this;
    v95 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    v95,
                    (UnityEngine_GameObject_o *)v95,
                    (System_String_o *)StringLiteral_8068/*"Item"*/,
                    v96);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(BonusSprite, 7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v86, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v89, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v92, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v77 = UnityEngine_Object__op_Inequality(v73, 0LL, 0LL);
          if ( v77 )
          {
            if ( LODWORD(v39->fields.m_CancellationTokenSource) )
            {
              v98 = System_String__Format(
                      (System_String_o *)StringLiteral_17492/*"btn_txt_bonus_{0}"*/,
                      (Il2CppObject *)v39->fields.freeSummon,
                      0LL);
              UISprite__set_spriteName((UISprite_o *)v86, v98, 0LL);
              if ( LODWORD(v39->fields.m_CancellationTokenSource) > 1 )
              {
                v99 = System_String__Format(
                        (System_String_o *)StringLiteral_17492/*"btn_txt_bonus_{0}"*/,
                        (Il2CppObject *)v39->fields.friendPointSummon,
                        0LL);
                UISprite__set_spriteName((UISprite_o *)v89, v99, 0LL);
                if ( LODWORD(v39->fields.m_CancellationTokenSource) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17493/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v39->fields.freeSummon,
                                                  0LL);
                  if ( !v92 )
                    goto LABEL_131;
                  UISprite__set_spriteName(v92, (System_String_o *)this, 0LL);
                  if ( LODWORD(v39->fields.m_CancellationTokenSource) > 1 )
                  {
                    friendPointSummon = (Il2CppObject *)v39->fields.friendPointSummon;
                    v81 = (System_String_o *)StringLiteral_17493/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_68;
                  }
                }
              }
            }
LABEL_132:
            sub_1B6432C(v77, v78);
          }
        }
      }
    }
LABEL_71:
    v82 = 0;
    goto LABEL_72;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  v68 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v68,
                                  (UnityEngine_GameObject_o *)v68,
                                  (System_String_o *)StringLiteral_22091/*"num1"*/,
                                  v69);
  if ( !this )
    goto LABEL_131;
  v70 = (UnityEngine_Object_o *)this;
  v71 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v71,
                                  (UnityEngine_GameObject_o *)v71,
                                  (System_String_o *)StringLiteral_22092/*"num1_glow"*/,
                                  v72);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_131;
  v73 = (UnityEngine_Object_o *)this;
  v74 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)summonObjParts->fields.singleDigit,
                                 0LL);
  v76 = SummonInfoControl__GetBonusSprite(
          v74,
          (UnityEngine_GameObject_o *)v74,
          (System_String_o *)StringLiteral_8068/*"Item"*/,
          v75);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v76, 7, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v70, 0LL, 0LL) )
    goto LABEL_71;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v77 = UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
  if ( !v77 )
    goto LABEL_71;
  if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  v79 = System_String__Format((System_String_o *)StringLiteral_17492/*"btn_txt_bonus_{0}"*/, (Il2CppObject *)v39->fields.freeSummon, 0LL);
  UISprite__set_spriteName((UISprite_o *)v70, v79, 0LL);
  if ( !LODWORD(v39->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  friendPointSummon = (Il2CppObject *)v39->fields.freeSummon;
  v81 = (System_String_o *)StringLiteral_17493/*"btn_txt_bonus_{0}_glow"*/;
LABEL_68:
  this = (SummonInfoControl_o *)System_String__Format(v81, friendPointSummon, 0LL);
  if ( !v73 )
    goto LABEL_131;
  UISprite__set_spriteName((UISprite_o *)v73, (System_String_o *)this, 0LL);
  v82 = 1;
LABEL_72:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v82 )
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
          v83 = 0;
          goto LABEL_83;
        }
      }
    }
LABEL_131:
    sub_1B64324(this);
  }
  if ( !v39 )
    goto LABEL_131;
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    SLODWORD(v39->fields.m_CancellationTokenSource) < 2,
    0LL);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_131;
  v83 = SLODWORD(v39->fields.m_CancellationTokenSource) > 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v83, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  char *Instance; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v7; // x1
  __int64 v8; // x8
  char *v9; // x20
  __int64 v10; // x22
  char *v11; // x23
  __int64 v12; // x9
  __int64 v13; // x8
  __int64 v14; // x9
  int v15; // w9

  if ( (byte_49F8D5C & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, method);
    sub_1B640C8(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_49F8D5C = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !Instance )
    {
LABEL_31:
      sub_1B64324(Instance);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0LL);
    if ( Instance )
    {
      v8 = *((_QWORD *)Instance + 3);
      v9 = Instance;
      if ( v8 )
      {
        if ( (int)v8 >= 1 )
        {
          v10 = 0LL;
          v11 = Instance + 32;
          do
          {
            if ( (unsigned int)v10 >= (unsigned int)v8 )
LABEL_32:
              sub_1B6432C(Instance, v7);
            v12 = *(_QWORD *)&v11[8 * v10];
            if ( !v12 )
              goto LABEL_31;
            if ( *(_DWORD *)(v12 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v10 >= *((_DWORD *)v9 + 6) )
                goto LABEL_32;
              v13 = *(_QWORD *)&v11[8 * v10];
              if ( !v13 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v13 + 24), 0LL);
              v8 = *((_QWORD *)v9 + 3);
              if ( (unsigned int)v10 >= (unsigned int)v8 )
                goto LABEL_32;
              v14 = *(_QWORD *)&v11[8 * v10];
              if ( !v14 )
                goto LABEL_31;
              v15 = *(_DWORD *)(v14 + 20);
              switch ( v15 )
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
            ++v10;
          }
          while ( (int)v10 < (int)v8 );
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
  UIAtlas_o *Component_object; // x0

  if ( (byte_49F8D68 & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, bannerAtlas);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v7);
    byte_49F8D68 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_object, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonHistoryButton) == 0LL) )
    {
      sub_1B64324(Component_object);
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
  int32_t v6; // w2
  int32_t v7; // w3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0LL;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_1B64324(this);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method);
  this->fields.currentSummonData = gachaData;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.currentSummonData, (int32_t)gachaData, v6, v7);
  SummonInfoControl__SetSummonGiftInfo(this, v8);
  SummonInfoControl__SetSummonDispInfo(this, v9);
}


void __fastcall SummonInfoControl__SetSummonInfo_32901468(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int klass; // w22
  int32_t PayOneTimePrice; // w21
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x20
  int klass_high; // w22
  int32_t PayMultiTimePrice; // w21
  __int64 v15; // x1
  __int64 v16; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8D5B & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1B640C8(&DataManager_TypeInfo, v3);
    sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v4);
    sub_1B640C8(&SummonInfoControl_SummonInfo_TypeInfo, v5);
    byte_49F8D5B = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          currentSummonData->fields.id,
          (const MethodInfo_30D3EF8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity )
    goto LABEL_17;
  if ( SHIDWORD(entity[3].klass) >= 1 )
  {
    klass = (int)entity[4].klass;
    PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
    v12 = sub_1B64314(SummonInfoControl_SummonInfo_TypeInfo, v10, v11);
    System_Object___ctor((Il2CppObject *)v12, 0LL);
    *(_DWORD *)(v12 + 16) = klass;
    *(_DWORD *)(v12 + 20) = PayOneTimePrice;
    *(_DWORD *)(v12 + 24) = 1;
    Master_object = entity;
    if ( entity )
    {
      if ( SLODWORD(entity[3].monitor) < 1 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_17:
    sub_1B64324(Master_object);
  }
  if ( SLODWORD(entity[3].monitor) < 1 )
    return;
LABEL_14:
  klass_high = HIDWORD(Master_object[4].klass);
  PayMultiTimePrice = GachaEntity__getPayMultiTimePrice((GachaEntity_o *)Master_object, 0LL);
  v12 = sub_1B64314(SummonInfoControl_SummonInfo_TypeInfo, v15, v16);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  *(_DWORD *)(v12 + 16) = klass_high;
  *(_DWORD *)(v12 + 20) = PayMultiTimePrice;
  *(_DWORD *)(v12 + 24) = 2;
LABEL_15:
  *(int32x2_t *)&this->fields.price = vrev64_s32(*(int32x2_t *)(v12 + 16));
  this->fields.shopIdIdx = *(_DWORD *)(v12 + 24);
}


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
    sub_1B64324(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL);
}


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
    sub_1B64324(this);
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
      sub_1B64324(possessionInfoButton);
  }
}


void __fastcall SummonInfoControl__StoneGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SummonInfoControl_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v11; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v15; // x4
  const MethodInfo *v16; // x6
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  const MethodInfo *v18; // x6
  struct SummonInfoControl_SummonObjInfo_o *v19; // x8
  const MethodInfo *v20; // x5
  const MethodInfo *v21; // x1
  int gachaTime; // w8
  System_String_o *v23; // x20
  Il2CppObject *v24; // x0
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  SummonInfoControl_o *v27; // x1
  const MethodInfo *v28; // x4
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *v30; // x8
  int v31; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_49F8D55 & 1) == 0 )
  {
    sub_1B640C8(&int_TypeInfo, payGachaEnt);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v6);
    this = (SummonInfoControl_o *)sub_1B640C8(&StringLiteral_17554/*"btn_txt_summon{0:00}"*/, v7);
    byte_49F8D55 = 1;
  }
  if ( !payGachaEnt )
    goto LABEL_21;
  if ( payGachaEnt->fields.shopId1 >= 1 && payGachaEnt->fields.shopId2 > 0 )
  {
    SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 0, v3);
    v5->fields.gachaTime = payGachaEnt->fields.drawNum1;
    this = (SummonInfoControl_o *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
    stoneSummon = v5->fields.stoneSummon;
    v5->fields.price = (int)this;
    v5->fields.shopIdIdx = 1;
    if ( stoneSummon )
    {
      onePay = stoneSummon->fields.onePay;
      if ( onePay )
      {
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_24883/*"{0}"*/, v8);
        v11 = v5->fields.stoneSummon;
        if ( v11 )
        {
          multiPay = v11->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_24883/*"{0}"*/,
              v15);
            v17 = v5->fields.stoneSummon;
            if ( v17 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v17->fields.onePay, 1, 0, 0, 0, v16);
              v19 = v5->fields.stoneSummon;
              if ( v19 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v19->fields.multiPay, 0, 1, 0, 0, v18);
                SummonInfoControl__SetElevenBonusInfo(
                  v5,
                  payGachaEnt,
                  0,
                  v5->fields.stoneSummon,
                  v5->fields.gachaTime,
                  v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1B64324(this);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_32901468(v5, v21);
  gachaTime = v5->fields.gachaTime;
  v23 = (System_String_o *)StringLiteral_17554/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v31 = gachaTime;
  v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v31);
  this = (SummonInfoControl_o *)System_String__Format(v23, v24, 0LL);
  v25 = v5->fields.stoneSummon;
  if ( !v25 )
    goto LABEL_21;
  single = v25->fields.single;
  if ( !single )
    goto LABEL_21;
  v27 = this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)v27, 0LL);
  v29 = v5->fields.stoneSummon;
  if ( !v29 )
    goto LABEL_21;
  v30 = v29->fields.single;
  if ( !v30 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v30->fields.infoLabel, -1, (System_String_o *)StringLiteral_24883/*"{0}"*/, v28);
}


void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  const MethodInfo *v9; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v12; // x4
  struct SummonInfoControl_SummonObjInfo_o *v13; // x8
  struct SummonInfoControl_SummonObjParts_o *v14; // x8
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v19; // x4
  const MethodInfo *v20; // x6
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  const MethodInfo *v22; // x5

  if ( (byte_49F8D54 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, payGachaEnt);
    sub_1B640C8(&StringLiteral_24834/*"{0:#,0}"*/, v7);
    byte_49F8D54 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_24883/*"{0}"*/, v9);
  v13 = this->fields.ticketSummon;
  if ( !v13 )
    goto LABEL_12;
  v14 = v13->fields.onePay;
  if ( !v14
    || (SummonInfoControl__SetPriceText(
          this,
          v14->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_24834/*"{0:#,0}"*/,
          v12),
        (v15 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v15->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_24883/*"{0}"*/, v19),
        (v21 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_1B64324(v8);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v21->fields.multiPay, 0, 1, 0, 0, v20);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v22);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v9; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49F8D53 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserItemMaster___, ticketNum);
    sub_1B640C8(&DataManager_TypeInfo, v5);
    byte_49F8D53 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserItemMaster___);
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
      v9 = entity->fields.num > 0;
LABEL_12:
      num = entity->fields.num;
      result = v9;
      goto LABEL_13;
    }
LABEL_14:
    sub_1B64324(Master_object);
  }
  v9 = 0;
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
  __int64 v7; // x1
  Il2CppObject *Master_object; // x0
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  __int64 v12; // x9
  const MethodInfo *v13; // x6
  int32_t v14; // w8
  struct SummonInfoControl_SummonObjInfo_o *v15; // x9
  const MethodInfo *v16; // x4
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v19; // x4
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *v21; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_49F8D52 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMaster_UserServantMaster___, payGachaEnt);
    sub_1B640C8(&DataManager_TypeInfo, v6);
    sub_1B640C8(&StringLiteral_24883/*"{0}"*/, v7);
    byte_49F8D52 = 1;
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
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)UserServantMaster__getCountWithoutMaterial(
                                    (UserServantMaster_o *)Master_object,
                                    &servantEquipSum[1],
                                    servantEquipSum,
                                    0LL);
  if ( !payGachaEnt )
    goto LABEL_19;
  v12 = 64LL;
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
    v12 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v12);
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL);
    v14 = 2;
  }
  else
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
    v14 = 1;
  }
  v15 = this->fields.stoneSummon;
  this->fields.price = (int)Master_object;
  this->fields.shopIdIdx = v14;
  if ( !v15
    || (SummonInfoControl__SetSummonGiftDisp(this, v15->fields.single, 0, 1, 0, 0, v13),
        (v17 = this->fields.stoneSummon) == 0LL)
    || (single = v17->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_24883/*"{0}"*/, v16),
        (v20 = this->fields.stoneSummon) == 0LL)
    || (v21 = v20->fields.single) == 0LL )
  {
LABEL_19:
    sub_1B64324(Master_object);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_object,
    this->fields.gachaTime,
    v21->fields.numImg,
    v21->fields.bonusInfo,
    v19);
}


void __fastcall SummonInfoControl___SetSummonDispInfo_b__129_0(
        SummonInfoControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  UserGameEntity_o *v5; // x8
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0LL;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0LL);
  if ( SelfUserGame )
  {
    v5 = entity;
    if ( !entity )
      sub_1B64324(SelfUserGame);
    this->fields.haveStoneNum = entity->fields.stone;
    *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&v5->fields.freeStone;
  }
}


GachaEntity_o *__fastcall SummonInfoControl__get_CurrentGachaEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v2 = this;
  if ( (byte_49F8D4A & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1B640C8(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, method);
    byte_49F8D4A = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0LL )
    sub_1B64324(this);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_30D3EA4 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
    sub_1B64324(this);
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
  __int64 v4; // x8
  __int64 v6; // x20
  int v8; // w22
  Il2CppObject *v9; // x8
  struct System_Reflection_MethodInfo_o *v10; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_19A833C;
LABEL_16:
      this->fields.m_target = v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( LOBYTE(this[1].fields.method_ptr) )
      {
        v11 = sub_1B64180(v6);
        v12 = sub_1B6463C(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_19A8438;
          else
            v9 = (Il2CppObject *)sub_19A83FC;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_19A8378;
        }
        else
        {
          v9 = (Il2CppObject *)sub_19A834C;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_19A831C;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19A82D4;
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
  return (System_IAsyncResult_o *)sub_1B6407C(this, &v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
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
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  *(_OWORD *)&this->fields.Top.fields.x = xmmword_BA2980;
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712LL;
  if ( !byte_49F7111 )
  {
    sub_1B640C8(&UnityEngine_Vector3_TypeInfo, method);
    byte_49F7111 = 1;
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
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F8D6B & 1) == 0 )
  {
    sub_1B640C8(&SummonInfoControl___c_TypeInfo, v1);
    byte_49F8D6B = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(SummonInfoControl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  SummonInfoControl___c_TypeInfo->static_fields->__9 = (struct SummonInfoControl___c_o *)v3;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)SummonInfoControl___c_TypeInfo->static_fields, (int32_t)v3, v4, v5);
}


void __fastcall SummonInfoControl___c___ctor(SummonInfoControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c___InitSummonBtnDisp_b__132_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_49F8D6C & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, x);
    byte_49F8D6C = 1;
  }
  if ( !x )
    goto LABEL_15;
  singleSummonInfo = (UnityEngine_Object_o *)x->fields.singleSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0LL, 0LL) )
  {
    this = (SummonInfoControl___c_o *)x->fields.singleSummonInfo;
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  }
  multiSummonInfo = (UnityEngine_Object_o *)x->fields.multiSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(multiSummonInfo, 0LL, 0LL) )
  {
    this = (SummonInfoControl___c_o *)x->fields.multiSummonInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      return;
    }
LABEL_15:
    sub_1B64324(this);
  }
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__151_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_49F8D6D & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, x);
    byte_49F8D6D = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__151_1(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_49F8D6E & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, x);
    byte_49F8D6E = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__151_2(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_49F8D6F & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, x);
    byte_49F8D6F = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__151_3(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_49F8D70 & 1) == 0 )
  {
    sub_1B640C8(&char_TypeInfo, x);
    byte_49F8D70 = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass157_0___ctor(
        SummonInfoControl___c__DisplayClass157_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass157_0___SetSummonButtonsCollider_b__0(
        SummonInfoControl___c__DisplayClass157_0_o *this,
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
    sub_1B64324(this);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, this->fields.onOff, v9);
}