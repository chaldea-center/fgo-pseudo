void __fastcall SummonInfoControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct SummonInfoControl_StaticFields *static_fields; // x8

  if ( (byte_4B41073 & 1) == 0 )
  {
    sub_1BDB878(&SummonInfoControl_TypeInfo, v1);
    byte_4B41073 = 1;
  }
  static_fields = SummonInfoControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OPEN_TIME = xmmword_BEC0D0;
  *(_QWORD *)&static_fields->APD_SUMMON_BTN2_X = 0x4370000000000000LL;
}


void __fastcall SummonInfoControl___ctor(SummonInfoControl_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.gachaTime = 0x100000001LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall SummonInfoControl__AssertCheck(SummonInfoControl_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall SummonInfoControl__Awake(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x0
  Il2CppObject *freeSummon; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  Il2CppClass **v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  Il2CppClass **v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  Il2CppClass **v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Object_array *v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  Il2CppClass **v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Object_array *v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  Il2CppClass **v43; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  Il2CppClass **v49; // x0
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1

  if ( (byte_4B41052 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__, v3);
    sub_1BDB878(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo, v4);
    byte_4B41052 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v5 )
    goto LABEL_33;
  freeSummon = (Il2CppObject *)this->fields.freeSummon;
  items = v5->fields._items;
  v11 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v5->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = &items->obj.klass + size;
    v5->fields._size = size + 1;
    v13[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v13 + 4), (int32_t)freeSummon, v8, v9);
  }
  freeSummon = (Il2CppObject *)this->fields.friendPointSummon;
  v16 = v5->fields._items;
  v17 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !v16 )
    goto LABEL_33;
  v18 = v5->fields._size;
  if ( (unsigned int)v18 >= v16->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = &v16->obj.klass + v18;
    v5->fields._size = v18 + 1;
    v19[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v19 + 4), (int32_t)freeSummon, v14, v15);
  }
  freeSummon = (Il2CppObject *)this->fields.stoneSummon;
  v22 = v5->fields._items;
  v23 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !v22 )
    goto LABEL_33;
  v24 = v5->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v5->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v25 + 4), (int32_t)freeSummon, v20, v21);
  }
  freeSummon = (Il2CppObject *)this->fields.ticketSummon;
  v28 = v5->fields._items;
  v29 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !v28 )
    goto LABEL_33;
  v30 = v5->fields._size;
  if ( (unsigned int)v30 >= v28->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = &v28->obj.klass + v30;
    v5->fields._size = v30 + 1;
    v31[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v31 + 4), (int32_t)freeSummon, v26, v27);
  }
  freeSummon = (Il2CppObject *)this->fields.chargeSummon;
  v34 = v5->fields._items;
  v35 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !v34 )
    goto LABEL_33;
  v36 = v5->fields._size;
  if ( (unsigned int)v36 >= v34->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = &v34->obj.klass + v36;
    v5->fields._size = v36 + 1;
    v37[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v37 + 4), (int32_t)freeSummon, v32, v33);
  }
  freeSummon = (Il2CppObject *)this->fields.oneExSummon;
  v40 = v5->fields._items;
  v41 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !v40 )
    goto LABEL_33;
  v42 = v5->fields._size;
  if ( (unsigned int)v42 >= v40->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = &v40->obj.klass + v42;
    v5->fields._size = v42 + 1;
    v43[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v43 + 4), (int32_t)freeSummon, v38, v39);
  }
  freeSummon = (Il2CppObject *)this->fields.multiExSummon;
  v46 = v5->fields._items;
  v47 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v5->fields._version;
  if ( !v46 )
LABEL_33:
    sub_1BDBAD4(v6, freeSummon);
  v48 = v5->fields._size;
  if ( (unsigned int)v48 >= v46->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v5,
      freeSummon,
      *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = &v46->obj.klass + v48;
    v5->fields._size = v48 + 1;
    v49[4] = (Il2CppClass *)freeSummon;
    sub_1BDB81C((CGThumbnailListItem_o *)(v49 + 4), (int32_t)freeSummon, v44, v45);
  }
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v5;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.summonObjInfos, (int32_t)v5, v50, v51);
  SummonInfoControl__InitMasterData(this, v52);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4B4106E & 1) == 0 )
  {
    sub_1BDB878(&Method_SummonInfoControl_ClickBase__, *(_QWORD *)&seKind);
    byte_4B4106E = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1BDB890(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, seKind, 0, 0LL);
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
  const MethodInfo *v3; // x3
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0LL;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.animationCallback, 0, v2, v3);
  ActionExtensions__Call(animationCallback, 0LL);
}


int32_t __fastcall SummonInfoControl__GetBonusSelectLineupCount(SummonInfoControl_o *this, const MethodInfo *method)
{
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
  System_Collections_Generic_List_int__o *v15; // x20
  System_Int32_array *Master_object; // x0
  __int64 gachaBonusSelectLineupId; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v19; // x2
  GachaBonusSelectEntity_array *v20; // x19
  signed int max_length; // w8
  unsigned int v22; // w22
  GachaBonusSelectEntity_o *v23; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v27; // x19
  int32_t current; // w20
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  _BOOL8 EntityList; // x0
  __int64 giftId; // x1
  __int64 v33; // x2
  GachaBonusSelectLineupEntity_array *v34; // x20
  signed int v35; // w8
  signed int i; // w22
  GachaBonusSelectLineupEntity_o *v37; // x8
  struct System_Int32_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  System_Collections_Generic_List_int__o *v41; // x20
  int32_t v42; // w19
  Il2CppObject *v43; // x0
  __int64 v44; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 objectId; // x1
  __int64 v47; // x2
  GiftEntity_array *v48; // x19
  __int64 v49; // x8
  __int64 v50; // x23
  GiftEntity_o *v51; // x9
  struct System_Int32_array *v52; // x9
  _QWORD *v53; // x10
  __int64 v54; // x11
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x0
  System_Collections_Generic_List_Enumerator_int__o v57; // [xsp+0h] [xbp-A0h] BYREF
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v59; // [xsp+20h] [xbp-80h] BYREF
  GachaBonusSelectEntity_array *entityArray; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B41072 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaBonusSelectMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_GiftMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&Method_System_Linq_Enumerable_Distinct_int___, v6);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v9);
    sub_1BDB878(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v10);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1BDB878(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12);
    sub_1BDB878(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1BDB878(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4B41072 = 1;
  }
  entityArray = 0LL;
  memset(&v59, 0, sizeof(v59));
  gachaBonusSelectLineupEntities = 0LL;
  v15 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
    v20 = entityArray;
    if ( !entityArray )
      goto LABEL_68;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        if ( v22 >= max_length )
          sub_1BDBADC(Master_object, gachaBonusSelectLineupId, v19);
        v23 = v20->m_Items[v22];
        if ( !v23 )
          break;
        if ( !v15 )
          break;
        gachaBonusSelectLineupId = (unsigned int)v23->fields.gachaBonusSelectLineupId;
        items = v15->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v15->fields._version;
        if ( !items )
          break;
        size = v15->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            gachaBonusSelectLineupId,
            *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
        }
        else
        {
          v15->fields._size = size + 1;
          items->m_Items[size + 1] = gachaBonusSelectLineupId;
        }
        max_length = v20->max_length;
        if ( (int)++v22 >= max_length )
          goto LABEL_19;
      }
LABEL_68:
      sub_1BDBAD4(Master_object, gachaBonusSelectLineupId);
    }
  }
LABEL_19:
  v27 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v15 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v15,
    (const MethodInfo_36B9874 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v59 = v57;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v59,
            (const MethodInfo_34661D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v59.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v29 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    if ( !v29 )
      sub_1BDBAD4(0LL, v30);
    EntityList = GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)v29,
                   &gachaBonusSelectLineupEntities,
                   current,
                   0LL);
    if ( EntityList )
    {
      v34 = gachaBonusSelectLineupEntities;
      if ( !gachaBonusSelectLineupEntities )
        sub_1BDBAD4(EntityList, giftId);
      v35 = gachaBonusSelectLineupEntities->max_length;
      if ( v35 >= 1 )
      {
        for ( i = 0; i < v35; ++i )
        {
          if ( i >= (unsigned int)v35 )
            sub_1BDBADC(EntityList, giftId, v33);
          v37 = v34->m_Items[i];
          if ( !v37 )
            sub_1BDBAD4(EntityList, giftId);
          if ( !v27 )
            sub_1BDBAD4(EntityList, giftId);
          giftId = (unsigned int)v37->fields.giftId;
          v38 = v27->fields._items;
          v39 = Method_System_Collections_Generic_List_int__Add__;
          ++v27->fields._version;
          if ( !v38 )
            sub_1BDBAD4(EntityList, giftId);
          v40 = v27->fields._size;
          if ( (unsigned int)v40 >= v38->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v27,
              giftId,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v27->fields._size = v40 + 1;
            v38->m_Items[v40 + 1] = giftId;
          }
          v35 = v34->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v59,
    (const MethodInfo_34661D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v41 = (System_Collections_Generic_List_int__o *)sub_1BDBAC4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v41,
    (const MethodInfo_36B854C *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v27 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    v27,
    (const MethodInfo_36B9874 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v59 = v57;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v59,
            (const MethodInfo_34661D8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v42 = v59.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v43 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !v43 )
      sub_1BDBAD4(0LL, v44);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v43, v42, 0LL);
    v48 = GiftListById;
    if ( !GiftListById )
      sub_1BDBAD4(0LL, objectId);
    v49 = *(_QWORD *)&GiftListById->max_length;
    if ( v49 && (int)v49 >= 1 )
    {
      v50 = 0LL;
      do
      {
        if ( (unsigned int)v50 >= (unsigned int)v49 )
          sub_1BDBADC(GiftListById, objectId, v47);
        v51 = v48->m_Items[v50];
        if ( !v51 )
          sub_1BDBAD4(GiftListById, objectId);
        if ( v51->fields.type == 1 )
        {
          if ( !v41 )
            sub_1BDBAD4(GiftListById, objectId);
          objectId = (unsigned int)v51->fields.objectId;
          v52 = v41->fields._items;
          v53 = Method_System_Collections_Generic_List_int__Add__;
          ++v41->fields._version;
          if ( !v52 )
            sub_1BDBAD4(GiftListById, objectId);
          v54 = v41->fields._size;
          if ( (unsigned int)v54 >= v52->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v41,
              objectId,
              *(const MethodInfo_36B8DA0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
            v49 = *(_QWORD *)&v48->max_length;
          }
          else
          {
            v41->fields._size = v54 + 1;
            v52->m_Items[v54 + 1] = objectId;
          }
        }
        ++v50;
      }
      while ( (int)v50 < (int)v49 );
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v59,
    (const MethodInfo_34661D4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v55 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v41,
          (const MethodInfo_3052C8C *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v55,
                    (const MethodInfo_3070610 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4B41066 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, obj);
    byte_4B41066 = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0LL)) == 0LL
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL )
  {
    sub_1BDBAD4(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t __fastcall SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1BDBAD4(this, method);
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
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  ConstantMaster_o *v13; // x20
  Il2CppObject *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4B41053 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_ConstantMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaMaster___, v3);
    sub_1BDB878(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___, v4);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_14816/*"USER_FREE_STONE"*/, v6);
    sub_1BDB878(&StringLiteral_13510/*"TUTORIAL_GACHA_ID"*/, v7);
    byte_4B41053 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = (struct GachaMaster_o *)Master_object;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.gachaMaster, (int32_t)Master_object, v9, v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v11 )
    sub_1BDBAD4(0LL, v12);
  v13 = (ConstantMaster_o *)v11;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(
                                   (ConstantMaster_o *)v11,
                                   (System_String_o *)StringLiteral_13510/*"TUTORIAL_GACHA_ID"*/,
                                   0LL);
  this->fields.userFreeStone = ConstantMaster__GetValue(v13, (System_String_o *)StringLiteral_14816/*"USER_FREE_STONE"*/, 0LL);
  v14 = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  this->fields.viewGachaFeaturedServantMaster = (struct ViewGachaFeaturedServantMaster_o *)v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.viewGachaFeaturedServantMaster, (int32_t)v14, v15, v16);
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
    sub_1BDBAD4(v4, v5);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void __fastcall SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  SummonInfoControl___c_c *v6; // x0
  System_Collections_Generic_List_object__o *summonObjInfos; // x20
  System_Action_object__o *_9__150_0; // x21
  Il2CppObject *v9; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4B41056 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v3);
    sub_1BDB878(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__150_0__, v4);
    sub_1BDB878(&SummonInfoControl___c_TypeInfo, v5);
    byte_4B41056 = 1;
  }
  v6 = SummonInfoControl___c_TypeInfo;
  summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos;
  if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
    v6 = SummonInfoControl___c_TypeInfo;
  }
  _9__150_0 = (System_Action_object__o *)v6->static_fields->__9__150_0;
  if ( !_9__150_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = SummonInfoControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__150_0 = (System_Action_object__o *)sub_1BDBAC4(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_object____ctor(_9__150_0, v9, Method_SummonInfoControl___c__InitSummonBtnDisp_b__150_0__, 0LL);
    static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    static_fields->__9__150_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__150_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__150_0, (int32_t)_9__150_0, v11, v12);
  }
  if ( !summonObjInfos )
    sub_1BDBAD4(v6, method);
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)_9__150_0,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
  this->fields.isFree = 0;
}


