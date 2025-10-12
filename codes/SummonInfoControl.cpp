void SummonInfoControl___cctor(const MethodInfo *method)
{
  struct SummonInfoControl_StaticFields *static_fields; // x8

  if ( (byte_4C33F89 & 1) == 0 )
  {
    sub_1C32C20(&SummonInfoControl_TypeInfo);
    byte_4C33F89 = 1;
  }
  static_fields = SummonInfoControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OPEN_TIME = xmmword_C0DFE0;
  *(_QWORD *)&static_fields->APD_SUMMON_BTN2_X = 0x4370000000000000LL;
}


void SummonInfoControl___ctor(SummonInfoControl_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.gachaTime = 0x100000001LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void SummonInfoControl__AssertCheck(SummonInfoControl_o *this, const MethodInfo *method)
{
  ;
}


void SummonInfoControl__Awake(SummonInfoControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Il2CppObject *freeSummon; // x1
  struct System_Object_array *items; // x8
  _QWORD *v9; // x9
  __int64 size; // x10
  Il2CppClass **v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *friendPointSummon; // x1
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *stoneSummon; // x1
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  Il2CppObject *ticketSummon; // x1
  struct System_Object_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  Il2CppObject *chargeSummon; // x1
  struct System_Object_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  Il2CppObject *oneExSummon; // x1
  struct System_Object_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *multiExSummon; // x1
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1

  if ( (byte_4C33F66 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
    byte_4C33F66 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v3 )
    goto LABEL_33;
  freeSummon = (Il2CppObject *)this->fields.freeSummon;
  items = v3->fields._items;
  v9 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
  }
  else
  {
    v11 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v11[4] = (Il2CppClass *)freeSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 4), (int32_t)freeSummon, v5, v6);
  }
  friendPointSummon = (Il2CppObject *)this->fields.friendPointSummon;
  v15 = v3->fields._items;
  v16 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v15 )
    goto LABEL_33;
  v17 = v3->fields._size;
  if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      friendPointSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->obj.klass + v17;
    v3->fields._size = v17 + 1;
    v18[4] = (Il2CppClass *)friendPointSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)friendPointSummon, v12, v13);
  }
  stoneSummon = (Il2CppObject *)this->fields.stoneSummon;
  v22 = v3->fields._items;
  v23 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v22 )
    goto LABEL_33;
  v24 = v3->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      stoneSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v3->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)stoneSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v25 + 4), (int32_t)stoneSummon, v19, v20);
  }
  ticketSummon = (Il2CppObject *)this->fields.ticketSummon;
  v29 = v3->fields._items;
  v30 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v29 )
    goto LABEL_33;
  v31 = v3->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      ticketSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
  }
  else
  {
    v32 = &v29->obj.klass + v31;
    v3->fields._size = v31 + 1;
    v32[4] = (Il2CppClass *)ticketSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v32 + 4), (int32_t)ticketSummon, v26, v27);
  }
  chargeSummon = (Il2CppObject *)this->fields.chargeSummon;
  v36 = v3->fields._items;
  v37 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v36 )
    goto LABEL_33;
  v38 = v3->fields._size;
  if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      chargeSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
  }
  else
  {
    v39 = &v36->obj.klass + v38;
    v3->fields._size = v38 + 1;
    v39[4] = (Il2CppClass *)chargeSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v39 + 4), (int32_t)chargeSummon, v33, v34);
  }
  oneExSummon = (Il2CppObject *)this->fields.oneExSummon;
  v43 = v3->fields._items;
  v44 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v43 )
    goto LABEL_33;
  v45 = v3->fields._size;
  if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      oneExSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
  }
  else
  {
    v46 = &v43->obj.klass + v45;
    v3->fields._size = v45 + 1;
    v46[4] = (Il2CppClass *)oneExSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v46 + 4), (int32_t)oneExSummon, v40, v41);
  }
  multiExSummon = (Il2CppObject *)this->fields.multiExSummon;
  v50 = v3->fields._items;
  v51 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v50 )
LABEL_33:
    sub_1C32E7C(v4);
  v52 = v3->fields._size;
  if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      multiExSummon,
      *(const MethodInfo_37987BC **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
  }
  else
  {
    v53 = &v50->obj.klass + v52;
    v3->fields._size = v52 + 1;
    v53[4] = (Il2CppClass *)multiExSummon;
    sub_1C32BC4((CGThumbnailListItem_o *)(v53 + 4), (int32_t)multiExSummon, v47, v48);
  }
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v3;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.summonObjInfos, (int32_t)v3, v54, v55);
  SummonInfoControl__InitMasterData(this, v56);
}


void SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4C33F84 & 1) == 0 )
  {
    sub_1C32C20(&Method_SummonInfoControl_ClickBase__);
    byte_4C33F84 = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, seKind, 0, 0);
  clickCallbackFunc = this->fields.clickCallbackFunc;
  if ( clickCallbackFunc )
    ((void (__fastcall *)(intptr_t, struct GachaRqParamData_o *, intptr_t))clickCallbackFunc->fields.invoke_impl)(
      clickCallbackFunc->fields.method_code,
      this->fields.requestData,
      clickCallbackFunc->fields.method);
}


void SummonInfoControl__EndAnimation(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationCallback, 0, v2, v3);
  ActionExtensions__Call(animationCallback, 0);
}


void SummonInfoControl__FitToImageSize(SummonInfoControl_o *this, UISprite_o *image, const MethodInfo *method)
{
  if ( !image )
    sub_1C32E7C(this);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))image->klass->vtable._33_MakePixelPerfect.methodPtr)(
    image,
    image->klass->vtable._33_MakePixelPerfect.method);
}


int32_t SummonInfoControl__GetBonusSelectLineupCount(SummonInfoControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Int32_array *Master_object; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaBonusSelectEntity_array *v6; // x19
  int max_length; // w8
  unsigned int v8; // w22
  GachaBonusSelectEntity_o *v9; // x8
  int32_t gachaBonusSelectLineupId; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v14; // x19
  int32_t current; // w20
  Il2CppObject *v16; // x0
  _BOOL8 EntityList; // x0
  GachaBonusSelectLineupEntity_array *v18; // x20
  int v19; // w8
  int i; // w22
  GachaBonusSelectLineupEntity_o *v21; // x8
  int32_t giftId; // w1
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  System_Collections_Generic_List_int__o *v26; // x20
  int32_t v27; // w19
  Il2CppObject *v28; // x0
  GiftEntity_array *GiftListById; // x0
  GiftEntity_array *v30; // x19
  il2cpp_array_size_t v31; // x8
  __int64 v32; // x23
  GiftEntity_o *v33; // x9
  int32_t objectId; // w1
  struct System_Int32_array *v35; // x9
  _QWORD *v36; // x10
  __int64 v37; // x11
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  System_Collections_Generic_List_Enumerator_int__o v40; // [xsp+0h] [xbp-A0h] BYREF
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+20h] [xbp-80h] BYREF
  GachaBonusSelectEntity_array *entityArray; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4C33F88 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C33F88 = 1;
  }
  entityArray = 0;
  memset(&v42, 0, sizeof(v42));
  gachaBonusSelectLineupEntities = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_68;
  Master_object = (System_Int32_array *)GachaBonusSelectMaster__TryGetEntityArray(
                                          (GachaBonusSelectMaster_o *)Master_object,
                                          &entityArray,
                                          currentSummonData->fields.id,
                                          0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v6 = entityArray;
    if ( !entityArray )
      goto LABEL_68;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( v8 >= max_length )
          sub_1C32E84(Master_object);
        v9 = v6->m_Items[v8];
        if ( !v9 )
          break;
        if ( !v3 )
          break;
        gachaBonusSelectLineupId = v9->fields.gachaBonusSelectLineupId;
        items = v3->fields._items;
        v12 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            gachaBonusSelectLineupId,
            *(const MethodInfo_377B798 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = gachaBonusSelectLineupId;
        }
        max_length = v6->max_length;
        if ( (int)++v8 >= max_length )
          goto LABEL_19;
      }
LABEL_68:
      sub_1C32E7C(Master_object);
    }
  }
LABEL_19:
  v14 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v3,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v42 = v40;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v42,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v42.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    if ( !v16 )
      sub_1C32E7C(0);
    EntityList = GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)v16,
                   &gachaBonusSelectLineupEntities,
                   current,
                   0);
    if ( EntityList )
    {
      v18 = gachaBonusSelectLineupEntities;
      if ( !gachaBonusSelectLineupEntities )
        sub_1C32E7C(EntityList);
      v19 = gachaBonusSelectLineupEntities->max_length;
      if ( v19 >= 1 )
      {
        for ( i = 0; i < v19; ++i )
        {
          if ( i >= (unsigned int)v19 )
            sub_1C32E84(EntityList);
          v21 = v18->m_Items[i];
          if ( !v21 )
            sub_1C32E7C(EntityList);
          if ( !v14 )
            sub_1C32E7C(EntityList);
          giftId = v21->fields.giftId;
          v23 = v14->fields._items;
          v24 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !v23 )
            sub_1C32E7C(EntityList);
          v25 = v14->fields._size;
          if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              giftId,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = v25 + 1;
            v23->m_Items[v25] = giftId;
          }
          v19 = v18->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v42,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v26 = (System_Collections_Generic_List_int__o *)sub_1C32E6C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v26,
    (const MethodInfo_377AF44 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v40,
    v14,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v42 = v40;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v42,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v27 = v42.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v28 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !v28 )
      sub_1C32E7C(0);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v28, v27, 0);
    v30 = GiftListById;
    if ( !GiftListById )
      sub_1C32E7C(0);
    v31 = GiftListById->max_length;
    if ( v31 && (int)v31 >= 1 )
    {
      v32 = 0;
      do
      {
        if ( (unsigned int)v32 >= (unsigned int)v31 )
          sub_1C32E84(GiftListById);
        v33 = v30->m_Items[v32];
        if ( !v33 )
          sub_1C32E7C(GiftListById);
        if ( v33->fields.type == 1 )
        {
          if ( !v26 )
            sub_1C32E7C(GiftListById);
          objectId = v33->fields.objectId;
          v35 = v26->fields._items;
          v36 = Method_System_Collections_Generic_List_int__Add__;
          ++v26->fields._version;
          if ( !v35 )
            sub_1C32E7C(GiftListById);
          v37 = v26->fields._size;
          if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v26,
              objectId,
              *(const MethodInfo_377B798 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            v31 = v30->max_length;
          }
          else
          {
            v26->fields._size = v37 + 1;
            v35->m_Items[v37] = objectId;
          }
        }
        ++v32;
      }
      while ( (int)v32 < (int)v31 );
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v42,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v38 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (const MethodInfo_31005DC *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v38,
                    (const MethodInfo_311C8F4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Master_object )
    goto LABEL_68;
  return Master_object->max_length;
}


UISprite_o *SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  if ( (byte_4C33F7C & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4C33F7C = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1C32E7C(this);
  return currentSummonData->fields.groupId;
}


bool SummonInfoControl__GetIsFree(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.isFree;
}


int32_t SummonInfoControl__GetSummonPrice(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.payGachaPrice;
}


int32_t SummonInfoControl__GetUsrStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.haveStoneNum;
}


int32_t SummonInfoControl__GetUsrTicketNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields.ticketNum;
}


void SummonInfoControl__InitMasterData(SummonInfoControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  Il2CppObject *v6; // x0
  ConstantMaster_o *v7; // x20
  Il2CppObject *v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C33F67 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_14847/*"USER_FREE_STONE"*/);
    sub_1C32C20(&StringLiteral_13537/*"TUTORIAL_GACHA_ID"*/);
    byte_4C33F67 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = (struct GachaMaster_o *)Master_object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.gachaMaster, (int32_t)Master_object, v4, v5);
  v6 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v6 )
    sub_1C32E7C(0);
  v7 = (ConstantMaster_o *)v6;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(
                                   (ConstantMaster_o *)v6,
                                   (System_String_o *)StringLiteral_13537/*"TUTORIAL_GACHA_ID"*/,
                                   0);
  this->fields.userFreeStone = ConstantMaster__GetValue(v7, (System_String_o *)StringLiteral_14847/*"USER_FREE_STONE"*/, 0);
  v8 = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  this->fields.viewGachaFeaturedServantMaster = (struct ViewGachaFeaturedServantMaster_o *)v8;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.viewGachaFeaturedServantMaster, (int32_t)v8, v9, v10);
}


void SummonInfoControl__InitStoneSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x0
  struct UserGameEntity_o *usrData; // x8

  SummonInfoControl__InitSummonBtnDisp(this, method);
  SummonInfoControl__SetSummonButtonsCollider(this, 1, v3);
  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1C32E7C(v4);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl___c_c *v3; // x0
  System_Collections_Generic_List_object__o *summonObjInfos; // x20
  System_Action_object__o *_9__156_0; // x21
  Il2CppObject *v6; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C33F6A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_1C32C20(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__156_0__);
    sub_1C32C20(&SummonInfoControl___c_TypeInfo);
    byte_4C33F6A = 1;
  }
  v3 = SummonInfoControl___c_TypeInfo;
  summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos;
  if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v3 = SummonInfoControl___c_TypeInfo;
  }
  _9__156_0 = (System_Action_object__o *)v3->static_fields->__9__156_0;
  if ( !_9__156_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = SummonInfoControl___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__156_0 = (System_Action_object__o *)sub_1C32E6C(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_object____ctor(_9__156_0, v6, Method_SummonInfoControl___c__InitSummonBtnDisp_b__156_0__, 0);
    static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__156_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__156_0, (int32_t)_9__156_0, v8, v9);
  }
  if ( !summonObjInfos )
    sub_1C32E7C(v3);
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


bool SummonInfoControl__IsDisplayFeaturedServants(SummonInfoControl_o *this, const MethodInfo *method)
{
  return SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, method) != 0;
}


void SummonInfoControl__MoveAlpha(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *target,
        const MethodInfo *method)
{
  UnityEngine_Component_o *v4; // x19
  SummonInfoControl_c *v5; // x0
  TweenAlpha_o *v6; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w1
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4C33F81 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&SummonInfoControl_TypeInfo);
    this = (SummonInfoControl_o *)sub_1C32C20(&StringLiteral_5980/*"EndAnimation"*/);
    byte_4C33F81 = 1;
  }
  if ( !target )
    goto LABEL_15;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0) )
    UnityEngine_GameObject__SetActive(target, 1, 0);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                  target,
                                  (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, float))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  v5 = SummonInfoControl_TypeInfo;
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v5 = SummonInfoControl_TypeInfo;
  }
  v6 = TweenAlpha__Begin(target, v5->static_fields->OPEN_TIME, 1.0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v6, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v6 )
    {
      v6->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0);
      v6->fields.eventReceiver = gameObject;
      sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.eventReceiver, (int32_t)gameObject, v8, v9);
      v10 = StringLiteral_5980/*"EndAnimation"*/;
      v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5980/*"EndAnimation"*/;
      sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.callWhenFinished, v10, v11, v12);
      return;
    }
LABEL_15:
    sub_1C32E7C(this);
  }
}


void SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  intptr_t gameObject; // x0
  UnityEngine_Component_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_GameObject_o *summonDetailInfo; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  UnityEngine_Component_c *klass; // x8
  __int64 v16; // x23
  unsigned int v17; // w22
  UnityEngine_GameObject_o *v18; // x21
  struct UnityEngine_Vector3_array *infoButtonLayouts; // x8

  if ( (byte_4C33F69 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_GameObject___TypeInfo);
    byte_4C33F69 = 1;
  }
  gameObject = sub_1C32CC8(UnityEngine_GameObject___TypeInfo, 4);
  if ( !this->fields.possessionInfoButton )
    goto LABEL_27;
  v4 = (UnityEngine_Component_o *)gameObject;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.possessionInfoButton,
                           0);
  if ( !v4 )
    goto LABEL_27;
  if ( !LODWORD(v4[1].klass) )
    goto LABEL_26;
  v4[1].monitor = (void *)gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4[1].monitor, gameObject, v5, v6);
  gameObject = (intptr_t)this->fields.summonHistoryButton;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( LODWORD(v4[1].klass) <= 1 )
    goto LABEL_26;
  v4[1].fields.m_CachedPtr = gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4[1].fields, gameObject, v7, v8);
  if ( LODWORD(v4[1].klass) <= 2 )
    goto LABEL_26;
  summonDetailInfo = this->fields.summonDetailInfo;
  v4[2].klass = (UnityEngine_Component_c *)summonDetailInfo;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4[2], (int32_t)summonDetailInfo, v9, v10);
  gameObject = (intptr_t)this->fields.summonHelpInfo;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( LODWORD(v4[1].klass) <= 3 )
    goto LABEL_26;
  v4[2].monitor = (void *)gameObject;
  sub_1C32BC4((CGThumbnailListItem_o *)&v4[2].monitor, gameObject, v12, v13);
  klass = v4[1].klass;
  if ( (int)klass >= 1 )
  {
    v16 = 0;
    v17 = 0;
    while ( (unsigned int)v16 < (unsigned int)klass )
    {
      v18 = (UnityEngine_GameObject_o *)*((_QWORD *)&v4[1].monitor + v16);
      if ( !v18 )
        goto LABEL_27;
      gameObject = UnityEngine_GameObject__get_activeSelf(*((UnityEngine_GameObject_o **)&v4[1].monitor + v16), 0);
      if ( (gameObject & 1) != 0 )
      {
        infoButtonLayouts = this->fields.infoButtonLayouts;
        if ( !infoButtonLayouts )
          goto LABEL_27;
        if ( v17 >= LODWORD(infoButtonLayouts->max_length) )
          break;
        GameObjectExtensions__SetLocalPosition(v18, infoButtonLayouts->m_Items[v17++], 0);
      }
      klass = v4[1].klass;
      if ( (int)++v16 >= (int)klass )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C32E84(gameObject);
  }
  v17 = 0;
LABEL_22:
  gameObject = (intptr_t)this->fields.buttonLayout;
  if ( !gameObject )
LABEL_27:
    sub_1C32E7C(gameObject);
  if ( v17 == (_DWORD)klass )
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)gameObject, v14);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)gameObject, v14);
}


void SummonInfoControl__OnClickChargeGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t shopIdIdx; // w6
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // [xsp+20h] [xbp-20h]

  shopIdIdx = this->fields.shopIdIdx;
  this->fields.payGachaPrice = this->fields.price;
  SummonInfoControl__SetRequestData(this, -1, -1, -1, -1, -1, shopIdIdx, -1, -1, 0, 0, 0, v5);
  SummonInfoControl__ClickBase(this, 0, v4);
}


void SummonInfoControl__OnClickDetail(SummonInfoControl_o *this, System_Action_o *callback, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  __int64 v7; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_String_o *v13; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v15; // x20

  if ( (byte_4C33F85 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SummonInfoControl_OnClickDetail__);
    sub_1C32C20(&WebViewManager_TypeInfo);
    sub_1C32C20(&StringLiteral_15553/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_4C33F85 = 1;
  }
  v5 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C32C38(Method_SummonInfoControl_OnClickDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1C32E7C(v7);
  id = currentSummonData->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v11, v12);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_15553/*"WEB_VIEW_TITLE_SUMMON"*/, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v15 = v13;
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v15, SummonDetailUrl, closeCallbackFunc, 0);
}


void SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  int64_t v4; // x20
  int32_t DrawNumChangeTime; // w22
  __int64 v6; // x9
  const MethodInfo *v7; // x2
  const MethodInfo *v8; // [xsp+20h] [xbp-40h]

  if ( (byte_4C33F82 & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    byte_4C33F82 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v4 = Time;
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
    sub_1C32E7C(Time);
  v6 = 492;
  if ( v4 < DrawNumChangeTime )
    v6 = 488;
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus + v6),
    -1,
    -1,
    -1,
    -1,
    0,
    0,
    0,
    v8);
  SummonInfoControl__ClickBase(this, 0, v7);
}


void SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  const MethodInfo *v4; // x2
  struct GachaRqParamData_o *requestData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0, 0, 0, v7);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (requestData->fields.gachaType = 5,
          requestData->fields.gachaResourceNum = this->fields.gachaTime,
          (currentSummonData = this->fields.currentSummonData) == 0) )
    {
      sub_1C32E7C(v3);
    }
    requestData->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v4);
}


void SummonInfoControl__OnClickMultiPayExGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t v3; // w5
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // [xsp+20h] [xbp-20h]

  currentSummonData = this->fields.currentSummonData;
  v3 = this->fields.appendGachaTime * this->fields.price;
  this->fields.payGachaPrice = v3;
  if ( !currentSummonData )
    sub_1C32E7C(this);
  SummonInfoControl__SetRequestData(
    this,
    currentSummonData->fields.appendPayType,
    -1,
    -1,
    currentSummonData->fields.appendDrawNum,
    v3,
    currentSummonData->fields.appendShopIdIndex,
    -1,
    -1,
    0,
    1,
    0,
    v6);
  SummonInfoControl__ClickBase(this, 0, v5);
}


void SummonInfoControl__OnClickMultiPayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v4)) == 0) )
  {
    sub_1C32E7C(CurrentGachaEntity);
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
    0,
    0,
    0,
    v6);
  SummonInfoControl__ClickBase(this, 0, v5);
}


void SummonInfoControl__OnClickMutiGacha(SummonInfoControl_o *this, const MethodInfo *method)
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
    0,
    0,
    0,
    v4);
  SummonInfoControl__ClickBase(this, 0, v3);
}


void SummonInfoControl__OnClickSinglePayExGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  int32_t *currentSummonData; // x9
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_4C33F83 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C32C20(&Method_SummonInfoControl_OnClickSinglePayExGacha__);
    byte_4C33F83 = 1;
  }
  if ( v2->fields.isOneExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_1C32E7C(this);
    SummonInfoControl__SetRequestData(
      v2,
      currentSummonData[31],
      -1,
      -1,
      currentSummonData[30],
      1,
      currentSummonData[29],
      -1,
      -1,
      0,
      1,
      0,
      v7);
    SummonInfoControl__ClickBase(v2, 0, v4);
  }
  else
  {
    v5 = Method_SummonInfoControl_OnClickSinglePayExGacha__;
    if ( (*((_BYTE *)Method_SummonInfoControl_OnClickSinglePayExGacha__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C32C38(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C32C04(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
}


void SummonInfoControl__OnClickSinglePayGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t shopIdIdx; // w6
  const MethodInfo *v4; // x2
  const MethodInfo *v5; // [xsp+20h] [xbp-20h]

  shopIdIdx = this->fields.shopIdIdx;
  this->fields.payGachaPrice = this->fields.price;
  SummonInfoControl__SetRequestData(this, -1, -1, -1, -1, -1, shopIdIdx, -1, -1, 0, 0, 0, v5);
  SummonInfoControl__ClickBase(this, 0, v4);
}


void SummonInfoControl__SetActiveInfoLabel(
        SummonInfoControl_o *this,
        UILabel_o *label,
        bool isDisp,
        const MethodInfo *method)
{
  if ( !label
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)label, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0);
}


void SummonInfoControl__SetAlphaSummonBtn(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animationCallback; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *klass; // x19
  __int64 v10; // x0
  const MethodInfo *v11; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  p_animationCallback = (CGThumbnailListItem_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.animationCallback, (int32_t)callback, (int32_t)method, v3);
  beforeSummonData = this->fields.beforeSummonData;
  if ( !beforeSummonData
    || (((__int64 (__fastcall *)(struct VaildGachaInfo_o *, struct VaildGachaInfo_o *, const MethodInfo *))beforeSummonData->klass->vtable._0_Equals.methodPtr)(
          beforeSummonData,
          this->fields.currentSummonData,
          beforeSummonData->klass->vtable._0_Equals.method)
      & 1) != 0 )
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0;
    sub_1C32BC4(p_animationCallback, 0, (int32_t)v6, v7);
    ActionExtensions__Call(klass, 0);
    return;
  }
  SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, v6);
  if ( this->fields.isDispPayOneExSummon )
  {
    oneExSummon = this->fields.oneExSummon;
    if ( !oneExSummon )
      goto LABEL_11;
    SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v11);
  }
  if ( this->fields.isDispPayMultiExSummon )
  {
    multiExSummon = this->fields.multiExSummon;
    if ( multiExSummon )
    {
      SummonInfoControl__MoveAlpha(this, multiExSummon->fields.singleSummonInfo, v11);
      return;
    }
LABEL_11:
    sub_1C32E7C(v10);
  }
}


void SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C33F80 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33F80 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)button, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !button
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0)) == 0
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_1C32E7C(gameObject);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, onOff, 0);
  }
}


void SummonInfoControl__SetButtonLocalPosX(
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
    || (onePay = summonInfo->fields.onePay) == 0
    || (this = (SummonInfoControl_o *)onePay->fields.button) == 0
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        GameObjectExtensions__SetLocalPositionX(gameObject, onePayX, 0),
        (multiPay = summonInfo->fields.multiPay) == 0)
    || (this = (SummonInfoControl_o *)multiPay->fields.button) == 0 )
  {
    sub_1C32E7C(this);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0);
}


void SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  const MethodInfo *v6; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v9; // x4
  struct SummonInfoControl_SummonObjInfo_o *v10; // x8
  struct SummonInfoControl_SummonObjParts_o *v11; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v13; // x4
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  struct SummonInfoControl_SummonObjParts_o *v15; // x8
  const MethodInfo *v16; // x1
  char v17; // w20
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *v19; // x22
  const MethodInfo *v20; // x1
  Il2CppObject *v21; // x0
  UILabel_o *bonusSelectTopLabel; // x21
  System_String_o *Empty; // x1
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  struct SummonInfoControl_SummonObjInfo_o *v26; // x8
  struct SummonInfoControl_SummonObjParts_o *v27; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v29; // s0
  struct SummonInfoControl_SummonObjInfo_o *v30; // x8
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  struct SummonInfoControl_SummonObjInfo_o *v33; // x8
  struct SummonInfoControl_SummonObjParts_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  const MethodInfo *v36; // x6
  struct SummonInfoControl_SummonObjInfo_o *v37; // x8
  int32_t BonusSelectLineupCount; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C33F77 & 1) == 0 )
  {
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    sub_1C32C20(&StringLiteral_2946/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/);
    sub_1C32C20(&StringLiteral_2947/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    sub_1C32C20(&StringLiteral_9231/*"N0"*/);
    byte_4C33F77 = 1;
  }
  BonusSelectLineupCount = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v3);
  SummonInfoControl__SetSummonInfo_35524352(this, v4);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_42;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_25096/*"{0}"*/, v6);
  v10 = this->fields.chargeSummon;
  if ( !v10 )
    goto LABEL_42;
  v11 = v10->fields.multiPay;
  if ( !v11 )
    goto LABEL_42;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(
    this,
    v11->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_25047/*"{0:#,0}"*/,
    v9);
  v14 = this->fields.chargeSummon;
  if ( !v14 )
    goto LABEL_42;
  v15 = v14->fields.multiPay;
  if ( !v15 )
    goto LABEL_42;
  SummonInfoControl__SetElevenBonusInfoSingle(
    CurrentGachaEntity,
    this->fields.gachaTime,
    v15->fields.numImg,
    v15->fields.bonusInfo,
    v13);
  CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v16);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0);
  if ( !this->fields.bonusSelectLabel )
    goto LABEL_42;
  v17 = (char)CurrentGachaEntity;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                0);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v17 & 1, 0);
  CurrentGachaEntity = (SummonInfoControl_o *)this->fields.bonusSelectTopLabel;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v17 & 1, 0);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v17 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_2947/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, 0);
    BonusSelectLineupCount = SummonInfoControl__GetBonusSelectLineupCount(this, v20);
    v21 = (Il2CppObject *)System_Int32__ToString_65028652(
                            (int32_t)&BonusSelectLineupCount,
                            (System_String_o *)StringLiteral_9231/*"N0"*/,
                            0);
    CurrentGachaEntity = (SummonInfoControl_o *)System_String__Format(v19, v21, 0);
    if ( bonusSelectLabel )
    {
      UILabel__set_text(bonusSelectLabel, (System_String_o *)CurrentGachaEntity, 0);
      bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2946/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, 0);
      Empty = (System_String_o *)CurrentGachaEntity;
      goto LABEL_24;
    }
LABEL_42:
    sub_1C32E7C(CurrentGachaEntity);
  }
  if ( !bonusSelectLabel )
    goto LABEL_42;
  UILabel__set_text(this->fields.bonusSelectLabel, string_TypeInfo->static_fields->Empty, 0);
  bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
  Empty = string_TypeInfo->static_fields->Empty;