bool __fastcall SummonInfoControl__IsDisplayFeaturedServants(SummonInfoControl_o *this, const MethodInfo *method)
{
  return SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, method) != 0LL;
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
  const MethodInfo *v12; // x3
  int32_t v13; // w1
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4B4106B & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIWidget___, target);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&SummonInfoControl_TypeInfo, v6);
    this = (SummonInfoControl_o *)sub_1BDB878(&StringLiteral_5991/*"EndAnimation"*/, v7);
    byte_4B4106B = 1;
  }
  if ( !target )
    goto LABEL_15;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0LL) )
    UnityEngine_GameObject__SetActive(target, 1, 0LL);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                  target,
                                  (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      sub_1BDB81C((CGThumbnailListItem_o *)&v9->fields.eventReceiver, (int32_t)gameObject, v11, v12);
      v13 = StringLiteral_5991/*"EndAnimation"*/;
      v9->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5991/*"EndAnimation"*/;
      sub_1BDB81C((CGThumbnailListItem_o *)&v9->fields.callWhenFinished, v13, v14, v15);
      return;
    }
LABEL_15:
    sub_1BDBAD4(this, target);
  }
}


void __fastcall SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *v5; // x20
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x3
  struct UnityEngine_GameObject_o *summonDetailInfo; // x1
  const MethodInfo *v11; // x3
  UnityEngine_Component_c *klass; // x8
  __int64 v13; // x23
  il2cpp_array_size_t v14; // w22
  UnityEngine_GameObject_o *v15; // x21
  struct UnityEngine_Vector3_array *infoButtonLayouts; // x8

  if ( (byte_4B41055 & 1) == 0 )
  {
    sub_1BDB878(&UnityEngine_GameObject___TypeInfo, method);
    byte_4B41055 = 1;
  }
  gameObject = (UnityEngine_Component_o *)sub_1BDB920(UnityEngine_GameObject___TypeInfo, 4LL);
  if ( !this->fields.possessionInfoButton )
    goto LABEL_27;
  v5 = gameObject;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                            (UnityEngine_Component_o *)this->fields.possessionInfoButton,
                                            0LL);
  if ( !v5 )
    goto LABEL_27;
  if ( !LODWORD(v5[1].klass) )
    goto LABEL_26;
  v5[1].monitor = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5[1].monitor, (int32_t)gameObject, v6, v7);
  gameObject = (UnityEngine_Component_o *)this->fields.summonHistoryButton;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( LODWORD(v5[1].klass) <= 1 )
    goto LABEL_26;
  *(_QWORD *)&v5[1].fields.m_CachedPtr = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5[1].fields, (int32_t)gameObject, v6, v8);
  if ( LODWORD(v5[1].klass) <= 2 )
    goto LABEL_26;
  summonDetailInfo = this->fields.summonDetailInfo;
  v5[2].klass = (UnityEngine_Component_c *)summonDetailInfo;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5[2], (int32_t)summonDetailInfo, v6, v9);
  gameObject = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
  if ( LODWORD(v5[1].klass) <= 3 )
    goto LABEL_26;
  v5[2].monitor = gameObject;
  sub_1BDB81C((CGThumbnailListItem_o *)&v5[2].monitor, (int32_t)gameObject, v6, v11);
  klass = v5[1].klass;
  if ( (int)klass >= 1 )
  {
    v13 = 0LL;
    v14 = 0;
    while ( (unsigned int)v13 < (unsigned int)klass )
    {
      v15 = (UnityEngine_GameObject_o *)*((_QWORD *)&v5[1].monitor + v13);
      if ( !v15 )
        goto LABEL_27;
      gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                *((UnityEngine_GameObject_o **)&v5[1].monitor + v13),
                                                0LL);
      if ( ((unsigned __int8)gameObject & 1) != 0 )
      {
        infoButtonLayouts = this->fields.infoButtonLayouts;
        if ( !infoButtonLayouts )
          goto LABEL_27;
        if ( v14 >= infoButtonLayouts->max_length )
          break;
        GameObjectExtensions__SetLocalPosition(
          v15,
          *(UnityEngine_Vector3_o *)&infoButtonLayouts->m_Items[v14++].fields.y,
          0LL);
      }
      klass = v5[1].klass;
      if ( (int)++v13 >= (int)klass )
        goto LABEL_22;
    }
LABEL_26:
    sub_1BDBADC(gameObject, v4, v6);
  }
  v14 = 0;
LABEL_22:
  gameObject = (UnityEngine_Component_o *)this->fields.buttonLayout;
  if ( !gameObject )
LABEL_27:
    sub_1BDBAD4(gameObject, v4);
  if ( v14 == (_DWORD)klass )
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)gameObject, v4);
  else
    SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)gameObject, v4);
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
  __int64 v12; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v20; // x20

  if ( (byte_4B4106F & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, callback);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&Method_SummonInfoControl_OnClickDetail__, v6);
    sub_1BDB878(&WebViewManager_TypeInfo, v7);
    sub_1BDB878(&StringLiteral_15528/*"WEB_VIEW_TITLE_SUMMON"*/, v8);
    byte_4B4106F = 1;
  }
  v9 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_1BDB890(Method_SummonInfoControl_OnClickDetail__);
  v10 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0LL);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1BDBAD4(v11, v12);
  id = currentSummonData->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0LL);
  this->fields.closeCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v16, v17);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15528/*"WEB_VIEW_TITLE_SUMMON"*/, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v20 = v18;
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v20, SummonDetailUrl, closeCallbackFunc, 0LL);
}


void __fastcall SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int64_t Time; // x0
  __int64 v5; // x1
  int64_t v6; // x20
  int32_t DrawNumChangeTime; // w22
  __int64 v8; // x9
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // [xsp+20h] [xbp-40h]

  if ( (byte_4B4106C & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&NetworkManager_TypeInfo, v3);
    byte_4B4106C = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
  v6 = Time;
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
    sub_1BDBAD4(Time, v5);
  v8 = 492LL;
  if ( v6 < DrawNumChangeTime )
    v8 = 488LL;
  SummonInfoControl__SetRequestData(
    this,
    -1,
    -1,
    -1,
    *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus + v8),
    -1,
    -1,
    -1,
    -1,
    0LL,
    0,
    0LL,
    v10);
  SummonInfoControl__ClickBase(this, 0, v9);
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
      sub_1BDBAD4(v3, v4);
    }
    requestData->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v5);
}


void __fastcall SummonInfoControl__OnClickMultiPayExGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t v3; // w5
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // [xsp+20h] [xbp-20h]

  currentSummonData = this->fields.currentSummonData;
  v3 = this->fields.appendGachaTime * this->fields.price;
  this->fields.payGachaPrice = v3;
  if ( !currentSummonData )
    sub_1BDBAD4(this, method);
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
    0LL,
    1,
    0LL,
    v6);
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
    sub_1BDBAD4(CurrentGachaEntity, v4);
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
  SummonInfoControl_o *v2; // x19
  int32_t *currentSummonData; // x9
  const MethodInfo *v4; // x2
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // [xsp+20h] [xbp-30h]

  v2 = this;
  if ( (byte_4B4106D & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BDB878(&Method_SummonInfoControl_OnClickSinglePayExGacha__, method);
    byte_4B4106D = 1;
  }
  if ( v2->fields.isOneExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_1BDBAD4(this, method);
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
      v5 = (_QWORD *)sub_1BDB890(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0LL);
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
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_animationCallback; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *klass; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  p_animationCallback = (CGThumbnailListItem_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.animationCallback, (int32_t)callback, (int32_t)method, v3);
  beforeSummonData = this->fields.beforeSummonData;
  if ( !beforeSummonData
    || (((__int64 (__fastcall *)(struct VaildGachaInfo_o *, struct VaildGachaInfo_o *, Il2CppMethodPointer))beforeSummonData->klass->vtable._0_Equals.method)(
          beforeSummonData,
          this->fields.currentSummonData,
          beforeSummonData->klass->vtable._1_Finalize.methodPtr) & 1) != 0 )
  {
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0LL;
    sub_1BDB81C(p_animationCallback, 0, (int32_t)v6, v7);
    ActionExtensions__Call(klass, 0LL);
    return;
  }
  SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, v6);
  if ( this->fields.isDispPayOneExSummon )
  {
    oneExSummon = this->fields.oneExSummon;
    if ( !oneExSummon )
      goto LABEL_11;
    SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v12);
  }
  if ( this->fields.isDispPayMultiExSummon )
  {
    multiExSummon = this->fields.multiExSummon;
    if ( multiExSummon )
    {
      SummonInfoControl__MoveAlpha(this, multiExSummon->fields.singleSummonInfo, v12);
      return;
    }
LABEL_11:
    sub_1BDBAD4(v10, v11);
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
  __int64 v8; // x1

  if ( (byte_4B4106A & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, button);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v6);
    byte_4B4106A = 1;
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
                                                     (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0LL )
    {
      sub_1BDBAD4(gameObject, v8);
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
    sub_1BDBAD4(this, summonInfo);
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
  System_String_o *Empty; // x1
  const MethodInfo *v13; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v16; // x4
  struct SummonInfoControl_SummonObjInfo_o *v17; // x8
  struct SummonInfoControl_SummonObjParts_o *v18; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v20; // x4
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *v22; // x8
  const MethodInfo *v23; // x1
  char v24; // w20
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *v26; // x22
  const MethodInfo *v27; // x1
  Il2CppObject *v28; // x0
  UILabel_o *bonusSelectTopLabel; // x21
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

  if ( (byte_4B41061 & 1) == 0 )
  {
    sub_1BDB878(&LocalizationManager_TypeInfo, method);
    sub_1BDB878(&string_TypeInfo, v3);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v4);
    sub_1BDB878(&StringLiteral_2970/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, v5);
    sub_1BDB878(&StringLiteral_2971/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, v6);
    sub_1BDB878(&StringLiteral_25126/*"{0:#,0}"*/, v7);
    sub_1BDB878(&StringLiteral_9229/*"N0"*/, v8);
    byte_4B41061 = 1;
  }
  BonusSelectLineupCount = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v9);
  SummonInfoControl__SetSummonInfo_34623768(this, v10);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_42;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_25175/*"{0}"*/, v13);
  v17 = this->fields.chargeSummon;
  if ( !v17 )
    goto LABEL_42;
  v18 = v17->fields.multiPay;
  if ( !v18 )
    goto LABEL_42;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(
    this,
    v18->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_25126/*"{0:#,0}"*/,
    v16);
  v21 = this->fields.chargeSummon;
  if ( !v21 )
    goto LABEL_42;
  v22 = v21->fields.multiPay;
  if ( !v22 )
    goto LABEL_42;
  SummonInfoControl__SetElevenBonusInfoSingle(
    CurrentGachaEntity,
    this->fields.gachaTime,
    v22->fields.numImg,
    v22->fields.bonusInfo,
    v20);
  CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v23);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0LL);
  if ( !this->fields.bonusSelectLabel )
    goto LABEL_42;
  v24 = (char)CurrentGachaEntity;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v24 & 1, 0LL);
  CurrentGachaEntity = (SummonInfoControl_o *)this->fields.bonusSelectTopLabel;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0LL);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v24 & 1, 0LL);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v24 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_2971/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, 0LL);
    BonusSelectLineupCount = SummonInfoControl__GetBonusSelectLineupCount(this, v27);
    v28 = (Il2CppObject *)System_Int32__ToString_64087256(
                            (int32_t)&BonusSelectLineupCount,
                            (System_String_o *)StringLiteral_9229/*"N0"*/,
                            0LL);
    CurrentGachaEntity = (SummonInfoControl_o *)System_String__Format(v26, v28, 0LL);
    if ( bonusSelectLabel )
    {
      UILabel__set_text(bonusSelectLabel, (System_String_o *)CurrentGachaEntity, 0LL);
      bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2970/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, 0LL);
      Empty = (System_String_o *)CurrentGachaEntity;
      goto LABEL_24;
    }