LABEL_24:
  if ( !bonusSelectTopLabel )
    goto LABEL_42;
  UILabel__set_text(bonusSelectTopLabel, Empty, 0);
  v24 = this->fields.chargeSummon;
  if ( !v24 )
    goto LABEL_42;
  v25 = v24->fields.multiPay;
  if ( !v25 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v25->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, (v17 & 1) == 0, 0);
  v26 = this->fields.chargeSummon;
  if ( !v26 )
    goto LABEL_42;
  v27 = v26->fields.multiPay;
  if ( !v27 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v27->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0);
  v29 = 0.0;
  if ( (v17 & 1) != 0 )
    v29 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v29, 0);
  v30 = this->fields.chargeSummon;
  if ( !v30 )
    goto LABEL_42;
  v31 = v30->fields.multiPay;
  if ( !v31 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v31->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0);
  GameObjectExtensions__SetLocalScale_36038828(v32, 1.0, 1.0, 0);
  v33 = this->fields.chargeSummon;
  if ( !v33 )
    goto LABEL_42;
  v34 = v33->fields.multiPay;
  if ( !v34 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v34->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0);
  GameObjectExtensions__SetLocalPositionY(v35, 0.0, 0);
  v37 = this->fields.chargeSummon;
  if ( !v37 )
    goto LABEL_42;
  SummonInfoControl__SetSummonGiftDisp(this, v37->fields.multiPay, 0, 1, 0, 1, v36);
}


void SummonInfoControl__SetCurrentSummonInfo(
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
  const MethodInfo *v13; // x3
  struct UnityEngine_GameObject_o **v14; // x8
  struct UnityEngine_GameObject_o *v15; // x1

  v6 = this;
  if ( (byte_4C33F7D & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33F7D = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_19;
  p_fields = (SummonInfoControl_o **)&summonObjInfo->fields;
  singleSummonInfo = (UnityEngine_Object_o *)summonObjInfo->fields.singleSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0, 0) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isSingle, 0);
  }
  multiSummonInfo = summonObjInfo->fields.multiSummonInfo;
  p_multiSummonInfo = (SummonInfoControl_o **)&summonObjInfo->fields.multiSummonInfo;
  v10 = (UnityEngine_Object_o *)multiSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v10, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = *p_multiSummonInfo;
    if ( !*p_multiSummonInfo )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isSingle, 0);
  }
  v14 = (struct UnityEngine_GameObject_o **)(isSingle ? p_fields : p_multiSummonInfo);
  if ( !v6 )
LABEL_19:
    sub_1C32E7C(this);
  v15 = *v14;
  v6->fields.currentBtnInfo = *v14;
  sub_1C32BC4((CGThumbnailListItem_o *)&v6->fields.currentBtnInfo, (int32_t)v15, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  SummonInfoControl_o *v12; // x20
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  SummonInfoControl_SummonObjParts_o **p_onePay; // x26
  UISprite_o *numImg; // x24
  Il2CppObject *v16; // x0
  System_String_o *v17; // x0
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w24
  UnityEngine_GameObject_o *v21; // x0
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  __int64 v25; // x5
  __int64 v26; // x6
  __int64 v27; // x7
  SummonInfoControl_SummonObjParts_o *v28; // x8
  int v29; // w24
  UISprite_o *v30; // x24
  Il2CppObject *v31; // x0
  System_String_o *v32; // x0
  const MethodInfo *v33; // x3
  UnityEngine_GameObject_o *v34; // x0
  const MethodInfo *v35; // x3
  bool v36; // w24
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  SummonInfoControl_SummonObjParts_o *v44; // x8
  UISprite_o *bonusCount; // x25
  Il2CppObject *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  SummonInfoControl_o *v48; // x0
  const MethodInfo *v49; // x3
  UISprite_o *BonusSprite; // x25
  int v51; // w28
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  __int64 v55; // x5
  __int64 v56; // x6
  __int64 v57; // x7
  Il2CppObject *v58; // x0
  SummonInfoControl_o *v59; // x0
  const MethodInfo *v60; // x3
  UISprite_o *v61; // x24
  __int64 v62; // x2
  __int64 v63; // x3
  __int64 v64; // x4
  __int64 v65; // x5
  __int64 v66; // x6
  __int64 v67; // x7
  Il2CppObject *v68; // x0
  UnityEngine_GameObject_o *v69; // x0
  UnityEngine_GameObject_o *v70; // x0
  System_String_o **v71; // x24
  const MethodInfo *v72; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v74; // x4
  int v75; // [xsp+8h] [xbp-58h] BYREF
  int32_t v76; // [xsp+Ch] [xbp-54h] BYREF

  v12 = this;
  if ( (byte_4C33F72 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&StringLiteral_17545/*"btn_txt_bonus_10times_plus1"*/);
    sub_1C32C20(&StringLiteral_17523/*"btn_summon_bg2"*/);
    sub_1C32C20(&StringLiteral_17522/*"btn_summon_bg1"*/);
    sub_1C32C20(&StringLiteral_17546/*"btn_txt_bonus_1plus1"*/);
    sub_1C32C20(&StringLiteral_17549/*"btn_txt_bonus_{0}_glow"*/);
    sub_1C32C20(&StringLiteral_17615/*"btn_txt_summon{0:00}"*/);
    sub_1C32C20(&StringLiteral_17547/*"btn_txt_bonus_count_{0}"*/);
    sub_1C32C20(&StringLiteral_22336/*"num1"*/);
    sub_1C32C20(&StringLiteral_17524/*"btn_summon_bg3"*/);
    sub_1C32C20(&StringLiteral_22337/*"num1_glow"*/);
    this = (SummonInfoControl_o *)sub_1C32C20(&StringLiteral_17548/*"btn_txt_bonus_{0}"*/);
    byte_4C33F72 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_98;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_98;
  numImg = onePay->fields.numImg;
  v76 = oneCount;
  v16 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &v76,
                          ticket,
                          summonObjInfo,
                          *(_QWORD *)&oneCount,
                          method,
                          v6,
                          v7);
  v17 = System_String__Format((System_String_o *)StringLiteral_17615/*"btn_txt_summon{0:00}"*/, v16, 0);
  SummonInfoControl__SetGachaSprite(v12, numImg, v17, v18);
  if ( !*p_onePay )
    goto LABEL_98;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.numImg;
  if ( !this )
    goto LABEL_98;
  this = (SummonInfoControl_o *)((__int64 (__fastcall *)(SummonInfoControl_o *, void *))this->klass[2]._1.parent)(
                                  this,
                                  this->klass[2]._1.generic_class);
  if ( !*p_onePay )
    goto LABEL_98;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_98;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0);
  if ( !ent )
    goto LABEL_98;
  if ( !*p_onePay )
    goto LABEL_98;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
  if ( !this )
    goto LABEL_98;
  extraGroupId1 = ent->fields.extraGroupId1;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_98;
  if ( extraGroupId1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
    if ( !this )
      goto LABEL_98;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionY(v21, 30.0, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    ent->fields.extraGroupId1,
                                    0);
    v28 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_98;
    v29 = (int)this;
    if ( (_DWORD)this == 9 )
    {
      v30 = v28->fields.numImg;
      v76 = 2;
      v31 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v22, v23, v24, v25, v26, v27);
      v32 = System_String__Format((System_String_o *)StringLiteral_17615/*"btn_txt_summon{0:00}"*/, v31, 0);
      SummonInfoControl__SetGachaSprite(v12, v30, v32, v33);
      if ( *p_onePay )
      {
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
        if ( this )
        {
          this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
            if ( *p_onePay )
            {
              this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
              if ( this )
              {
                UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17546/*"btn_txt_bonus_1plus1"*/, 0);
                if ( *p_onePay )
                {
                  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
                  if ( this )
                  {
                    v34 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    GameObjectExtensions__SetLocalPosition_36036760(v34, 0.0, -35.0, 0);
                    if ( *p_onePay )
                    {
                      this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
                      if ( this )
                      {
                        UIWidget__SetDimensions((UIWidget_o *)this, 208, 38, 0);
                        if ( *p_onePay )
                        {
                          this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
                          if ( this )
                          {
                            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17523/*"btn_summon_bg2"*/, 0);
                            if ( *p_onePay )
                            {
                              this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
                              if ( this )
                              {
                                UIButton__set_normalSprite(
                                  (UIButton_o *)this,
                                  (System_String_o *)StringLiteral_17523/*"btn_summon_bg2"*/,
                                  0);
                                if ( ticket )
                                {
LABEL_41:
                                  v36 = 1;
                                  goto LABEL_92;
                                }
                                if ( *p_onePay )
                                {
                                  this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
                                  if ( this )
                                  {
                                    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
                                    if ( this )
                                    {
                                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                                      goto LABEL_41;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_98:
      sub_1C32E7C(this);
    }
    this = (SummonInfoControl_o *)v28->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17545/*"btn_txt_bonus_10times_plus1"*/, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPosition_36036760(v37, 0.0, -34.0, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0);
    v44 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_98;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v44->fields.singleDigit;
      if ( !this )
        goto LABEL_98;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_98;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_101;
      if ( !*p_onePay )
        goto LABEL_98;
      this = (SummonInfoControl_o *)(*p_onePay)->fields.doubleDigits;
      if ( !this )
        goto LABEL_98;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_98;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_101:
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusCount;
        if ( !this )
          goto LABEL_98;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_98;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_98;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_98;
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v47, -36.0, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_98;
        v48 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        v48,
                        (UnityEngine_GameObject_o *)v48,
                        (System_String_o *)StringLiteral_22336/*"num1"*/,
                        v49);
        v51 = 9 - v29;
        v76 = 9 - v29;
        v58 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v52, v53, v54, v55, v56, v57);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17548/*"btn_txt_bonus_{0}"*/, v58, 0);
        if ( !BonusSprite )
          goto LABEL_98;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0);
        v59 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0);
        v61 = SummonInfoControl__GetBonusSprite(
                v59,
                (UnityEngine_GameObject_o *)v59,
                (System_String_o *)StringLiteral_22337/*"num1_glow"*/,
                v60);
        v75 = v51;
        v68 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v75, v62, v63, v64, v65, v66, v67);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17549/*"btn_txt_bonus_{0}_glow"*/, v68, 0);
        if ( !v61 )
          goto LABEL_98;
        UISprite__set_spriteName(v61, (System_String_o *)this, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_98;
        v69 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v69, 0.825, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_98;
        v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v70, -29.7, 0);
        goto LABEL_83;
      }
      if ( !*p_onePay )
        goto LABEL_98;
      this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
      if ( !this )
        goto LABEL_98;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_98;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v44 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_98;
    }
    bonusCount = v44->fields.bonusCount;
    v76 = 9 - v29;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v76, v38, v39, v40, v41, v42, v43);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17547/*"btn_txt_bonus_count_{0}"*/, v46, 0);
    if ( !bonusCount )
      goto LABEL_98;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0);
LABEL_83:
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
    v71 = (System_String_o **)(ticket ? &StringLiteral_17524/*"btn_summon_bg3"*/ : &StringLiteral_17522/*"btn_summon_bg1"*/);
    if ( !this )
      goto LABEL_98;
    UISprite__set_spriteName((UISprite_o *)this, *v71, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
    if ( !this )
      goto LABEL_98;
    UIButton__set_normalSprite((UIButton_o *)this, *v71, 0);
    goto LABEL_91;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( !*p_onePay )
    goto LABEL_98;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_98;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_98;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v36 = 0;
  if ( !ticket )
  {
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_91:
    v36 = 0;
  }
LABEL_92:
  SummonInfoControl__SetOneTimeExButton(v12, ent, ticket, v35);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_98;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v72);
  SummonInfoControl__SetOneTimeFreeButton(v12, *p_onePay, oneCount, v36, v74);
}


void SummonInfoControl__SetElevenBonusInfoSingle(
        SummonInfoControl_o *this,
        int32_t multiCount,
        UISprite_o *multiNumImg,
        UISprite_o *multiBonusInfo,
        const MethodInfo *method)
{
  int32_t v8; // w21
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *gameObject; // x0
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C33F73 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&StringLiteral_17544/*"btn_txt_bonus_10plus1"*/);
    sub_1C32C20(&StringLiteral_17615/*"btn_txt_summon{0:00}"*/);
    byte_4C33F73 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Min_65042304(multiCount, 11, 0);
  v17 = v8;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v9, v10, v11, v12, v13, v14);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17615/*"btn_txt_summon{0:00}"*/, v15, 0);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0)) == 0 )
  {
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v8 > 10, 0);
  if ( v8 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17544/*"btn_txt_bonus_10plus1"*/, 0);
}


void SummonInfoControl__SetEnableSummonBtn(SummonInfoControl_o *this, bool isEnable, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct VaildGachaInfo_o *currentSummonData; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x1
  UnityEngine_GameObject_o *v10; // x21
  bool v11; // w1
  struct VaildGachaInfo_o *v12; // x8
  bool isDispSummonListDialog; // w1
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.beforeSummonData, (int32_t)currentSummonData, (int32_t)method, v3);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v8);
  currentBtnInfo = this->fields.summonDetailInfo;
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  v10 = currentBtnInfo;
  if ( isEnable )
  {
    currentBtnInfo = (UnityEngine_GameObject_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, v9);
    v11 = currentBtnInfo != 0;
  }
  else
  {
    v11 = 0;
  }
  if ( !v10 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v10, v11, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  if ( isEnable )
  {
    v12 = this->fields.currentSummonData;
    if ( !v12 )
      goto LABEL_21;
    isDispSummonListDialog = v12->fields.isDispSummonListDialog;
  }
  else
  {
    isDispSummonListDialog = 0;
  }
  if ( !currentBtnInfo
    || (UnityEngine_GameObject__SetActive(currentBtnInfo, isDispSummonListDialog, 0),
        (oneExSummon = this->fields.oneExSummon) == 0)
    || (currentBtnInfo = oneExSummon->fields.singleSummonInfo) == 0
    || (UnityEngine_GameObject__SetActive(currentBtnInfo, this->fields.isDispPayOneExSummon && isEnable, 0),
        (multiExSummon = this->fields.multiExSummon) == 0)
    || (currentBtnInfo = multiExSummon->fields.singleSummonInfo) == 0 )
  {
LABEL_21:
    sub_1C32E7C(currentBtnInfo);
  }
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable && this->fields.isDispPayMultiExSummon, 0);
}


void SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  char v6; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v8; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x23
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  __int64 v19; // x5
  __int64 v20; // x6
  __int64 v21; // x7
  Il2CppObject *v22; // x0
  System_String_o *v23; // x1
  const MethodInfo *v24; // x1
  int64_t Time; // x0
  BalanceConfig_c *v26; // x8
  int64_t v27; // x20
  int64_t DrawNumChangeTime; // x22
  const MethodInfo *v29; // x3
  int64_t v30; // x20
  int64_t v31; // x22
  __int64 v32; // x9
  int32_t v33; // [xsp+8h] [xbp-48h] BYREF
  int32_t v34; // [xsp+Ch] [xbp-44h] BYREF
  int32_t maxNum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C33F6B & 1) == 0 )
  {
    sub_1C32C20(&BalanceConfig_TypeInfo);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&UserGachaMaster_TypeInfo);
    sub_1C32C20(&StringLiteral_6551/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_1122/*"0"*/);
    byte_4C33F6B = 1;
  }
  *(_QWORD *)maxNum = 0;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_35;
  id = currentSummonData->fields.id;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                                             id,
                                             &maxNum[1],
                                             maxNum,
                                             0);
  if ( !this->fields.freeSummonCampaignLabel )
    goto LABEL_35;
  v6 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, v6 & 1, 0);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v6 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6551/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0);
    v34 = maxNum[1];
    v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v9, v10, v11, v12, v13, v14);
    v33 = maxNum[0];
    v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v16, v17, v18, v19, v20, v21);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_63559836(v8, v15, v22, 0);
    v23 = (System_String_o *)gameObject;
  }
  else
  {
    v23 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !freeSummonCampaignLabel )
    goto LABEL_35;
  UILabel__set_text(freeSummonCampaignLabel, v23, 0);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v6 & 1) == 0 && !this->fields.isFree )
    goto LABEL_33;
  gameObject = this->fields.freeSummonCampaignNeedInfo;
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.freeSummonCampaignNeedNum;
  if ( !gameObject )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1122/*"0"*/, 0);
  if ( !this->fields.isFree )
  {
LABEL_33:
    SummonInfoControl__SetPointSummonInfo(this, v24);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v26 = BalanceConfig_TypeInfo;
  v27 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v26 = BalanceConfig_TypeInfo;
  }
  gameObject = this->fields.freeTxtInfoObj;
  if ( !gameObject
    || (DrawNumChangeTime = v26->static_fields->DrawNumChangeTime,
        UnityEngine_GameObject__SetActive(gameObject, v27 < DrawNumChangeTime, 0),
        (gameObject = this->fields.freeTenInfoObj) == 0) )
  {
LABEL_35:
    sub_1C32E7C(gameObject);
  }
  UnityEngine_GameObject__SetActive(gameObject, v27 >= DrawNumChangeTime, 0);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v29);
  this->fields.price = 0;
  v30 = NetworkManager__getTime(0);
  v31 = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v32 = 492;
  if ( v30 < v31 )
    v32 = 488;
  this->fields.gachaTime = *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus
                                      + v32);
}


void SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1C32E7C(this);
  UISprite__set_atlas(sprite, this->fields.gachaAtlas, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
}


void SummonInfoControl__SetHelpBtnDisp(SummonInfoControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *summonHelpInfo; // x0

  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo
    || (summonHelpInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(summonHelpInfo, 0)) == 0 )
  {
    sub_1C32E7C(summonHelpInfo);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonHelpInfo, isDisp, 0);
}