LABEL_42:
    sub_1BDBAD4(CurrentGachaEntity, Empty);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, (v24 & 1) == 0, 0LL);
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
  if ( (v24 & 1) != 0 )
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
  GameObjectExtensions__SetLocalScale_35213172(v38, 1.0, 1.0, 0LL);
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
  const MethodInfo *v13; // x3
  struct UnityEngine_GameObject_o **v14; // x8
  struct UnityEngine_GameObject_o *v15; // x1

  v6 = this;
  if ( (byte_4B41067 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, summonObjInfo);
    byte_4B41067 = 1;
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
    sub_1BDBAD4(this, summonObjInfo);
  v15 = *v14;
  v6->fields.currentBtnInfo = *v14;
  sub_1BDB81C((CGThumbnailListItem_o *)&v6->fields.currentBtnInfo, (int32_t)v15, v12, v13);
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
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  struct SummonInfoControl_SummonObjParts_o *v34; // x8
  int v35; // w23
  UISprite_o *v36; // x23
  Il2CppObject *v37; // x0
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x3
  UnityEngine_GameObject_o *v40; // x0
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct SummonInfoControl_SummonObjParts_o *v44; // x8
  UISprite_o *bonusCount; // x24
  Il2CppObject *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  SummonInfoControl_o *v48; // x0
  const MethodInfo *v49; // x3
  UISprite_o *BonusSprite; // x24
  int v51; // w27
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  Il2CppObject *v55; // x0
  SummonInfoControl_o *v56; // x0
  const MethodInfo *v57; // x3
  UISprite_o *v58; // x23
  __int64 v59; // x2
  __int64 v60; // x3
  __int64 v61; // x4
  Il2CppObject *v62; // x0
  UnityEngine_GameObject_o *v63; // x0
  UnityEngine_GameObject_o *v64; // x0
  System_String_o **v65; // x23
  const MethodInfo *v66; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  int v68; // [xsp+8h] [xbp-58h] BYREF
  int32_t v69; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4B4105D & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___, ent);
    sub_1BDB878(&int_TypeInfo, v11);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_1BDB878(&StringLiteral_17559/*"btn_txt_bonus_10times_plus1"*/, v13);
    sub_1BDB878(&StringLiteral_17538/*"btn_summon_bg2"*/, v14);
    sub_1BDB878(&StringLiteral_17537/*"btn_summon_bg1"*/, v15);
    sub_1BDB878(&StringLiteral_17560/*"btn_txt_bonus_1plus1"*/, v16);
    sub_1BDB878(&StringLiteral_17563/*"btn_txt_bonus_{0}_glow"*/, v17);
    sub_1BDB878(&StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v18);
    sub_1BDB878(&StringLiteral_17561/*"btn_txt_bonus_count_{0}"*/, v19);
    sub_1BDB878(&StringLiteral_22358/*"num1"*/, v20);
    sub_1BDB878(&StringLiteral_17539/*"btn_summon_bg3"*/, v21);
    sub_1BDB878(&StringLiteral_22359/*"num1_glow"*/, v22);
    this = (SummonInfoControl_o *)sub_1BDB878(&StringLiteral_17562/*"btn_txt_bonus_{0}"*/, v23);
    byte_4B4105D = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_93;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_93;
  numImg = onePay->fields.numImg;
  v69 = oneCount;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, ticket, summonObjInfo, *(_QWORD *)&oneCount);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v27, 0LL);
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
  this = (SummonInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_303395C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
  if ( !this )
    goto LABEL_93;
  this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                  (UserGachaExtraCountMaster_o *)this,
                                  ent->fields.extraGroupId1,
                                  0LL);
  v34 = *p_onePay;
  if ( !*p_onePay )
    goto LABEL_93;
  v35 = (int)this;
  if ( (_DWORD)this != 9 )
  {
    this = (SummonInfoControl_o *)v34->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17559/*"btn_txt_bonus_10times_plus1"*/, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    GameObjectExtensions__SetLocalPosition_35211104(v40, 0.0, -34.0, 0LL);
    if ( !*p_onePay )
      goto LABEL_93;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_93;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0LL);
    v44 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_93;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v44->fields.singleDigit;
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
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v47, -36.0, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_93;
        v48 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        v48,
                        (UnityEngine_GameObject_o *)v48,
                        (System_String_o *)StringLiteral_22358/*"num1"*/,
                        v49);
        v51 = 9 - v35;
        v69 = 9 - v35;
        v55 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v52, v53, v54);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17562/*"btn_txt_bonus_{0}"*/, v55, 0LL);
        if ( !BonusSprite )
          goto LABEL_93;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0LL);
        v56 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0LL);
        v58 = SummonInfoControl__GetBonusSprite(
                v56,
                (UnityEngine_GameObject_o *)v56,
                (System_String_o *)StringLiteral_22359/*"num1_glow"*/,
                v57);
        v68 = v51;
        v62 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v68, v59, v60, v61);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17563/*"btn_txt_bonus_{0}_glow"*/, v62, 0LL);
        if ( !v58 )
          goto LABEL_93;
        UISprite__set_spriteName(v58, (System_String_o *)this, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v63, 0.825, 0LL);
        if ( !*p_onePay )
          goto LABEL_93;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_93;
        v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v64, -29.7, 0LL);
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
      v44 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_93;
    }
    bonusCount = v44->fields.bonusCount;
    v69 = 9 - v35;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v41, v42, v43);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17561/*"btn_txt_bonus_count_{0}"*/, v46, 0LL);
    if ( !bonusCount )
      goto LABEL_93;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0LL);
LABEL_79:
    if ( *p_onePay )
    {
      this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
      v65 = (System_String_o **)(ticket ? &StringLiteral_17539/*"btn_summon_bg3"*/ : &StringLiteral_17537/*"btn_summon_bg1"*/);
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, *v65, 0LL);
        if ( *p_onePay )
        {
          this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
          if ( this )
          {
            UIButton__set_normalSprite((UIButton_o *)this, *v65, 0LL);
            goto LABEL_87;
          }
        }
      }
    }
LABEL_93:
    sub_1BDBAD4(this, ent);
  }
  v36 = v34->fields.numImg;
  v69 = 2;
  v37 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v69, v31, v32, v33);
  this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v37, 0LL);
  if ( !v36 )
    goto LABEL_93;
  UISprite__set_spriteName(v36, (System_String_o *)this, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17560/*"btn_txt_bonus_1plus1"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
  if ( !this )
    goto LABEL_93;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalPosition_35211104(v38, 0.0, -35.0, 0LL);
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
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17538/*"btn_summon_bg2"*/, 0LL);
  if ( !*p_onePay )
    goto LABEL_93;
  this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
  if ( !this )
    goto LABEL_93;
  UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17538/*"btn_summon_bg2"*/, 0LL);
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
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v39);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_93;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v66);
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
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  Il2CppObject *v15; // x0
  System_String_o *gameObject; // x0
  __int64 v17; // x1
  int32_t v18; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4B4105E & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, *(_QWORD *)&multiCount);
    sub_1BDB878(&System_Math_TypeInfo, v8);
    sub_1BDB878(&StringLiteral_17558/*"btn_txt_bonus_10plus1"*/, v9);
    sub_1BDB878(&StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v10);
    byte_4B4105E = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_64100908(multiCount, 11, 0LL);
  v18 = v11;
  v15 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v18, v12, v13, v14);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v15, 0LL);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0LL), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0LL)) == 0LL )
  {
    sub_1BDBAD4(gameObject, v17);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v11 > 10, 0LL);
  if ( v11 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17558/*"btn_txt_bonus_10plus1"*/, 0LL);
}


void __fastcall SummonInfoControl__SetEnableSummonBtn(
        SummonInfoControl_o *this,
        bool isEnable,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct VaildGachaInfo_o *currentSummonData; // x1
  _BOOL8 isDispSummonListDialog; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v9; // x2
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *v11; // x21
  struct VaildGachaInfo_o *v12; // x8
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.beforeSummonData, (int32_t)currentSummonData, (int32_t)method, v3);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v9);
  currentBtnInfo = this->fields.summonDetailInfo;
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0LL);
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0LL);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0LL);
  v11 = currentBtnInfo;
  if ( isEnable )
  {
    currentBtnInfo = (UnityEngine_GameObject_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, v10);
    isDispSummonListDialog = currentBtnInfo != 0LL;
  }
  else
  {
    isDispSummonListDialog = 0LL;
  }
  if ( !v11 )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v11, isDispSummonListDialog, 0LL);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0LL);
  if ( isEnable )
  {
    v12 = this->fields.currentSummonData;
    if ( !v12 )
      goto LABEL_21;
    isDispSummonListDialog = v12->fields.isDispSummonListDialog;
  }
  else
  {
    isDispSummonListDialog = 0LL;
  }
  if ( !currentBtnInfo
    || (UnityEngine_GameObject__SetActive(currentBtnInfo, isDispSummonListDialog, 0LL),
        (oneExSummon = this->fields.oneExSummon) == 0LL)
    || (currentBtnInfo = oneExSummon->fields.singleSummonInfo) == 0LL
    || (UnityEngine_GameObject__SetActive(currentBtnInfo, this->fields.isDispPayOneExSummon && isEnable, 0LL),
        (multiExSummon = this->fields.multiExSummon) == 0LL)
    || (currentBtnInfo = multiExSummon->fields.singleSummonInfo) == 0LL )
  {
LABEL_21:
    sub_1BDBAD4(currentBtnInfo, isDispSummonListDialog);
  }
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable && this->fields.isDispPayMultiExSummon, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v11; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  char v14; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  Il2CppObject *v20; // x23
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  Il2CppObject *v24; // x0
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

  if ( (byte_4B41057 & 1) == 0 )
  {
    sub_1BDB878(&BalanceConfig_TypeInfo, method);
    sub_1BDB878(&int_TypeInfo, v3);
    sub_1BDB878(&LocalizationManager_TypeInfo, v4);
    sub_1BDB878(&NetworkManager_TypeInfo, v5);
    sub_1BDB878(&UserGachaMaster_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_6564/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, v7);
    sub_1BDB878(&StringLiteral_1/*""*/, v8);
    sub_1BDB878(&StringLiteral_1142/*"0"*/, v9);
    byte_4B41057 = 1;
  }
  *(_QWORD *)maxNum = 0LL;
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
                                             0LL);
  if ( !this->fields.freeSummonCampaignLabel )
    goto LABEL_35;
  v14 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject(
                 (UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel,
                 0LL);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, v14 & 1, 0LL);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v14 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v16 = LocalizationManager__Get((System_String_o *)StringLiteral_6564/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0LL);
    v34 = maxNum[1];
    v20 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v34, v17, v18, v19);
    v33 = maxNum[0];
    v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v21, v22, v23);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_62613552(v16, v20, v24, 0LL);
    v11 = (System_String_o *)gameObject;
  }
  else
  {
    v11 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !freeSummonCampaignLabel )
    goto LABEL_35;
  UILabel__set_text(freeSummonCampaignLabel, v11, 0LL);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v14 & 1) == 0 && !this->fields.isFree )
    goto LABEL_33;
  gameObject = this->fields.freeSummonCampaignNeedInfo;
  if ( !gameObject )
    goto LABEL_35;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0LL);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.freeSummonCampaignNeedNum;
  if ( !gameObject )
    goto LABEL_35;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1142/*"0"*/, 0LL);
  if ( !this->fields.isFree )
  {
LABEL_33:
    SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v11);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0LL);
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
        UnityEngine_GameObject__SetActive(gameObject, v27 < DrawNumChangeTime, 0LL),
        (gameObject = this->fields.freeTenInfoObj) == 0LL) )
  {
LABEL_35:
    sub_1BDBAD4(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive(gameObject, v27 >= DrawNumChangeTime, 0LL);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v29);
  this->fields.price = 0;
  v30 = NetworkManager__getTime(0LL);
  v31 = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v32 = 492LL;
  if ( v30 < v31 )
    v32 = 488LL;
  this->fields.gachaTime = *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus
                                      + v32);
}


void __fastcall SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(summonHelpInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonHelpInfo, isDisp, 0LL);
}


void __fastcall SummonInfoControl__SetMultiTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        SummonInfoControl_SummonObjInfo_o *summonInfo,
        int32_t friendPoint,
        const MethodInfo *method)
{
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
  void *Master_object; // x0
  __int64 v26; // x1
  int32_t price; // w24
  int32_t maxDrawNum; // w23
  bool v29; // w22
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8
  const MethodInfo *v31; // x2
  GachaAppendEntity_o *v32; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  SummonInfoControl_o *v34; // x0
  struct SummonInfoControl_SummonObjInfo_o *v35; // x8
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v39; // x8
  struct SummonInfoControl_SummonObjParts_o *v40; // x8
  UnityEngine_GameObject_o *v41; // x0
  struct SummonInfoControl_SummonObjInfo_o *v42; // x8
  struct SummonInfoControl_SummonObjParts_o *v43; // x8
  UnityEngine_GameObject_o *v44; // x0
  const MethodInfo *v45; // x3
  struct VaildGachaInfo_o *v46; // x8
  int32_t appendPayType; // w8
  __int64 *v48; // x8
  SummonInfoControl_o *v49; // x0
  struct SummonInfoControl_SummonObjInfo_o *v50; // x9
  struct SummonInfoControl_SummonObjParts_o *v51; // x9
  const MethodInfo *v52; // x3
  struct SummonInfoControl_SummonObjInfo_o *v53; // x8
  struct SummonInfoControl_SummonObjParts_o *v54; // x8
  NumSpriteComponent_o *multiExNumSprite; // x20
  int64_t appendGachaTime; // x21
  System_Action_object__object__o *v57; // x23
  System_String_o *v58; // x22
  Il2CppObject *v59; // x24
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UISprite_o *multiExSummonSprite; // x20
  UnityEngine_GameObject_o *v64; // x0
  float v65; // s0
  const MethodInfo *v66; // x4
  UnityEngine_GameObject_o *v67; // x0
  float v68; // s0
  UnityEngine_GameObject_o *v69; // x0
  float v70; // s0
  struct SummonInfoControl_SummonObjInfo_o *v71; // x8
  struct SummonInfoControl_SummonObjParts_o *v72; // x8
  UISprite_o *v73; // [xsp+8h] [xbp-58h] BYREF
  UISprite_o *sprite; // [xsp+10h] [xbp-50h] BYREF
  GachaAppendEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4B41060 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_UISprite__string__TypeInfo, gachaEnt);
    sub_1BDB878(&AtlasManager_TypeInfo, v11);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaAppendMaster___, v12);
    sub_1BDB878(&DataManager_TypeInfo, v13);
    sub_1BDB878(&System_Math_TypeInfo, v14);
    sub_1BDB878(&string_TypeInfo, v15);
    sub_1BDB878(&SummonInfoControl_TypeInfo, v16);
    sub_1BDB878(&Method_SummonInfoControl___c__SetMultiTimeExButton_b__162_0__, v17);
    sub_1BDB878(&SummonInfoControl___c_TypeInfo, v18);
    sub_1BDB878(&StringLiteral_17538/*"btn_summon_bg2"*/, v19);
    sub_1BDB878(&StringLiteral_20331/*"img_bg_friendpointuse"*/, v20);
    sub_1BDB878(&StringLiteral_17624/*"btn_txt_summon"*/, v21);
    sub_1BDB878(&StringLiteral_17626/*"btn_txt_summon_num_0"*/, v22);
    sub_1BDB878(&StringLiteral_25128/*"{0:#,0}  "*/, v23);
    sub_1BDB878(&StringLiteral_20343/*"img_bg_saintquartzuse"*/, v24);
    byte_4B41060 = 1;
  }
  sprite = 0LL;
  entity = 0LL;
  v73 = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !gachaEnt || !Master_object )
    goto LABEL_75;
  Master_object = (void *)GachaAppendMaster__TryGetHundredSummon(
                            (GachaAppendMaster_o *)Master_object,
                            &entity,
                            gachaEnt->fields.id,
                            0LL);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_75;
    price = this->fields.price;
    maxDrawNum = entity->fields.maxDrawNum;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    Master_object = (void *)System_Math__Min_64100908(friendPoint / price, maxDrawNum, 0LL);
    v29 = (int)Master_object > 10;
    this->fields.appendGachaTime = (int)Master_object;
  }
  else
  {
    v29 = 0;
  }
  multiExSummon = this->fields.multiExSummon;
  if ( !multiExSummon )
    goto LABEL_75;
  Master_object = multiExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v29, 0LL);
  this->fields.isDispPayMultiExSummon = v29;
  if ( v29 )
  {
    v32 = entity;
    if ( entity )
    {
      currentSummonData = this->fields.currentSummonData;
      if ( currentSummonData )
      {
        currentSummonData->fields.appendPayType = entity->fields.type;
        currentSummonData->fields.appendShopIdIndex = v32->fields.idx;
        currentSummonData->fields.appendDrawNum = this->fields.appendGachaTime;
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
          *((float *)&v34->fields.possessionInfoButton->monitor + 1),
          *(float *)&v34->fields.possessionInfoButton->fields.m_CachedPtr,
          v31);
        v35 = this->fields.multiExSummon;
        if ( v35 )
        {
          Master_object = v35->fields.singleSummonInfo;
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
            v36 = this->fields.multiExSummon;
            if ( v36 )
            {
              single = v36->fields.single;
              if ( single )
              {
                Master_object = single->fields.button;
                if ( Master_object )
                {
                  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                  GameObjectExtensions__SetLocalPositionX(
                    gameObject,
                    SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN3_X,
                    0LL);
                  v39 = this->fields.multiExSummon;
                  if ( v39 )
                  {
                    v40 = v39->fields.single;
                    if ( v40 )
                    {
                      Master_object = v40->fields.bonusInfo;
                      if ( Master_object )
                      {
                        v41 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                        GameObjectExtensions__SetLocalPositionX(v41, 1.0, 0LL);
                        v42 = this->fields.multiExSummon;
                        if ( v42 )
                        {
                          v43 = v42->fields.single;
                          if ( v43 )
                          {
                            Master_object = v43->fields.bonusInfo;
                            if ( Master_object )
                            {
                              v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
                              GameObjectExtensions__SetLocalScaleX(v44, 1.0, 0LL);
                              v46 = this->fields.currentSummonData;
                              if ( v46 )
                              {
                                appendPayType = v46->fields.appendPayType;
                                if ( appendPayType == 1 )
                                  v48 = &StringLiteral_20343/*"img_bg_saintquartzuse"*/;
                                else
                                  v48 = appendPayType == 3
                                      ? &StringLiteral_20331/*"img_bg_friendpointuse"*/
                                      : (__int64 *)string_TypeInfo->static_fields;
                                v50 = this->fields.multiExSummon;
                                if ( v50 )
                                {
                                  v51 = v50->fields.single;
                                  if ( v51 )
                                  {
                                    SummonInfoControl__SetGachaSprite(
                                      this,
                                      v51->fields.infoBgImg,
                                      (System_String_o *)*v48,
                                      v45);
                                    v53 = this->fields.multiExSummon;
                                    if ( v53 )
                                    {
                                      v54 = v53->fields.single;
                                      if ( v54 )
                                      {
                                        SummonInfoControl__SetGachaSprite(
                                          this,
                                          v54->fields.buttonImg,
                                          (System_String_o *)StringLiteral_17538/*"btn_summon_bg2"*/,
                                          v52);
                                        multiExNumSprite = this->fields.multiExNumSprite;
                                        appendGachaTime = this->fields.appendGachaTime;
                                        Master_object = SummonInfoControl___c_TypeInfo;
                                        if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
                                          Master_object = SummonInfoControl___c_TypeInfo;
                                        }
                                        v57 = *(System_Action_object__object__o **)(*((_QWORD *)Master_object + 23)
                                                                                  + 32LL);
                                        v58 = (System_String_o *)StringLiteral_17626/*"btn_txt_summon_num_0"*/;
                                        if ( !v57 )
                                        {
                                          if ( !*((_DWORD *)Master_object + 56) )
                                          {
                                            j_il2cpp_runtime_class_init_0(Master_object);
                                            Master_object = SummonInfoControl___c_TypeInfo;
                                          }
                                          v59 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
                                          v57 = (System_Action_object__object__o *)sub_1BDBAC4(System_Action_UISprite__string__TypeInfo);
                                          System_Action_object__object____ctor(
                                            v57,
                                            v59,
                                            Method_SummonInfoControl___c__SetMultiTimeExButton_b__162_0__,
                                            0LL);
                                          static_fields = SummonInfoControl___c_TypeInfo->static_fields;
                                          static_fields->__9__162_0 = (struct System_Action_UISprite__string__o *)v57;
                                          sub_1BDB81C(
                                            (CGThumbnailListItem_o *)&static_fields->__9__162_0,
                                            (int32_t)v57,
                                            v61,
                                            v62);
                                        }
                                        if ( multiExNumSprite )
                                        {
                                          NumSpriteComponent__SetSprite(
                                            multiExNumSprite,
                                            appendGachaTime,
                                            v58,
                                            (System_Action_UISprite__string__o *)v57,
                                            0,
                                            0LL);
                                          multiExSummonSprite = this->fields.multiExSummonSprite;
                                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          AtlasManager__SetEventSprite(
                                            multiExSummonSprite,
                                            (System_String_o *)StringLiteral_17624/*"btn_txt_summon"*/,
                                            0LL);
                                          Master_object = this->fields.multiExSummonSprite;
                                          if ( Master_object )
                                          {
                                            v64 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_object,
                                                    0LL);
                                            v65 = 38.0;
                                            if ( this->fields.appendGachaTime <= 99 )
                                              v65 = 25.0;
                                            GameObjectExtensions__SetLocalPositionX(v64, v65, 0LL);
                                            Master_object = this->fields.multiExNumSprite;
                                            if ( Master_object )
                                            {
                                              Master_object = (void *)NumSpriteComponent__TryGetSpriteByIndex(
                                                                        (NumSpriteComponent_o *)Master_object,
                                                                        &sprite,
                                                                        0,
                                                                        0LL);
                                              if ( ((unsigned __int8)Master_object & 1) != 0 )
                                              {
                                                Master_object = this->fields.multiExNumSprite;
                                                if ( !Master_object )
                                                  goto LABEL_75;
                                                Master_object = (void *)NumSpriteComponent__TryGetSpriteByIndex(
                                                                          (NumSpriteComponent_o *)Master_object,
                                                                          &v73,
                                                                          1,
                                                                          0LL);
                                                if ( ((unsigned __int8)Master_object & 1) != 0 )
                                                {
                                                  Master_object = sprite;
                                                  if ( !sprite )
                                                    goto LABEL_75;
                                                  v67 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)sprite,
                                                          0LL);
                                                  v68 = -34.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v68 = -22.0;
                                                  GameObjectExtensions__SetLocalPositionX(v67, v68, 0LL);
                                                  Master_object = v73;
                                                  if ( !v73 )
                                                    goto LABEL_75;
                                                  v69 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)v73,
                                                          0LL);
                                                  v70 = -57.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v70 = -50.0;
                                                  GameObjectExtensions__SetLocalPositionX(v69, v70, 0LL);
                                                }
                                              }
                                              v71 = this->fields.multiExSummon;
                                              if ( v71 )
                                              {
                                                v72 = v71->fields.single;
                                                if ( v72 )
                                                {
                                                  SummonInfoControl__SetPriceText(
                                                    this,
                                                    v72->fields.infoLabel,
                                                    this->fields.appendGachaTime * this->fields.price,
                                                    (System_String_o *)StringLiteral_25128/*"{0:#,0}  "*/,
                                                    v66);
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
    sub_1BDBAD4(Master_object, v26);
  }
  if ( isTicket )
    summonInfo = this->fields.ticketSummon;
  v49 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v49 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v49,
    summonInfo,
    *((float *)&v49->fields.possessionInfoButton->klass + 1),
    *(float *)&v49->fields.possessionInfoButton->monitor,
    v31);
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
  __int64 v18; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v20; // w21
  struct VaildGachaInfo_o *v21; // x9
  struct VaildGachaInfo_o *v22; // x10
  GachaAppendEntity_o *v23; // x10
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v26; // x2
  SummonInfoControl_o *v27; // x0
  __int64 v28; // x8
  SummonInfoControl_SummonObjInfo_o *v29; // x20
  float *possessionInfoButton; // x8
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjInfo_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v35; // x8
  struct SummonInfoControl_SummonObjParts_o *v36; // x8
  UnityEngine_GameObject_o *v37; // x0
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  UnityEngine_GameObject_o *v40; // x0
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8
  struct SummonInfoControl_SummonObjParts_o *v42; // x8
  UnityEngine_GameObject_o *v43; // x0
  struct SummonInfoControl_SummonObjInfo_o *v44; // x8
  struct SummonInfoControl_SummonObjParts_o *v45; // x8
  UnityEngine_GameObject_o *v46; // x0
  struct SummonInfoControl_SummonObjInfo_o *v47; // x8
  struct SummonInfoControl_SummonObjParts_o *v48; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v50; // x8
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  struct SummonInfoControl_SummonObjInfo_o *v52; // x8
  struct SummonInfoControl_SummonObjParts_o *v53; // x8
  struct SummonInfoControl_SummonObjInfo_o *v54; // x8
  struct SummonInfoControl_SummonObjParts_o *v55; // x8
  const MethodInfo *v56; // x3
  struct SummonInfoControl_SummonObjInfo_o *v57; // x8
  struct SummonInfoControl_SummonObjParts_o *v58; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v60; // x8
  struct SummonInfoControl_SummonObjParts_o *v61; // x8
  float v62; // s0
  float v63; // s3
  float v64; // s1
  float v65; // s2
  struct SummonInfoControl_SummonObjInfo_o *v66; // x8
  struct SummonInfoControl_SummonObjParts_o *v67; // x8
  float v68; // s0
  float v69; // s3
  float v70; // s1
  float v71; // s2
  struct SummonInfoControl_SummonObjInfo_o *v72; // x8
  struct SummonInfoControl_SummonObjParts_o *v73; // x8
  const MethodInfo *v74; // x6
  struct SummonInfoControl_SummonObjInfo_o *v75; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B4105F & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, gachaEnt);
    sub_1BDB878(&Method_DataManager_GetMaster_GachaAppendMaster___, v7);
    sub_1BDB878(&DataManager_TypeInfo, v8);
    sub_1BDB878(&SummonInfoControl_TypeInfo, v9);
    sub_1BDB878(&StringLiteral_17540/*"btn_summon_bg5"*/, v10);
    sub_1BDB878(&StringLiteral_17606/*"btn_txt_reset"*/, v11);
    sub_1BDB878(&StringLiteral_20344/*"img_bg_saintquartzuse3"*/, v12);
    sub_1BDB878(&StringLiteral_23866/*"summon_txt_done"*/, v13);
    sub_1BDB878(&StringLiteral_17625/*"btn_txt_summon01"*/, v14);
    sub_1BDB878(&StringLiteral_17597/*"btn_txt_only_1"*/, v15);
    sub_1BDB878(&StringLiteral_1194/*"1"*/, v16);
    byte_4B4105F = 1;
  }
  appendEnt = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_object )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(
                                           Master_object,
                                           gachaEnt,
                                           &appendEnt,
                                           0LL);
  currentSummonData = this->fields.currentSummonData;
  v20 = (int)Master_object;
  v21 = (_DWORD)Master_object ? this->fields.currentSummonData : 0LL;
  v22 = (_DWORD)Master_object ? 0LL : this->fields.currentSummonData;
  if ( (_DWORD)Master_object )
  {
    v23 = appendEnt;
    if ( !appendEnt )
      goto LABEL_78;
    if ( !v21 )
      goto LABEL_78;
    v21->fields.appendPayType = appendEnt->fields.type;
    v21->fields.appendShopIdIndex = v23->fields.idx;
    if ( !currentSummonData )
      goto LABEL_78;
    drawNum = v23->fields.drawNum;
  }
  else
  {
    if ( !v22 )
      goto LABEL_78;
    drawNum = 0;
    v22->fields.appendPayType = 7;
    currentSummonData->fields.appendShopIdIndex = 0;
  }
  currentSummonData->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v20 != 0, 0LL);
  this->fields.isDispPayOneExSummon = v20 != 0;
  this->fields.isOneExUsePossible = v20 == 2;
  v27 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  v28 = 48LL;
  if ( isTicket )
    v28 = 56LL;
  v29 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v28);
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v27 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  possessionInfoButton = (float *)v27->fields.possessionInfoButton;
  if ( !v20 )
  {
    SummonInfoControl__SetButtonLocalPosX(v27, v29, possessionInfoButton[1], possessionInfoButton[2], v26);
    return;
  }
  SummonInfoControl__SetButtonLocalPosX(v27, v29, possessionInfoButton[4], possessionInfoButton[5], v26);
  v31 = this->fields.oneExSummon;
  if ( !v31 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v31->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
  v32 = this->fields.oneExSummon;
  if ( !v32 )
    goto LABEL_78;
  single = v32->fields.single;
  if ( !single )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)single->fields.button;
  if ( !Master_object )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(gameObject, SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X, 0LL);
  v35 = this->fields.oneExSummon;
  if ( !v35 )
    goto LABEL_78;
  v36 = v35->fields.single;
  if ( !v36 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v36->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPosition_35211208(v37, 0.0, 34.0, 0.0, 0LL);
  v38 = this->fields.oneExSummon;
  if ( !v38 )
    goto LABEL_78;
  v39 = v38->fields.single;
  if ( !v39 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v39->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalPositionX(v40, 1.0, 0LL);
  v41 = this->fields.oneExSummon;
  if ( !v41 )
    goto LABEL_78;
  v42 = v41->fields.single;
  if ( !v42 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v42->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScaleX(v43, 1.0, 0LL);
  v44 = this->fields.oneExSummon;
  if ( !v44 )
    goto LABEL_78;
  v45 = v44->fields.single;
  if ( !v45 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v45->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  GameObjectExtensions__SetLocalScaleX(v46, 1.0, 0LL);
  v47 = this->fields.oneExSummon;
  if ( !v47 )
    goto LABEL_78;
  v48 = v47->fields.single;
  if ( !v48 )
    goto LABEL_78;
  buttonImg = v48->fields.buttonImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           buttonImg,
                                           (System_String_o *)StringLiteral_17540/*"btn_summon_bg5"*/,
                                           0LL);
  v50 = this->fields.oneExSummon;
  if ( !v50 )
    goto LABEL_78;
  v51 = v50->fields.single;
  if ( !v51 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           v51->fields.bonusCount,
                                           (System_String_o *)StringLiteral_17606/*"btn_txt_reset"*/,
                                           0LL);
  v52 = this->fields.oneExSummon;
  if ( !v52 )
    goto LABEL_78;
  v53 = v52->fields.single;
  if ( !v53 )
    goto LABEL_78;
  AtlasManager__SetEventSprite(v53->fields.bonusInfo, (System_String_o *)StringLiteral_17597/*"btn_txt_only_1"*/, 0LL);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           this->fields.oneExSummonSingleInfoSprite,
                                           (System_String_o *)StringLiteral_20344/*"img_bg_saintquartzuse3"*/,
                                           0LL);
  v54 = this->fields.oneExSummon;
  if ( !v54 )
    goto LABEL_78;
  v55 = v54->fields.single;
  if ( !v55 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v55->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1194/*"1"*/, 0LL);
  v57 = this->fields.oneExSummon;
  if ( !v57 )
    goto LABEL_78;
  v58 = v57->fields.single;
  if ( !v58 )
    goto LABEL_78;
  numImg = v58->fields.numImg;
  if ( this->fields.isOneExUsePossible )
  {
    SummonInfoControl__SetGachaSprite(this, numImg, (System_String_o *)StringLiteral_17625/*"btn_txt_summon01"*/, v56);
  }
  else
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                             numImg,
                                             (System_String_o *)StringLiteral_23866/*"summon_txt_done"*/,
                                             0LL);
  }
  v60 = this->fields.oneExSummon;
  if ( !v60 )
    goto LABEL_78;
  v61 = v60->fields.single;
  if ( !v61 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v61->fields.buttonImg;
  v62 = 1.0;
  if ( !this->fields.isOneExUsePossible )
    v62 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v63 = 1.0;
  v64 = v62;
  v65 = v62;
  UIWidget__set_color((UIWidget_o *)Master_object, *(UnityEngine_Color_o *)&v62, 0LL);
  v66 = this->fields.oneExSummon;
  if ( !v66 )
    goto LABEL_78;
  v67 = v66->fields.single;
  if ( !v67 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v67->fields.button;
  v68 = 1.0;
  if ( !this->fields.isOneExUsePossible )
    v68 = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v69 = 1.0;
  v70 = v68;
  v71 = v68;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)Master_object, *(UnityEngine_Color_o *)&v68, 0LL);
  v72 = this->fields.oneExSummon;
  if ( !v72
    || (v73 = v72->fields.single) == 0LL
    || (Master_object = (GachaAppendMaster_o *)v73->fields.numImg) == 0LL
    || (Master_object = (GachaAppendMaster_o *)(*(__int64 (__fastcall **)(GachaAppendMaster_o *, _QWORD))&Master_object->klass[1]._2.thread_static_fields_offset)(
                                                 Master_object,
                                                 *(_QWORD *)&Master_object->klass[1]._2.token),
        (v75 = this->fields.oneExSummon) == 0LL) )
  {
LABEL_78:
    sub_1BDBAD4(Master_object, v18);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v75->fields.single, 0, 0, 1, 0, v74);
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
    sub_1BDBAD4(CurrentGachaEntity, v5);
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
  long double v2; // q0
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x0
  __int64 v11; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *usrData; // x8
  int32_t v14; // w20
  int32_t Price; // w0
  int32_t v16; // w21
  int v17; // w0
  const MethodInfo *v18; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v20; // x4
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UILabel_o *infoLabel; // x1
  int32_t v24; // w2
  System_String_o *v25; // x3
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x21
  Il2CppObject *v32; // x0
  const MethodInfo *v33; // x4
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *v37; // x8
  const MethodInfo *v38; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v40; // x5
  int32_t gachaTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B41058 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_TblUserMaster___, method);
    sub_1BDB878(&int_TypeInfo, v4);
    sub_1BDB878(&System_Math_TypeInfo, v5);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v7);
    sub_1BDB878(&StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v8);
    sub_1BDB878(&StringLiteral_25126/*"{0:#,0}"*/, v9);
    byte_4B41058 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C2BF08(v2);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C2BF08(v2);
  MasterData_object = **(void ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_303395C *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_27;
  if ( !MasterData_object )
    goto LABEL_27;
  MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, usrData->fields.userId, 0LL);
  if ( !MasterData_object )
    goto LABEL_27;
  v14 = *((_DWORD *)MasterData_object + 6);
  MasterData_object = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !MasterData_object )
    goto LABEL_27;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_object, 0LL);
  this->fields.price = Price;
  v16 = Price;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v17 = System_Math__Min_64100908(v14 / v16, 10, 0LL);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v17;
  if ( v17 >= 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v18);
    v29 = this->fields.friendPointSummon;
    if ( v29 )
    {
      multiPay = v29->fields.multiPay;
      if ( multiPay )
      {
        numImg = multiPay->fields.numImg;
        gachaTime = this->fields.gachaTime;
        v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime, v26, v27, v28);
        MasterData_object = System_String__Format((System_String_o *)StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v32, 0LL);
        if ( numImg )
        {
          UISprite__set_spriteName(numImg, (System_String_o *)MasterData_object, 0LL);
          v34 = this->fields.friendPointSummon;
          if ( v34 )
          {
            onePay = v34->fields.onePay;
            if ( onePay )
            {
              SummonInfoControl__SetPriceText(
                this,
                onePay->fields.infoLabel,
                this->fields.price,
                (System_String_o *)StringLiteral_25126/*"{0:#,0}"*/,
                v33);
              v36 = this->fields.friendPointSummon;
              if ( v36 )
              {
                v37 = v36->fields.multiPay;
                if ( v37 )
                {
                  infoLabel = v37->fields.infoLabel;
                  v25 = (System_String_o *)StringLiteral_25126/*"{0:#,0}"*/;
                  v24 = this->fields.gachaTime * this->fields.price;
                  goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1BDBAD4(MasterData_object, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v18);
  v21 = this->fields.friendPointSummon;
  if ( !v21 )
    goto LABEL_27;
  single = v21->fields.single;
  if ( !single )
    goto LABEL_27;
  infoLabel = single->fields.infoLabel;
  v24 = -1;
  v25 = (System_String_o *)StringLiteral_25175/*"{0}"*/;
LABEL_26:
  SummonInfoControl__SetPriceText(this, infoLabel, v24, v25, v20);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v38);
  SummonInfoControl__SetMultiTimeExButton(this, CurrentGachaEntity, 0, this->fields.friendPointSummon, v14, v40);
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
  if ( (byte_4B41062 & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, label);
    byte_4B41062 = 1;
  }
  if ( (v6 & 0x80000000) != 0 )
    v6 = this->fields.price;
  v12 = v6;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, *(_QWORD *)&price, format, method);
  v10 = System_String__Format(format, v9, 0LL);
  if ( !label )
    sub_1BDBAD4(v10, v11);
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
  int32_t summonType; // w22
  SummonInfoControl_o *v22; // x21
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct VaildGachaInfo_o *v24; // x8
  struct VaildGachaInfo_o *v25; // x8
  struct VaildGachaInfo_o *v26; // x8
  int v27; // w26
  GachaRqParamData_o *v28; // x27
  int32_t v29; // w2
  const MethodInfo *v30; // x3

  adjustStoryGachaIds = storyAdjustIds;
  v14 = gachaSubId;
  summonType = gachaType;
  v22 = this;
  if ( (byte_4B41068 & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    this = (SummonInfoControl_o *)sub_1BDB878(&GachaRqParamData_TypeInfo, *(_QWORD *)&gachaType);
    byte_4B41068 = 1;
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
    sub_1BDBAD4(this, *(_QWORD *)&gachaType);
  adjustStoryGachaIds = v26->fields.adjustStoryGachaIds;
LABEL_22:
  v27 = ticketItemId & ~(ticketItemId >> 31);
  if ( shopIdIdx < 0 )
    shopIdIdx = 1;
  v28 = (GachaRqParamData_o *)sub_1BDBAC4(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_34471736(
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
    0LL);
  v22->fields.requestData = v28;
  sub_1BDB81C((CGThumbnailListItem_o *)&v22->fields.requestData, (int32_t)v28, v29, v30);
}


void __fastcall SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1BDBAD4(this, method);
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
  __int64 v10; // x1
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o *summonObjInfos; // x19
  System_Action_object__o *v14; // x20

  if ( (byte_4B41069 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo, onOff);
    sub_1BDB878(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__, v5);
    sub_1BDB878(&Method_SummonInfoControl___c__DisplayClass176_0__SetSummonButtonsCollider_b__0__, v6);
    sub_1BDB878(&SummonInfoControl___c__DisplayClass176_0_TypeInfo, v7);
    byte_4B41069 = 1;
  }
  v8 = sub_1BDBAC4(SummonInfoControl___c__DisplayClass176_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8
    || (*(_QWORD *)(v8 + 16) = this,
        sub_1BDB81C((CGThumbnailListItem_o *)(v8 + 16), (int32_t)this, v11, v12),
        *(_BYTE *)(v8 + 24) = onOff,
        summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos,
        v14 = (System_Action_object__o *)sub_1BDBAC4(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo),
        System_Action_object____ctor(
          v14,
          (Il2CppObject *)v8,
          Method_SummonInfoControl___c__DisplayClass176_0__SetSummonButtonsCollider_b__0__,
          0LL),
        !summonObjInfos) )
  {
    sub_1BDBAD4(v9, v10);
  }
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)v14,
    (const MethodInfo_36D6804 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void __fastcall SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v11; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  UnityEngine_GameObject_o *v13; // x20
  System_Action_int__o *v14; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1

  if ( (byte_4B41054 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_int__TypeInfo, method);
    sub_1BDB878(&Method_SummonInfoControl__SetSummonDispInfo_b__147_0__, v3);
    byte_4B41054 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v5, v6);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v7);
  summonDetailInfo = this->fields.summonDetailInfo;
  if ( !summonDetailInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !summonDetailInfo )
    goto LABEL_12;
  summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL);
  if ( !summonDetailInfo )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive(summonDetailInfo, 1, 0LL);
  summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton;
  if ( !summonDetailInfo
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        summonDetailInfo = (UnityEngine_GameObject_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                         this,
                                                         v11),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, summonDetailInfo != 0LL, 0LL),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton) == 0LL)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0LL),
        (currentSummonData = this->fields.currentSummonData) == 0LL)
    || !summonDetailInfo )
  {
LABEL_12:
    sub_1BDBAD4(summonDetailInfo, v8);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, currentSummonData->fields.isDispSummonListDialog, 0LL);
  *(_WORD *)&this->fields.isOneExUsePossible = 0;
  this->fields.isDispPayMultiExSummon = 0;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v14 = (System_Action_int__o *)sub_1BDBAC4(System_Action_int__TypeInfo);
  System_Action_int____ctor(v14, (Il2CppObject *)this, Method_SummonInfoControl__SetSummonDispInfo_b__147_0__, 0LL);
  StoneCountRefreshComponent__AttachToGameObject(v13, v14, 0, 0LL);
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
  System_String_o *v29; // x20
  SummonInfoControl___c_c *v30; // x8
  System_Func_T__TResult__o *_9__170_0; // x25
  Il2CppObject *v32; // x26
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  SummonInfoControl_o *v37; // x20
  System_String_o *v38; // x20
  SummonInfoControl___c_c *v39; // x8
  System_Func_T__TResult__o *_9__170_1; // x23
  Il2CppObject *v41; // x24
  struct SummonInfoControl___c_StaticFields *v42; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x0
  System_String_o *v46; // x20
  SummonInfoControl___c_c *v47; // x8
  System_Func_T__TResult__o *_9__170_3; // x21
  Il2CppObject *v49; // x22
  struct SummonInfoControl___c_StaticFields *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v53; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  UnityEngine_GameObject_o *v57; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SummonInfoControl_o *v62; // x0
  const MethodInfo *v63; // x3
  UnityEngine_Object_o *v64; // x22
  SummonInfoControl_o *v65; // x0
  const MethodInfo *v66; // x3
  UnityEngine_Object_o *v67; // x21
  SummonInfoControl_o *v68; // x0
  const MethodInfo *v69; // x3
  UISprite_o *v70; // x23
  _BOOL8 v71; // x0
  __int64 v72; // x2
  System_String_o *v73; // x0
  Il2CppObject *friendPointSummon; // x1
  System_String_o *v75; // x0
  int v76; // w21
  bool v77; // w1
  SummonInfoControl_o *v78; // x0
  const MethodInfo *v79; // x3
  UnityEngine_Component_o *v80; // x24
  SummonInfoControl_o *v81; // x0
  const MethodInfo *v82; // x3
  UnityEngine_Component_o *v83; // x23
  SummonInfoControl_o *v84; // x0
  const MethodInfo *v85; // x3
  UISprite_o *v86; // x22
  SummonInfoControl_o *v87; // x0
  const MethodInfo *v88; // x3
  SummonInfoControl_o *v89; // x0
  const MethodInfo *v90; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v92; // x0
  System_String_o *v93; // x0
  System_String_o *v94; // x20
  SummonInfoControl___c_c *v95; // x8
  System_Func_T__TResult__o *_9__170_2; // x23
  Il2CppObject *v97; // x24
  struct SummonInfoControl___c_StaticFields *v98; // x0
  int32_t v99; // w2
  const MethodInfo *v100; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v101; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v104; // x0
  UnityEngine_GameObject_o *v105; // x0

  v12 = this;
  if ( (byte_4B41065 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, summonObjParts);
    sub_1BDB878(&Method_System_Linq_Enumerable_Select_char__string___, v13);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_string___, v14);
    sub_1BDB878(&System_Func_char__string__TypeInfo, v15);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v16);
    sub_1BDB878(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_0__, v17);
    sub_1BDB878(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_1__, v18);
    sub_1BDB878(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_2__, v19);
    sub_1BDB878(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_3__, v20);
    sub_1BDB878(&SummonInfoControl___c_TypeInfo, v21);
    sub_1BDB878(&StringLiteral_17563/*"btn_txt_bonus_{0}_glow"*/, v22);
    sub_1BDB878(&StringLiteral_22360/*"num2"*/, v23);
    sub_1BDB878(&StringLiteral_22358/*"num1"*/, v24);
    sub_1BDB878(&StringLiteral_8121/*"Item"*/, v25);
    sub_1BDB878(&StringLiteral_22359/*"num1_glow"*/, v26);
    sub_1BDB878(&StringLiteral_22361/*"num2_glow"*/, v27);
    this = (SummonInfoControl_o *)sub_1BDB878(&StringLiteral_17562/*"btn_txt_bonus_{0}"*/, v28);
    byte_4B41065 = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v29 = System_Int32__ToString((int)v12 + 408, 0LL);
    v30 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v30 = SummonInfoControl___c_TypeInfo;
    }
    _9__170_0 = (System_Func_T__TResult__o *)v30->static_fields->__9__170_0;
    if ( !_9__170_0 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = SummonInfoControl___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__170_0 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__170_0, v32, Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_0__, 0LL);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__170_0 = (struct System_Func_char__string__o *)_9__170_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__170_0, (int32_t)_9__170_0, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v29,
                                                                 (System_Func_TSource__TResult__o *)_9__170_0,
                                                                 (const MethodInfo_3064E7C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v36,
                                    (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_string___);
    v37 = this;
    if ( !isMulti )
      goto LABEL_22;
  }
  else
  {
    v37 = 0LL;
    if ( !isMulti )
      goto LABEL_22;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v38 = System_Int32__ToString((int)v12 + 412, 0LL);
    v39 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v39 = SummonInfoControl___c_TypeInfo;
    }
    _9__170_1 = (System_Func_T__TResult__o *)v39->static_fields->__9__170_1;
    if ( !_9__170_1 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = SummonInfoControl___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v39->static_fields->__9;
      _9__170_1 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__170_1, v41, Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_1__, 0LL);
      v42 = SummonInfoControl___c_TypeInfo->static_fields;
      v42->__9__170_1 = (struct System_Func_char__string__o *)_9__170_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&v42->__9__170_1, (int32_t)_9__170_1, v43, v44);
    }
    v45 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                                 (System_Func_TSource__TResult__o *)_9__170_1,
                                                                 (const MethodInfo_3064E7C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v45,
                                    (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_string___);
    v37 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v94 = System_Int32__ToString((int)v12 + 408, 0LL);
    v95 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v95 = SummonInfoControl___c_TypeInfo;
    }
    _9__170_2 = (System_Func_T__TResult__o *)v95->static_fields->__9__170_2;
    if ( !_9__170_2 )
    {
      if ( !v95->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v95);
        v95 = SummonInfoControl___c_TypeInfo;
      }
      v97 = (Il2CppObject *)v95->static_fields->__9;
      _9__170_2 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__170_2, v97, Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_2__, 0LL);
      v98 = SummonInfoControl___c_TypeInfo->static_fields;
      v98->__9__170_2 = (struct System_Func_char__string__o *)_9__170_2;
      sub_1BDB81C((CGThumbnailListItem_o *)&v98->__9__170_2, (int32_t)_9__170_2, v99, v100);
    }
    v101 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v94,
                                                                  (System_Func_TSource__TResult__o *)_9__170_2,
                                                                  (const MethodInfo_3064E7C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v101,
                                    (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v37 = this;
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
        GameObjectExtensions__SetLocalScale_35213112(gameObject, 0.9, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v104, -6.0, 0LL);
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
        v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v105, 45.0, 0LL);
      }
    }
  }