void SummonInfoControl__SetMultiTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        SummonInfoControl_SummonObjInfo_o *summonInfo,
        int32_t friendPoint,
        const MethodInfo *method)
{
  void *Master_object; // x0
  int32_t price; // w24
  int32_t maxDrawNum; // w23
  bool v14; // w22
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8
  const MethodInfo *v16; // x2
  GachaAppendEntity_o *v17; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  SummonInfoControl_o *v19; // x0
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x0
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  const MethodInfo *v30; // x3
  struct VaildGachaInfo_o *v31; // x8
  int32_t appendPayType; // w8
  System_String_o **v33; // x8
  SummonInfoControl_o *v34; // x0
  struct SummonInfoControl_SummonObjInfo_o *v35; // x9
  struct SummonInfoControl_SummonObjParts_o *v36; // x9
  const MethodInfo *v37; // x3
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  NumSpriteComponent_o *multiExNumSprite; // x20
  int64_t appendGachaTime; // x21
  System_Action_object__object__o *v42; // x23
  System_String_o *v43; // x22
  Il2CppObject *v44; // x24
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UISprite_o *multiExSummonSprite; // x20
  UnityEngine_GameObject_o *v49; // x0
  float v50; // s0
  const MethodInfo *v51; // x4
  UnityEngine_GameObject_o *v52; // x0
  float v53; // s0
  UnityEngine_GameObject_o *v54; // x0
  float v55; // s0
  struct SummonInfoControl_SummonObjInfo_o *v56; // x8
  struct SummonInfoControl_SummonObjParts_o *v57; // x8
  UISprite_o *v58; // [xsp+8h] [xbp-58h] BYREF
  UISprite_o *sprite; // [xsp+10h] [xbp-50h] BYREF
  GachaAppendEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4C33F76 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_UISprite__string__TypeInfo);
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&SummonInfoControl_TypeInfo);
    sub_1C32C20(&Method_SummonInfoControl___c__SetMultiTimeExButton_b__169_0__);
    sub_1C32C20(&SummonInfoControl___c_TypeInfo);
    sub_1C32C20(&StringLiteral_17523/*"btn_summon_bg2"*/);
    sub_1C32C20(&StringLiteral_20313/*"img_bg_friendpointuse"*/);
    sub_1C32C20(&StringLiteral_17610/*"btn_txt_summon"*/);
    sub_1C32C20(&StringLiteral_17612/*"btn_txt_summon_num_0"*/);
    sub_1C32C20(&StringLiteral_25049/*"{0:#,0}  "*/);
    sub_1C32C20(&StringLiteral_20325/*"img_bg_saintquartzuse"*/);
    byte_4C33F76 = 1;
  }
  sprite = 0;
  entity = 0;
  v58 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !gachaEnt || !Master_object )
    goto LABEL_75;
  Master_object = (void *)GachaAppendMaster__TryGetHundredSummon(
                            (GachaAppendMaster_o *)Master_object,
                            &entity,
                            gachaEnt->fields.id,
                            0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_75;
    price = this->fields.price;
    maxDrawNum = entity->fields.maxDrawNum;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Master_object = (void *)System_Math__Min_65042304(friendPoint / price, maxDrawNum, 0);
    v14 = (int)Master_object > 10;
    this->fields.appendGachaTime = (int)Master_object;
  }
  else
  {
    v14 = 0;
  }
  multiExSummon = this->fields.multiExSummon;
  if ( !multiExSummon )
    goto LABEL_75;
  Master_object = multiExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v14, 0);
  this->fields.isDispPayMultiExSummon = v14;
  if ( v14 )
  {
    v17 = entity;
    if ( entity )
    {
      currentSummonData = this->fields.currentSummonData;
      if ( currentSummonData )
      {
        currentSummonData->fields.appendPayType = entity->fields.type;
        currentSummonData->fields.appendShopIdIndex = v17->fields.idx;
        currentSummonData->fields.appendDrawNum = this->fields.appendGachaTime;
        if ( isTicket )
          summonInfo = this->fields.ticketSummon;
        v19 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
        if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
          v19 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
        }
        SummonInfoControl__SetButtonLocalPosX(
          v19,
          summonInfo,
          *((float *)&v19->fields.possessionInfoButton->monitor + 1),
          *(float *)&v19->fields.possessionInfoButton->fields.m_CachedPtr,
          v16);
        v20 = this->fields.multiExSummon;
        if ( v20 )
        {
          Master_object = v20->fields.singleSummonInfo;
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
            v21 = this->fields.multiExSummon;
            if ( v21 )
            {
              single = v21->fields.single;
              if ( single )
              {
                Master_object = single->fields.button;
                if ( Master_object )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                  GameObjectExtensions__SetLocalPositionX(
                    gameObject,
                    SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN3_X,
                    0);
                  v24 = this->fields.multiExSummon;
                  if ( v24 )
                  {
                    v25 = v24->fields.single;
                    if ( v25 )
                    {
                      Master_object = v25->fields.bonusInfo;
                      if ( Master_object )
                      {
                        v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                        GameObjectExtensions__SetLocalPositionX(v26, 1.0, 0);
                        v27 = this->fields.multiExSummon;
                        if ( v27 )
                        {
                          v28 = v27->fields.single;
                          if ( v28 )
                          {
                            Master_object = v28->fields.bonusInfo;
                            if ( Master_object )
                            {
                              v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                              GameObjectExtensions__SetLocalScaleX(v29, 1.0, 0);
                              v31 = this->fields.currentSummonData;
                              if ( v31 )
                              {
                                appendPayType = v31->fields.appendPayType;
                                if ( appendPayType == 1 )
                                  v33 = (System_String_o **)&StringLiteral_20325/*"img_bg_saintquartzuse"*/;
                                else
                                  v33 = (System_String_o **)(appendPayType == 3
                                                           ? &StringLiteral_20313/*"img_bg_friendpointuse"*/
                                                           : string_TypeInfo->static_fields);
                                v35 = this->fields.multiExSummon;
                                if ( v35 )
                                {
                                  v36 = v35->fields.single;
                                  if ( v36 )
                                  {
                                    SummonInfoControl__SetGachaSprite(this, v36->fields.infoBgImg, *v33, v30);
                                    v38 = this->fields.multiExSummon;
                                    if ( v38 )
                                    {
                                      v39 = v38->fields.single;
                                      if ( v39 )
                                      {
                                        SummonInfoControl__SetGachaSprite(
                                          this,
                                          v39->fields.buttonImg,
                                          (System_String_o *)StringLiteral_17523/*"btn_summon_bg2"*/,
                                          v37);
                                        multiExNumSprite = this->fields.multiExNumSprite;
                                        appendGachaTime = this->fields.appendGachaTime;
                                        Master_object = SummonInfoControl___c_TypeInfo;
                                        if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
                                          Master_object = SummonInfoControl___c_TypeInfo;
                                        }
                                        v42 = *(System_Action_object__object__o **)(*((_QWORD *)Master_object + 23)
                                                                                  + 32LL);
                                        v43 = (System_String_o *)StringLiteral_17612/*"btn_txt_summon_num_0"*/;
                                        if ( !v42 )
                                        {
                                          if ( !*((_DWORD *)Master_object + 56) )
                                          {
                                            j_il2cpp_runtime_class_init_0(Master_object);
                                            Master_object = SummonInfoControl___c_TypeInfo;
                                          }
                                          v44 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
                                          v42 = (System_Action_object__object__o *)sub_1C32E6C(System_Action_UISprite__string__TypeInfo);
                                          System_Action_object__object____ctor(
                                            v42,
                                            v44,
                                            Method_SummonInfoControl___c__SetMultiTimeExButton_b__169_0__,
                                            0);
                                          static_fields = SummonInfoControl___c_TypeInfo->static_fields;
                                          static_fields->__9__169_0 = (struct System_Action_UISprite__string__o *)v42;
                                          sub_1C32BC4(
                                            (CGThumbnailListItem_o *)&static_fields->__9__169_0,
                                            (int32_t)v42,
                                            v46,
                                            v47);
                                        }
                                        if ( multiExNumSprite )
                                        {
                                          NumSpriteComponent__SetSprite(
                                            multiExNumSprite,
                                            appendGachaTime,
                                            v43,
                                            (System_Action_UISprite__string__o *)v42,
                                            0,
                                            0);
                                          multiExSummonSprite = this->fields.multiExSummonSprite;
                                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          AtlasManager__SetEventSprite(
                                            multiExSummonSprite,
                                            (System_String_o *)StringLiteral_17610/*"btn_txt_summon"*/,
                                            0);
                                          Master_object = this->fields.multiExSummonSprite;
                                          if ( Master_object )
                                          {
                                            v49 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_object,
                                                    0);
                                            v50 = 38.0;
                                            if ( this->fields.appendGachaTime <= 99 )
                                              v50 = 25.0;
                                            GameObjectExtensions__SetLocalPositionX(v49, v50, 0);
                                            Master_object = this->fields.multiExNumSprite;
                                            if ( Master_object )
                                            {
                                              Master_object = (void *)NumSpriteComponent__TryGetSpriteByIndex(
                                                                        (NumSpriteComponent_o *)Master_object,
                                                                        &sprite,
                                                                        0,
                                                                        0);
                                              if ( ((unsigned __int8)Master_object & 1) != 0 )
                                              {
                                                Master_object = this->fields.multiExNumSprite;
                                                if ( !Master_object )
                                                  goto LABEL_75;
                                                Master_object = (void *)NumSpriteComponent__TryGetSpriteByIndex(
                                                                          (NumSpriteComponent_o *)Master_object,
                                                                          &v58,
                                                                          1,
                                                                          0);
                                                if ( ((unsigned __int8)Master_object & 1) != 0 )
                                                {
                                                  Master_object = sprite;
                                                  if ( !sprite )
                                                    goto LABEL_75;
                                                  v52 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)sprite,
                                                          0);
                                                  v53 = -34.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v53 = -22.0;
                                                  GameObjectExtensions__SetLocalPositionX(v52, v53, 0);
                                                  Master_object = v58;
                                                  if ( !v58 )
                                                    goto LABEL_75;
                                                  v54 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)v58,
                                                          0);
                                                  v55 = -57.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v55 = -50.0;
                                                  GameObjectExtensions__SetLocalPositionX(v54, v55, 0);
                                                }
                                              }
                                              v56 = this->fields.multiExSummon;
                                              if ( v56 )
                                              {
                                                v57 = v56->fields.single;
                                                if ( v57 )
                                                {
                                                  SummonInfoControl__SetPriceText(
                                                    this,
                                                    v57->fields.infoLabel,
                                                    this->fields.appendGachaTime * this->fields.price,
                                                    (System_String_o *)StringLiteral_25049/*"{0:#,0}  "*/,
                                                    v51);
                                                  return;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_75:
    sub_1C32E7C(Master_object);
  }
  if ( isTicket )
    summonInfo = this->fields.ticketSummon;
  v34 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v34 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v34,
    summonInfo,
    *((float *)&v34->fields.possessionInfoButton->klass + 1),
    *(float *)&v34->fields.possessionInfoButton->monitor,
    v16);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetOneTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        const MethodInfo *method)
{
  GachaAppendMaster_o *Master_object; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v9; // w21
  struct VaildGachaInfo_o *v10; // x9
  struct VaildGachaInfo_o *v11; // x10
  GachaAppendEntity_o *v12; // x10
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v15; // x2
  SummonInfoControl_o *v16; // x0
  __int64 v17; // x8
  SummonInfoControl_SummonObjInfo_o *v18; // x20
  float *possessionInfoButton; // x8
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *v25; // x8
  UnityEngine_GameObject_o *v26; // x0
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  UnityEngine_GameObject_o *v29; // x0
  struct SummonInfoControl_SummonObjInfo_o *v30; // x8
  struct SummonInfoControl_SummonObjParts_o *v31; // x8
  UnityEngine_GameObject_o *v32; // x0
  struct SummonInfoControl_SummonObjInfo_o *v33; // x8
  struct SummonInfoControl_SummonObjParts_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *v37; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v39; // x8
  struct SummonInfoControl_SummonObjParts_o *v40; // x8
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8
  struct SummonInfoControl_SummonObjParts_o *v42; // x8
  struct SummonInfoControl_SummonObjInfo_o *v43; // x8
  struct SummonInfoControl_SummonObjParts_o *v44; // x8
  const MethodInfo *v45; // x3
  struct SummonInfoControl_SummonObjInfo_o *v46; // x8
  struct SummonInfoControl_SummonObjParts_o *v47; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v49; // x8
  struct SummonInfoControl_SummonObjParts_o *v50; // x8
  float v51; // s0 OVERLAPPED
  float v52; // s3
  float v53; // s1
  float v54; // s2
  struct SummonInfoControl_SummonObjInfo_o *v55; // x8
  struct SummonInfoControl_SummonObjParts_o *v56; // x8
  float v57; // s0 OVERLAPPED
  float v58; // s3
  float v59; // s1
  float v60; // s2
  struct SummonInfoControl_SummonObjInfo_o *v61; // x8
  struct SummonInfoControl_SummonObjParts_o *v62; // x8
  const MethodInfo *v63; // x6
  struct SummonInfoControl_SummonObjInfo_o *v64; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C33F74 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&SummonInfoControl_TypeInfo);
    sub_1C32C20(&StringLiteral_17525/*"btn_summon_bg5"*/);
    sub_1C32C20(&StringLiteral_17592/*"btn_txt_reset"*/);
    sub_1C32C20(&StringLiteral_20326/*"img_bg_saintquartzuse3"*/);
    sub_1C32C20(&StringLiteral_23831/*"summon_txt_done"*/);
    sub_1C32C20(&StringLiteral_17611/*"btn_txt_summon01"*/);
    sub_1C32C20(&StringLiteral_17583/*"btn_txt_only_1"*/);
    sub_1C32C20(&StringLiteral_1172/*"1"*/);
    byte_4C33F74 = 1;
  }
  appendEnt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_object )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(Master_object, gachaEnt, &appendEnt, 0);
  currentSummonData = this->fields.currentSummonData;
  v9 = (int)Master_object;
  v10 = (_DWORD)Master_object ? this->fields.currentSummonData : 0LL;
  v11 = (_DWORD)Master_object ? 0LL : this->fields.currentSummonData;
  if ( (_DWORD)Master_object )
  {
    v12 = appendEnt;
    if ( !appendEnt )
      goto LABEL_78;
    if ( !v10 )
      goto LABEL_78;
    v10->fields.appendPayType = appendEnt->fields.type;
    v10->fields.appendShopIdIndex = v12->fields.idx;
    if ( !currentSummonData )
      goto LABEL_78;
    drawNum = v12->fields.drawNum;
  }
  else
  {
    if ( !v11 )
      goto LABEL_78;
    drawNum = 0;
    v11->fields.appendPayType = 7;
    currentSummonData->fields.appendShopIdIndex = 0;
  }
  currentSummonData->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v9 != 0, 0);
  this->fields.isDispPayOneExSummon = v9 != 0;
  this->fields.isOneExUsePossible = v9 == 2;
  v16 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  v17 = 48;
  if ( isTicket )
    v17 = 56;
  v18 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v17);
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v16 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  possessionInfoButton = (float *)v16->fields.possessionInfoButton;
  if ( !v9 )
  {
    SummonInfoControl__SetButtonLocalPosX(v16, v18, possessionInfoButton[1], possessionInfoButton[2], v15);
    return;
  }
  SummonInfoControl__SetButtonLocalPosX(v16, v18, possessionInfoButton[4], possessionInfoButton[5], v15);
  v20 = this->fields.oneExSummon;
  if ( !v20 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v20->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v21 = this->fields.oneExSummon;
  if ( !v21 )
    goto LABEL_78;
  single = v21->fields.single;
  if ( !single )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)single->fields.button;
  if ( !Master_object )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X, 0);
  v24 = this->fields.oneExSummon;
  if ( !v24 )
    goto LABEL_78;
  v25 = v24->fields.single;
  if ( !v25 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v25->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPosition_36036864(v26, 0.0, 34.0, 0.0, 0);
  v27 = this->fields.oneExSummon;
  if ( !v27 )
    goto LABEL_78;
  v28 = v27->fields.single;
  if ( !v28 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v28->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(v29, 1.0, 0);
  v30 = this->fields.oneExSummon;
  if ( !v30 )
    goto LABEL_78;
  v31 = v30->fields.single;
  if ( !v31 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v31->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalScaleX(v32, 1.0, 0);
  v33 = this->fields.oneExSummon;
  if ( !v33 )
    goto LABEL_78;
  v34 = v33->fields.single;
  if ( !v34 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v34->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalScaleX(v35, 1.0, 0);
  v36 = this->fields.oneExSummon;
  if ( !v36 )
    goto LABEL_78;
  v37 = v36->fields.single;
  if ( !v37 )
    goto LABEL_78;
  buttonImg = v37->fields.buttonImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           buttonImg,
                                           (System_String_o *)StringLiteral_17525/*"btn_summon_bg5"*/,
                                           0);
  v39 = this->fields.oneExSummon;
  if ( !v39 )
    goto LABEL_78;
  v40 = v39->fields.single;
  if ( !v40 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           v40->fields.bonusCount,
                                           (System_String_o *)StringLiteral_17592/*"btn_txt_reset"*/,
                                           0);
  v41 = this->fields.oneExSummon;
  if ( !v41 )
    goto LABEL_78;
  v42 = v41->fields.single;
  if ( !v42 )
    goto LABEL_78;
  AtlasManager__SetEventSprite(v42->fields.bonusInfo, (System_String_o *)StringLiteral_17583/*"btn_txt_only_1"*/, 0);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           this->fields.oneExSummonSingleInfoSprite,
                                           (System_String_o *)StringLiteral_20326/*"img_bg_saintquartzuse3"*/,
                                           0);
  v43 = this->fields.oneExSummon;
  if ( !v43 )
    goto LABEL_78;
  v44 = v43->fields.single;
  if ( !v44 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v44->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1172/*"1"*/, 0);
  v46 = this->fields.oneExSummon;
  if ( !v46 )
    goto LABEL_78;
  v47 = v46->fields.single;
  if ( !v47 )
    goto LABEL_78;
  numImg = v47->fields.numImg;
  if ( this->fields.isOneExUsePossible )
  {
    SummonInfoControl__SetGachaSprite(this, numImg, (System_String_o *)StringLiteral_17611/*"btn_txt_summon01"*/, v45);
  }
  else
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                             numImg,
                                             (System_String_o *)StringLiteral_23831/*"summon_txt_done"*/,
                                             0);
  }
  v49 = this->fields.oneExSummon;
  if ( !v49 )
    goto LABEL_78;
  v50 = v49->fields.single;
  if ( !v50 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v50->fields.buttonImg;
  v51 = 1.0;
  if ( !this->fields.isOneExUsePossible )
    v51 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v52 = 1.0;
  v53 = v51;
  v54 = v51;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v51, 0);
  v55 = this->fields.oneExSummon;
  if ( !v55 )
    goto LABEL_78;
  v56 = v55->fields.single;
  if ( !v56 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v56->fields.button;
  v57 = 1.0;
  if ( !this->fields.isOneExUsePossible )
    v57 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v58 = 1.0;
  v59 = v57;
  v60 = v57;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)Master_object, *(UnityEngine_Color_o *)&v57, 0);
  v61 = this->fields.oneExSummon;
  if ( !v61
    || (v62 = v61->fields.single) == 0
    || (Master_object = (GachaAppendMaster_o *)v62->fields.numImg) == 0
    || (Master_object = (GachaAppendMaster_o *)(*(__int64 (__fastcall **)(GachaAppendMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                                                 Master_object,
                                                 *(_QWORD *)&Master_object->klass[1]._2.static_fields_size),
        (v64 = this->fields.oneExSummon) == 0) )
  {
LABEL_78:
    sub_1C32E7C(Master_object);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v64->fields.single, 0, 0, 1, 0, v63);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetOneTimeFreeButton(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjParts_o *onePay,
        int32_t oneCount,
        bool isMaxExtraCount,
        const MethodInfo *method)
{
  SummonInfoControl_o *v8; // x20
  System_String_o **v9; // x8
  System_String_o *v10; // x21
  UISprite_o *numImg; // x22
  const MethodInfo *v12; // x6

  v8 = this;
  if ( (byte_4C33F75 & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&StringLiteral_17523/*"btn_summon_bg2"*/);
    sub_1C32C20(&StringLiteral_17614/*"btn_txt_summonfree02"*/);
    this = (SummonInfoControl_o *)sub_1C32C20(&StringLiteral_17613/*"btn_txt_summonfree01"*/);
    byte_4C33F75 = 1;
  }
  if ( v8->fields._IsOneTimeFreeActive_k__BackingField )
  {
    v8->fields.price = 0;
    v8->fields.gachaTime = oneCount;
    if ( !onePay )
      goto LABEL_19;
    SummonInfoControl__SetActiveInfoLabel(this, onePay->fields.infoLabel, 0, (const MethodInfo *)isMaxExtraCount);
    this = (SummonInfoControl_o *)onePay->fields.buttonImg;
    if ( !this )
      goto LABEL_19;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17523/*"btn_summon_bg2"*/, 0);
    this = (SummonInfoControl_o *)onePay->fields.button;
    if ( !this )
      goto LABEL_19;
    UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17523/*"btn_summon_bg2"*/, 0);
    this = (SummonInfoControl_o *)onePay->fields.numImg;
    v9 = (System_String_o **)(isMaxExtraCount ? &StringLiteral_17614/*"btn_txt_summonfree02"*/ : &StringLiteral_17613/*"btn_txt_summonfree01"*/);
    if ( !this )
      goto LABEL_19;
    v10 = *v9;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    numImg = onePay->fields.numImg;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetEventSprite(numImg, v10, 0);
    this = (SummonInfoControl_o *)onePay->fields.numImg;
    if ( !this
      || (((void (__fastcall *)(SummonInfoControl_o *, void *))this->klass[2]._1.parent)(
            this,
            this->klass[2]._1.generic_class),
          (this = (SummonInfoControl_o *)onePay->fields.numImg) == 0)
      || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
    {
LABEL_19:
      sub_1C32E7C(this);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    SummonInfoControl__SetSummonGiftDisp(v8, onePay, 1, 0, 0, 0, v12);
  }
}


void SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  struct VaildGachaInfo_o *v8; // x8
  GachaEntity_o *v9; // x20
  const MethodInfo *v10; // x2
  const MethodInfo *v11; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4C33F6D & 1) == 0 )
  {
    sub_1C32C20(&UserGachaMaster_TypeInfo);
    byte_4C33F6D = 1;
  }
  ticketNum = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_13;
  id = currentSummonData->fields.id;
  if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
  this->fields._IsOneTimeFreeActive_k__BackingField = UserGachaMaster__IsOneTimeFreeCampaignActive(id, 0);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v6);
  v8 = this->fields.currentSummonData;
  if ( !v8 )
LABEL_13:
    sub_1C32E7C(CurrentGachaEntity);
  v9 = CurrentGachaEntity;
  if ( v8->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v7);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v7) && !this->fields._IsOneTimeFreeActive_k__BackingField )
  {
    SummonInfoControl__TicketGacha(this, v9, ticketNum, v11);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v9, v10);
  }
}


void SummonInfoControl__SetPointSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v8; // x1
  int32_t v9; // w20
  int32_t Price; // w0
  int32_t v11; // w21
  int v12; // w0
  const MethodInfo *v13; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v15; // x4
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UILabel_o *infoLabel; // x1
  int32_t v19; // w2
  System_String_o *v20; // x3
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  __int64 v24; // x5
  __int64 v25; // x6
  __int64 v26; // x7
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x21
  Il2CppObject *v30; // x0
  const MethodInfo *v31; // x4
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *v35; // x8
  const MethodInfo *v36; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v38; // x5
  int32_t gachaTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C33F6C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&System_Math_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    sub_1C32C20(&StringLiteral_17615/*"btn_txt_summon{0:00}"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    byte_4C33F6C = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C83334(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_27;
  if ( !MasterData_object )
    goto LABEL_27;
  MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, usrData->fields.userId, 0);
  if ( !MasterData_object )
    goto LABEL_27;
  v9 = *((_DWORD *)MasterData_object + 6);
  MasterData_object = SummonInfoControl__get_CurrentGachaEntity(this, v8);
  if ( !MasterData_object )
    goto LABEL_27;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_object, 0);
  this->fields.price = Price;
  v11 = Price;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = System_Math__Min_65042304(v9 / v11, 10, 0);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v12;
  if ( v12 >= 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v13);
    v27 = this->fields.friendPointSummon;
    if ( v27 )
    {
      multiPay = v27->fields.multiPay;
      if ( multiPay )
      {
        numImg = multiPay->fields.numImg;
        gachaTime = this->fields.gachaTime;
        v30 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v21, v22, v23, v24, v25, v26);
        MasterData_object = System_String__Format((System_String_o *)StringLiteral_17615/*"btn_txt_summon{0:00}"*/, v30, 0);
        if ( numImg )
        {
          UISprite__set_spriteName(numImg, (System_String_o *)MasterData_object, 0);
          v32 = this->fields.friendPointSummon;
          if ( v32 )
          {
            onePay = v32->fields.onePay;
            if ( onePay )
            {
              SummonInfoControl__SetPriceText(
                this,
                onePay->fields.infoLabel,
                this->fields.price,
                (System_String_o *)StringLiteral_25047/*"{0:#,0}"*/,
                v31);
              v34 = this->fields.friendPointSummon;
              if ( v34 )
              {
                v35 = v34->fields.multiPay;
                if ( v35 )
                {
                  infoLabel = v35->fields.infoLabel;
                  v20 = (System_String_o *)StringLiteral_25047/*"{0:#,0}"*/;
                  v19 = this->fields.gachaTime * this->fields.price;
                  goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C32E7C(MasterData_object);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v13);
  v16 = this->fields.friendPointSummon;
  if ( !v16 )
    goto LABEL_27;
  single = v16->fields.single;
  if ( !single )
    goto LABEL_27;
  infoLabel = single->fields.infoLabel;
  v19 = -1;
  v20 = (System_String_o *)StringLiteral_25096/*"{0}"*/;
LABEL_26:
  SummonInfoControl__SetPriceText(this, infoLabel, v19, v20, v15);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v36);
  SummonInfoControl__SetMultiTimeExButton(this, CurrentGachaEntity, 0, this->fields.friendPointSummon, v9, v38);
}


void SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  SummonInfoControl_o *v8; // x22
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v12; // x5
  __int64 v13; // x6
  __int64 v14; // x7
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  int32_t v17; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4C33F78 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C32C20(&int_TypeInfo);
    byte_4C33F78 = 1;
  }
  SummonInfoControl__SetActiveInfoLabel(this, label, 1, (const MethodInfo *)format);
  if ( price < 0 )
    price = v8->fields.price;
  v17 = price;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v9, v10, v11, v12, v13, v14);
  v16 = System_String__Format(format, v15, 0);
  if ( !label )
    sub_1C32E7C(v16);
  UILabel__set_text(label, v16, 0);
}