LABEL_22:
  if ( isSingle && v12->fields.appendGiftNum )
  {
    v46 = System_Int32__ToString((int)v12 + 416, 0LL);
    v47 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v47 = SummonInfoControl___c_TypeInfo;
    }
    _9__170_3 = (System_Func_T__TResult__o *)v47->static_fields->__9__170_3;
    if ( !_9__170_3 )
    {
      if ( !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        v47 = SummonInfoControl___c_TypeInfo;
      }
      v49 = (Il2CppObject *)v47->static_fields->__9;
      _9__170_3 = (System_Func_T__TResult__o *)sub_1BDBAC4(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__170_3, v49, Method_SummonInfoControl___c__SetSummonGiftDisp_b__170_3__, 0LL);
      v50 = SummonInfoControl___c_TypeInfo->static_fields;
      v50->__9__170_3 = (struct System_Func_char__string__o *)_9__170_3;
      sub_1BDB81C((CGThumbnailListItem_o *)&v50->__9__170_3, (int32_t)_9__170_3, v51, v52);
    }
    v53 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v46,
                                                                 (System_Func_TSource__TResult__o *)_9__170_3,
                                                                 (const MethodInfo_3064E7C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v53,
                                    (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v37 = this;
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
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v55, 42.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionY(v56, -34.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v57 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v57, 0.9, 0LL);
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
        v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalPositionX(v59, -60.0, 0LL);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        GameObjectExtensions__SetLocalScaleX(v60, 0.9, 0LL);
      }
    }
  }
  if ( !v37 || (m_CancellationTokenSource = v37->fields.m_CancellationTokenSource) == 0LL )
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
    v78 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v78,
                                    (UnityEngine_GameObject_o *)v78,
                                    (System_String_o *)StringLiteral_22358/*"num1"*/,
                                    v79);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v80 = (UnityEngine_Component_o *)this;
    v81 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v81,
                                    (UnityEngine_GameObject_o *)v81,
                                    (System_String_o *)StringLiteral_22360/*"num2"*/,
                                    v82);
    if ( !v80 )
      goto LABEL_131;
    v83 = (UnityEngine_Component_o *)this;
    v84 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v80, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v84,
                                    (UnityEngine_GameObject_o *)v84,
                                    (System_String_o *)StringLiteral_22359/*"num1_glow"*/,
                                    v85);
    if ( !v83 )
      goto LABEL_131;
    v86 = (UISprite_o *)this;
    v87 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v83, 0LL);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v87,
                                    (UnityEngine_GameObject_o *)v87,
                                    (System_String_o *)StringLiteral_22361/*"num2_glow"*/,
                                    v88);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v67 = (UnityEngine_Object_o *)this;
    v89 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0LL);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    v89,
                    (UnityEngine_GameObject_o *)v89,
                    (System_String_o *)StringLiteral_8121/*"Item"*/,
                    v90);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(BonusSprite, 7, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v80, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v83, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v86, 0LL, 0LL) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v71 = UnityEngine_Object__op_Inequality(v67, 0LL, 0LL);
          if ( v71 )
          {
            if ( LODWORD(v37->fields.m_CancellationTokenSource) )
            {
              v92 = System_String__Format(
                      (System_String_o *)StringLiteral_17562/*"btn_txt_bonus_{0}"*/,
                      (Il2CppObject *)v37->fields.freeSummon,
                      0LL);
              UISprite__set_spriteName((UISprite_o *)v80, v92, 0LL);
              if ( LODWORD(v37->fields.m_CancellationTokenSource) > 1 )
              {
                v93 = System_String__Format(
                        (System_String_o *)StringLiteral_17562/*"btn_txt_bonus_{0}"*/,
                        (Il2CppObject *)v37->fields.friendPointSummon,
                        0LL);
                UISprite__set_spriteName((UISprite_o *)v83, v93, 0LL);
                if ( LODWORD(v37->fields.m_CancellationTokenSource) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17563/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v37->fields.freeSummon,
                                                  0LL);
                  if ( !v86 )
                    goto LABEL_131;
                  UISprite__set_spriteName(v86, (System_String_o *)this, 0LL);
                  if ( LODWORD(v37->fields.m_CancellationTokenSource) > 1 )
                  {
                    friendPointSummon = (Il2CppObject *)v37->fields.friendPointSummon;
                    v75 = (System_String_o *)StringLiteral_17563/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_68;
                  }
                }
              }
            }
LABEL_132:
            sub_1BDBADC(v71, summonObjParts, v72);
          }
        }
      }
    }
LABEL_71:
    v76 = 0;
    goto LABEL_72;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  v62 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v62,
                                  (UnityEngine_GameObject_o *)v62,
                                  (System_String_o *)StringLiteral_22358/*"num1"*/,
                                  v63);
  if ( !this )
    goto LABEL_131;
  v64 = (UnityEngine_Object_o *)this;
  v65 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v65,
                                  (UnityEngine_GameObject_o *)v65,
                                  (System_String_o *)StringLiteral_22359/*"num1_glow"*/,
                                  v66);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_131;
  v67 = (UnityEngine_Object_o *)this;
  v68 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)summonObjParts->fields.singleDigit,
                                 0LL);
  v70 = SummonInfoControl__GetBonusSprite(
          v68,
          (UnityEngine_GameObject_o *)v68,
          (System_String_o *)StringLiteral_8121/*"Item"*/,
          v69);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v70, 7, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v64, 0LL, 0LL) )
    goto LABEL_71;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v71 = UnityEngine_Object__op_Inequality(v64, 0LL, 0LL);
  if ( !v71 )
    goto LABEL_71;
  if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  v73 = System_String__Format((System_String_o *)StringLiteral_17562/*"btn_txt_bonus_{0}"*/, (Il2CppObject *)v37->fields.freeSummon, 0LL);
  UISprite__set_spriteName((UISprite_o *)v64, v73, 0LL);
  if ( !LODWORD(v37->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  friendPointSummon = (Il2CppObject *)v37->fields.freeSummon;
  v75 = (System_String_o *)StringLiteral_17563/*"btn_txt_bonus_{0}_glow"*/;
LABEL_68:
  this = (SummonInfoControl_o *)System_String__Format(v75, friendPointSummon, 0LL);
  if ( !v67 )
    goto LABEL_131;
  UISprite__set_spriteName((UISprite_o *)v67, (System_String_o *)this, 0LL);
  v76 = 1;
LABEL_72:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v76 )
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
          v77 = 0;
          goto LABEL_83;
        }
      }
    }