void SummonInfoControl__SetRequestData(
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
  int32_t summonType; // w22
  SummonInfoControl_o *v22; // x21
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct VaildGachaInfo_o *v24; // x8
  struct VaildGachaInfo_o *v25; // x8
  struct VaildGachaInfo_o *v26; // x8
  int32_t v27; // w26
  GachaRqParamData_o *v28; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  adjustStoryGachaIds = storyAdjustIds;
  v14 = gachaSubId;
  summonType = gachaType;
  v22 = this;
  if ( (byte_4C33F7E & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    this = (SummonInfoControl_o *)sub_1C32C20(&GachaRqParamData_TypeInfo);
    byte_4C33F7E = 1;
    if ( (summonType & 0x80000000) == 0 )
    {
LABEL_3:
      if ( (gachaId & 0x80000000) == 0 )
        goto LABEL_4;
      goto LABEL_12;
    }
  }
  summonType = v22->fields.summonType;
  if ( (gachaId & 0x80000000) == 0 )
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
  gachaId = currentSummonData->fields.id;
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
    sub_1C32E7C(this);
  adjustStoryGachaIds = v26->fields.adjustStoryGachaIds;
LABEL_22:
  v27 = ticketItemId & ~(ticketItemId >> 31);
  if ( shopIdIdx < 0 )
    shopIdIdx = 1;
  v28 = (GachaRqParamData_o *)sub_1C32E6C(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_35285576(
    v28,
    summonType,
    gachaId,
    warId,
    gachaTime,
    gachaResourceNum,
    shopIdIdx,
    v27,
    v14,
    adjustStoryGachaIds,
    isAppendSummon,
    selectBonusList,
    0);
  v22->fields.requestData = v28;
  sub_1C32BC4((CGThumbnailListItem_o *)&v22->fields.requestData, (int32_t)v28, v29, v30);
}


void SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1C32E7C(this);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void SummonInfoControl__SetSummonButtonsCollider(SummonInfoControl_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *summonObjInfos; // x19
  System_Action_object__o *v10; // x20

  if ( (byte_4C33F7F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_1C32C20(&Method_SummonInfoControl___c__DisplayClass183_0__SetSummonButtonsCollider_b__0__);
    sub_1C32C20(&SummonInfoControl___c__DisplayClass183_0_TypeInfo);
    byte_4C33F7F = 1;
  }
  v5 = sub_1C32E6C(SummonInfoControl___c__DisplayClass183_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8),
        *(_BYTE *)(v5 + 24) = onOff,
        summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos,
        v10 = (System_Action_object__o *)sub_1C32E6C(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo),
        System_Action_object____ctor(
          v10,
          (Il2CppObject *)v5,
          Method_SummonInfoControl___c__DisplayClass183_0__SetSummonButtonsCollider_b__0__,
          0),
        !summonObjInfos) )
  {
    sub_1C32E7C(v6);
  }
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)v10,
    (const MethodInfo_37991FC *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  UnityEngine_GameObject_o *v11; // x20
  System_Action_int__o *v12; // x21
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x1

  if ( (byte_4C33F68 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_int__TypeInfo);
    sub_1C32C20(&Method_SummonInfoControl__SetSummonDispInfo_b__153_0__);
    byte_4C33F68 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v4, v5);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v6);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !summonDetailInfo )
    goto LABEL_12;
  summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0);
  if ( !summonDetailInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton;
  if ( !summonDetailInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0),
        summonDetailInfo = (UnityEngine_GameObject_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                         this,
                                                         v9),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, summonDetailInfo != 0, 0),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton) == 0)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0),
        (currentSummonData = this->fields.currentSummonData) == 0)
    || !summonDetailInfo )
  {
LABEL_12:
    sub_1C32E7C(summonDetailInfo);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, currentSummonData->fields.isDispSummonListDialog, 0);
  *(_WORD *)&this->fields.isOneExUsePossible = 0;
  this->fields.isDispPayMultiExSummon = 0;
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v12 = (System_Action_int__o *)sub_1C32E6C(System_Action_int__TypeInfo);
  System_Action_int____ctor(v12, (Il2CppObject *)this, Method_SummonInfoControl__SetSummonDispInfo_b__153_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(v11, v12, 0, 0);
  SummonInfoControl__SetUpSummonInfos(this, v13);
  SummonInfoControl__OffSetInfoBtn(this, v14);
}


void SummonInfoControl__SetSummonGiftDisp(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjParts_o *summonObjParts,
        bool isOnePay,
        bool isMulti,
        bool isSingle,
        bool isChargeSummon,
        const MethodInfo *method)
{
  SummonInfoControl_o *v12; // x22
  System_String_o *v13; // x20
  SummonInfoControl___c_c *v14; // x8
  System_Func_T__TResult__o *_9__177_0; // x25
  Il2CppObject *v16; // x26
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  SummonInfoControl_o *v21; // x20
  System_String_o *v22; // x20
  SummonInfoControl___c_c *v23; // x8
  System_Func_T__TResult__o *_9__177_1; // x23
  Il2CppObject *v25; // x24
  struct SummonInfoControl___c_StaticFields *v26; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_String_o *v30; // x20
  SummonInfoControl___c_c *v31; // x8
  System_Func_T__TResult__o *_9__177_3; // x21
  Il2CppObject *v33; // x22
  struct SummonInfoControl___c_StaticFields *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v39; // x0
  UnityEngine_GameObject_o *v40; // x0
  UnityEngine_GameObject_o *v41; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SummonInfoControl_o *v46; // x0
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x22
  SummonInfoControl_o *v49; // x0
  const MethodInfo *v50; // x3
  UnityEngine_Object_o *v51; // x21
  SummonInfoControl_o *v52; // x0
  const MethodInfo *v53; // x3
  UISprite_o *v54; // x23
  _BOOL8 v55; // x0
  System_String_o *v56; // x0
  Il2CppObject *friendPointSummon; // x1
  System_String_o *v58; // x0
  int v59; // w21
  bool v60; // w1
  SummonInfoControl_o *v61; // x0
  const MethodInfo *v62; // x3
  UnityEngine_Component_o *v63; // x24
  SummonInfoControl_o *v64; // x0
  const MethodInfo *v65; // x3
  UnityEngine_Component_o *v66; // x23
  SummonInfoControl_o *v67; // x0
  const MethodInfo *v68; // x3
  UISprite_o *v69; // x22
  SummonInfoControl_o *v70; // x0
  const MethodInfo *v71; // x3
  SummonInfoControl_o *v72; // x0
  const MethodInfo *v73; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v75; // x0
  System_String_o *v76; // x0
  System_String_o *v77; // x20
  SummonInfoControl___c_c *v78; // x8
  System_Func_T__TResult__o *_9__177_2; // x23
  Il2CppObject *v80; // x24
  struct SummonInfoControl___c_StaticFields *v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v84; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x0

  v12 = this;
  if ( (byte_4C33F7B & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C32C20(&System_Func_char__string__TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_0__);
    sub_1C32C20(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_1__);
    sub_1C32C20(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_2__);
    sub_1C32C20(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_3__);
    sub_1C32C20(&SummonInfoControl___c_TypeInfo);
    sub_1C32C20(&StringLiteral_17549/*"btn_txt_bonus_{0}_glow"*/);
    sub_1C32C20(&StringLiteral_22338/*"num2"*/);
    sub_1C32C20(&StringLiteral_22336/*"num1"*/);
    sub_1C32C20(&StringLiteral_8129/*"Item"*/);
    sub_1C32C20(&StringLiteral_22337/*"num1_glow"*/);
    sub_1C32C20(&StringLiteral_22339/*"num2_glow"*/);
    this = (SummonInfoControl_o *)sub_1C32C20(&StringLiteral_17548/*"btn_txt_bonus_{0}"*/);
    byte_4C33F7B = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v13 = System_Int32__ToString((int)v12 + 408, 0);
    v14 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v14 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_0 = (System_Func_T__TResult__o *)v14->static_fields->__9__177_0;
    if ( !_9__177_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = SummonInfoControl___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__177_0 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_0, v16, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_0__, 0);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__177_0 = (struct System_Func_char__string__o *)_9__177_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__177_0, (int32_t)_9__177_0, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                 (System_Func_TSource__TResult__o *)_9__177_0,
                                                                 (const MethodInfo_31101C0 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v20,
                                    (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
    v21 = this;
    if ( !isMulti )
      goto LABEL_22;
  }
  else
  {
    v21 = 0;
    if ( !isMulti )
      goto LABEL_22;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v22 = System_Int32__ToString((int)v12 + 412, 0);
    v23 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v23 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_1 = (System_Func_T__TResult__o *)v23->static_fields->__9__177_1;
    if ( !_9__177_1 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = SummonInfoControl___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__177_1 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_1, v25, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_1__, 0);
      v26 = SummonInfoControl___c_TypeInfo->static_fields;
      v26->__9__177_1 = (struct System_Func_char__string__o *)_9__177_1;
      sub_1C32BC4((CGThumbnailListItem_o *)&v26->__9__177_1, (int32_t)_9__177_1, v27, v28);
    }
    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v22,
                                                                 (System_Func_TSource__TResult__o *)_9__177_1,
                                                                 (const MethodInfo_31101C0 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v29,
                                    (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
    v21 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v77 = System_Int32__ToString((int)v12 + 408, 0);
    v78 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v78 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_2 = (System_Func_T__TResult__o *)v78->static_fields->__9__177_2;
    if ( !_9__177_2 )
    {
      if ( !v78->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v78);
        v78 = SummonInfoControl___c_TypeInfo;
      }
      v80 = (Il2CppObject *)v78->static_fields->__9;
      _9__177_2 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_2, v80, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_2__, 0);
      v81 = SummonInfoControl___c_TypeInfo->static_fields;
      v81->__9__177_2 = (struct System_Func_char__string__o *)_9__177_2;
      sub_1C32BC4((CGThumbnailListItem_o *)&v81->__9__177_2, (int32_t)_9__177_2, v82, v83);
    }
    v84 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v77,
                                                                 (System_Func_TSource__TResult__o *)_9__177_2,
                                                                 (const MethodInfo_31101C0 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v84,
                                    (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v21 = this;
    button = (UnityEngine_Object_o *)summonObjParts->fields.button;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(button, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.button;
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScale_36038768(gameObject, 0.9, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v87, -6.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
        if ( !this )
          goto LABEL_131;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        this = (SummonInfoControl_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
        if ( !this )
          goto LABEL_131;
        v88 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v88, 45.0, 0);
      }
    }
  }
LABEL_22:
  if ( isSingle && v12->fields.appendGiftNum )
  {
    v30 = System_Int32__ToString((int)v12 + 416, 0);
    v31 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v31 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_3 = (System_Func_T__TResult__o *)v31->static_fields->__9__177_3;
    if ( !_9__177_3 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = SummonInfoControl___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__177_3 = (System_Func_T__TResult__o *)sub_1C32E6C(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_3, v33, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_3__, 0);
      v34 = SummonInfoControl___c_TypeInfo->static_fields;
      v34->__9__177_3 = (struct System_Func_char__string__o *)_9__177_3;
      sub_1C32BC4((CGThumbnailListItem_o *)&v34->__9__177_3, (int32_t)_9__177_3, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v30,
                                                                 (System_Func_TSource__TResult__o *)_9__177_3,
                                                                 (const MethodInfo_31101C0 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v37,
                                    (const MethodInfo_311CA8C *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v21 = this;
    bonusCount = (UnityEngine_Object_o *)summonObjParts->fields.bonusCount;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(bonusCount, 0, 0) )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_131;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v39, 42.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v40, -34.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v41, 0.9, 0);
      }
    }
    bonusInfo = (UnityEngine_Object_o *)summonObjParts->fields.bonusInfo;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(bonusInfo, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_131;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v43, -60.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v44, 0.9, 0);
      }
    }
  }
  if ( !v21 || (m_CancellationTokenSource = v21->fields.m_CancellationTokenSource) == 0 )
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
    v61 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v61,
                                    (UnityEngine_GameObject_o *)v61,
                                    (System_String_o *)StringLiteral_22336/*"num1"*/,
                                    v62);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v63 = (UnityEngine_Component_o *)this;
    v64 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v64,
                                    (UnityEngine_GameObject_o *)v64,
                                    (System_String_o *)StringLiteral_22338/*"num2"*/,
                                    v65);
    if ( !v63 )
      goto LABEL_131;
    v66 = (UnityEngine_Component_o *)this;
    v67 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v63, 0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v67,
                                    (UnityEngine_GameObject_o *)v67,
                                    (System_String_o *)StringLiteral_22337/*"num1_glow"*/,
                                    v68);
    if ( !v66 )
      goto LABEL_131;
    v69 = (UISprite_o *)this;
    v70 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v66, 0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v70,
                                    (UnityEngine_GameObject_o *)v70,
                                    (System_String_o *)StringLiteral_22339/*"num2_glow"*/,
                                    v71);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v51 = (UnityEngine_Object_o *)this;
    v72 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    v72,
                    (UnityEngine_GameObject_o *)v72,
                    (System_String_o *)StringLiteral_8129/*"Item"*/,
                    v73);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(BonusSprite, 7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v66, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v69, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v55 = UnityEngine_Object__op_Inequality(v51, 0, 0);
          if ( v55 )
          {
            if ( LODWORD(v21->fields.m_CancellationTokenSource) )
            {
              v75 = System_String__Format(
                      (System_String_o *)StringLiteral_17548/*"btn_txt_bonus_{0}"*/,
                      (Il2CppObject *)v21->fields.freeSummon,
                      0);
              UISprite__set_spriteName((UISprite_o *)v63, v75, 0);
              if ( LODWORD(v21->fields.m_CancellationTokenSource) > 1 )
              {
                v76 = System_String__Format(
                        (System_String_o *)StringLiteral_17548/*"btn_txt_bonus_{0}"*/,
                        (Il2CppObject *)v21->fields.friendPointSummon,
                        0);
                UISprite__set_spriteName((UISprite_o *)v66, v76, 0);
                if ( LODWORD(v21->fields.m_CancellationTokenSource) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17549/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v21->fields.freeSummon,
                                                  0);
                  if ( !v69 )
                    goto LABEL_131;
                  UISprite__set_spriteName(v69, (System_String_o *)this, 0);
                  if ( LODWORD(v21->fields.m_CancellationTokenSource) > 1 )
                  {
                    friendPointSummon = (Il2CppObject *)v21->fields.friendPointSummon;
                    v58 = (System_String_o *)StringLiteral_17549/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_68;
                  }
                }
              }
            }
LABEL_132:
            sub_1C32E84(v55);
          }
        }
      }
    }