LABEL_131:
    sub_1BDBAD4(this, summonObjParts);
  }
  if ( !v37 )
    goto LABEL_131;
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    SLODWORD(v37->fields.m_CancellationTokenSource) < 2,
    0LL);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !this )
    goto LABEL_131;
  v77 = SLODWORD(v37->fields.m_CancellationTokenSource) > 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v77, 0LL);
}


void __fastcall SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  char *Instance; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v8; // x2
  __int64 v9; // x8
  char *v10; // x20
  __int64 v11; // x22
  char *v12; // x23
  __int64 v13; // x9
  __int64 v14; // x8
  __int64 v15; // x9
  int v16; // w9

  if ( (byte_4B41064 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___, method);
    sub_1BDB878(&Method_DataManager_GetMasterData_GiftMaster___, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B41064 = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0LL)
      || !Instance )
    {
LABEL_31:
      sub_1BDBAD4(Instance, v6);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0LL);
    if ( Instance )
    {
      v9 = *((_QWORD *)Instance + 3);
      v10 = Instance;
      if ( v9 )
      {
        if ( (int)v9 >= 1 )
        {
          v11 = 0LL;
          v12 = Instance + 32;
          do
          {
            if ( (unsigned int)v11 >= (unsigned int)v9 )
LABEL_32:
              sub_1BDBADC(Instance, v6, v8);
            v13 = *(_QWORD *)&v12[8 * v11];
            if ( !v13 )
              goto LABEL_31;
            if ( *(_DWORD *)(v13 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_303395C *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v11 >= *((_DWORD *)v10 + 6) )
                goto LABEL_32;
              v14 = *(_QWORD *)&v12[8 * v11];
              if ( !v14 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v14 + 24), 0LL);
              v9 = *((_QWORD *)v10 + 3);
              if ( (unsigned int)v11 >= (unsigned int)v9 )
                goto LABEL_32;
              v15 = *(_QWORD *)&v12[8 * v11];
              if ( !v15 )
                goto LABEL_31;
              v16 = *(_DWORD *)(v15 + 20);
              switch ( v16 )
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
            ++v11;
          }
          while ( (int)v11 < (int)v9 );
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
  __int64 v9; // x1

  if ( (byte_4B41071 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, bannerAtlas);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B41071 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_object, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonHistorySprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonHistoryButton) == 0LL) )
    {
      sub_1BDBAD4(Component_object, v9);
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
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0LL;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_1BDBAD4(this, 0LL);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.clickCallbackFunc, (int32_t)callback, (int32_t)callback, method);
  this->fields.currentSummonData = gachaData;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.currentSummonData, (int32_t)gachaData, v6, v7);
  SummonInfoControl__SetSummonGiftInfo(this, v8);
  SummonInfoControl__SetSummonDispInfo(this, v9);
}


void __fastcall SummonInfoControl__SetSummonInfo_34623768(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int klass; // w22
  int32_t PayOneTimePrice; // w21
  __int64 v11; // x20
  int klass_high; // w22
  int32_t PayMultiTimePrice; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B41063 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_GachaMaster___, method);
    sub_1BDB878(&DataManager_TypeInfo, v3);
    sub_1BDB878(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v4);
    sub_1BDB878(&SummonInfoControl_SummonInfo_TypeInfo, v5);
    byte_4B41063 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          currentSummonData->fields.id,
          (const MethodInfo_32E1E88 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity )
    goto LABEL_17;
  if ( SHIDWORD(entity[3].klass) >= 1 )
  {
    klass = (int)entity[4].klass;
    PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0LL);
    v11 = sub_1BDBAC4(SummonInfoControl_SummonInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v11, 0LL);
    *(_DWORD *)(v11 + 16) = klass;
    *(_DWORD *)(v11 + 20) = PayOneTimePrice;
    *(_DWORD *)(v11 + 24) = 1;
    Master_object = entity;
    if ( entity )
    {
      if ( SLODWORD(entity[3].monitor) < 1 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_17:
    sub_1BDBAD4(Master_object, v7);
  }
  if ( SLODWORD(entity[3].monitor) < 1 )
    return;
LABEL_14:
  klass_high = HIDWORD(Master_object[4].klass);
  PayMultiTimePrice = GachaEntity__getPayMultiTimePrice((GachaEntity_o *)Master_object, 0LL);
  v11 = sub_1BDBAC4(SummonInfoControl_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = klass_high;
  *(_DWORD *)(v11 + 20) = PayMultiTimePrice;
  *(_DWORD *)(v11 + 24) = 2;
LABEL_15:
  *(int32x2_t *)&this->fields.price = vrev64_s32(*(int32x2_t *)(v11 + 16));
  this->fields.shopIdIdx = *(_DWORD *)(v11 + 24);
}


void __fastcall SummonInfoControl__SetSummonListSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  __int64 v7; // x1
  UIAtlas_o *Component_object; // x0
  __int64 v9; // x1

  if ( (byte_4B41070 & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, bannerAtlas);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v7);
    byte_4B41070 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonListSprite)
      || (UISprite__set_atlas(this->fields.summonListSprite, Component_object, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonListSprite) == 0LL)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0LL),
          (Component_object = (UIAtlas_o *)this->fields.summonListButton) == 0LL) )
    {
      sub_1BDBAD4(Component_object, v9);
    }
    UIButton__set_normalSprite((UIButton_o *)Component_object, imgName, 0LL);
  }
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
    sub_1BDBAD4(this, isEnable);
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
    sub_1BDBAD4(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0LL);
}


void __fastcall SummonInfoControl__SetUpSummonInfos(SummonInfoControl_o *this, const MethodInfo *method)
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
      gameObject = UnityEngine_Component__get_gameObject(possessionInfoButton, 0LL);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                          this,
                                                          v9);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(gameObject, possessionInfoButton != 0LL, 0LL);
      SummonInfoControl__SetPaySummonInfo(this, v10);
      break;
    case 7:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
      if ( !possessionInfoButton )
        goto LABEL_15;
      v11 = UnityEngine_Component__get_gameObject(possessionInfoButton, 0LL);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                          this,
                                                          v12);
      if ( !v11 )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(v11, possessionInfoButton != 0LL, 0LL);
      SummonInfoControl__SetChargeSummonInfo(this, v13);
      break;
    case 3:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.summonDetailInfo;
      if ( possessionInfoButton )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)possessionInfoButton, 0, 0LL);
        possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
        if ( possessionInfoButton )
        {
          v5 = UnityEngine_Component__get_gameObject(possessionInfoButton, 0LL);
          possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                              this,
                                                              v6);
          if ( v5 )
          {
            UnityEngine_GameObject__SetActive(v5, possessionInfoButton != 0LL, 0LL);
            SummonInfoControl__SetFreeSummonInfo(this, v7);
            return;
          }
        }
      }
LABEL_15:
      sub_1BDBAD4(possessionInfoButton, method);
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
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  int gachaTime; // w8
  System_String_o *v26; // x20
  Il2CppObject *v27; // x0
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v30; // x4
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  int v33; // [xsp+Ch] [xbp-24h] BYREF

  v4 = payGachaEnt;
  v5 = this;
  if ( (byte_4B4105C & 1) == 0 )
  {
    sub_1BDB878(&int_TypeInfo, payGachaEnt);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v6);
    this = (SummonInfoControl_o *)sub_1BDB878(&StringLiteral_17627/*"btn_txt_summon{0:00}"*/, v7);
    byte_4B4105C = 1;
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
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_25175/*"{0}"*/, v8);
        v11 = v5->fields.stoneSummon;
        if ( v11 )
        {
          multiPay = v11->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v4, 0LL);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_25175/*"{0}"*/,
              v15);
            v17 = v5->fields.stoneSummon;
            if ( v17 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v17->fields.onePay, 1, 0, 0, 0, v16);
              v19 = v5->fields.stoneSummon;
              if ( v19 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v19->fields.multiPay, 0, 1, 0, 0, v18);
                SummonInfoControl__SetElevenBonusInfo(v5, v4, 0, v5->fields.stoneSummon, v5->fields.gachaTime, v20);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_1BDBAD4(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_34623768(v5, v21);
  gachaTime = v5->fields.gachaTime;
  v26 = (System_String_o *)StringLiteral_17627/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v33 = gachaTime;
  v27 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v33, v22, v23, v24);
  this = (SummonInfoControl_o *)System_String__Format(v26, v27, 0LL);
  v28 = v5->fields.stoneSummon;
  if ( !v28 )
    goto LABEL_21;
  single = v28->fields.single;
  if ( !single )
    goto LABEL_21;
  payGachaEnt = (GachaEntity_o *)this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)payGachaEnt, 0LL);
  v31 = v5->fields.stoneSummon;
  if ( !v31 )
    goto LABEL_21;
  v32 = v31->fields.single;
  if ( !v32 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v32->fields.infoLabel, -1, (System_String_o *)StringLiteral_25175/*"{0}"*/, v30);
}