LABEL_71:
    v59 = 0;
    goto LABEL_72;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  v46 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v46,
                                  (UnityEngine_GameObject_o *)v46,
                                  (System_String_o *)StringLiteral_22336/*"num1"*/,
                                  v47);
  if ( !this )
    goto LABEL_131;
  v48 = (UnityEngine_Object_o *)this;
  v49 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v49,
                                  (UnityEngine_GameObject_o *)v49,
                                  (System_String_o *)StringLiteral_22337/*"num1_glow"*/,
                                  v50);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_131;
  v51 = (UnityEngine_Object_o *)this;
  v52 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)summonObjParts->fields.singleDigit,
                                 0);
  v54 = SummonInfoControl__GetBonusSprite(
          v52,
          (UnityEngine_GameObject_o *)v52,
          (System_String_o *)StringLiteral_8129/*"Item"*/,
          v53);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v54, 7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v48, 0, 0) )
    goto LABEL_71;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v55 = UnityEngine_Object__op_Inequality(v48, 0, 0);
  if ( !v55 )
    goto LABEL_71;
  if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  v56 = System_String__Format((System_String_o *)StringLiteral_17548/*"btn_txt_bonus_{0}"*/, (Il2CppObject *)v21->fields.freeSummon, 0);
  UISprite__set_spriteName((UISprite_o *)v48, v56, 0);
  if ( !LODWORD(v21->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  friendPointSummon = (Il2CppObject *)v21->fields.freeSummon;
  v58 = (System_String_o *)StringLiteral_17549/*"btn_txt_bonus_{0}_glow"*/;
LABEL_68:
  this = (SummonInfoControl_o *)System_String__Format(v58, friendPointSummon, 0);
  if ( !v51 )
    goto LABEL_131;
  UISprite__set_spriteName((UISprite_o *)v51, (System_String_o *)this, 0);
  v59 = 1;
LABEL_72:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v59 )
  {
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
      if ( this )
      {
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( this )
        {
          v60 = 0;
          goto LABEL_83;
        }
      }
    }
LABEL_131:
    sub_1C32E7C(this);
  }
  if ( !v21 )
    goto LABEL_131;
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    SLODWORD(v21->fields.m_CancellationTokenSource) < 2,
    0);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_131;
  v60 = SLODWORD(v21->fields.m_CancellationTokenSource) > 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v60, 0);
}


void SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  char *Instance; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v5; // x8
  char *v6; // x20
  __int64 v7; // x22
  char *v8; // x23
  __int64 v9; // x9
  __int64 v10; // x8
  __int64 v11; // x9
  int v12; // w9

  if ( (byte_4C33F7A & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_1C32C20(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C33F7A = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0)
      || !Instance )
    {
LABEL_31:
      sub_1C32E7C(Instance);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0);
    if ( Instance )
    {
      v5 = *((_QWORD *)Instance + 3);
      v6 = Instance;
      if ( v5 )
      {
        if ( (int)v5 >= 1 )
        {
          v7 = 0;
          v8 = Instance + 32;
          do
          {
            if ( (unsigned int)v7 >= (unsigned int)v5 )
LABEL_32:
              sub_1C32E84(Instance);
            v9 = *(_QWORD *)&v8[8 * v7];
            if ( !v9 )
              goto LABEL_31;
            if ( *(_DWORD *)(v9 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v7 >= *((_DWORD *)v6 + 6) )
                goto LABEL_32;
              v10 = *(_QWORD *)&v8[8 * v7];
              if ( !v10 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v10 + 24), 0);
              v5 = *((_QWORD *)v6 + 3);
              if ( (unsigned int)v7 >= (unsigned int)v5 )
                goto LABEL_32;
              v11 = *(_QWORD *)&v8[8 * v7];
              if ( !v11 )
                goto LABEL_31;
              v12 = *(_DWORD *)(v11 + 20);
              switch ( v12 )
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
            ++v7;
          }
          while ( (int)v7 < (int)v5 );
        }
      }
    }
  }
}


void SummonInfoControl__SetSummonHistorySprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  UIAtlas_o *Component_object; // x0

  if ( (byte_4C33F87 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33F87 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonHistorySprite) == 0)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonHistoryButton) == 0) )
    {
      sub_1C32E7C(Component_object);
    }
    UIButton__set_normalSprite((UIButton_o *)Component_object, imgName, 0);
  }
}


void SummonInfoControl__SetSummonInfo(
        SummonInfoControl_o *this,
        VaildGachaInfo_o *gachaData,
        SummonInfoControl_ClickDelegate_o *callback,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_1C32E7C(this);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickCallbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.currentSummonData = gachaData;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.currentSummonData, (int32_t)gachaData, v6, v7);
  SummonInfoControl__SetSummonGiftInfo(this, v8);
  SummonInfoControl__SetSummonDispInfo(this, v9);
}


void SummonInfoControl__SetSummonInfo_35524352(SummonInfoControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct VaildGachaInfo_o *currentSummonData; // x8
  int klass; // w22
  int32_t PayOneTimePrice; // w21
  __int64 v7; // x20
  int klass_high; // w22
  int32_t PayMultiTimePrice; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C33F79 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C32C20(&SummonInfoControl_SummonInfo_TypeInfo);
    byte_4C33F79 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          currentSummonData->fields.id,
          (const MethodInfo_3396884 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity )
    goto LABEL_17;
  if ( SHIDWORD(entity[3].klass) >= 1 )
  {
    klass = (int)entity[4].klass;
    PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0);
    v7 = sub_1C32E6C(SummonInfoControl_SummonInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v7, 0);
    *(_DWORD *)(v7 + 16) = klass;
    *(_DWORD *)(v7 + 20) = PayOneTimePrice;
    *(_DWORD *)(v7 + 24) = 1;
    Master_object = entity;
    if ( entity )
    {
      if ( SLODWORD(entity[3].monitor) < 1 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C32E7C(Master_object);
  }
  if ( SLODWORD(entity[3].monitor) < 1 )
    return;
LABEL_14:
  klass_high = HIDWORD(Master_object[4].klass);
  PayMultiTimePrice = GachaEntity__getPayMultiTimePrice((GachaEntity_o *)Master_object, 0);
  v7 = sub_1C32E6C(SummonInfoControl_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = klass_high;
  *(_DWORD *)(v7 + 20) = PayMultiTimePrice;
  *(_DWORD *)(v7 + 24) = 2;
LABEL_15:
  *(int32x2_t *)&this->fields.price = vrev64_s32(*(int32x2_t *)(v7 + 16));
  this->fields.shopIdIdx = *(_DWORD *)(v7 + 24);
}


void SummonInfoControl__SetSummonListSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  UIAtlas_o *Component_object; // x0

  if ( (byte_4C33F86 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33F86 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonListSprite)
      || (UISprite__set_atlas(this->fields.summonListSprite, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonListSprite) == 0)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonListButton) == 0) )
    {
      sub_1C32E7C(Component_object);
    }
    UIButton__set_normalSprite((UIButton_o *)Component_object, imgName, 0);
  }
}


void SummonInfoControl__SetTutorialBtnEnable(SummonInfoControl_o *this, bool isEnable, const MethodInfo *method)
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
    || (v5 = this, (this = (SummonInfoControl_o *)multiPay->fields.button) == 0)
    || (v6 = isEnable,
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0),
        (this = (SummonInfoControl_o *)v5->fields.summonDetailBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, v6, 0),
        (this = (SummonInfoControl_o *)v5->fields.summonHelpInfo) == 0) )
  {
LABEL_7:
    sub_1C32E7C(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
}


void SummonInfoControl__SetTutorialExeBtnEnable(SummonInfoControl_o *this, bool isEnable, const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  SummonInfoControl_o *v5; // x20
  struct SummonInfoControl_SummonObjInfo_o *v7; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon
    || (onePay = stoneSummon->fields.onePay) == 0
    || (v5 = this, (this = (SummonInfoControl_o *)onePay->fields.button) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0),
        (v7 = v5->fields.stoneSummon) == 0)
    || (single = v7->fields.single) == 0
    || (this = (SummonInfoControl_o *)single->fields.button) == 0 )
  {
    sub_1C32E7C(this);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
}


void SummonInfoControl__SetUpSummonInfos(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t summonType; // w8
  UnityEngine_Component_o *possessionInfoButton; // x0
  UnityEngine_GameObject_o *v5; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *v11; // x20
  const MethodInfo *v12; // x1
  const MethodInfo *v13; // x1

  summonType = this->fields.summonType;
  switch ( summonType )
  {
    case 1:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
      if ( !possessionInfoButton )
        goto LABEL_15;
      gameObject = UnityEngine_Component__get_gameObject(possessionInfoButton, 0);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                          this,
                                                          v9);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(gameObject, possessionInfoButton != 0, 0);
      SummonInfoControl__SetPaySummonInfo(this, v10);
      break;
    case 7:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
      if ( !possessionInfoButton )
        goto LABEL_15;
      v11 = UnityEngine_Component__get_gameObject(possessionInfoButton, 0);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                          this,
                                                          v12);
      if ( !v11 )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(v11, possessionInfoButton != 0, 0);
      SummonInfoControl__SetChargeSummonInfo(this, v13);
      break;
    case 3:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.summonDetailInfo;
      if ( possessionInfoButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)possessionInfoButton, 0, 0);
        possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
        if ( possessionInfoButton )
        {
          v5 = UnityEngine_Component__get_gameObject(possessionInfoButton, 0);
          possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                              this,
                                                              v6);
          if ( v5 )
          {
            UnityEngine_GameObject__SetActive(v5, possessionInfoButton != 0, 0);
            SummonInfoControl__SetFreeSummonInfo(this, v7);
            return;
          }
        }
      }
LABEL_15:
      sub_1C32E7C(possessionInfoButton);
  }
}


void SummonInfoControl__StoneGacha(SummonInfoControl_o *this, GachaEntity_o *payGachaEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SummonInfoControl_o *v5; // x19
  const MethodInfo *v6; // x4
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v9; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x6
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  const MethodInfo *v16; // x6
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  const MethodInfo *v18; // x5
  const MethodInfo *v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  int gachaTime; // w8
  System_String_o *v27; // x20
  Il2CppObject *v28; // x0
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  SummonInfoControl_o *v31; // x1
  const MethodInfo *v32; // x4
  struct SummonInfoControl_SummonObjInfo_o *v33; // x8
  struct SummonInfoControl_SummonObjParts_o *v34; // x8
  int v35; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4C33F71 & 1) == 0 )
  {
    sub_1C32C20(&int_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    this = (SummonInfoControl_o *)sub_1C32C20(&StringLiteral_17615/*"btn_txt_summon{0:00}"*/);
    byte_4C33F71 = 1;
  }
  if ( !payGachaEnt )
    goto LABEL_21;
  if ( payGachaEnt->fields.shopId1 >= 1 && payGachaEnt->fields.shopId2 > 0 )
  {
    SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 0, v3);
    v5->fields.gachaTime = payGachaEnt->fields.drawNum1;
    this = (SummonInfoControl_o *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0);
    stoneSummon = v5->fields.stoneSummon;
    v5->fields.price = (int)this;
    v5->fields.shopIdIdx = 1;
    if ( stoneSummon )
    {
      onePay = stoneSummon->fields.onePay;
      if ( onePay )
      {
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_25096/*"{0}"*/, v6);
        v9 = v5->fields.stoneSummon;
        if ( v9 )
        {
          multiPay = v9->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_25096/*"{0}"*/,
              v13);
            v15 = v5->fields.stoneSummon;
            if ( v15 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v15->fields.onePay, 1, 0, 0, 0, v14);
              v17 = v5->fields.stoneSummon;
              if ( v17 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v17->fields.multiPay, 0, 1, 0, 0, v16);
                SummonInfoControl__SetElevenBonusInfo(
                  v5,
                  payGachaEnt,
                  0,
                  v5->fields.stoneSummon,
                  v5->fields.gachaTime,
                  v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1C32E7C(this);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_35524352(v5, v19);
  gachaTime = v5->fields.gachaTime;
  v27 = (System_String_o *)StringLiteral_17615/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v35 = gachaTime;
  v28 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v35, v20, v21, v22, v23, v24, v25);
  this = (SummonInfoControl_o *)System_String__Format(v27, v28, 0);
  v29 = v5->fields.stoneSummon;
  if ( !v29 )
    goto LABEL_21;
  single = v29->fields.single;
  if ( !single )
    goto LABEL_21;
  v31 = this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)v31, 0);
  v33 = v5->fields.stoneSummon;
  if ( !v33 )
    goto LABEL_21;
  v34 = v33->fields.single;
  if ( !v34 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v34->fields.infoLabel, -1, (System_String_o *)StringLiteral_25096/*"{0}"*/, v32);
}


void SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x0
  const MethodInfo *v8; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v11; // x4
  struct SummonInfoControl_SummonObjInfo_o *v12; // x8
  struct SummonInfoControl_SummonObjParts_o *v13; // x8
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x6
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  const MethodInfo *v21; // x5

  if ( (byte_4C33F70 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    sub_1C32C20(&StringLiteral_25047/*"{0:#,0}"*/);
    byte_4C33F70 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_25096/*"{0}"*/, v8);
  v12 = this->fields.ticketSummon;
  if ( !v12 )
    goto LABEL_12;
  v13 = v12->fields.onePay;
  if ( !v13
    || (SummonInfoControl__SetPriceText(
          this,
          v13->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_25047/*"{0:#,0}"*/,
          v11),
        (v14 = this->fields.ticketSummon) == 0)
    || (multiPay = v14->fields.multiPay) == 0
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_25096/*"{0}"*/, v18),
        (v20 = this->fields.ticketSummon) == 0) )
  {
LABEL_12:
    sub_1C32E7C(v7);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v20->fields.multiPay, 0, 1, 0, 0, v19);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v21);
}


bool SummonInfoControl__TryGetTicket(SummonInfoControl_o *this, int32_t *ticketNum, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v8; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C33F6F & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    byte_4C33F6F = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserItemMaster___);
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
                                    0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      v8 = entity->fields.num > 0;
LABEL_12:
      num = entity->fields.num;
      result = v8;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C32E7C(Master_object);
  }
  v8 = 0;
  result = 0;
  num = 0;
  if ( entity )
    goto LABEL_12;
LABEL_13:
  *ticketNum = num;
  return result;
}


void SummonInfoControl__TutorialGacha(SummonInfoControl_o *this, GachaEntity_o *payGachaEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Master_object; // x0
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  __int64 v10; // x9
  const MethodInfo *v11; // x6
  int32_t v12; // w8
  struct SummonInfoControl_SummonObjInfo_o *v13; // x9
  const MethodInfo *v14; // x4
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v17; // x4
  struct SummonInfoControl_SummonObjInfo_o *v18; // x8
  struct SummonInfoControl_SummonObjParts_o *v19; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C33F6E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&StringLiteral_25096/*"{0}"*/);
    byte_4C33F6E = 1;
  }
  *(_QWORD *)servantEquipSum = 0;
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.stoneSummon, 1, v3);
  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon )
    goto LABEL_19;
  GameObjectExtensions__SetLocalPositionY(stoneSummon->fields.singleSummonInfo, 0.0, 0);
  haveStoneNum = this->fields.haveStoneNum;
  userFreeStone = this->fields.userFreeStone;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)UserServantMaster__getCountWithoutMaterial(
                                    (UserServantMaster_o *)Master_object,
                                    &servantEquipSum[1],
                                    servantEquipSum,
                                    0);
  if ( !payGachaEnt )
    goto LABEL_19;
  v10 = 64;
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
    v10 = 68;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v10);
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0);
    v12 = 2;
  }
  else
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0);
    v12 = 1;
  }
  v13 = this->fields.stoneSummon;
  this->fields.price = (int)Master_object;
  this->fields.shopIdIdx = v12;
  if ( !v13
    || (SummonInfoControl__SetSummonGiftDisp(this, v13->fields.single, 0, 1, 0, 0, v11),
        (v15 = this->fields.stoneSummon) == 0)
    || (single = v15->fields.single) == 0
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_25096/*"{0}"*/, v14),
        (v18 = this->fields.stoneSummon) == 0)
    || (v19 = v18->fields.single) == 0 )
  {
LABEL_19:
    sub_1C32E7C(Master_object);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_object,
    this->fields.gachaTime,
    v19->fields.numImg,
    v19->fields.bonusInfo,
    v17);
}


void SummonInfoControl___SetSummonDispInfo_b__153_0(
        SummonInfoControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  UserGameEntity_o *v5; // x8
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( SelfUserGame )
  {
    v5 = entity;
    if ( !entity )
      sub_1C32E7C(SelfUserGame);
    this->fields.haveStoneNum = *(_DWORD *)((char *)&qword_B8 + (_QWORD)entity);
    *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)((char *)&dword_B0 + (_QWORD)v5);
  }
}


GachaEntity_o *SummonInfoControl__get_CurrentGachaEntity(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v2 = this;
  if ( (byte_4C33F65 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4C33F65 = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0 )
    sub_1C32E7C(this);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_3396838 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


ViewGachaFeaturedServantEntity_o *SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8
  ViewGachaFeaturedServantEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  entity = 0;
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)this->fields.viewGachaFeaturedServantMaster) == 0 )
    sub_1C32E7C(this);
  if ( ViewGachaFeaturedServantMaster__TryGetEntity(
         (ViewGachaFeaturedServantMaster_o *)this,
         &entity,
         currentSummonData->fields.id,
         0) )
  {
    return entity;
  }
  else
  {
    return 0;
  }
}


int32_t SummonInfoControl__get_HaveChargeStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._HaveChargeStoneNum_k__BackingField;
}


int32_t SummonInfoControl__get_HaveFreeStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._HaveFreeStoneNum_k__BackingField;
}


bool SummonInfoControl__get_IsOneTimeFreeActive(SummonInfoControl_o *this, const MethodInfo *method)
{
  return this->fields._IsOneTimeFreeActive_k__BackingField;
}


SummonInfoLayout_o *SummonInfoControl__get_MultiExSummonInfoLayout(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *multiExSummonInfoLayout; // x21
  CGThumbnailListItem_o *p_multiExSummonInfoLayout; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v7; // x8
  System_Func_object__bool__o *_9__145_0; // x21
  Il2CppObject *v9; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C33F64 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    sub_1C32C20(&System_Func_SummonInfoLayout__bool__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__145_0__);
    sub_1C32C20(&SummonInfoControl___c_TypeInfo);
    byte_4C33F64 = 1;
  }
  multiExSummonInfoLayout = (UnityEngine_Object_o *)this->fields.multiExSummonInfoLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_multiExSummonInfoLayout = (CGThumbnailListItem_o *)&this->fields.multiExSummonInfoLayout;
  if ( UnityEngine_Object__op_Equality(multiExSummonInfoLayout, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_31352CC *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v7 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v7 = SummonInfoControl___c_TypeInfo;
    }
    _9__145_0 = (System_Func_object__bool__o *)v7->static_fields->__9__145_0;
    if ( !_9__145_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = SummonInfoControl___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__145_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__145_0,
        v9,
        Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__145_0__,
        0);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__145_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__145_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__145_0, (int32_t)_9__145_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            Components_object,
            (System_Func_TSource__bool__o *)_9__145_0,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    p_multiExSummonInfoLayout->klass = (CGThumbnailListItem_c *)v13;
    sub_1C32BC4(p_multiExSummonInfoLayout, (int32_t)v13, v14, v15);
  }
  return (SummonInfoLayout_o *)p_multiExSummonInfoLayout->klass;
}


SummonInfoLayout_o *SummonInfoControl__get_SummonInfoLayout(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonInfoLayout; // x21
  CGThumbnailListItem_o *p_summonInfoLayout; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v7; // x8
  System_Func_object__bool__o *_9__143_0; // x21
  Il2CppObject *v9; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C33F63 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    sub_1C32C20(&System_Func_SummonInfoLayout__bool__TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&Method_SummonInfoControl___c__get_SummonInfoLayout_b__143_0__);
    sub_1C32C20(&SummonInfoControl___c_TypeInfo);
    byte_4C33F63 = 1;
  }
  summonInfoLayout = (UnityEngine_Object_o *)this->fields.summonInfoLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonInfoLayout = (CGThumbnailListItem_o *)&this->fields.summonInfoLayout;
  if ( UnityEngine_Object__op_Equality(summonInfoLayout, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C32E7C(0);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_31352CC *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v7 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v7 = SummonInfoControl___c_TypeInfo;
    }
    _9__143_0 = (System_Func_object__bool__o *)v7->static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( !v7->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v7);
        v7 = SummonInfoControl___c_TypeInfo;
      }
      v9 = (Il2CppObject *)v7->static_fields->__9;
      _9__143_0 = (System_Func_object__bool__o *)sub_1C32E6C(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__143_0, v9, Method_SummonInfoControl___c__get_SummonInfoLayout_b__143_0__, 0);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__143_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__143_0;
      sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__143_0, (int32_t)_9__143_0, v11, v12);
    }
    v13 = System_Linq_Enumerable__FirstOrDefault_object__51408536(
            Components_object,
            (System_Func_TSource__bool__o *)_9__143_0,
            (const MethodInfo_3106E98 *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    p_summonInfoLayout->klass = (CGThumbnailListItem_c *)v13;
    sub_1C32BC4(p_summonInfoLayout, (int32_t)v13, v14, v15);
  }
  return (SummonInfoLayout_o *)p_summonInfoLayout->klass;
}


void SummonInfoControl__set_HaveChargeStoneNum(SummonInfoControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._HaveChargeStoneNum_k__BackingField = value;
}


void SummonInfoControl__set_HaveFreeStoneNum(SummonInfoControl_o *this, int32_t value, const MethodInfo *method)
{
  this->fields._HaveFreeStoneNum_k__BackingField = value;
}


void SummonInfoControl__set_IsOneTimeFreeActive(SummonInfoControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsOneTimeFreeActive_k__BackingField = value;
}


void SummonInfoControl_ClickDelegate___ctor(
        SummonInfoControl_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  char v11; // w21
  char v12; // w0
  __int64 v13; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A737DC;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v9;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v8 )
    {
      if ( this->fields.method_is_virtual )
      {
        v11 = sub_1C32CD8(method);
        v12 = sub_1C33194(method);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = sub_1A738D8;
          else
            v9 = sub_1A7389C;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = sub_1A73818;
        }
        else
        {
          v9 = sub_1A737EC;
        }
      }
      else
      {
        v9 = sub_1A737BC;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v13, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1A73774;
}


System_IAsyncResult_o *SummonInfoControl_ClickDelegate__BeginInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  GachaRqParamData_o *v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = paramData;
  return (System_IAsyncResult_o *)sub_1C32BD4(this, &v6, callback, object);
}


void SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void SummonInfoControl_ClickDelegate__Invoke(
        SummonInfoControl_ClickDelegate_o *this,
        GachaRqParamData_o *paramData,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, GachaRqParamData_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    paramData,
    this->fields.method);
}


void SummonInfoControl_InfoButtonLayout___ctor(SummonInfoControl_InfoButtonLayout_o *this, const MethodInfo *method)
{
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  *(_OWORD *)&this->fields.Top.fields.x = xmmword_C0C530;
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712;
  if ( !byte_4C313D1 )
  {
    sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
    byte_4C313D1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.Buttom.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.Buttom.fields.z = z;
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonInfoControl_SummonInfo___ctor(
        SummonInfoControl_SummonInfo_o *this,
        int32_t drawNum,
        int32_t price,
        int32_t shopIdIdx,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.drawNum = drawNum;
  this->fields.price = price;
  this->fields.shopIdIdx = shopIdIdx;
}


void SummonInfoControl_SummonObjInfo___ctor(SummonInfoControl_SummonObjInfo_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonInfoControl_SummonObjParts___ctor(SummonInfoControl_SummonObjParts_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonInfoControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C33F8A & 1) == 0 )
  {
    sub_1C32C20(&SummonInfoControl___c_TypeInfo);
    byte_4C33F8A = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonInfoControl___c_TypeInfo->static_fields->__9 = (struct SummonInfoControl___c_o *)v1;
  sub_1C32BC4((CGThumbnailListItem_o *)SummonInfoControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SummonInfoControl___c___ctor(SummonInfoControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonInfoControl___c___InitSummonBtnDisp_b__156_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_4C33F8B & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C33F8B = 1;
  }
  if ( !x )
    goto LABEL_15;
  singleSummonInfo = (UnityEngine_Object_o *)x->fields.singleSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0, 0) )
  {
    this = (SummonInfoControl___c_o *)x->fields.singleSummonInfo;
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  multiSummonInfo = (UnityEngine_Object_o *)x->fields.multiSummonInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(multiSummonInfo, 0, 0) )
  {
    this = (SummonInfoControl___c_o *)x->fields.multiSummonInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_15:
    sub_1C32E7C(this);
  }
}


void SummonInfoControl___c___SetMultiTimeExButton_b__169_0(
        SummonInfoControl___c_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( (byte_4C33F8C & 1) == 0 )
  {
    sub_1C32C20(&AtlasManager_TypeInfo);
    this = (SummonInfoControl___c_o *)sub_1C32C20(&string_TypeInfo);
    byte_4C33F8C = 1;
  }
  if ( !sprite )
    sub_1C32E7C(this);
  UISprite__set_spriteName(sprite, string_TypeInfo->static_fields->Empty, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(sprite, spriteName, 0);
}


System_String_o *SummonInfoControl___c___SetSummonGiftDisp_b__177_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4C33F8D & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    byte_4C33F8D = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0);
}


System_String_o *SummonInfoControl___c___SetSummonGiftDisp_b__177_1(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4C33F8E & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    byte_4C33F8E = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0);
}


System_String_o *SummonInfoControl___c___SetSummonGiftDisp_b__177_2(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4C33F8F & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    byte_4C33F8F = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0);
}


System_String_o *SummonInfoControl___c___SetSummonGiftDisp_b__177_3(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4C33F90 & 1) == 0 )
  {
    sub_1C32C20(&char_TypeInfo);
    byte_4C33F90 = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0);
}


bool SummonInfoControl___c___get_MultiExSummonInfoLayout_b__145_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.type == 1;
}


bool SummonInfoControl___c___get_SummonInfoLayout_b__143_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C32E7C(this);
  return x->fields.type == 0;
}


void SummonInfoControl___c__DisplayClass183_0___ctor(
        SummonInfoControl___c__DisplayClass183_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonInfoControl___c__DisplayClass183_0___SetSummonButtonsCollider_b__0(
        SummonInfoControl___c__DisplayClass183_0_o *this,
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
    || (single = x->fields.single) == 0
    || !this->fields.__4__this
    || (SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, single->fields.button, this->fields.onOff, v3),
        (onePay = x->fields.onePay) == 0)
    || !this->fields.__4__this
    || (SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, onePay->fields.button, this->fields.onOff, v7),
        (multiPay = x->fields.multiPay) == 0)
    || !this->fields.__4__this )
  {
    sub_1C32E7C(this);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, this->fields.onOff, v9);
}