void __fastcall SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x4
  struct SummonInfoControl_SummonObjInfo_o *ticketSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  const MethodInfo *v13; // x4
  struct SummonInfoControl_SummonObjInfo_o *v14; // x8
  struct SummonInfoControl_SummonObjParts_o *v15; // x8
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UILabel_o *infoLabel; // x21
  int32_t PayMultiTimePrice; // w0
  const MethodInfo *v20; // x4
  const MethodInfo *v21; // x6
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  const MethodInfo *v23; // x5

  if ( (byte_4B4105B & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, payGachaEnt);
    sub_1BDB878(&StringLiteral_25126/*"{0:#,0}"*/, v7);
    byte_4B4105B = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_25175/*"{0}"*/, v10);
  v14 = this->fields.ticketSummon;
  if ( !v14 )
    goto LABEL_12;
  v15 = v14->fields.onePay;
  if ( !v15
    || (SummonInfoControl__SetPriceText(
          this,
          v15->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_25126/*"{0:#,0}"*/,
          v13),
        (v16 = this->fields.ticketSummon) == 0LL)
    || (multiPay = v16->fields.multiPay) == 0LL
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_25175/*"{0}"*/, v20),
        (v22 = this->fields.ticketSummon) == 0LL) )
  {
LABEL_12:
    sub_1BDBAD4(v8, v9);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v22->fields.multiPay, 0, 1, 0, 0, v21);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v23);
}


bool __fastcall SummonInfoControl__TryGetTicket(
        SummonInfoControl_o *this,
        int32_t *ticketNum,
        const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v10; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4105A & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserItemMaster___, ticketNum);
    sub_1BDB878(&DataManager_TypeInfo, v5);
    byte_4B4105A = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserItemMaster___);
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
      v10 = entity->fields.num > 0;
LABEL_12:
      num = entity->fields.num;
      result = v10;
      goto LABEL_13;
    }
LABEL_14:
    sub_1BDBAD4(Master_object, v7);
  }
  v10 = 0;
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
  __int64 v9; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  __int64 v13; // x9
  const MethodInfo *v14; // x6
  int32_t v15; // w8
  struct SummonInfoControl_SummonObjInfo_o *v16; // x9
  const MethodInfo *v17; // x4
  struct SummonInfoControl_SummonObjInfo_o *v18; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v20; // x4
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjParts_o *v22; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B41059 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataManager_GetMaster_UserServantMaster___, payGachaEnt);
    sub_1BDB878(&DataManager_TypeInfo, v6);
    sub_1BDB878(&StringLiteral_25175/*"{0}"*/, v7);
    byte_4B41059 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3033908 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)UserServantMaster__getCountWithoutMaterial(
                                    (UserServantMaster_o *)Master_object,
                                    &servantEquipSum[1],
                                    servantEquipSum,
                                    0LL);
  if ( !payGachaEnt )
    goto LABEL_19;
  v13 = 64LL;
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
    v13 = 68LL;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v13);
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0LL);
    v15 = 2;
  }
  else
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0LL);
    v15 = 1;
  }
  v16 = this->fields.stoneSummon;
  this->fields.price = (int)Master_object;
  this->fields.shopIdIdx = v15;
  if ( !v16
    || (SummonInfoControl__SetSummonGiftDisp(this, v16->fields.single, 0, 1, 0, 0, v14),
        (v18 = this->fields.stoneSummon) == 0LL)
    || (single = v18->fields.single) == 0LL
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_25175/*"{0}"*/, v17),
        (v21 = this->fields.stoneSummon) == 0LL)
    || (v22 = v21->fields.single) == 0LL )
  {
LABEL_19:
    sub_1BDBAD4(Master_object, v9);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_object,
    this->fields.gachaTime,
    v22->fields.numImg,
    v22->fields.bonusInfo,
    v20);
}


void __fastcall SummonInfoControl___SetSummonDispInfo_b__147_0(
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
      sub_1BDBAD4(SelfUserGame, v5);
    this->fields.haveStoneNum = entity->fields.stone;
    *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&v6->fields.freeStone;
  }
}


GachaEntity_o *__fastcall SummonInfoControl__get_CurrentGachaEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v2 = this;
  if ( (byte_4B41051 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1BDB878(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__, method);
    byte_4B41051 = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0LL )
    sub_1BDBAD4(this, method);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_32E1E3C *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
    sub_1BDBAD4(this, method);
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


SummonInfoLayout_o *__fastcall SummonInfoControl__get_MultiExSummonInfoLayout(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *multiExSummonInfoLayout; // x21
  CGThumbnailListItem_o *p_multiExSummonInfoLayout; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v13; // x8
  System_Func_object__bool__o *_9__139_0; // x21
  Il2CppObject *v15; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B41050 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___, method);
    sub_1BDB878(&System_Func_SummonInfoLayout__bool__TypeInfo, v3);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__139_0__, v6);
    sub_1BDB878(&SummonInfoControl___c_TypeInfo, v7);
    byte_4B41050 = 1;
  }
  multiExSummonInfoLayout = (UnityEngine_Object_o *)this->fields.multiExSummonInfoLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_multiExSummonInfoLayout = (CGThumbnailListItem_o *)&this->fields.multiExSummonInfoLayout;
  if ( UnityEngine_Object__op_Equality(multiExSummonInfoLayout, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BDBAD4(0LL, v11);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_3088E7C *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v13 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v13 = SummonInfoControl___c_TypeInfo;
    }
    _9__139_0 = (System_Func_object__bool__o *)v13->static_fields->__9__139_0;
    if ( !_9__139_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = SummonInfoControl___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__139_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__139_0,
        v15,
        Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__139_0__,
        0LL);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__139_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__139_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__139_0, (int32_t)_9__139_0, v17, v18);
    }
    v19 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
            Components_object,
            (System_Func_TSource__bool__o *)_9__139_0,
            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    p_multiExSummonInfoLayout->klass = (CGThumbnailListItem_c *)v19;
    sub_1BDB81C(p_multiExSummonInfoLayout, (int32_t)v19, v20, v21);
  }
  return (SummonInfoLayout_o *)p_multiExSummonInfoLayout->klass;
}


SummonInfoLayout_o *__fastcall SummonInfoControl__get_SummonInfoLayout(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *summonInfoLayout; // x21
  CGThumbnailListItem_o *p_summonInfoLayout; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v13; // x8
  System_Func_object__bool__o *_9__137_0; // x21
  Il2CppObject *v15; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4B4104F & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___, method);
    sub_1BDB878(&System_Func_SummonInfoLayout__bool__TypeInfo, v3);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___, v4);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v5);
    sub_1BDB878(&Method_SummonInfoControl___c__get_SummonInfoLayout_b__137_0__, v6);
    sub_1BDB878(&SummonInfoControl___c_TypeInfo, v7);
    byte_4B4104F = 1;
  }
  summonInfoLayout = (UnityEngine_Object_o *)this->fields.summonInfoLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonInfoLayout = (CGThumbnailListItem_o *)&this->fields.summonInfoLayout;
  if ( UnityEngine_Object__op_Equality(summonInfoLayout, 0LL, 0LL) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      sub_1BDBAD4(0LL, v11);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_3088E7C *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v13 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v13 = SummonInfoControl___c_TypeInfo;
    }
    _9__137_0 = (System_Func_object__bool__o *)v13->static_fields->__9__137_0;
    if ( !_9__137_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = SummonInfoControl___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__137_0 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__137_0,
        v15,
        Method_SummonInfoControl___c__get_SummonInfoLayout_b__137_0__,
        0LL);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__137_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__137_0;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__137_0, (int32_t)_9__137_0, v17, v18);
    }
    v19 = System_Linq_Enumerable__FirstOrDefault_object__50698552(
            Components_object,
            (System_Func_TSource__bool__o *)_9__137_0,
            (const MethodInfo_3059938 *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    p_summonInfoLayout->klass = (CGThumbnailListItem_c *)v19;
    sub_1BDB81C(p_summonInfoLayout, (int32_t)v19, v20, v21);
  }
  return (SummonInfoLayout_o *)p_summonInfoLayout->klass;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) != 0 )
  {
    if ( v8 == 1 )
    {
      v9 = (Il2CppObject *)sub_1A21190;
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
        v11 = sub_1BDB930(v6);
        v12 = sub_1BDBDEC(v6);
        if ( (v11 & 1) != 0 )
        {
          if ( (v12 & 1) != 0 )
            v9 = (Il2CppObject *)sub_1A2128C;
          else
            v9 = (Il2CppObject *)sub_1A21250;
        }
        else if ( (v12 & 1) != 0 )
        {
          v9 = (Il2CppObject *)sub_1A211CC;
        }
        else
        {
          v9 = (Il2CppObject *)sub_1A211A0;
        }
      }
      else
      {
        v9 = (Il2CppObject *)sub_1A21170;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v13 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v13, 0LL);
    }
  }
  v10 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
  this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
  this->fields.original_method_info = v10;
LABEL_17:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A21128;
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
  return (System_IAsyncResult_o *)sub_1BDB82C(this, &v6, callback, object);
}


void __fastcall SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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

  *(_OWORD *)&this->fields.Top.fields.x = xmmword_BEA710;
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712LL;
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
    byte_4B3E911 = 1;
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B41074 & 1) == 0 )
  {
    sub_1BDB878(&SummonInfoControl___c_TypeInfo, v1);
    byte_4B41074 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  SummonInfoControl___c_TypeInfo->static_fields->__9 = (struct SummonInfoControl___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)SummonInfoControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall SummonInfoControl___c___ctor(SummonInfoControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c___InitSummonBtnDisp_b__150_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_4B41075 & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_1BDB878(&UnityEngine_Object_TypeInfo, x);
    byte_4B41075 = 1;
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
    sub_1BDBAD4(this, x);
  }
}


void __fastcall SummonInfoControl___c___SetMultiTimeExButton_b__162_0(
        SummonInfoControl___c_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v6; // x1

  if ( (byte_4B41076 & 1) == 0 )
  {
    sub_1BDB878(&AtlasManager_TypeInfo, sprite);
    this = (SummonInfoControl___c_o *)sub_1BDB878(&string_TypeInfo, v6);
    byte_4B41076 = 1;
  }
  if ( !sprite )
    sub_1BDBAD4(this, sprite);
  UISprite__set_spriteName(sprite, string_TypeInfo->static_fields->Empty, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(sprite, spriteName, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__170_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B41077 & 1) == 0 )
  {
    sub_1BDB878(&char_TypeInfo, x);
    byte_4B41077 = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__170_1(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B41078 & 1) == 0 )
  {
    sub_1BDB878(&char_TypeInfo, x);
    byte_4B41078 = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__170_2(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B41079 & 1) == 0 )
  {
    sub_1BDB878(&char_TypeInfo, x);
    byte_4B41079 = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall SummonInfoControl___c___SetSummonGiftDisp_b__170_3(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-14h] BYREF

  v4 = x;
  if ( (byte_4B4107A & 1) == 0 )
  {
    sub_1BDB878(&char_TypeInfo, x);
    byte_4B4107A = 1;
  }
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  return System_Char__ToString((uint16_t)&v4, 0LL);
}


bool __fastcall SummonInfoControl___c___get_MultiExSummonInfoLayout_b__139_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.type == 1;
}


bool __fastcall SummonInfoControl___c___get_SummonInfoLayout_b__137_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1BDBAD4(this, 0LL);
  return x->fields.type == 0;
}


void __fastcall SummonInfoControl___c__DisplayClass176_0___ctor(
        SummonInfoControl___c__DisplayClass176_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SummonInfoControl___c__DisplayClass176_0___SetSummonButtonsCollider_b__0(
        SummonInfoControl___c__DisplayClass176_0_o *this,
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
    sub_1BDBAD4(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, this->fields.onOff, v9);
}