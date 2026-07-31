void SummonInfoControl___cctor(const MethodInfo *method)
{
  struct SummonInfoControl_StaticFields *static_fields; // x8

  if ( (byte_5934A5A & 1) == 0 )
  {
    sub_21FFC50(&SummonInfoControl_TypeInfo);
    byte_5934A5A = 1;
  }
  static_fields = SummonInfoControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OPEN_TIME = xmmword_E93320;
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
  Il2CppObject *freeSummon; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  System_String_o *v66; // x2
  System_String_o *v67; // x3
  int32_t v68; // w4
  int32_t v69; // w5
  bool v70; // w6
  bool v71; // w7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  const MethodInfo *v82; // x1

  if ( (byte_5934A36 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
    byte_5934A36 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v3 )
    goto LABEL_33;
  items = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.freeSummon;
  v13 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !items )
    goto LABEL_33;
  size = v3->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v15[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)freeSummon, v6, v7, v8, v9, v10, v11);
  }
  v22 = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.friendPointSummon;
  v23 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v22 )
    goto LABEL_33;
  v24 = v3->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v22->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v3->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v25 + 4), (int32_t)freeSummon, v16, v17, v18, v19, v20, v21);
  }
  v32 = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.stoneSummon;
  v33 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v32 )
    goto LABEL_33;
  v34 = v3->fields._size;
  if ( (unsigned int)v34 >= LODWORD(v32->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v3->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v35 + 4), (int32_t)freeSummon, v26, v27, v28, v29, v30, v31);
  }
  v42 = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.ticketSummon;
  v43 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v42 )
    goto LABEL_33;
  v44 = v3->fields._size;
  if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v3->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v45 + 4), (int32_t)freeSummon, v36, v37, v38, v39, v40, v41);
  }
  v52 = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.chargeSummon;
  v53 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v52 )
    goto LABEL_33;
  v54 = v3->fields._size;
  if ( (unsigned int)v54 >= LODWORD(v52->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v3->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v55 + 4), (int32_t)freeSummon, v46, v47, v48, v49, v50, v51);
  }
  v62 = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.oneExSummon;
  v63 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v62 )
    goto LABEL_33;
  v64 = v3->fields._size;
  if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v3->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v65 + 4), (int32_t)freeSummon, v56, v57, v58, v59, v60, v61);
  }
  v72 = v3->fields._items;
  freeSummon = (Il2CppObject *)this->fields.multiExSummon;
  v73 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v72 )
LABEL_33:
    sub_21FFECC(v4, freeSummon);
  v74 = v3->fields._size;
  if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = &v72->obj.klass + v74;
    v3->fields._size = v74 + 1;
    v75[4] = (Il2CppClass *)freeSummon;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v75 + 4), (int32_t)freeSummon, v66, v67, v68, v69, v70, v71);
  }
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v3;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.summonObjInfos,
    (int32_t)v3,
    v76,
    v77,
    v78,
    v79,
    v80,
    v81);
  SummonInfoControl__InitMasterData(this, v82);
}


void SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_5934A55 & 1) == 0 )
  {
    sub_21FFC50(&Method_SummonInfoControl_ClickBase__);
    byte_5934A55 = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.animationCallback, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0);
}


void SummonInfoControl__FitToImageSize(SummonInfoControl_o *this, UISprite_o *image, const MethodInfo *method)
{
  if ( !image )
    sub_21FFECC(this, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))image->klass->vtable._33_MakePixelPerfect.methodPtr)(
    image,
    image->klass->vtable._33_MakePixelPerfect.method);
}


int32_t SummonInfoControl__GetBonusSelectLineupCount(SummonInfoControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  __int64 v4; // x1
  __int64 v5; // x2
  System_Int32_array *Master_object; // x0
  __int64 gachaBonusSelectLineupId; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaBonusSelectEntity_array *v9; // x19
  int max_length; // w8
  unsigned int v11; // w22
  GachaBonusSelectEntity_o *v12; // x9
  struct System_Int32_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v16; // x19
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t current; // w20
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  _BOOL8 EntityList; // x0
  __int64 giftId; // x1
  GachaBonusSelectLineupEntity_array *v24; // x20
  int v25; // w8
  int i; // w24
  GachaBonusSelectLineupEntity_o *v27; // x9
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  System_Collections_Generic_List_int__o *v31; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  int32_t v34; // w19
  Il2CppObject *v35; // x0
  __int64 v36; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 objectId; // x1
  GiftEntity_array *v39; // x19
  il2cpp_array_size_t v40; // x8
  __int64 v41; // x22
  GiftEntity_o *v42; // x10
  struct System_Int32_array *v43; // x9
  _QWORD *v44; // x10
  __int64 v45; // x11
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x0
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+0h] [xbp-A0h] BYREF
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+20h] [xbp-80h] BYREF
  GachaBonusSelectEntity_array *entityArray; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_5934A59 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GiftMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_5934A59 = 1;
  }
  entityArray = 0;
  gachaBonusSelectLineupEntities = 0;
  memset(&v50, 0, sizeof(v50));
  v3 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v4, v5);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_65;
  Master_object = (System_Int32_array *)GachaBonusSelectMaster__TryGetEntityArray(
                                          (GachaBonusSelectMaster_o *)Master_object,
                                          &entityArray,
                                          currentSummonData->fields.id,
                                          0);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    v9 = entityArray;
    if ( !entityArray )
      goto LABEL_65;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      while ( 1 )
      {
        if ( v11 >= max_length )
          sub_21FFED4(Master_object);
        v12 = v9->m_Items[v11];
        if ( !v12 )
          break;
        if ( !v3 )
          break;
        items = v3->fields._items;
        gachaBonusSelectLineupId = (unsigned int)v12->fields.gachaBonusSelectLineupId;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v3,
            gachaBonusSelectLineupId,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = gachaBonusSelectLineupId;
        }
        max_length = v9->max_length;
        if ( (int)++v11 >= max_length )
          goto LABEL_19;
      }
LABEL_65:
      sub_21FFECC(Master_object, gachaBonusSelectLineupId);
    }
  }
LABEL_19:
  v16 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_65;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v3,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v50 = v48;
  v48.fields._list = 0;
  *(_QWORD *)&v48.fields._index = &v50;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v50,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v50.fields._current;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v17, v18);
    v20 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    if ( !v20 )
      sub_21FFECC(0, v21);
    EntityList = GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)v20,
                   &gachaBonusSelectLineupEntities,
                   current,
                   0);
    if ( EntityList )
    {
      v24 = gachaBonusSelectLineupEntities;
      if ( !gachaBonusSelectLineupEntities )
        sub_21FFECC(EntityList, giftId);
      v25 = gachaBonusSelectLineupEntities->max_length;
      if ( v25 >= 1 )
      {
        for ( i = 0; i < v25; ++i )
        {
          if ( i >= (unsigned int)v25 )
            sub_21FFED4(EntityList);
          v27 = v24->m_Items[i];
          if ( !v27 )
            sub_21FFECC(EntityList, giftId);
          if ( !v16
            || (v28 = v16->fields._items,
                giftId = (unsigned int)v27->fields.giftId,
                v29 = Method_System_Collections_Generic_List_int__Add__,
                ++v16->fields._version,
                !v28) )
          {
            sub_21FFECC(EntityList, giftId);
          }
          v30 = v16->fields._size;
          if ( (unsigned int)v30 >= LODWORD(v28->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              giftId,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = v30 + 1;
            v28->m_Items[v30] = giftId;
          }
          v25 = v24->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v50,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v31 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v31,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v16 )
    goto LABEL_65;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v48,
    v16,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v50 = v48;
  v48.fields._list = 0;
  *(_QWORD *)&v48.fields._index = &v50;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v50,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v34 = v50.fields._current;
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v32, v33);
    v35 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !v35 )
      sub_21FFECC(0, v36);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v35, v34, 0);
    v39 = GiftListById;
    if ( !GiftListById )
      sub_21FFECC(0, objectId);
    v40 = GiftListById->max_length;
    if ( (int)v40 >= 1 )
    {
      v41 = 0;
      do
      {
        if ( (unsigned int)v41 >= (unsigned int)v40 )
          sub_21FFED4(GiftListById);
        v42 = v39->m_Items[v41];
        if ( !v42 )
          sub_21FFECC(GiftListById, objectId);
        if ( v42->fields.type == 1 )
        {
          if ( !v31
            || (v43 = v31->fields._items,
                objectId = (unsigned int)v42->fields.objectId,
                v44 = Method_System_Collections_Generic_List_int__Add__,
                ++v31->fields._version,
                !v43) )
          {
            sub_21FFECC(GiftListById, objectId);
          }
          v45 = v31->fields._size;
          if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v31,
              objectId,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            v40 = v39->max_length;
          }
          else
          {
            v31->fields._size = v45 + 1;
            v43->m_Items[v45] = objectId;
          }
        }
        ++v41;
      }
      while ( (int)v41 < (int)v40 );
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v50,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v46 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v31,
          (const MethodInfo_3849124 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v46,
                    (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !Master_object )
    goto LABEL_65;
  return Master_object->max_length;
}


System_String_array *SummonInfoControl__GetBonusSplitNum(
        SummonInfoControl_o *this,
        int32_t bonusNum,
        const MethodInfo *method)
{
  int32_t v4; // w8
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  SummonInfoControl___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__180_0; // x20
  Il2CppObject *v12; // x21
  struct SummonInfoControl___c_StaticFields *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  int v22; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5934A4B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_char__string__TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl___c__GetBonusSplitNum_b__180_0__);
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    byte_5934A4B = 1;
  }
  if ( bonusNum >= 999 )
    v4 = 999;
  else
    v4 = bonusNum;
  v22 = v4 & ~(v4 >> 31);
  v5 = System_Int32__ToString((int32_t)&v22, 0);
  v8 = SummonInfoControl___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v5;
  if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v6, v7);
    v8 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v8->static_fields;
  _9__180_0 = (System_Func_T__TResult__o *)static_fields->__9__180_0;
  if ( !_9__180_0 )
  {
    if ( !*(&v8->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v8, v6, v7);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__180_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_char__string__TypeInfo);
    System_Func_char__object____ctor(_9__180_0, v12, Method_SummonInfoControl___c__GetBonusSplitNum_b__180_0__, 0);
    v13 = SummonInfoControl___c_TypeInfo->static_fields;
    v13->__9__180_0 = (struct System_Func_char__string__o *)_9__180_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13->__9__180_0, (int32_t)_9__180_0, v14, v15, v16, v17, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                               v9,
                                                               (System_Func_TSource__TResult__o *)_9__180_0,
                                                               (const MethodInfo_3859A1C *)Method_System_Linq_Enumerable_Select_char__string___);
  return (System_String_array *)System_Linq_Enumerable__ToArray_object_(
                                  v20,
                                  (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
}


UISprite_o *SummonInfoControl__GetBonusSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *obj,
        System_String_o *targetName,
        const MethodInfo *method)
{
  if ( (byte_5934A4D & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_5934A4D = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_21FFECC(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_21FFECC(this, method);
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
  __int64 v2; // x2
  Il2CppObject *Master_object; // x0
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  Il2CppObject *v11; // x0
  __int64 v12; // x1
  ConstantMaster_o *v13; // x20
  int32_t Value; // w0
  System_String_o *v15; // x1
  int32_t v16; // w0
  const MethodInfo_3822E50 *v17; // x8
  Il2CppObject *v18; // x1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  if ( (byte_5934A37 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_15414/*"USER_FREE_STONE"*/);
    sub_21FFC50(&StringLiteral_14065/*"TUTORIAL_GACHA_ID"*/);
    byte_5934A37 = 1;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = (struct GachaMaster_o *)Master_object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.gachaMaster,
    (int32_t)Master_object,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  v11 = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v11 )
    sub_21FFECC(0, v12);
  v13 = (ConstantMaster_o *)v11;
  Value = ConstantMaster__GetValue((ConstantMaster_o *)v11, (System_String_o *)StringLiteral_14065/*"TUTORIAL_GACHA_ID"*/, 0);
  v15 = (System_String_o *)StringLiteral_15414/*"USER_FREE_STONE"*/;
  this->fields.tutorialGachaId = Value;
  v16 = ConstantMaster__GetValue(v13, v15, 0);
  v17 = (const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___;
  this->fields.userFreeStone = v16;
  v18 = DataManager__GetMaster_object_(v17);
  this->fields.viewGachaFeaturedServantMaster = (struct ViewGachaFeaturedServantMaster_o *)v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.viewGachaFeaturedServantMaster,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
}


void SummonInfoControl__InitStoneSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x0
  __int64 v5; // x1
  struct UserGameEntity_o *usrData; // x8

  SummonInfoControl__InitSummonBtnDisp(this, method);
  SummonInfoControl__SetSummonButtonsCollider(this, 1, v3);
  usrData = this->fields.usrData;
  if ( !usrData )
    sub_21FFECC(v4, v5);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void SummonInfoControl__InitSummonBtnDisp(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  SummonInfoControl___c_c *v4; // x0
  System_Collections_Generic_List_object__o *summonObjInfos; // x20
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__158_0; // x21
  Il2CppObject *v8; // x22
  struct SummonInfoControl___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5934A3A & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_21FFC50(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__158_0__);
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    byte_5934A3A = 1;
  }
  v4 = SummonInfoControl___c_TypeInfo;
  summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos;
  if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, method, v2);
    v4 = SummonInfoControl___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__158_0 = (System_Action_object__o *)static_fields->__9__158_0;
  if ( !_9__158_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__158_0 = (System_Action_object__o *)sub_21FFEBC(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_object____ctor(_9__158_0, v8, Method_SummonInfoControl___c__InitSummonBtnDisp_b__158_0__, 0);
    v9 = SummonInfoControl___c_TypeInfo->static_fields;
    v9->__9__158_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__158_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__158_0, (int32_t)_9__158_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !summonObjInfos )
    sub_21FFECC(v4, method);
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)_9__158_0,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
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
  __int64 v5; // x1
  __int64 v6; // x2
  SummonInfoControl_c *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  TweenAlpha_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_5934A52 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SummonInfoControl_TypeInfo);
    this = (SummonInfoControl_o *)sub_21FFC50(&StringLiteral_6224/*"EndAnimation"*/);
    byte_5934A52 = 1;
  }
  if ( !target )
    goto LABEL_15;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0) )
    UnityEngine_GameObject__SetActive(target, 1, 0);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                  target,
                                  (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
  if ( !this )
    goto LABEL_15;
  ((void (__fastcall *)(SummonInfoControl_o *, Il2CppClass *, double))this->klass[1]._1.element_class)(
    this,
    this->klass[1]._1.castClass,
    0.0);
  v7 = SummonInfoControl_TypeInfo;
  if ( !*(&SummonInfoControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo, v5, v6);
    v7 = SummonInfoControl_TypeInfo;
  }
  v10 = TweenAlpha__Begin(target, v7->static_fields->OPEN_TIME, 1.0, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8, v9);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v10 )
    {
      v10->fields.method = 3;
      gameObject = UnityEngine_Component__get_gameObject(v4, 0);
      v10->fields.eventReceiver = gameObject;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v10->fields.eventReceiver,
        (int32_t)gameObject,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      v18 = StringLiteral_6224/*"EndAnimation"*/;
      v10->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6224/*"EndAnimation"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.callWhenFinished, v18, v19, v20, v21, v22, v23, v24);
      return;
    }
LABEL_15:
    sub_21FFECC(this, target);
  }
}


void SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  intptr_t gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct UnityEngine_GameObject_o *summonDetailInfo; // x1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int klass; // w8
  __int64 v32; // x23
  unsigned int v33; // w22
  UnityEngine_GameObject_o *v34; // x21
  struct UnityEngine_Vector3_array *infoButtonLayouts; // x8

  if ( (byte_5934A39 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    byte_5934A39 = 1;
  }
  gameObject = sub_21FFD10(UnityEngine_GameObject___TypeInfo, 4);
  if ( !this->fields.possessionInfoButton )
    goto LABEL_27;
  v5 = (UnityEngine_Component_o *)gameObject;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.possessionInfoButton,
                           0);
  if ( !v5 )
    goto LABEL_27;
  if ( !LODWORD(v5[1].klass) )
    goto LABEL_28;
  v5[1].monitor = (void *)gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5[1].monitor, gameObject, v6, v7, v8, v9, v10, v11);
  gameObject = (intptr_t)this->fields.summonHistoryButton;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( ((__int64)v5[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_28;
  v5[1].fields.m_CachedPtr = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5[1].fields, gameObject, v12, v13, v14, v15, v16, v17);
  if ( LODWORD(v5[1].klass) <= 2 )
    goto LABEL_28;
  summonDetailInfo = this->fields.summonDetailInfo;
  v5[2].klass = (UnityEngine_Component_c *)summonDetailInfo;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5[2], (int32_t)summonDetailInfo, v18, v19, v20, v21, v22, v23);
  gameObject = (intptr_t)this->fields.summonHelpInfo;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( ((__int64)v5[1].klass & 0xFFFFFFFC) == 0 )
    goto LABEL_28;
  v5[2].monitor = (void *)gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v5[2].monitor, gameObject, v25, v26, v27, v28, v29, v30);
  klass = (int)v5[1].klass;
  if ( klass >= 1 )
  {
    v32 = 0;
    v33 = 0;
    while ( (unsigned int)v32 < klass )
    {
      v34 = (UnityEngine_GameObject_o *)*((_QWORD *)&v5[1].monitor + v32);
      if ( !v34 )
        goto LABEL_27;
      gameObject = UnityEngine_GameObject__get_activeSelf(*((UnityEngine_GameObject_o **)&v5[1].monitor + v32), 0);
      if ( (gameObject & 1) != 0 )
      {
        infoButtonLayouts = this->fields.infoButtonLayouts;
        if ( !infoButtonLayouts )
          goto LABEL_27;
        if ( v33 >= LODWORD(infoButtonLayouts->max_length) )
          break;
        GameObjectExtensions__SetLocalPosition(v34, infoButtonLayouts->m_Items[v33++], 0);
      }
      klass = (int)v5[1].klass;
      if ( (int)++v32 >= klass )
        goto LABEL_22;
    }
LABEL_28:
    sub_21FFED4(gameObject);
  }
  v33 = 0;
LABEL_22:
  gameObject = (intptr_t)this->fields.buttonLayout;
  if ( v33 == klass )
  {
    if ( gameObject )
    {
      SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)gameObject, v4);
      return;
    }
LABEL_27:
    sub_21FFECC(gameObject, v4);
  }
  if ( !gameObject )
    goto LABEL_27;
  SummonInfoLayout__UpdateDefault((SummonInfoLayout_o *)gameObject, v4);
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
  __int64 v8; // x1
  __int64 v9; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  __int64 v20; // x2
  System_String_o *v21; // x0
  __int64 v22; // x1
  __int64 v23; // x2
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v25; // x20

  if ( (byte_5934A56 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl_OnClickDetail__);
    sub_21FFC50(&WebViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_16135/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_5934A56 = 1;
  }
  v5 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_21FFC68(Method_SummonInfoControl_OnClickDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_21FFECC(v7, v8);
  id = currentSummonData->fields.id;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v8, v9);
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0);
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v19, v20);
  v21 = LocalizationManager__Get((System_String_o *)StringLiteral_16135/*"WEB_VIEW_TITLE_SUMMON"*/, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v25 = v21;
  if ( !*(&WebViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo, v22, v23);
  WebViewManager__OpenView(v25, SummonDetailUrl, closeCallbackFunc, 0);
}


void SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int64_t Time; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  BalanceConfig_c *v7; // x8
  int64_t v8; // x20
  struct BalanceConfig_StaticFields *static_fields; // x9
  int v10; // w10
  int32_t *p_AftFreeDrawNum; // x8
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // [xsp+20h] [xbp-30h]

  if ( (byte_5934A53 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5934A53 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method, v2);
  Time = NetworkManager__getTime(0);
  v7 = BalanceConfig_TypeInfo;
  v8 = Time;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v5, v6);
    v7 = BalanceConfig_TypeInfo;
  }
  static_fields = v7->static_fields;
  v10 = *(&v7->_2.cctor_finished + 1);
  if ( v8 >= static_fields->DrawNumChangeTime )
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->AftFreeDrawNum;
  }
  else
  {
    if ( !v10 )
    {
      j_il2cpp_runtime_class_init_0(v7, v5, v6);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->BefFreeDrawNum;
  }
  if ( !this )
    sub_21FFECC(Time, v5);
  SummonInfoControl__SetRequestData(this, -1, -1, -1, *p_AftFreeDrawNum, -1, -1, -1, -1, 0, 0, 0, v13);
  SummonInfoControl__ClickBase(this, 0, v12);
}


void SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct GachaRqParamData_o *requestData; // x8
  int32_t gachaTime; // w11
  struct VaildGachaInfo_o *currentSummonData; // x9
  const MethodInfo *v9; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0, 0, 0, v9);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (gachaTime = this->fields.gachaTime,
          currentSummonData = this->fields.currentSummonData,
          requestData->fields.gachaType = 5,
          requestData->fields.gachaResourceNum = gachaTime,
          !currentSummonData) )
    {
      sub_21FFECC(v3, v4);
    }
    requestData->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v5);
}


void SummonInfoControl__OnClickMultiPayExGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w5
  struct VaildGachaInfo_o *currentSummonData; // x8
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // [xsp+20h] [xbp-20h]

  v2 = this->fields.appendGachaTime * this->fields.price;
  currentSummonData = this->fields.currentSummonData;
  this->fields.payGachaPrice = v2;
  if ( !currentSummonData )
    sub_21FFECC(this, method);
  SummonInfoControl__SetRequestData(
    this,
    currentSummonData->fields.appendPayType,
    -1,
    -1,
    currentSummonData->fields.appendDrawNum,
    v2,
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
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v5)) == 0) )
  {
    sub_21FFECC(CurrentGachaEntity, v4);
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
    v7);
  SummonInfoControl__ClickBase(this, 0, v6);
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
  if ( (byte_5934A54 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_21FFC50(&Method_SummonInfoControl_OnClickSinglePayExGacha__);
    byte_5934A54 = 1;
  }
  if ( v2->fields.isOneExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_21FFECC(this, method);
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
      v5 = (_QWORD *)sub_21FFC68(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
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
    sub_21FFECC(this, label);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0);
}


void SummonInfoControl__SetAlphaSummonBtn(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *animationCallback; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  this->fields.animationCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.animationCallback,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  beforeSummonData = this->fields.beforeSummonData;
  if ( !beforeSummonData
    || (((__int64 (__fastcall *)(struct VaildGachaInfo_o *, struct VaildGachaInfo_o *, const MethodInfo *))beforeSummonData->klass->vtable._0_Equals.methodPtr)(
          beforeSummonData,
          this->fields.currentSummonData,
          beforeSummonData->klass->vtable._0_Equals.method)
      & 1) != 0 )
  {
    animationCallback = this->fields.animationCallback;
    this->fields.animationCallback = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.animationCallback, 0, v9, v10, v11, v12, v13, v14);
    ActionExtensions__Call(animationCallback, 0);
    return;
  }
  SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, (const MethodInfo *)v9);
  if ( this->fields.isDispPayOneExSummon )
  {
    oneExSummon = this->fields.oneExSummon;
    if ( !oneExSummon )
      goto LABEL_11;
    SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v19);
  }
  if ( this->fields.isDispPayMultiExSummon )
  {
    multiExSummon = this->fields.multiExSummon;
    if ( multiExSummon )
    {
      SummonInfoControl__MoveAlpha(this, multiExSummon->fields.singleSummonInfo, v19);
      return;
    }
LABEL_11:
    sub_21FFECC(v17, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_5934A51 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934A51 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, button, onOff);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)button, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !button
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)button, 0)) == 0
      || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     gameObject,
                                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_21FFECC(gameObject, v7);
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
    sub_21FFECC(this, summonInfo);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0);
}


void SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  System_String_o *v6; // x1
  const MethodInfo *v7; // x4
  struct SummonInfoControl_SummonObjInfo_o *chargeSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v10; // x4
  struct SummonInfoControl_SummonObjInfo_o *v11; // x8
  struct SummonInfoControl_SummonObjParts_o *v12; // x8
  struct UserGameEntity_o *usrData; // x9
  const MethodInfo *v14; // x4
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *v16; // x8
  const MethodInfo *v17; // x1
  char v18; // w20
  __int64 v19; // x2
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *v21; // x22
  const MethodInfo *v22; // x1
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  __int64 v25; // x2
  UILabel_o *bonusSelectTopLabel; // x21
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *v30; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  float v32; // s0
  struct SummonInfoControl_SummonObjInfo_o *v33; // x8
  struct SummonInfoControl_SummonObjParts_o *v34; // x8
  UnityEngine_GameObject_o *v35; // x0
  struct SummonInfoControl_SummonObjInfo_o *v36; // x8
  struct SummonInfoControl_SummonObjParts_o *v37; // x8
  UnityEngine_GameObject_o *v38; // x0
  const MethodInfo *v39; // x6
  struct SummonInfoControl_SummonObjInfo_o *v40; // x8
  int32_t BonusSelectLineupCount; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5934A47 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_3065/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/);
    sub_21FFC50(&StringLiteral_3066/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    sub_21FFC50(&StringLiteral_9604/*"N0"*/);
    byte_5934A47 = 1;
  }
  BonusSelectLineupCount = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v3);
  SummonInfoControl__SetSummonInfo_42360444(this, v4);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_42;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_26433/*"{0}"*/, v7);
  v11 = this->fields.chargeSummon;
  if ( !v11 )
    goto LABEL_42;
  v12 = v11->fields.multiPay;
  if ( !v12 )
    goto LABEL_42;
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(
    this,
    v12->fields.haveLabel,
    usrData->fields.chargeStone,
    (System_String_o *)StringLiteral_26381/*"{0:#,0}"*/,
    v10);
  v15 = this->fields.chargeSummon;
  if ( !v15 )
    goto LABEL_42;
  v16 = v15->fields.multiPay;
  if ( !v16 )
    goto LABEL_42;
  SummonInfoControl__SetElevenBonusInfoSingle(
    CurrentGachaEntity,
    this->fields.gachaTime,
    v16->fields.numImg,
    v16->fields.bonusInfo,
    v14);
  CurrentGachaEntity = (SummonInfoControl_o *)SummonInfoControl__get_CurrentGachaEntity(this, v17);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)GachaEntity__HasFlag((GachaEntity_o *)CurrentGachaEntity, 8, 0);
  if ( !this->fields.bonusSelectLabel )
    goto LABEL_42;
  v18 = (char)CurrentGachaEntity;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)this->fields.bonusSelectLabel,
                                                0);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v18 & 1, 0);
  CurrentGachaEntity = (SummonInfoControl_o *)this->fields.bonusSelectTopLabel;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, v18 & 1, 0);
  bonusSelectLabel = this->fields.bonusSelectLabel;
  if ( (v18 & 1) != 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v6, v19);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_3066/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, 0);
    BonusSelectLineupCount = SummonInfoControl__GetBonusSelectLineupCount(this, v22);
    v23 = (Il2CppObject *)System_Int32__ToString_76925352(
                            (int32_t)&BonusSelectLineupCount,
                            (System_String_o *)StringLiteral_9604/*"N0"*/,
                            0);
    CurrentGachaEntity = (SummonInfoControl_o *)System_String__Format(v21, v23, 0);
    if ( bonusSelectLabel )
    {
      UILabel__set_text(bonusSelectLabel, (System_String_o *)CurrentGachaEntity, 0);
      bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v24, v25);
      CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3065/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, 0);
      v6 = (System_String_o *)CurrentGachaEntity;
      goto LABEL_24;
    }
LABEL_42:
    sub_21FFECC(CurrentGachaEntity, v6);
  }
  if ( !bonusSelectLabel )
    goto LABEL_42;
  UILabel__set_text(this->fields.bonusSelectLabel, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
  v6 = **(System_String_o ***)(qword_594C0B8 + 184);
LABEL_24:
  if ( !bonusSelectTopLabel )
    goto LABEL_42;
  UILabel__set_text(bonusSelectTopLabel, v6, 0);
  v27 = this->fields.chargeSummon;
  if ( !v27 )
    goto LABEL_42;
  v28 = v27->fields.multiPay;
  if ( !v28 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v28->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)CurrentGachaEntity,
                                                0);
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, (v18 & 1) == 0, 0);
  v29 = this->fields.chargeSummon;
  if ( !v29 )
    goto LABEL_42;
  v30 = v29->fields.multiPay;
  if ( !v30 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v30->fields.numImg;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0);
  v32 = 0.0;
  if ( (v18 & 1) != 0 )
    v32 = -3.0;
  GameObjectExtensions__SetLocalPositionY(gameObject, v32, 0);
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
  GameObjectExtensions__SetLocalScale_42878188(v35, 1.0, 1.0, 0);
  v36 = this->fields.chargeSummon;
  if ( !v36 )
    goto LABEL_42;
  v37 = v36->fields.multiPay;
  if ( !v37 )
    goto LABEL_42;
  CurrentGachaEntity = (SummonInfoControl_o *)v37->fields.button;
  if ( !CurrentGachaEntity )
    goto LABEL_42;
  v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)CurrentGachaEntity, 0);
  GameObjectExtensions__SetLocalPositionY(v38, 0.0, 0);
  v40 = this->fields.chargeSummon;
  if ( !v40 )
    goto LABEL_42;
  SummonInfoControl__SetSummonGiftDisp(this, v40->fields.multiPay, 0, 1, 0, 1, v39);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetCurrentSummonInfo(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        bool isSingle,
        const MethodInfo *method)
{
  SummonInfoControl_o *v6; // x19
  UnityEngine_Object_o *singleSummonInfo; // x22
  SummonInfoControl_o **p_fields; // x23
  __int64 v9; // x2
  SummonInfoControl_o **p_multiSummonInfo; // x21
  UnityEngine_Object_o *v11; // x22
  struct UnityEngine_GameObject_o *multiSummonInfo; // t1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct UnityEngine_GameObject_o **v19; // x8
  struct UnityEngine_GameObject_o *v20; // x1

  v6 = this;
  if ( (byte_5934A4E & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934A4E = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_19;
  p_fields = (SummonInfoControl_o **)&summonObjInfo->fields;
  singleSummonInfo = (UnityEngine_Object_o *)summonObjInfo->fields.singleSummonInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjInfo, isSingle);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0, 0) )
  {
    this = *p_fields;
    if ( !*p_fields )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isSingle, 0);
  }
  multiSummonInfo = summonObjInfo->fields.multiSummonInfo;
  p_multiSummonInfo = (SummonInfoControl_o **)&summonObjInfo->fields.multiSummonInfo;
  v11 = (UnityEngine_Object_o *)multiSummonInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjInfo, v9);
  this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v11, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    this = *p_multiSummonInfo;
    if ( !*p_multiSummonInfo )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isSingle, 0);
  }
  if ( !v6 )
LABEL_19:
    sub_21FFECC(this, summonObjInfo);
  if ( isSingle )
    v19 = (struct UnityEngine_GameObject_o **)p_fields;
  else
    v19 = (struct UnityEngine_GameObject_o **)p_multiSummonInfo;
  v20 = *v19;
  v6->fields.currentBtnInfo = *v19;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v6->fields.currentBtnInfo,
    (int32_t)v20,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
  SummonInfoControl_o *v10; // x21
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  UISprite_o *numImg; // x24
  Il2CppObject *v13; // x0
  System_String_o *v14; // x0
  const MethodInfo *v15; // x3
  struct SummonInfoControl_SummonObjParts_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *v17; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjParts_o *v19; // x8
  struct SummonInfoControl_SummonObjParts_o *v20; // x8
  UnityEngine_GameObject_o *v21; // x0
  struct SummonInfoControl_SummonObjParts_o *v22; // x8
  struct SummonInfoControl_SummonObjParts_o *v23; // x8
  UISprite_o *v24; // x24
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  const MethodInfo *v27; // x3
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *v30; // x8
  UnityEngine_GameObject_o *v31; // x0
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  struct SummonInfoControl_SummonObjParts_o *v33; // x8
  struct SummonInfoControl_SummonObjParts_o *v34; // x8
  const MethodInfo *v35; // x3
  struct SummonInfoControl_SummonObjParts_o *v36; // x8
  bool v37; // w24
  struct SummonInfoControl_SummonObjParts_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  int v40; // w24
  struct SummonInfoControl_SummonObjParts_o *v41; // x8
  UnityEngine_GameObject_o *v42; // x0
  struct SummonInfoControl_SummonObjParts_o *v43; // x8
  struct SummonInfoControl_SummonObjParts_o *v44; // x8
  UISprite_o *bonusCount; // x25
  Il2CppObject *v46; // x0
  struct SummonInfoControl_SummonObjParts_o *v47; // x8
  struct SummonInfoControl_SummonObjParts_o *v48; // x8
  struct SummonInfoControl_SummonObjParts_o *v49; // x8
  struct SummonInfoControl_SummonObjParts_o *v50; // x8
  UnityEngine_GameObject_o *v51; // x0
  struct SummonInfoControl_SummonObjParts_o *v52; // x8
  SummonInfoControl_o *v53; // x0
  const MethodInfo *v54; // x3
  UISprite_o *BonusSprite; // x25
  int v56; // w27
  Il2CppObject *v57; // x0
  SummonInfoControl_o *v58; // x0
  const MethodInfo *v59; // x3
  UISprite_o *v60; // x24
  Il2CppObject *v61; // x0
  struct SummonInfoControl_SummonObjParts_o *v62; // x8
  UnityEngine_GameObject_o *v63; // x0
  struct SummonInfoControl_SummonObjParts_o *v64; // x8
  UnityEngine_GameObject_o *v65; // x0
  struct SummonInfoControl_SummonObjParts_o *v66; // x8
  System_String_o **v67; // x24
  struct SummonInfoControl_SummonObjParts_o *v68; // x8
  const MethodInfo *v69; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v71; // x4
  struct SummonInfoControl_SummonObjParts_o *v72; // x8
  int v73; // [xsp+8h] [xbp-58h] BYREF
  int32_t v74; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_5934A42 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_18281/*"btn_txt_bonus_10times_plus1"*/);
    sub_21FFC50(&StringLiteral_18255/*"btn_summon_bg2"*/);
    sub_21FFC50(&StringLiteral_18254/*"btn_summon_bg1"*/);
    sub_21FFC50(&StringLiteral_18282/*"btn_txt_bonus_1plus1"*/);
    sub_21FFC50(&StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/);
    sub_21FFC50(&StringLiteral_18352/*"btn_txt_summon{0:00}"*/);
    sub_21FFC50(&StringLiteral_18283/*"btn_txt_bonus_count_{0}"*/);
    sub_21FFC50(&StringLiteral_23422/*"num1"*/);
    sub_21FFC50(&StringLiteral_18256/*"btn_summon_bg3"*/);
    sub_21FFC50(&StringLiteral_23423/*"num1_glow"*/);
    this = (SummonInfoControl_o *)sub_21FFC50(&StringLiteral_18284/*"btn_txt_bonus_{0}"*/);
    byte_5934A42 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_103;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_103;
  numImg = onePay->fields.numImg;
  v74 = oneCount;
  v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v74);
  v14 = System_String__Format((System_String_o *)StringLiteral_18352/*"btn_txt_summon{0:00}"*/, v13, 0);
  SummonInfoControl__SetGachaSprite(v10, numImg, v14, v15);
  v16 = summonObjInfo->fields.onePay;
  if ( !v16 )
    goto LABEL_103;
  this = (SummonInfoControl_o *)v16->fields.numImg;
  if ( !this )
    goto LABEL_103;
  this = (SummonInfoControl_o *)((__int64 (__fastcall *)(SummonInfoControl_o *, void *))this->klass[2]._1.parent)(
                                  this,
                                  this->klass[2]._1.generic_class);
  v17 = summonObjInfo->fields.onePay;
  if ( !v17 )
    goto LABEL_103;
  this = (SummonInfoControl_o *)v17->fields.bonusInfo;
  if ( !this )
    goto LABEL_103;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScaleX(gameObject, 1.0, 0);
  if ( !ent )
    goto LABEL_103;
  v19 = summonObjInfo->fields.onePay;
  if ( ent->fields.extraGroupId1 )
  {
    if ( !v19 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v19->fields.bonusCount;
    if ( !this )
      goto LABEL_103;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    v20 = summonObjInfo->fields.onePay;
    if ( !v20 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v20->fields.bonusCount;
    if ( !this )
      goto LABEL_103;
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionY(v21, 30.0, 0);
    v22 = summonObjInfo->fields.onePay;
    if ( !v22 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v22->fields.bonusInfo;
    if ( !this )
      goto LABEL_103;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_103;
    this = (SummonInfoControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    if ( !this )
      goto LABEL_103;
    this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    ent->fields.extraGroupId1,
                                    0);
    v23 = summonObjInfo->fields.onePay;
    if ( (_DWORD)this == 9 )
    {
      if ( v23 )
      {
        v24 = v23->fields.numImg;
        v74 = 2;
        v25 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v74);
        v26 = System_String__Format((System_String_o *)StringLiteral_18352/*"btn_txt_summon{0:00}"*/, v25, 0);
        SummonInfoControl__SetGachaSprite(v10, v24, v26, v27);
        v28 = summonObjInfo->fields.onePay;
        if ( v28 )
        {
          this = (SummonInfoControl_o *)v28->fields.bonusCount;
          if ( this )
          {
            this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
              v29 = summonObjInfo->fields.onePay;
              if ( v29 )
              {
                this = (SummonInfoControl_o *)v29->fields.bonusInfo;
                if ( this )
                {
                  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18282/*"btn_txt_bonus_1plus1"*/, 0);
                  v30 = summonObjInfo->fields.onePay;
                  if ( v30 )
                  {
                    this = (SummonInfoControl_o *)v30->fields.bonusInfo;
                    if ( this )
                    {
                      v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                      GameObjectExtensions__SetLocalPosition_42876120(v31, 0.0, -35.0, 0);
                      v32 = summonObjInfo->fields.onePay;
                      if ( v32 )
                      {
                        this = (SummonInfoControl_o *)v32->fields.bonusInfo;
                        if ( this )
                        {
                          UIWidget__SetDimensions((UIWidget_o *)this, 208, 38, 0);
                          v33 = summonObjInfo->fields.onePay;
                          if ( v33 )
                          {
                            this = (SummonInfoControl_o *)v33->fields.buttonImg;
                            if ( this )
                            {
                              UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18255/*"btn_summon_bg2"*/, 0);
                              v34 = summonObjInfo->fields.onePay;
                              if ( v34 )
                              {
                                this = (SummonInfoControl_o *)v34->fields.button;
                                if ( this )
                                {
                                  UIButton__set_normalSprite(
                                    (UIButton_o *)this,
                                    (System_String_o *)StringLiteral_18255/*"btn_summon_bg2"*/,
                                    0);
                                  if ( ticket )
                                  {
LABEL_41:
                                    v37 = 1;
                                    goto LABEL_97;
                                  }
                                  v36 = summonObjInfo->fields.onePay;
                                  if ( v36 )
                                  {
                                    this = (SummonInfoControl_o *)v36->fields.remaining;
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
      }
LABEL_103:
      sub_21FFECC(this, ent);
    }
    if ( !v23 )
      goto LABEL_103;
    v40 = (int)this;
    this = (SummonInfoControl_o *)v23->fields.bonusInfo;
    if ( !this )
      goto LABEL_103;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18281/*"btn_txt_bonus_10times_plus1"*/, 0);
    v41 = summonObjInfo->fields.onePay;
    if ( !v41 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v41->fields.bonusInfo;
    if ( !this )
      goto LABEL_103;
    v42 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPosition_42876120(v42, 0.0, -34.0, 0);
    v43 = summonObjInfo->fields.onePay;
    if ( !v43 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v43->fields.bonusInfo;
    if ( !this )
      goto LABEL_103;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0);
    v44 = summonObjInfo->fields.onePay;
    if ( ticket )
    {
      if ( !v44 )
        goto LABEL_103;
    }
    else
    {
      if ( !v44 )
        goto LABEL_103;
      this = (SummonInfoControl_o *)v44->fields.singleDigit;
      if ( !this )
        goto LABEL_103;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_103;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        goto LABEL_71;
      v47 = summonObjInfo->fields.onePay;
      if ( !v47 )
        goto LABEL_103;
      this = (SummonInfoControl_o *)v47->fields.doubleDigits;
      if ( !this )
        goto LABEL_103;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_103;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
LABEL_71:
        v48 = summonObjInfo->fields.onePay;
        if ( !v48 )
          goto LABEL_103;
        this = (SummonInfoControl_o *)v48->fields.bonusCount;
        if ( !this )
          goto LABEL_103;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_103;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
        v49 = summonObjInfo->fields.onePay;
        if ( !v49 )
          goto LABEL_103;
        this = (SummonInfoControl_o *)v49->fields.remaining;
        if ( !this )
          goto LABEL_103;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_103;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
        v50 = summonObjInfo->fields.onePay;
        if ( !v50 )
          goto LABEL_103;
        this = (SummonInfoControl_o *)v50->fields.bonusInfo;
        if ( !this )
          goto LABEL_103;
        v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v51, -36.0, 0);
        v52 = summonObjInfo->fields.onePay;
        if ( !v52 )
          goto LABEL_103;
        this = (SummonInfoControl_o *)v52->fields.remaining;
        if ( !this )
          goto LABEL_103;
        v53 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        v53,
                        (UnityEngine_GameObject_o *)v53,
                        (System_String_o *)StringLiteral_23422/*"num1"*/,
                        v54);
        v56 = 9 - v40;
        v74 = 9 - v40;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v74);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_18284/*"btn_txt_bonus_{0}"*/, v57, 0);
        if ( !BonusSprite )
          goto LABEL_103;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0);
        v58 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0);
        v60 = SummonInfoControl__GetBonusSprite(
                v58,
                (UnityEngine_GameObject_o *)v58,
                (System_String_o *)StringLiteral_23423/*"num1_glow"*/,
                v59);
        v73 = v56;
        v61 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v73);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/, v61, 0);
        if ( !v60 )
          goto LABEL_103;
        UISprite__set_spriteName(v60, (System_String_o *)this, 0);
        v62 = summonObjInfo->fields.onePay;
        if ( !v62 )
          goto LABEL_103;
        this = (SummonInfoControl_o *)v62->fields.bonusInfo;
        if ( !this )
          goto LABEL_103;
        v63 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v63, 0.825, 0);
        v64 = summonObjInfo->fields.onePay;
        if ( !v64 )
          goto LABEL_103;
        this = (SummonInfoControl_o *)v64->fields.bonusInfo;
        if ( !this )
          goto LABEL_103;
        v65 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v65, -29.7, 0);
        goto LABEL_88;
      }
      v72 = summonObjInfo->fields.onePay;
      if ( !v72 )
        goto LABEL_103;
      this = (SummonInfoControl_o *)v72->fields.remaining;
      if ( !this )
        goto LABEL_103;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_103;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      v44 = summonObjInfo->fields.onePay;
      if ( !v44 )
        goto LABEL_103;
    }
    bonusCount = v44->fields.bonusCount;
    v74 = 9 - v40;
    v46 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v74);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_18283/*"btn_txt_bonus_count_{0}"*/, v46, 0);
    if ( !bonusCount )
      goto LABEL_103;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0);
LABEL_88:
    v66 = summonObjInfo->fields.onePay;
    if ( !v66 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v66->fields.buttonImg;
    v67 = (System_String_o **)(ticket ? &StringLiteral_18256/*"btn_summon_bg3"*/ : &StringLiteral_18254/*"btn_summon_bg1"*/);
    if ( !this )
      goto LABEL_103;
    UISprite__set_spriteName((UISprite_o *)this, *v67, 0);
    v68 = summonObjInfo->fields.onePay;
    if ( !v68 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v68->fields.button;
    if ( !this )
      goto LABEL_103;
    UIButton__set_normalSprite((UIButton_o *)this, *v67, 0);
    goto LABEL_96;
  }
  if ( !v19 )
    goto LABEL_103;
  this = (SummonInfoControl_o *)v19->fields.bonusCount;
  if ( !this )
    goto LABEL_103;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v38 = summonObjInfo->fields.onePay;
  if ( !v38 )
    goto LABEL_103;
  this = (SummonInfoControl_o *)v38->fields.bonusInfo;
  if ( !this )
    goto LABEL_103;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_103;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v37 = 0;
  if ( !ticket )
  {
    v39 = summonObjInfo->fields.onePay;
    if ( !v39 )
      goto LABEL_103;
    this = (SummonInfoControl_o *)v39->fields.remaining;
    if ( !this )
      goto LABEL_103;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_103;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
LABEL_96:
    v37 = 0;
  }
LABEL_97:
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v35);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_103;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v69);
  SummonInfoControl__SetOneTimeFreeButton(v10, summonObjInfo->fields.onePay, oneCount, v37, v71);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetElevenBonusInfoSingle(
        SummonInfoControl_o *this,
        int32_t multiCount,
        UISprite_o *multiNumImg,
        UISprite_o *multiBonusInfo,
        const MethodInfo *method)
{
  int32_t v8; // w21
  Il2CppObject *v9; // x0
  System_String_o *gameObject; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5934A43 & 1) == 0 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&StringLiteral_18280/*"btn_txt_bonus_10plus1"*/);
    sub_21FFC50(&StringLiteral_18352/*"btn_txt_summon{0:00}"*/);
    byte_5934A43 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, *(_QWORD *)&multiCount, multiNumImg);
  v8 = System_Math__Min_76940292(multiCount, 11, 0);
  v12 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  gameObject = System_String__Format((System_String_o *)StringLiteral_18352/*"btn_txt_summon{0:00}"*/, v9, 0);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0)) == 0 )
  {
    sub_21FFECC(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v8 > 10, 0);
  if ( v8 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_18280/*"btn_txt_bonus_10plus1"*/, 0);
}


void SummonInfoControl__SetEnableSummonBtn(SummonInfoControl_o *this, bool isEnable, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct VaildGachaInfo_o *currentSummonData; // x1
  _BOOL8 isDispSummonListDialog; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *v15; // x21
  struct VaildGachaInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  bool v18; // w1
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.beforeSummonData,
    (int32_t)currentSummonData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v13);
  currentBtnInfo = this->fields.summonDetailInfo;
  if ( !currentBtnInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonHistoryButton;
  if ( !currentBtnInfo )
    goto LABEL_26;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  if ( !currentBtnInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.possessionInfoButton;
  if ( !currentBtnInfo )
    goto LABEL_26;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  v15 = currentBtnInfo;
  if ( isEnable )
  {
    currentBtnInfo = (UnityEngine_GameObject_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(this, v14);
    isDispSummonListDialog = currentBtnInfo != 0;
  }
  else
  {
    isDispSummonListDialog = 0;
  }
  if ( !v15 )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(v15, isDispSummonListDialog, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton;
  if ( !currentBtnInfo )
    goto LABEL_26;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  if ( isEnable )
  {
    v16 = this->fields.currentSummonData;
    if ( !v16 )
      goto LABEL_26;
    isDispSummonListDialog = v16->fields.isDispSummonListDialog;
  }
  else
  {
    isDispSummonListDialog = 0;
  }
  if ( !currentBtnInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isDispSummonListDialog, 0);
  oneExSummon = this->fields.oneExSummon;
  if ( !this->fields.isDispPayOneExSummon )
  {
    if ( oneExSummon )
    {
      currentBtnInfo = oneExSummon->fields.singleSummonInfo;
      if ( currentBtnInfo )
      {
        v18 = 0;
        goto LABEL_23;
      }
    }
LABEL_26:
    sub_21FFECC(currentBtnInfo, isDispSummonListDialog);
  }
  if ( !oneExSummon )
    goto LABEL_26;
  currentBtnInfo = oneExSummon->fields.singleSummonInfo;
  if ( !currentBtnInfo )
    goto LABEL_26;
  v18 = isEnable;
LABEL_23:
  UnityEngine_GameObject__SetActive(currentBtnInfo, v18, 0);
  multiExSummon = this->fields.multiExSummon;
  if ( !multiExSummon )
    goto LABEL_26;
  currentBtnInfo = multiExSummon->fields.singleSummonInfo;
  if ( !currentBtnInfo )
    goto LABEL_26;
  UnityEngine_GameObject__SetActive(currentBtnInfo, this->fields.isDispPayMultiExSummon && isEnable, 0);
}


void SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v4; // x1
  __int64 v5; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  char v8; // w20
  __int64 v9; // x1
  __int64 v10; // x2
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v12; // x22
  Il2CppObject *v13; // x23
  Il2CppObject *v14; // x0
  __int64 v15; // x2
  int64_t Time; // x0
  __int64 v17; // x2
  BalanceConfig_c *v18; // x8
  int64_t v19; // x20
  int64_t DrawNumChangeTime; // x22
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  __int64 v23; // x2
  int64_t v24; // x8
  struct BalanceConfig_StaticFields *static_fields; // x9
  int v26; // w10
  int32_t *p_AftFreeDrawNum; // x8
  int32_t v28; // [xsp+8h] [xbp-48h] BYREF
  int32_t v29; // [xsp+Ch] [xbp-44h] BYREF
  int32_t maxNum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5934A3B & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UserGachaMaster_TypeInfo);
    sub_21FFC50(&StringLiteral_6825/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_1198/*"0"*/);
    byte_5934A3B = 1;
  }
  *(_QWORD *)maxNum = 0;
  SummonInfoControl__InitSummonBtnDisp(this, method);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_38;
  id = currentSummonData->fields.id;
  if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v4, v5);
  gameObject = (UnityEngine_GameObject_o *)UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(
                                             id,
                                             &maxNum[1],
                                             maxNum,
                                             0);
  if ( !this->fields.freeSummonCampaignLabel )
    goto LABEL_38;
  v8 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel, 0);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, v8 & 1, 0);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v8 & 1) != 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v9, v10);
    v12 = LocalizationManager__Get((System_String_o *)StringLiteral_6825/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0);
    v29 = maxNum[1];
    v13 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v29);
    v28 = maxNum[0];
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_75484576(v12, v13, v14, 0);
    v4 = (System_String_o *)gameObject;
  }
  else
  {
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !freeSummonCampaignLabel )
    goto LABEL_38;
  UILabel__set_text(freeSummonCampaignLabel, v4, 0);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v8 & 1) == 0 && !this->fields.isFree )
    goto LABEL_32;
  gameObject = this->fields.freeSummonCampaignNeedInfo;
  if ( !gameObject )
    goto LABEL_38;
  gameObject = UnityEngine_GameObject__get_gameObject(gameObject, 0);
  if ( !gameObject )
    goto LABEL_38;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.freeSummonCampaignNeedNum;
  if ( !gameObject )
    goto LABEL_38;
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1198/*"0"*/, 0);
  if ( !this->fields.isFree )
  {
LABEL_32:
    SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v4);
    return;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v15);
  Time = NetworkManager__getTime(0);
  v18 = BalanceConfig_TypeInfo;
  v19 = Time;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v4, v17);
    v18 = BalanceConfig_TypeInfo;
  }
  gameObject = this->fields.freeTxtInfoObj;
  if ( !gameObject
    || (DrawNumChangeTime = v18->static_fields->DrawNumChangeTime,
        UnityEngine_GameObject__SetActive(gameObject, v19 < DrawNumChangeTime, 0),
        (gameObject = this->fields.freeTenInfoObj) == 0) )
  {
LABEL_38:
    sub_21FFECC(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, v19 >= DrawNumChangeTime, 0);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v21);
  this->fields.price = 0;
  v24 = NetworkManager__getTime(0);
  static_fields = BalanceConfig_TypeInfo->static_fields;
  v26 = *(&BalanceConfig_TypeInfo->_2.cctor_finished + 1);
  if ( v24 >= static_fields->DrawNumChangeTime )
  {
    if ( !v26 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22, v23);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->AftFreeDrawNum;
  }
  else
  {
    if ( !v26 )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v22, v23);
      static_fields = BalanceConfig_TypeInfo->static_fields;
    }
    p_AftFreeDrawNum = &static_fields->BefFreeDrawNum;
  }
  this->fields.gachaTime = *p_AftFreeDrawNum;
}


void SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_21FFECC(this, 0);
  UISprite__set_atlas(sprite, this->fields.gachaAtlas, 0);
  UISprite__set_spriteName(sprite, spriteName, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetHelpBtnDisp(SummonInfoControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_Component_o *summonHelpInfo; // x0

  summonHelpInfo = (UnityEngine_Component_o *)this->fields.summonHelpInfo;
  if ( !summonHelpInfo
    || (summonHelpInfo = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(summonHelpInfo, 0)) == 0 )
  {
    sub_21FFECC(summonHelpInfo, isDisp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)summonHelpInfo, isDisp, 0);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetMultiTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        SummonInfoControl_SummonObjInfo_o *summonInfo,
        int32_t friendPoint,
        const MethodInfo *method)
{
  int v11; // w8
  void *Master_object; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t price; // w24
  int32_t maxDrawNum; // w23
  bool v17; // w22
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8
  const MethodInfo *v19; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t idx; // w9
  int32_t type; // w10
  SummonInfoControl_o *v23; // x0
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  const MethodInfo *v34; // x3
  struct VaildGachaInfo_o *v35; // x8
  int32_t appendPayType; // w8
  System_String_o **v37; // x8
  SummonInfoControl_o *v38; // x0
  struct SummonInfoControl_SummonObjInfo_o *v39; // x9
  struct SummonInfoControl_SummonObjParts_o *v40; // x9
  const MethodInfo *v41; // x3
  struct SummonInfoControl_SummonObjInfo_o *v42; // x8
  struct SummonInfoControl_SummonObjParts_o *v43; // x8
  __int64 v44; // x2
  NumSpriteComponent_o *multiExNumSprite; // x20
  int64_t appendGachaTime; // x21
  struct SummonInfoControl___c_StaticFields *static_fields; // x8
  System_Action_object__object__o *_9__171_0; // x23
  System_String_o *v49; // x22
  Il2CppObject *v50; // x24
  struct SummonInfoControl___c_StaticFields *v51; // x0
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
  __int64 v58; // x1
  __int64 v59; // x2
  UISprite_o *multiExSummonSprite; // x20
  UnityEngine_GameObject_o *v61; // x0
  float v62; // s0
  const MethodInfo *v63; // x4
  UnityEngine_GameObject_o *v64; // x0
  float v65; // s0
  UnityEngine_GameObject_o *v66; // x0
  float v67; // s0
  struct SummonInfoControl_SummonObjInfo_o *v68; // x8
  struct SummonInfoControl_SummonObjParts_o *v69; // x8
  UISprite_o *v70; // [xsp+8h] [xbp-58h] BYREF
  UISprite_o *sprite; // [xsp+10h] [xbp-50h] BYREF
  GachaAppendEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5934A46 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_UISprite__string__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&SummonInfoControl_TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl___c__SetMultiTimeExButton_b__171_0__);
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    sub_21FFC50(&StringLiteral_18255/*"btn_summon_bg2"*/);
    sub_21FFC50(&StringLiteral_21258/*"img_bg_friendpointuse"*/);
    sub_21FFC50(&StringLiteral_18347/*"btn_txt_summon"*/);
    sub_21FFC50(&StringLiteral_18349/*"btn_txt_summon_num_0"*/);
    sub_21FFC50(&StringLiteral_26383/*"{0:#,0}  "*/);
    sub_21FFC50(&StringLiteral_21270/*"img_bg_saintquartzuse"*/);
    byte_5934A46 = 1;
  }
  entity = 0;
  v11 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  v70 = 0;
  sprite = 0;
  if ( !v11 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gachaEnt, isTicket);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaAppendMaster___);
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
    if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v14);
    Master_object = (void *)System_Math__Min_76940292(friendPoint / price, maxDrawNum, 0);
    this->fields.appendGachaTime = (int)Master_object;
    v17 = (int)Master_object > 10;
  }
  else
  {
    v17 = 0;
  }
  multiExSummon = this->fields.multiExSummon;
  if ( !multiExSummon )
    goto LABEL_75;
  Master_object = multiExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v17, 0);
  this->fields.isDispPayMultiExSummon = v17;
  if ( v17 )
  {
    if ( entity )
    {
      currentSummonData = this->fields.currentSummonData;
      if ( currentSummonData )
      {
        idx = entity->fields.idx;
        type = entity->fields.type;
        currentSummonData->fields.appendDrawNum = this->fields.appendGachaTime;
        currentSummonData->fields.appendPayType = type;
        currentSummonData->fields.appendShopIdIndex = idx;
        if ( isTicket )
          summonInfo = this->fields.ticketSummon;
        v23 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
        if ( !*(&SummonInfoControl_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo, v13, v19);
          v23 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
        }
        SummonInfoControl__SetButtonLocalPosX(
          v23,
          summonInfo,
          *((float *)&v23->fields.possessionInfoButton->monitor + 1),
          *(float *)&v23->fields.possessionInfoButton->fields.m_CachedPtr,
          v19);
        v24 = this->fields.multiExSummon;
        if ( v24 )
        {
          Master_object = v24->fields.singleSummonInfo;
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
            v25 = this->fields.multiExSummon;
            if ( v25 )
            {
              single = v25->fields.single;
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
                  v28 = this->fields.multiExSummon;
                  if ( v28 )
                  {
                    v29 = v28->fields.single;
                    if ( v29 )
                    {
                      Master_object = v29->fields.bonusInfo;
                      if ( Master_object )
                      {
                        v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                        GameObjectExtensions__SetLocalPositionX(v30, 1.0, 0);
                        v31 = this->fields.multiExSummon;
                        if ( v31 )
                        {
                          v32 = v31->fields.single;
                          if ( v32 )
                          {
                            Master_object = v32->fields.bonusInfo;
                            if ( Master_object )
                            {
                              v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                              GameObjectExtensions__SetLocalScaleX(v33, 1.0, 0);
                              v35 = this->fields.currentSummonData;
                              if ( v35 )
                              {
                                appendPayType = v35->fields.appendPayType;
                                if ( appendPayType == 1 )
                                  v37 = (System_String_o **)&StringLiteral_21270/*"img_bg_saintquartzuse"*/;
                                else
                                  v37 = appendPayType == 3
                                      ? (System_String_o **)&StringLiteral_21258/*"img_bg_friendpointuse"*/
                                      : *(System_String_o ***)(qword_594C0B8 + 184);
                                v39 = this->fields.multiExSummon;
                                if ( v39 )
                                {
                                  v40 = v39->fields.single;
                                  if ( v40 )
                                  {
                                    SummonInfoControl__SetGachaSprite(this, v40->fields.infoBgImg, *v37, v34);
                                    v42 = this->fields.multiExSummon;
                                    if ( v42 )
                                    {
                                      v43 = v42->fields.single;
                                      if ( v43 )
                                      {
                                        SummonInfoControl__SetGachaSprite(
                                          this,
                                          v43->fields.buttonImg,
                                          (System_String_o *)StringLiteral_18255/*"btn_summon_bg2"*/,
                                          v41);
                                        multiExNumSprite = this->fields.multiExNumSprite;
                                        appendGachaTime = this->fields.appendGachaTime;
                                        Master_object = SummonInfoControl___c_TypeInfo;
                                        if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
                                        {
                                          j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v13, v44);
                                          Master_object = SummonInfoControl___c_TypeInfo;
                                        }
                                        static_fields = (struct SummonInfoControl___c_StaticFields *)*((_QWORD *)Master_object + 23);
                                        _9__171_0 = (System_Action_object__object__o *)static_fields->__9__171_0;
                                        v49 = (System_String_o *)StringLiteral_18349/*"btn_txt_summon_num_0"*/;
                                        if ( !_9__171_0 )
                                        {
                                          if ( !*((_DWORD *)Master_object + 57) )
                                          {
                                            j_il2cpp_runtime_class_init_0(Master_object, v13, v44);
                                            static_fields = SummonInfoControl___c_TypeInfo->static_fields;
                                          }
                                          v50 = (Il2CppObject *)static_fields->__9;
                                          _9__171_0 = (System_Action_object__object__o *)sub_21FFEBC(System_Action_UISprite__string__TypeInfo);
                                          System_Action_object__object____ctor(
                                            _9__171_0,
                                            v50,
                                            Method_SummonInfoControl___c__SetMultiTimeExButton_b__171_0__,
                                            0);
                                          v51 = SummonInfoControl___c_TypeInfo->static_fields;
                                          v51->__9__171_0 = (struct System_Action_UISprite__string__o *)_9__171_0;
                                          sub_21FFBF4(
                                            (MissionNaviTransitionBoardItem_o *)&v51->__9__171_0,
                                            (int32_t)_9__171_0,
                                            v52,
                                            v53,
                                            v54,
                                            v55,
                                            v56,
                                            v57);
                                        }
                                        if ( multiExNumSprite )
                                        {
                                          NumSpriteComponent__SetSprite(
                                            multiExNumSprite,
                                            appendGachaTime,
                                            v49,
                                            (System_Action_UISprite__string__o *)_9__171_0,
                                            0,
                                            0);
                                          multiExSummonSprite = this->fields.multiExSummonSprite;
                                          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v58, v59);
                                          AtlasManager__SetEventSprite(
                                            multiExSummonSprite,
                                            (System_String_o *)StringLiteral_18347/*"btn_txt_summon"*/,
                                            0);
                                          Master_object = this->fields.multiExSummonSprite;
                                          if ( Master_object )
                                          {
                                            v61 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_object,
                                                    0);
                                            v62 = 25.0;
                                            if ( this->fields.appendGachaTime > 99 )
                                              v62 = 38.0;
                                            GameObjectExtensions__SetLocalPositionX(v61, v62, 0);
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
                                                                          &v70,
                                                                          1,
                                                                          0);
                                                if ( ((unsigned __int8)Master_object & 1) != 0 )
                                                {
                                                  Master_object = sprite;
                                                  if ( !sprite )
                                                    goto LABEL_75;
                                                  v64 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)sprite,
                                                          0);
                                                  v65 = -22.0;
                                                  if ( this->fields.appendGachaTime <= 99 )
                                                    v65 = -34.0;
                                                  GameObjectExtensions__SetLocalPositionX(v64, v65, 0);
                                                  Master_object = v70;
                                                  if ( !v70 )
                                                    goto LABEL_75;
                                                  v66 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)v70,
                                                          0);
                                                  v67 = -57.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v67 = -50.0;
                                                  GameObjectExtensions__SetLocalPositionX(v66, v67, 0);
                                                }
                                              }
                                              v68 = this->fields.multiExSummon;
                                              if ( v68 )
                                              {
                                                v69 = v68->fields.single;
                                                if ( v69 )
                                                {
                                                  SummonInfoControl__SetPriceText(
                                                    this,
                                                    v69->fields.infoLabel,
                                                    this->fields.appendGachaTime * this->fields.price,
                                                    (System_String_o *)StringLiteral_26383/*"{0:#,0}  "*/,
                                                    v63);
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
    sub_21FFECC(Master_object, v13);
  }
  if ( isTicket )
    summonInfo = this->fields.ticketSummon;
  v38 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( !*(&SummonInfoControl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo, v13, v19);
    v38 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v38,
    summonInfo,
    *((float *)&v38->fields.possessionInfoButton->klass + 1),
    *(float *)&v38->fields.possessionInfoButton->monitor,
    v19);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetOneTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        const MethodInfo *method)
{
  int v7; // w8
  GachaAppendMaster_o *Master_object; // x0
  __int64 v9; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v11; // w21
  int32_t idx; // w11
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x10
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  __int64 v17; // x8
  SummonInfoControl_c *v18; // x0
  SummonInfoControl_SummonObjInfo_o *v19; // x20
  int v20; // w8
  struct SummonInfoControl_SummonObjInfo_o *v21; // x8
  struct SummonInfoControl_SummonObjInfo_o *v22; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *v26; // x8
  UnityEngine_GameObject_o *v27; // x0
  struct SummonInfoControl_SummonObjInfo_o *v28; // x8
  struct SummonInfoControl_SummonObjParts_o *v29; // x8
  UnityEngine_GameObject_o *v30; // x0
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  UnityEngine_GameObject_o *v33; // x0
  struct SummonInfoControl_SummonObjInfo_o *v34; // x8
  struct SummonInfoControl_SummonObjParts_o *v35; // x8
  UnityEngine_GameObject_o *v36; // x0
  __int64 v37; // x2
  struct SummonInfoControl_SummonObjInfo_o *v38; // x8
  struct SummonInfoControl_SummonObjParts_o *v39; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v41; // x8
  struct SummonInfoControl_SummonObjParts_o *v42; // x8
  struct SummonInfoControl_SummonObjInfo_o *v43; // x8
  struct SummonInfoControl_SummonObjParts_o *v44; // x8
  struct SummonInfoControl_SummonObjInfo_o *v45; // x8
  struct SummonInfoControl_SummonObjParts_o *v46; // x8
  __int64 v47; // x2
  const MethodInfo *v48; // x3
  struct SummonInfoControl_SummonObjInfo_o *v49; // x8
  struct SummonInfoControl_SummonObjParts_o *v50; // x8
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v53; // x8
  struct SummonInfoControl_SummonObjParts_o *v54; // x8
  float v55; // s0 OVERLAPPED
  float v56; // s3
  float v57; // s1
  float v58; // s2
  struct SummonInfoControl_SummonObjInfo_o *v59; // x8
  struct SummonInfoControl_SummonObjParts_o *v60; // x8
  float v61; // s0 OVERLAPPED
  float v62; // s3
  float v63; // s1
  float v64; // s2
  struct SummonInfoControl_SummonObjInfo_o *v65; // x8
  struct SummonInfoControl_SummonObjParts_o *v66; // x8
  const MethodInfo *v67; // x6
  struct SummonInfoControl_SummonObjInfo_o *v68; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5934A44 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&SummonInfoControl_TypeInfo);
    sub_21FFC50(&StringLiteral_18257/*"btn_summon_bg5"*/);
    sub_21FFC50(&StringLiteral_18329/*"btn_txt_reset"*/);
    sub_21FFC50(&StringLiteral_21271/*"img_bg_saintquartzuse3"*/);
    sub_21FFC50(&StringLiteral_25054/*"summon_txt_done"*/);
    sub_21FFC50(&StringLiteral_18348/*"btn_txt_summon01"*/);
    sub_21FFC50(&StringLiteral_18320/*"btn_txt_only_1"*/);
    sub_21FFC50(&StringLiteral_1248/*"1"*/);
    byte_5934A44 = 1;
  }
  v7 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  appendEnt = 0;
  if ( !v7 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, gachaEnt, isTicket);
  Master_object = (GachaAppendMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_object )
    goto LABEL_75;
  Master_object = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(Master_object, gachaEnt, &appendEnt, 0);
  currentSummonData = this->fields.currentSummonData;
  v11 = (int)Master_object;
  if ( (_DWORD)Master_object )
  {
    if ( !appendEnt || !currentSummonData )
      goto LABEL_75;
    idx = appendEnt->fields.idx;
    drawNum = appendEnt->fields.drawNum;
    currentSummonData->fields.appendPayType = appendEnt->fields.type;
    currentSummonData->fields.appendShopIdIndex = idx;
  }
  else
  {
    if ( !currentSummonData )
      goto LABEL_75;
    drawNum = 0;
    currentSummonData->fields.appendShopIdIndex = 0;
    currentSummonData->fields.appendPayType = 7;
  }
  oneExSummon = this->fields.oneExSummon;
  currentSummonData->fields.appendDrawNum = drawNum;
  if ( !oneExSummon )
    goto LABEL_75;
  Master_object = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v11 != 0, 0);
  v17 = 48;
  v18 = SummonInfoControl_TypeInfo;
  if ( isTicket )
    v17 = 56;
  this->fields.isDispPayOneExSummon = v11 != 0;
  v19 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v17);
  v20 = *(&v18->_2.cctor_finished + 1);
  this->fields.isOneExUsePossible = v11 == 2;
  if ( v11 )
  {
    if ( !v20 )
    {
      j_il2cpp_runtime_class_init_0(v18, v15, v16);
      v18 = SummonInfoControl_TypeInfo;
    }
    SummonInfoControl__SetButtonLocalPosX(
      (SummonInfoControl_o *)v18,
      v19,
      v18->static_fields->APD_SUMMON_BTN2_X,
      v18->static_fields->APD_SUMMON_BTN3_X,
      v16);
    v21 = this->fields.oneExSummon;
    if ( v21 )
    {
      Master_object = (GachaAppendMaster_o *)v21->fields.singleSummonInfo;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        v22 = this->fields.oneExSummon;
        if ( v22 )
        {
          single = v22->fields.single;
          if ( single )
          {
            Master_object = (GachaAppendMaster_o *)single->fields.button;
            if ( Master_object )
            {
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
              GameObjectExtensions__SetLocalPositionX(
                gameObject,
                SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X,
                0);
              v25 = this->fields.oneExSummon;
              if ( v25 )
              {
                v26 = v25->fields.single;
                if ( v26 )
                {
                  Master_object = (GachaAppendMaster_o *)v26->fields.bonusCount;
                  if ( Master_object )
                  {
                    v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                    GameObjectExtensions__SetLocalPosition_42876224(v27, 0.0, 34.0, 0.0, 0);
                    v28 = this->fields.oneExSummon;
                    if ( v28 )
                    {
                      v29 = v28->fields.single;
                      if ( v29 )
                      {
                        Master_object = (GachaAppendMaster_o *)v29->fields.bonusInfo;
                        if ( Master_object )
                        {
                          v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                          GameObjectExtensions__SetLocalPositionX(v30, 1.0, 0);
                          v31 = this->fields.oneExSummon;
                          if ( v31 )
                          {
                            v32 = v31->fields.single;
                            if ( v32 )
                            {
                              Master_object = (GachaAppendMaster_o *)v32->fields.bonusCount;
                              if ( Master_object )
                              {
                                v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                                GameObjectExtensions__SetLocalScaleX(v33, 1.0, 0);
                                v34 = this->fields.oneExSummon;
                                if ( v34 )
                                {
                                  v35 = v34->fields.single;
                                  if ( v35 )
                                  {
                                    Master_object = (GachaAppendMaster_o *)v35->fields.bonusInfo;
                                    if ( Master_object )
                                    {
                                      v36 = UnityEngine_Component__get_gameObject(
                                              (UnityEngine_Component_o *)Master_object,
                                              0);
                                      GameObjectExtensions__SetLocalScaleX(v36, 1.0, 0);
                                      v38 = this->fields.oneExSummon;
                                      if ( v38 )
                                      {
                                        v39 = v38->fields.single;
                                        if ( v39 )
                                        {
                                          buttonImg = v39->fields.buttonImg;
                                          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v9, v37);
                                          Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                   buttonImg,
                                                                                   (System_String_o *)StringLiteral_18257/*"btn_summon_bg5"*/,
                                                                                   0);
                                          v41 = this->fields.oneExSummon;
                                          if ( v41 )
                                          {
                                            v42 = v41->fields.single;
                                            if ( v42 )
                                            {
                                              Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                       v42->fields.bonusCount,
                                                                                       (System_String_o *)StringLiteral_18329/*"btn_txt_reset"*/,
                                                                                       0);
                                              v43 = this->fields.oneExSummon;
                                              if ( v43 )
                                              {
                                                v44 = v43->fields.single;
                                                if ( v44 )
                                                {
                                                  AtlasManager__SetEventSprite(
                                                    v44->fields.bonusInfo,
                                                    (System_String_o *)StringLiteral_18320/*"btn_txt_only_1"*/,
                                                    0);
                                                  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                           this->fields.oneExSummonSingleInfoSprite,
                                                                                           (System_String_o *)StringLiteral_21271/*"img_bg_saintquartzuse3"*/,
                                                                                           0);
                                                  v45 = this->fields.oneExSummon;
                                                  if ( v45 )
                                                  {
                                                    v46 = v45->fields.single;
                                                    if ( v46 )
                                                    {
                                                      Master_object = (GachaAppendMaster_o *)v46->fields.infoLabel;
                                                      if ( Master_object )
                                                      {
                                                        UILabel__set_text(
                                                          (UILabel_o *)Master_object,
                                                          (System_String_o *)StringLiteral_1248/*"1"*/,
                                                          0);
                                                        v49 = this->fields.oneExSummon;
                                                        if ( this->fields.isOneExUsePossible )
                                                        {
                                                          if ( !v49 )
                                                            goto LABEL_75;
                                                          v50 = v49->fields.single;
                                                          if ( !v50 )
                                                            goto LABEL_75;
                                                          SummonInfoControl__SetGachaSprite(
                                                            this,
                                                            v50->fields.numImg,
                                                            (System_String_o *)StringLiteral_18348/*"btn_txt_summon01"*/,
                                                            v48);
                                                        }
                                                        else
                                                        {
                                                          if ( !v49 )
                                                            goto LABEL_75;
                                                          v51 = v49->fields.single;
                                                          if ( !v51 )
                                                            goto LABEL_75;
                                                          numImg = v51->fields.numImg;
                                                          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
                                                            j_il2cpp_runtime_class_init_0(
                                                              AtlasManager_TypeInfo,
                                                              v9,
                                                              v47);
                                                          Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                                                                                   numImg,
                                                                                                   (System_String_o *)StringLiteral_25054/*"summon_txt_done"*/,
                                                                                                   0);
                                                        }
                                                        v53 = this->fields.oneExSummon;
                                                        if ( v53 )
                                                        {
                                                          v54 = v53->fields.single;
                                                          if ( v54 )
                                                          {
                                                            Master_object = (GachaAppendMaster_o *)v54->fields.buttonImg;
                                                            if ( Master_object )
                                                            {
                                                              v55 = 1.0;
                                                              v56 = 1.0;
                                                              if ( !this->fields.isOneExUsePossible )
                                                                v55 = 0.5;
                                                              v57 = v55;
                                                              v58 = v55;
                                                              UIWidget__set_color(
                                                                (UIWidget_o *)Master_object,
                                                                *(UnityEngine_Color_o *)&v55,
                                                                0);
                                                              v59 = this->fields.oneExSummon;
                                                              if ( v59 )
                                                              {
                                                                v60 = v59->fields.single;
                                                                if ( v60 )
                                                                {
                                                                  Master_object = (GachaAppendMaster_o *)v60->fields.button;
                                                                  if ( Master_object )
                                                                  {
                                                                    v61 = 1.0;
                                                                    v62 = 1.0;
                                                                    if ( !this->fields.isOneExUsePossible )
                                                                      v61 = 0.5;
                                                                    v63 = v61;
                                                                    v64 = v61;
                                                                    UIButtonColor__set_defaultColor(
                                                                      (UIButtonColor_o *)Master_object,
                                                                      *(UnityEngine_Color_o *)&v61,
                                                                      0);
                                                                    v65 = this->fields.oneExSummon;
                                                                    if ( v65 )
                                                                    {
                                                                      v66 = v65->fields.single;
                                                                      if ( v66 )
                                                                      {
                                                                        Master_object = (GachaAppendMaster_o *)v66->fields.numImg;
                                                                        if ( Master_object )
                                                                        {
                                                                          Master_object = (GachaAppendMaster_o *)(*(__int64 (__fastcall **)(GachaAppendMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(Master_object, *(_QWORD *)&Master_object->klass[1]._2.static_fields_size);
                                                                          v68 = this->fields.oneExSummon;
                                                                          if ( v68 )
                                                                          {
                                                                            SummonInfoControl__SetSummonGiftDisp(
                                                                              this,
                                                                              v68->fields.single,
                                                                              0,
                                                                              0,
                                                                              1,
                                                                              0,
                                                                              v67);
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
    sub_21FFECC(Master_object, v9);
  }
  if ( !v20 )
  {
    j_il2cpp_runtime_class_init_0(v18, v15, v16);
    v18 = SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    (SummonInfoControl_o *)v18,
    v19,
    v18->static_fields->NORMAL_SUMMON_BTN1_X,
    v18->static_fields->NORMAL_SUMMON_BTN2_X,
    v16);
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
  __int64 v11; // x1
  __int64 v12; // x2
  UISprite_o *numImg; // x22
  const MethodInfo *v14; // x6

  v8 = this;
  if ( (byte_5934A45 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_18255/*"btn_summon_bg2"*/);
    sub_21FFC50(&StringLiteral_18351/*"btn_txt_summonfree02"*/);
    this = (SummonInfoControl_o *)sub_21FFC50(&StringLiteral_18350/*"btn_txt_summonfree01"*/);
    byte_5934A45 = 1;
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
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_18255/*"btn_summon_bg2"*/, 0);
    this = (SummonInfoControl_o *)onePay->fields.button;
    if ( !this )
      goto LABEL_19;
    UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_18255/*"btn_summon_bg2"*/, 0);
    this = (SummonInfoControl_o *)onePay->fields.numImg;
    v9 = (System_String_o **)(isMaxExtraCount ? &StringLiteral_18351/*"btn_txt_summonfree02"*/ : &StringLiteral_18350/*"btn_txt_summonfree01"*/);
    if ( !this )
      goto LABEL_19;
    v10 = *v9;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_19;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
    numImg = onePay->fields.numImg;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11, v12);
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
      sub_21FFECC(this, onePay);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    SummonInfoControl__SetSummonGiftDisp(v8, onePay, 1, 0, 0, 0, v14);
  }
}


void SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  struct VaildGachaInfo_o *v10; // x8
  GachaEntity_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_5934A3D & 1) == 0 )
  {
    sub_21FFC50(&UserGachaMaster_TypeInfo);
    byte_5934A3D = 1;
  }
  ticketNum = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    goto LABEL_13;
  id = currentSummonData->fields.id;
  if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v4, v5);
  this->fields._IsOneTimeFreeActive_k__BackingField = UserGachaMaster__IsOneTimeFreeCampaignActive(id, 0);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v8);
  v10 = this->fields.currentSummonData;
  if ( !v10 )
LABEL_13:
    sub_21FFECC(CurrentGachaEntity, v4);
  v11 = CurrentGachaEntity;
  if ( v10->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v9);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v9) && !this->fields._IsOneTimeFreeActive_k__BackingField )
  {
    SummonInfoControl__TicketGacha(this, v11, ticketNum, v13);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v11, v12);
  }
}


void SummonInfoControl__SetPointSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  long double v2; // q0
  __int64 v4; // x0
  __int64 v5; // x0
  void *MasterData_object; // x0
  struct UserGameEntity_o *usrData; // x8
  int32_t v8; // w20
  int32_t Price; // w0
  __int64 v10; // x1
  __int64 v11; // x2
  System_Math_c *v12; // x8
  int32_t v13; // w21
  int v14; // w0
  const MethodInfo *v15; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v17; // x4
  struct SummonInfoControl_SummonObjInfo_o *v18; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  SummonInfoControl_o *v20; // x0
  int32_t v21; // w2
  UILabel_o *infoLabel; // x1
  System_String_o *v23; // x3
  struct SummonInfoControl_SummonObjInfo_o *v24; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x21
  Il2CppObject *v27; // x0
  const MethodInfo *v28; // x4
  struct SummonInfoControl_SummonObjInfo_o *v29; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v31; // x8
  struct SummonInfoControl_SummonObjParts_o *v32; // x8
  const MethodInfo *v33; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v35; // x5
  int32_t gachaTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5934A3C & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_18352/*"btn_txt_summon{0:00}"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5934A3C = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_28;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_28;
  if ( !MasterData_object )
    goto LABEL_28;
  MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, usrData->fields.userId, 0);
  if ( !MasterData_object )
    goto LABEL_28;
  v8 = *((_DWORD *)MasterData_object + 6);
  MasterData_object = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !MasterData_object )
    goto LABEL_28;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_object, 0);
  v12 = System_Math_TypeInfo;
  v13 = Price;
  this->fields.price = Price;
  if ( !*(&v12->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v12, v10, v11);
  v14 = System_Math__Min_76940292(v8 / v13, 10, 0);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v14;
  if ( v14 >= 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v15);
    v24 = this->fields.friendPointSummon;
    if ( v24 )
    {
      multiPay = v24->fields.multiPay;
      if ( multiPay )
      {
        numImg = multiPay->fields.numImg;
        gachaTime = this->fields.gachaTime;
        v27 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &gachaTime);
        MasterData_object = System_String__Format((System_String_o *)StringLiteral_18352/*"btn_txt_summon{0:00}"*/, v27, 0);
        if ( numImg )
        {
          UISprite__set_spriteName(numImg, (System_String_o *)MasterData_object, 0);
          v29 = this->fields.friendPointSummon;
          if ( v29 )
          {
            onePay = v29->fields.onePay;
            if ( onePay )
            {
              SummonInfoControl__SetPriceText(
                this,
                onePay->fields.infoLabel,
                this->fields.price,
                (System_String_o *)StringLiteral_26381/*"{0:#,0}"*/,
                v28);
              v31 = this->fields.friendPointSummon;
              if ( v31 )
              {
                v32 = v31->fields.multiPay;
                if ( v32 )
                {
                  v20 = this;
                  infoLabel = v32->fields.infoLabel;
                  v23 = (System_String_o *)StringLiteral_26381/*"{0:#,0}"*/;
                  v21 = this->fields.gachaTime * this->fields.price;
                  goto LABEL_27;
                }
              }
            }
          }
        }
      }
    }
LABEL_28:
    sub_21FFECC(MasterData_object, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v15);
  v18 = this->fields.friendPointSummon;
  if ( !v18 )
    goto LABEL_28;
  single = v18->fields.single;
  if ( !single )
    goto LABEL_28;
  v20 = this;
  v21 = -1;
  infoLabel = single->fields.infoLabel;
  v23 = (System_String_o *)StringLiteral_26433/*"{0}"*/;
LABEL_27:
  SummonInfoControl__SetPriceText(v20, infoLabel, v21, v23, v17);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v33);
  SummonInfoControl__SetMultiTimeExButton(this, CurrentGachaEntity, 0, this->fields.friendPointSummon, v8, v35);
}


void SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-24h] BYREF

  SummonInfoControl__SetActiveInfoLabel(this, label, 1, (const MethodInfo *)format);
  if ( price < 0 )
    price = this->fields.price;
  v12 = price;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12);
  v10 = System_String__Format(format, v9, 0);
  if ( !label )
    sub_21FFECC(v10, v11);
  UILabel__set_text(label, v10, 0);
}


// local variable allocation has failed, the output may be wrong!
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
  System_Int32_array *adjustStoryGachaIds; // x29
  int32_t v14; // w28
  int32_t summonType; // w22
  SummonInfoControl_o *v22; // x21
  struct VaildGachaInfo_o *currentSummonData; // x8
  struct VaildGachaInfo_o *v24; // x8
  struct VaildGachaInfo_o *v25; // x8
  struct VaildGachaInfo_o *v26; // x8
  int32_t v27; // w26
  GachaRqParamData_o *v28; // x27
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  adjustStoryGachaIds = storyAdjustIds;
  v14 = gachaSubId;
  summonType = gachaType;
  v22 = this;
  if ( (byte_5934A4F & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    this = (SummonInfoControl_o *)sub_21FFC50(&GachaRqParamData_TypeInfo);
    byte_5934A4F = 1;
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
    sub_21FFECC(this, *(_QWORD *)&gachaType);
  adjustStoryGachaIds = v26->fields.adjustStoryGachaIds;
LABEL_22:
  v27 = ticketItemId & ~(ticketItemId >> 31);
  if ( shopIdIdx < 0 )
    shopIdIdx = 1;
  v28 = (GachaRqParamData_o *)sub_21FFEBC(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_42122256(
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
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v22->fields.requestData, (int32_t)v28, v29, v30, v31, v32, v33, v34);
}


void SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_21FFECC(this, method);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void SummonInfoControl__SetSummonButtonsCollider(SummonInfoControl_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_Action_SummonInfoControl_SummonObjInfo__c *v14; // x0
  System_Collections_Generic_List_object__o *summonObjInfos; // x19
  System_Action_object__o *v16; // x20

  if ( (byte_5934A50 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_21FFC50(&Method_SummonInfoControl___c__DisplayClass187_0__SetSummonButtonsCollider_b__0__);
    sub_21FFC50(&SummonInfoControl___c__DisplayClass187_0_TypeInfo);
    byte_5934A50 = 1;
  }
  v5 = sub_21FFEBC(SummonInfoControl___c__DisplayClass187_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        v14 = System_Action_SummonInfoControl_SummonObjInfo__TypeInfo,
        summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos,
        *(_BYTE *)(v5 + 24) = onOff,
        v16 = (System_Action_object__o *)sub_21FFEBC(v14),
        System_Action_object____ctor(
          v16,
          (Il2CppObject *)v5,
          Method_SummonInfoControl___c__DisplayClass187_0__SetSummonButtonsCollider_b__0__,
          0),
        !summonObjInfos) )
  {
    sub_21FFECC(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)v16,
    (const MethodInfo_445054C *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x2
  __int64 v11; // x1
  UnityEngine_GameObject_o *summonDetailInfo; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  const MethodInfo *v14; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  UnityEngine_GameObject_o *v16; // x20
  System_Action_int__o *v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_5934A38 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl__SetSummonDispInfo_b__155_0__);
    byte_5934A38 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
  SummonInfoControl__SetHelpBtnDisp(this, 1, v10);
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
                                                         v14),
        !gameObject)
    || (UnityEngine_GameObject__SetActive(gameObject, summonDetailInfo != 0, 0),
        (summonDetailInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton) == 0)
    || (summonDetailInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonDetailInfo, 0),
        (currentSummonData = this->fields.currentSummonData) == 0)
    || !summonDetailInfo )
  {
LABEL_12:
    sub_21FFECC(summonDetailInfo, v11);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, currentSummonData->fields.isDispSummonListDialog, 0);
  *(_WORD *)&this->fields.isOneExUsePossible = 0;
  this->fields.isDispPayMultiExSummon = 0;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
  System_Action_int____ctor(v17, (Il2CppObject *)this, Method_SummonInfoControl__SetSummonDispInfo_b__155_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(v16, v17, 0, 0);
  SummonInfoControl__SetUpSummonInfos(this, v18);
  SummonInfoControl__OffSetInfoBtn(this, v19);
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetSummonGiftDisp(
        SummonInfoControl_o *this,
        SummonInfoControl_SummonObjParts_o *summonObjParts,
        bool isOnePay,
        bool isMulti,
        bool isSingle,
        bool isChargeSummon,
        const MethodInfo *method)
{
  SummonInfoControl_SummonObjParts_o *v11; // x19
  SummonInfoControl_o *v12; // x21
  __int64 v13; // x1
  __int64 v14; // x2
  System_String_o *v15; // x20
  SummonInfoControl___c_c *v16; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_T__TResult__o *_9__179_0; // x25
  Il2CppObject *v19; // x26
  struct SummonInfoControl___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  SummonInfoControl_o *v28; // x20
  int32_t shopId2GiftNum; // w1
  __int64 v30; // x1
  __int64 v31; // x2
  System_String_o *v32; // x20
  SummonInfoControl___c_c *v33; // x8
  struct SummonInfoControl___c_StaticFields *v34; // x9
  System_Func_T__TResult__o *_9__179_1; // x21
  Il2CppObject *v36; // x22
  struct SummonInfoControl___c_StaticFields *v37; // x0
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x2
  UnityEngine_Object_o *bonusCount; // x21
  __int64 v47; // x2
  UnityEngine_GameObject_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SummonInfoControl_o *v55; // x0
  const MethodInfo *v56; // x3
  UISprite_o *v57; // x22
  SummonInfoControl_o *v58; // x0
  const MethodInfo *v59; // x3
  UnityEngine_Object_o *v60; // x21
  SummonInfoControl_o *v61; // x0
  const MethodInfo *v62; // x3
  __int64 v63; // x1
  __int64 v64; // x2
  UISprite_o *BonusSprite; // x23
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  System_String_o *v70; // x0
  Il2CppObject *freeSummon; // x1
  System_String_o *v72; // x0
  UnityEngine_Component_o *v73; // x0
  bool v74; // w1
  __int64 v75; // x2
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v78; // x0
  UnityEngine_GameObject_o *v79; // x0
  __int64 v80; // x2
  UnityEngine_GameObject_o *v81; // x23
  UnityEngine_Object_o *root; // x24
  UnityEngine_GameObject_o *v83; // x0
  SummonInfoControl_o *v84; // x0
  const MethodInfo *v85; // x3
  UnityEngine_Component_o *v86; // x23
  SummonInfoControl_o *v87; // x0
  const MethodInfo *v88; // x3
  UnityEngine_Component_o *v89; // x24
  SummonInfoControl_o *v90; // x0
  const MethodInfo *v91; // x3
  UISprite_o *v92; // x22
  SummonInfoControl_o *v93; // x0
  const MethodInfo *v94; // x3
  SummonInfoControl_o *v95; // x0
  const MethodInfo *v96; // x3
  __int64 v97; // x1
  __int64 v98; // x2
  UISprite_o *v99; // x25
  __int64 v100; // x1
  __int64 v101; // x2
  __int64 v102; // x1
  __int64 v103; // x2
  __int64 v104; // x1
  __int64 v105; // x2
  __int64 v106; // x1
  __int64 v107; // x2
  System_String_o *v108; // x0
  System_String_o *v109; // x0
  UnityEngine_Object_o *v110; // x21
  __int64 v111; // x1
  __int64 v112; // x2
  UnityEngine_Object_o *itemImg; // x21
  __int64 v114; // x1
  __int64 v115; // x2
  UISprite_o *v116; // x21
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  SummonInfoControl_o *v123; // x21
  System_String_o *v124; // x2
  System_String_o *v125; // x3
  int32_t v126; // w4
  int32_t v127; // w5
  bool v128; // w6
  bool v129; // w7
  System_String_o *v130; // x2
  System_String_o *v131; // x3
  int32_t v132; // w4
  int32_t v133; // w5
  bool v134; // w6
  bool v135; // w7
  SummonInfoControl_o *v136; // x0
  const MethodInfo *v137; // x3

  v11 = summonObjParts;
  v12 = this;
  if ( (byte_5934A4A & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&SummonInfoControl_BonusDigitSpriteSet___TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_21FFC50(&System_Func_char__string__TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__179_0__);
    sub_21FFC50(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__179_1__);
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    sub_21FFC50(&StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/);
    sub_21FFC50(&StringLiteral_23424/*"num2"*/);
    sub_21FFC50(&StringLiteral_23422/*"num1"*/);
    sub_21FFC50(&StringLiteral_8464/*"Item"*/);
    sub_21FFC50(&StringLiteral_23423/*"num1_glow"*/);
    sub_21FFC50(&StringLiteral_23425/*"num2_glow"*/);
    this = (SummonInfoControl_o *)sub_21FFC50(&StringLiteral_18284/*"btn_txt_bonus_{0}"*/);
    byte_5934A4A = 1;
  }
  if ( isOnePay && v12->fields.shopId1GiftNum )
  {
    v15 = System_Int32__ToString((int)v12 + 408, 0);
    v16 = SummonInfoControl___c_TypeInfo;
    if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v13, v14);
      v16 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__179_0 = (System_Func_T__TResult__o *)static_fields->__9__179_0;
    if ( !_9__179_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v13, v14);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__179_0 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__179_0, v19, Method_SummonInfoControl___c__SetSummonGiftDisp_b__179_0__, 0);
      v20 = SummonInfoControl___c_TypeInfo->static_fields;
      v20->__9__179_0 = (struct System_Func_char__string__o *)_9__179_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v20->__9__179_0,
        (int32_t)_9__179_0,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                                                                 (System_Func_TSource__TResult__o *)_9__179_0,
                                                                 (const MethodInfo_3859A1C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v27,
                                    (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
    v28 = this;
    if ( !isMulti )
      goto LABEL_16;
  }
  else
  {
    v28 = 0;
    if ( !isMulti )
      goto LABEL_16;
  }
  shopId2GiftNum = v12->fields.shopId2GiftNum;
  if ( shopId2GiftNum )
  {
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSplitNum(
                                    this,
                                    shopId2GiftNum,
                                    (const MethodInfo *)isOnePay);
    v28 = this;
  }
  else
  {
    summonObjParts = (SummonInfoControl_SummonObjParts_o *)(unsigned int)v12->fields.shopId1GiftNum;
    if ( (_DWORD)summonObjParts && isChargeSummon )
    {
      this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSplitNum(
                                      this,
                                      (int32_t)summonObjParts,
                                      (const MethodInfo *)isOnePay);
      if ( !v11 )
        goto LABEL_133;
      v28 = this;
      button = (UnityEngine_Object_o *)v11->fields.button;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts, v75);
      this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(button, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)v11->fields.button;
        if ( !this )
          goto LABEL_133;
        this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !this )
          goto LABEL_133;
        this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (SummonInfoControl_o *)v11->fields.button;
          if ( !this )
            goto LABEL_133;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalScale_42878128(gameObject, 0.9, 0);
          this = (SummonInfoControl_o *)v11->fields.button;
          if ( !this )
            goto LABEL_133;
          v78 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          GameObjectExtensions__SetLocalPositionY(v78, -6.0, 0);
          this = (SummonInfoControl_o *)v11->fields.doubleDigits;
          if ( !this )
            goto LABEL_133;
          v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          this = (SummonInfoControl_o *)GameObjectExtensions__GetParent(v79, 0);
          if ( !this )
            goto LABEL_133;
          this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !v28 )
            goto LABEL_133;
          v81 = (UnityEngine_GameObject_o *)this;
          if ( SLODWORD(v28->fields.m_CancellationTokenSource) >= 3 )
          {
            root = (UnityEngine_Object_o *)v11->fields.extraDigits.fields.root;
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts, v80);
            if ( UnityEngine_Object__op_Inequality(root, 0, 0) )
            {
              this = (SummonInfoControl_o *)v11->fields.extraDigits.fields.root;
              if ( !this )
                goto LABEL_133;
              v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              this = (SummonInfoControl_o *)GameObjectExtensions__GetParent(v83, 0);
              if ( !this )
                goto LABEL_133;
              v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
            }
          }
          GameObjectExtensions__SetLocalPositionY(v81, 45.0, 0);
        }
      }
    }
  }
LABEL_16:
  if ( isSingle && v12->fields.appendGiftNum )
  {
    v32 = System_Int32__ToString((int)v12 + 416, 0);
    v33 = SummonInfoControl___c_TypeInfo;
    if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v30, v31);
      v33 = SummonInfoControl___c_TypeInfo;
    }
    v34 = v33->static_fields;
    _9__179_1 = (System_Func_T__TResult__o *)v34->__9__179_1;
    if ( !_9__179_1 )
    {
      if ( !*(&v33->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v33, v30, v31);
        v34 = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v36 = (Il2CppObject *)v34->__9;
      _9__179_1 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__179_1, v36, Method_SummonInfoControl___c__SetSummonGiftDisp_b__179_1__, 0);
      v37 = SummonInfoControl___c_TypeInfo->static_fields;
      v37->__9__179_1 = (struct System_Func_char__string__o *)_9__179_1;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v37->__9__179_1,
        (int32_t)_9__179_1,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v32,
                                                                 (System_Func_TSource__TResult__o *)_9__179_1,
                                                                 (const MethodInfo_3859A1C *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v44,
                                    (const MethodInfo_3868664 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !v11 )
      goto LABEL_133;
    v28 = this;
    bonusCount = (UnityEngine_Object_o *)v11->fields.bonusCount;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts, v45);
    if ( UnityEngine_Object__op_Inequality(bonusCount, 0, 0) )
    {
      this = (SummonInfoControl_o *)v11->fields.bonusCount;
      if ( !this )
        goto LABEL_133;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_133;
      if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
      {
        this = (SummonInfoControl_o *)v11->fields.bonusCount;
        if ( !this )
          goto LABEL_133;
        v48 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v48, 42.0, 0);
        this = (SummonInfoControl_o *)v11->fields.bonusCount;
        if ( !this )
          goto LABEL_133;
        v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v49, -34.0, 0);
        this = (SummonInfoControl_o *)v11->fields.bonusCount;
        if ( !this )
          goto LABEL_133;
        v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v50, 0.9, 0);
      }
    }
    bonusInfo = (UnityEngine_Object_o *)v11->fields.bonusInfo;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts, v47);
    this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(bonusInfo, 0, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SummonInfoControl_o *)v11->fields.bonusInfo;
      if ( !this )
        goto LABEL_133;
      this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !this )
        goto LABEL_133;
      this = (SummonInfoControl_o *)UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (SummonInfoControl_o *)v11->fields.bonusInfo;
        if ( !this )
          goto LABEL_133;
        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v52, -60.0, 0);
        this = (SummonInfoControl_o *)v11->fields.bonusInfo;
        if ( !this )
          goto LABEL_133;
        v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v53, 0.9, 0);
      }
    }
  }
  if ( !v28 )
    goto LABEL_66;
  m_CancellationTokenSource = v28->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_66;
  if ( (_DWORD)m_CancellationTokenSource == 3 )
  {
    if ( !v11 )
      goto LABEL_133;
    v110 = (UnityEngine_Object_o *)v11->fields.extraDigits.fields.root;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, summonObjParts, isOnePay);
    if ( UnityEngine_Object__op_Inequality(v110, 0, 0) )
    {
      itemImg = (UnityEngine_Object_o *)v11->fields.extraDigits.fields.itemImg;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v111, v112);
      if ( UnityEngine_Object__op_Inequality(itemImg, 0, 0) )
      {
        v116 = v11->fields.extraDigits.fields.itemImg;
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v114, v115);
        AtlasManager__SetItem(v116, 7, 0);
      }
      this = (SummonInfoControl_o *)sub_21FFD10(SummonInfoControl_BonusDigitSpriteSet___TypeInfo, 3);
      if ( !this )
        goto LABEL_133;
      v123 = this;
      if ( !LODWORD(this->fields.m_CancellationTokenSource) )
        goto LABEL_134;
      *(struct SummonInfoControl_BonusDigitSpriteSet_o *)&this->fields.freeSummon = v11->fields.extraDigits.fields.num1Img;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.freeSummon, 0, v117, v118, v119, v120, v121, v122);
      if ( ((__int64)v123->fields.m_CancellationTokenSource & 0xFFFFFFFE) == 0 )
        goto LABEL_134;
      *(struct SummonInfoControl_BonusDigitSpriteSet_o *)&v123->fields.stoneSummon = v11->fields.extraDigits.fields.num2Img;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v123->fields.stoneSummon, 0, v124, v125, v126, v127, v128, v129);
      if ( LODWORD(v123->fields.m_CancellationTokenSource) <= 2 )
        goto LABEL_134;
      *(struct SummonInfoControl_BonusDigitSpriteSet_o *)&v123->fields.chargeSummon = v11->fields.extraDigits.fields.num3Img;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v123->fields.chargeSummon, 0, v130, v131, v132, v133, v134, v135);
      if ( SummonInfoControl__TrySetBonusDigitSprites(
             v136,
             (System_String_array *)v28,
             (SummonInfoControl_BonusDigitSpriteSet_array *)v123,
             v137) )
      {
        goto LABEL_132;
      }
    }
    goto LABEL_67;
  }
  if ( (_DWORD)m_CancellationTokenSource != 2 )
  {
    if ( (_DWORD)m_CancellationTokenSource == 1 )
    {
      if ( !v11 )
        goto LABEL_133;
      this = (SummonInfoControl_o *)v11->fields.singleDigit;
      if ( !this )
        goto LABEL_133;
      v55 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                      v55,
                                      (UnityEngine_GameObject_o *)v55,
                                      (System_String_o *)StringLiteral_23422/*"num1"*/,
                                      v56);
      if ( !this )
        goto LABEL_133;
      v57 = (UISprite_o *)this;
      v58 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                      v58,
                                      (UnityEngine_GameObject_o *)v58,
                                      (System_String_o *)StringLiteral_23423/*"num1_glow"*/,
                                      v59);
      if ( !v11->fields.singleDigit )
        goto LABEL_133;
      v60 = (UnityEngine_Object_o *)this;
      v61 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                     (UnityEngine_Component_o *)v11->fields.singleDigit,
                                     0);
      BonusSprite = SummonInfoControl__GetBonusSprite(
                      v61,
                      (UnityEngine_GameObject_o *)v61,
                      (System_String_o *)StringLiteral_8464/*"Item"*/,
                      v62);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v63, v64);
      AtlasManager__SetItem(BonusSprite, 7, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66, v67);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v57, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68, v69);
        this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v60, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( LODWORD(v28->fields.m_CancellationTokenSource) )
          {
            v70 = System_String__Format(
                    (System_String_o *)StringLiteral_18284/*"btn_txt_bonus_{0}"*/,
                    (Il2CppObject *)v28->fields.freeSummon,
                    0);
            UISprite__set_spriteName(v57, v70, 0);
            if ( LODWORD(v28->fields.m_CancellationTokenSource) )
            {
              freeSummon = (Il2CppObject *)v28->fields.freeSummon;
              v72 = (System_String_o *)StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/;
              goto LABEL_64;
            }
          }
          goto LABEL_134;
        }
      }
      goto LABEL_67;
    }
LABEL_66:
    if ( !v11 )
      goto LABEL_133;
    goto LABEL_67;
  }
  if ( !v11 )
    goto LABEL_133;
  this = (SummonInfoControl_o *)v11->fields.doubleDigits;
  if ( !this )
    goto LABEL_133;
  v84 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v84,
                                  (UnityEngine_GameObject_o *)v84,
                                  (System_String_o *)StringLiteral_23422/*"num1"*/,
                                  v85);
  if ( !v11->fields.doubleDigits )
    goto LABEL_133;
  v86 = (UnityEngine_Component_o *)this;
  v87 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)v11->fields.doubleDigits,
                                 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v87,
                                  (UnityEngine_GameObject_o *)v87,
                                  (System_String_o *)StringLiteral_23424/*"num2"*/,
                                  v88);
  if ( !v86 )
    goto LABEL_133;
  v89 = (UnityEngine_Component_o *)this;
  v90 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v86, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v90,
                                  (UnityEngine_GameObject_o *)v90,
                                  (System_String_o *)StringLiteral_23423/*"num1_glow"*/,
                                  v91);
  if ( !v89 )
    goto LABEL_133;
  v92 = (UISprite_o *)this;
  v93 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v89, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v93,
                                  (UnityEngine_GameObject_o *)v93,
                                  (System_String_o *)StringLiteral_23425/*"num2_glow"*/,
                                  v94);
  if ( !v11->fields.doubleDigits )
    goto LABEL_133;
  v60 = (UnityEngine_Object_o *)this;
  v95 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)v11->fields.doubleDigits,
                                 0);
  v99 = SummonInfoControl__GetBonusSprite(
          v95,
          (UnityEngine_GameObject_o *)v95,
          (System_String_o *)StringLiteral_8464/*"Item"*/,
          v96);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v97, v98);
  AtlasManager__SetItem(v99, 7, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v100, v101);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v86, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v102, v103);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v89, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v104, v105);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v92, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v106, v107);
        this = (SummonInfoControl_o *)UnityEngine_Object__op_Inequality(v60, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( LODWORD(v28->fields.m_CancellationTokenSource) )
          {
            v108 = System_String__Format(
                     (System_String_o *)StringLiteral_18284/*"btn_txt_bonus_{0}"*/,
                     (Il2CppObject *)v28->fields.freeSummon,
                     0);
            UISprite__set_spriteName((UISprite_o *)v86, v108, 0);
            if ( ((__int64)v28->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
            {
              v109 = System_String__Format(
                       (System_String_o *)StringLiteral_18284/*"btn_txt_bonus_{0}"*/,
                       (Il2CppObject *)v28->fields.friendPointSummon,
                       0);
              UISprite__set_spriteName((UISprite_o *)v89, v109, 0);
              if ( LODWORD(v28->fields.m_CancellationTokenSource) )
              {
                this = (SummonInfoControl_o *)System_String__Format(
                                                (System_String_o *)StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/,
                                                (Il2CppObject *)v28->fields.freeSummon,
                                                0);
                if ( !v92 )
                  goto LABEL_133;
                UISprite__set_spriteName(v92, (System_String_o *)this, 0);
                if ( ((__int64)v28->fields.m_CancellationTokenSource & 0xFFFFFFFE) != 0 )
                {
                  freeSummon = (Il2CppObject *)v28->fields.friendPointSummon;
                  v72 = (System_String_o *)StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/;
LABEL_64:
                  this = (SummonInfoControl_o *)System_String__Format(v72, freeSummon, 0);
                  if ( v60 )
                  {
                    UISprite__set_spriteName((UISprite_o *)v60, (System_String_o *)this, 0);
LABEL_132:
                    BasicHelper__SetActiveSafely(
                      (UnityEngine_Component_o *)v11->fields.singleDigit,
                      LODWORD(v28->fields.m_CancellationTokenSource) == 1,
                      0);
                    BasicHelper__SetActiveSafely(
                      (UnityEngine_Component_o *)v11->fields.doubleDigits,
                      LODWORD(v28->fields.m_CancellationTokenSource) == 2,
                      0);
                    v73 = (UnityEngine_Component_o *)v11->fields.extraDigits.fields.root;
                    v74 = LODWORD(v28->fields.m_CancellationTokenSource) == 3;
                    goto LABEL_68;
                  }
LABEL_133:
                  sub_21FFECC(this, summonObjParts);
                }
              }
            }
          }
LABEL_134:
          sub_21FFED4(this);
        }
      }
    }
  }
LABEL_67:
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v11->fields.singleDigit, 0, 0);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v11->fields.doubleDigits, 0, 0);
  v73 = (UnityEngine_Component_o *)v11->fields.extraDigits.fields.root;
  v74 = 0;
LABEL_68:
  BasicHelper__SetActiveSafely(v73, v74, 0);
}


void SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v6; // x8
  char *v7; // x20
  __int64 v8; // x22
  char *v9; // x24
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x9
  int v13; // w9

  if ( (byte_5934A49 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5934A49 = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0)
      || !Instance )
    {
LABEL_31:
      sub_21FFECC(Instance, v4);
    }
    Instance = (char *)GachaExtraGiftMaster__GetListGachaExtraGift(
                         (GachaExtraGiftMaster_o *)Instance,
                         currentSummonData->fields.id,
                         0);
    if ( Instance )
    {
      v6 = *((_QWORD *)Instance + 3);
      v7 = Instance;
      if ( v6 )
      {
        if ( (int)v6 >= 1 )
        {
          v8 = 0;
          v9 = Instance + 32;
          do
          {
            if ( (unsigned int)v8 >= (unsigned int)v6 )
LABEL_32:
              sub_21FFED4(Instance);
            v10 = *(_QWORD *)&v9[8 * v8];
            if ( !v10 )
              goto LABEL_31;
            if ( *(_DWORD *)(v10 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GiftMaster___);
              if ( (unsigned int)v8 >= *((_DWORD *)v7 + 6) )
                goto LABEL_32;
              v11 = *(_QWORD *)&v9[8 * v8];
              if ( !v11 || !Instance )
                goto LABEL_31;
              Instance = (char *)GiftMaster__getDataById((GiftMaster_o *)Instance, *(_DWORD *)(v11 + 24), 0);
              v6 = *((_QWORD *)v7 + 3);
              if ( (unsigned int)v8 >= (unsigned int)v6 )
                goto LABEL_32;
              v12 = *(_QWORD *)&v9[8 * v8];
              if ( !v12 )
                goto LABEL_31;
              v13 = *(_DWORD *)(v12 + 20);
              switch ( v13 )
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
            ++v8;
          }
          while ( (int)v8 < (int)v6 );
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
  __int64 v8; // x1

  if ( (byte_5934A58 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934A58 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bannerAtlas, imgName);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonHistorySprite) == 0)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonHistoryButton) == 0) )
    {
      sub_21FFECC(Component_object, v8);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t type; // w8
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_21FFECC(this, 0);
  type = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  this->fields.summonType = type;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    (System_String_o *)callback,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.currentSummonData,
    (int32_t)gachaData,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SummonInfoControl__SetSummonGiftInfo(this, v17);
  SummonInfoControl__SetSummonDispInfo(this, v18);
}


void SummonInfoControl__SetSummonInfo_42360444(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int v4; // w8
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int klass; // w22
  int32_t PayOneTimePrice; // w20
  __int64 v10; // x21
  int32_t PayMultiTimePrice; // w20
  int32_t klass_high; // w22
  int32_t v13; // w8
  __int64 v14; // x21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934A48 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_21FFC50(&SummonInfoControl_SummonInfo_TypeInfo);
    byte_5934A48 = 1;
  }
  v4 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method, v2);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          currentSummonData->fields.id,
          (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity )
    goto LABEL_17;
  if ( SHIDWORD(entity[3].klass) < 1 )
  {
    if ( SLODWORD(entity[3].monitor) < 1 )
      return;
    goto LABEL_14;
  }
  klass = (int)entity[4].klass;
  PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0);
  v10 = sub_21FFEBC(SummonInfoControl_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0);
  Master_object = entity;
  *(_DWORD *)(v10 + 16) = klass;
  *(_DWORD *)(v10 + 20) = PayOneTimePrice;
  *(_DWORD *)(v10 + 24) = 1;
  if ( !Master_object )
LABEL_17:
    sub_21FFECC(Master_object, v6);
  if ( SLODWORD(Master_object[3].monitor) >= 1 )
  {
LABEL_14:
    klass_high = HIDWORD(Master_object[4].klass);
    PayMultiTimePrice = GachaEntity__getPayMultiTimePrice((GachaEntity_o *)Master_object, 0);
    v14 = sub_21FFEBC(SummonInfoControl_SummonInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v14, 0);
    v13 = 2;
    *(_DWORD *)(v14 + 16) = klass_high;
    *(_DWORD *)(v14 + 20) = PayMultiTimePrice;
    *(_DWORD *)(v14 + 24) = 2;
    goto LABEL_15;
  }
  klass_high = *(_DWORD *)(v10 + 16);
  PayMultiTimePrice = *(_DWORD *)(v10 + 20);
  v13 = *(_DWORD *)(v10 + 24);
LABEL_15:
  this->fields.gachaTime = klass_high;
  this->fields.price = PayMultiTimePrice;
  this->fields.shopIdIdx = v13;
}


void SummonInfoControl__SetSummonListSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  UIAtlas_o *Component_object; // x0
  __int64 v8; // x1

  if ( (byte_5934A57 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934A57 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, bannerAtlas, imgName);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonListSprite)
      || (UISprite__set_atlas(this->fields.summonListSprite, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonListSprite) == 0)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonListButton) == 0) )
    {
      sub_21FFECC(Component_object, v8);
    }
    UIButton__set_normalSprite((UIButton_o *)Component_object, imgName, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void SummonInfoControl__SetTutorialBtnEnable(SummonInfoControl_o *this, bool isEnable, const MethodInfo *method)
{
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  SummonInfoControl_o *v5; // x20

  stoneSummon = this->fields.stoneSummon;
  if ( !stoneSummon
    || (multiPay = stoneSummon->fields.multiPay) == 0
    || (v5 = this, (this = (SummonInfoControl_o *)multiPay->fields.button) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0),
        (this = (SummonInfoControl_o *)v5->fields.summonDetailBtn) == 0)
    || (UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0),
        (this = (SummonInfoControl_o *)v5->fields.summonHelpInfo) == 0) )
  {
    sub_21FFECC(this, isEnable);
  }
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, isEnable, 0);
}


// local variable allocation has failed, the output may be wrong!
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
    sub_21FFECC(this, isEnable);
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
  UnityEngine_GameObject_o *v8; // x20
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  UnityEngine_GameObject_o *gameObject; // x20
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
                                                          v12);
      if ( !gameObject )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(gameObject, possessionInfoButton != 0, 0);
      SummonInfoControl__SetPaySummonInfo(this, v13);
      break;
    case 7:
      possessionInfoButton = (UnityEngine_Component_o *)this->fields.possessionInfoButton;
      if ( !possessionInfoButton )
        goto LABEL_15;
      v8 = UnityEngine_Component__get_gameObject(possessionInfoButton, 0);
      possessionInfoButton = (UnityEngine_Component_o *)SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
                                                          this,
                                                          v9);
      if ( !v8 )
        goto LABEL_15;
      UnityEngine_GameObject__SetActive(v8, possessionInfoButton != 0, 0);
      SummonInfoControl__SetChargeSummonInfo(this, v10);
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
      sub_21FFECC(possessionInfoButton, method);
  }
}


void SummonInfoControl__StoneGacha(SummonInfoControl_o *this, GachaEntity_o *payGachaEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  GachaEntity_o *v4; // x20
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
  int gachaTime; // w8
  System_String_o *v21; // x20
  Il2CppObject *v22; // x0
  struct SummonInfoControl_SummonObjInfo_o *v23; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v25; // x4
  struct SummonInfoControl_SummonObjInfo_o *v26; // x8
  struct SummonInfoControl_SummonObjParts_o *v27; // x8
  int v28; // [xsp+Ch] [xbp-24h] BYREF

  v4 = payGachaEnt;
  v5 = this;
  if ( (byte_5934A41 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    this = (SummonInfoControl_o *)sub_21FFC50(&StringLiteral_18352/*"btn_txt_summon{0:00}"*/);
    byte_5934A41 = 1;
  }
  if ( !v4 )
    goto LABEL_21;
  if ( v4->fields.shopId1 >= 1 && v4->fields.shopId2 > 0 )
  {
    SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 0, v3);
    v5->fields.gachaTime = v4->fields.drawNum1;
    this = (SummonInfoControl_o *)GachaEntity__getPayOneTimePrice(v4, 0);
    stoneSummon = v5->fields.stoneSummon;
    v5->fields.price = (int)this;
    v5->fields.shopIdIdx = 1;
    if ( stoneSummon )
    {
      onePay = stoneSummon->fields.onePay;
      if ( onePay )
      {
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_26433/*"{0}"*/, v6);
        v9 = v5->fields.stoneSummon;
        if ( v9 )
        {
          multiPay = v9->fields.multiPay;
          if ( multiPay )
          {
            infoLabel = multiPay->fields.infoLabel;
            PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(v4, 0);
            SummonInfoControl__SetPriceText(
              v5,
              infoLabel,
              PayMultiTimePrice,
              (System_String_o *)StringLiteral_26433/*"{0}"*/,
              v13);
            v15 = v5->fields.stoneSummon;
            if ( v15 )
            {
              SummonInfoControl__SetSummonGiftDisp(v5, v15->fields.onePay, 1, 0, 0, 0, v14);
              v17 = v5->fields.stoneSummon;
              if ( v17 )
              {
                SummonInfoControl__SetSummonGiftDisp(v5, v17->fields.multiPay, 0, 1, 0, 0, v16);
                SummonInfoControl__SetElevenBonusInfo(v5, v4, 0, v5->fields.stoneSummon, v5->fields.gachaTime, v18);
                return;
              }
            }
          }
        }
      }
    }
LABEL_21:
    sub_21FFECC(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_42360444(v5, v19);
  gachaTime = v5->fields.gachaTime;
  v21 = (System_String_o *)StringLiteral_18352/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v28 = gachaTime;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v28);
  this = (SummonInfoControl_o *)System_String__Format(v21, v22, 0);
  v23 = v5->fields.stoneSummon;
  if ( !v23 )
    goto LABEL_21;
  single = v23->fields.single;
  if ( !single )
    goto LABEL_21;
  payGachaEnt = (GachaEntity_o *)this;
  this = (SummonInfoControl_o *)single->fields.numImg;
  if ( !this )
    goto LABEL_21;
  UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)payGachaEnt, 0);
  v26 = v5->fields.stoneSummon;
  if ( !v26 )
    goto LABEL_21;
  v27 = v26->fields.single;
  if ( !v27 )
    goto LABEL_21;
  SummonInfoControl__SetPriceText(v5, v27->fields.infoLabel, -1, (System_String_o *)StringLiteral_26433/*"{0}"*/, v25);
}


void SummonInfoControl__TicketGacha(
        SummonInfoControl_o *this,
        GachaEntity_o *payGachaEnt,
        int32_t ticketNum,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
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

  if ( (byte_5934A40 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_26381/*"{0:#,0}"*/);
    byte_5934A40 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_26433/*"{0}"*/, v9);
  v13 = this->fields.ticketSummon;
  if ( !v13 )
    goto LABEL_12;
  v14 = v13->fields.onePay;
  if ( !v14
    || (SummonInfoControl__SetPriceText(
          this,
          v14->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_26381/*"{0:#,0}"*/,
          v12),
        (v15 = this->fields.ticketSummon) == 0)
    || (multiPay = v15->fields.multiPay) == 0
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_26433/*"{0}"*/, v19),
        (v21 = this->fields.ticketSummon) == 0) )
  {
LABEL_12:
    sub_21FFECC(v7, v8);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v21->fields.multiPay, 0, 1, 0, 0, v20);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v22);
}


bool SummonInfoControl__TryGetTicket(SummonInfoControl_o *this, int32_t *ticketNum, const MethodInfo *method)
{
  int v5; // w8
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  int32_t num; // w8
  bool result; // w0
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5934A3F & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    byte_5934A3F = 1;
  }
  v5 = *(&DataManager_TypeInfo->_2.cctor_finished + 1);
  entity = 0;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, ticketNum, method);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserItemMaster___);
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
  num = (int)entity;
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( entity )
    {
      result = entity->fields.num > 0;
LABEL_12:
      num = entity->fields.num;
      goto LABEL_13;
    }
LABEL_14:
    sub_21FFECC(Master_object, v7);
  }
  result = 0;
  if ( entity )
    goto LABEL_12;
LABEL_13:
  *ticketNum = num;
  return result;
}


bool SummonInfoControl__TrySetBonusDigitSprites(
        SummonInfoControl_o *this,
        System_String_array *splitNum,
        SummonInfoControl_BonusDigitSpriteSet_array *digitSpriteSets,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  il2cpp_array_size_t max_length; // x9
  int v8; // w8
  unsigned __int64 v9; // x22
  struct UISprite_o **p_glowImg; // x24
  UnityEngine_Object_o *v11; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *v14; // x21
  __int64 v15; // x22
  struct UISprite_o **v16; // x25
  System_String_o **m_Items; // x26
  UISprite_o *v18; // x21
  System_String_o *v19; // x0
  __int64 v20; // x1
  UISprite_o *v21; // x21

  if ( (byte_5934A4C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/);
    sub_21FFC50(&StringLiteral_18284/*"btn_txt_bonus_{0}"*/);
    byte_5934A4C = 1;
  }
  v6 = 0;
  if ( splitNum && digitSpriteSets )
  {
    max_length = splitNum->max_length;
    v8 = digitSpriteSets->max_length;
    if ( (_DWORD)max_length == v8 )
    {
      if ( (int)max_length >= 1 )
      {
        v9 = 0;
        v8 = splitNum->max_length;
        p_glowImg = &digitSpriteSets->m_Items[0].fields.glowImg;
        while ( v9 < (unsigned int)v8 )
        {
          v11 = (UnityEngine_Object_o *)*(p_glowImg - 1);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, splitNum, digitSpriteSets);
          v6 = UnityEngine_Object__op_Equality(v11, 0, 0);
          if ( v6 )
            goto LABEL_27;
          if ( v9 >= LODWORD(digitSpriteSets->max_length) )
            break;
          v14 = (UnityEngine_Object_o *)*p_glowImg;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v12, v13);
          v6 = UnityEngine_Object__op_Equality(v14, 0, 0);
          if ( v6 )
            goto LABEL_27;
          v8 = digitSpriteSets->max_length;
          ++v9;
          p_glowImg += 2;
          if ( (__int64)v9 >= v8 )
            goto LABEL_17;
        }
LABEL_29:
        sub_21FFED4(v6);
      }
LABEL_17:
      if ( v8 >= 1 )
      {
        v15 = 0;
        v16 = &digitSpriteSets->m_Items[0].fields.glowImg;
        m_Items = splitNum->m_Items;
        while ( (unsigned int)v15 < v8 && (unsigned int)v15 < LODWORD(splitNum->max_length) )
        {
          v18 = *(v16 - 1);
          v19 = System_String__Format((System_String_o *)StringLiteral_18284/*"btn_txt_bonus_{0}"*/, (Il2CppObject *)m_Items[v15], 0);
          if ( !v18 )
            goto LABEL_30;
          UISprite__set_spriteName(v18, v19, 0);
          if ( (unsigned int)v15 >= LODWORD(digitSpriteSets->max_length)
            || (unsigned int)v15 >= LODWORD(splitNum->max_length) )
          {
            break;
          }
          v21 = *v16;
          v19 = System_String__Format((System_String_o *)StringLiteral_18285/*"btn_txt_bonus_{0}_glow"*/, (Il2CppObject *)m_Items[v15], 0);
          if ( !v21 )
LABEL_30:
            sub_21FFECC(v19, v20);
          UISprite__set_spriteName(v21, v19, 0);
          v8 = digitSpriteSets->max_length;
          ++v15;
          v16 += 2;
          if ( (int)v15 >= v8 )
            goto LABEL_26;
        }
        goto LABEL_29;
      }
LABEL_26:
      LOBYTE(v6) = 1;
    }
    else
    {
LABEL_27:
      LOBYTE(v6) = 0;
    }
  }
  return v6;
}


void SummonInfoControl__TutorialGacha(SummonInfoControl_o *this, GachaEntity_o *payGachaEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SummonInfoControl_SummonObjInfo_o *stoneSummon; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  struct SummonInfoControl_SummonObjInfo_o *v9; // x8
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
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

  if ( (byte_5934A3E & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    byte_5934A3E = 1;
  }
  stoneSummon = this->fields.stoneSummon;
  *(_QWORD *)servantEquipSum = 0;
  SummonInfoControl__SetCurrentSummonInfo(this, stoneSummon, 1, v3);
  v9 = this->fields.stoneSummon;
  if ( !v9 )
    goto LABEL_19;
  GameObjectExtensions__SetLocalPositionY(v9->fields.singleSummonInfo, 0.0, 0);
  haveStoneNum = this->fields.haveStoneNum;
  userFreeStone = this->fields.userFreeStone;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v10, v11);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)UserServantMaster__getCountWithoutMaterial(
                                    (UserServantMaster_o *)Master_object,
                                    &servantEquipSum[1],
                                    servantEquipSum,
                                    0);
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
  {
    if ( !payGachaEnt )
      goto LABEL_19;
    this->fields.gachaTime = payGachaEnt->fields.drawNum2;
    Master_object = (Il2CppObject *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0);
    v15 = 2;
  }
  else
  {
    if ( !payGachaEnt )
      goto LABEL_19;
    this->fields.gachaTime = payGachaEnt->fields.drawNum1;
    Master_object = (Il2CppObject *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0);
    v15 = 1;
  }
  v16 = this->fields.stoneSummon;
  this->fields.price = (int)Master_object;
  this->fields.shopIdIdx = v15;
  if ( !v16
    || (SummonInfoControl__SetSummonGiftDisp(this, v16->fields.single, 0, 1, 0, 0, v14),
        (v18 = this->fields.stoneSummon) == 0)
    || (single = v18->fields.single) == 0
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_26433/*"{0}"*/, v17),
        (v21 = this->fields.stoneSummon) == 0)
    || (v22 = v21->fields.single) == 0 )
  {
LABEL_19:
    sub_21FFECC(Master_object, v8);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_object,
    this->fields.gachaTime,
    v22->fields.numImg,
    v22->fields.bonusInfo,
    v20);
}


void SummonInfoControl___SetSummonDispInfo_b__155_0(
        SummonInfoControl_o *this,
        int32_t stoneCount,
        const MethodInfo *method)
{
  _BOOL8 SelfUserGame; // x0
  __int64 v5; // x1
  UserGameEntity_o *v6; // x8
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  entity = 0;
  SelfUserGame = UserGameMaster__TryGetSelfUserGame(&entity, 0);
  if ( SelfUserGame )
  {
    v6 = entity;
    if ( !entity )
      sub_21FFECC(SelfUserGame, v5);
    this->fields.haveStoneNum = *(_DWORD *)((char *)&qword_B8 + (_QWORD)entity);
    *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)((char *)&dword_B0 + (_QWORD)v6);
  }
}


GachaEntity_o *SummonInfoControl__get_CurrentGachaEntity(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v2 = this;
  if ( (byte_5934A35 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_21FFC50(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_5934A35 = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0 )
    sub_21FFECC(this, method);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_3EDD388 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
}


ViewGachaFeaturedServantEntity_o *SummonInfoControl__get_CurrentGachaFeaturedServantEntity(
        SummonInfoControl_o *this,
        const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8
  ViewGachaFeaturedServantEntity_o *entity; // [xsp+8h] [xbp-8h] BYREF

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)this->fields.viewGachaFeaturedServantMaster) == 0 )
    sub_21FFECC(this, method);
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
  __int64 v2; // x2
  UnityEngine_Object_o *multiExSummonInfoLayout; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v10; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__147_0; // x21
  Il2CppObject *v13; // x22
  struct SummonInfoControl___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5934A34 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    sub_21FFC50(&System_Func_SummonInfoLayout__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__147_0__);
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    byte_5934A34 = 1;
  }
  multiExSummonInfoLayout = (UnityEngine_Object_o *)this->fields.multiExSummonInfoLayout;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(multiExSummonInfoLayout, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_21FFECC(0, v6);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_388420C *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v10 = SummonInfoControl___c_TypeInfo;
    if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v7, v8);
      v10 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__147_0 = (System_Func_object__bool__o *)static_fields->__9__147_0;
    if ( !_9__147_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__147_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__147_0,
        v13,
        Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__147_0__,
        0);
      v14 = SummonInfoControl___c_TypeInfo->static_fields;
      v14->__9__147_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__147_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v14->__9__147_0,
        (int32_t)_9__147_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            Components_object,
            (System_Func_TSource__bool__o *)_9__147_0,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    this->fields.multiExSummonInfoLayout = (struct SummonInfoLayout_o *)v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.multiExSummonInfoLayout,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return this->fields.multiExSummonInfoLayout;
}


SummonInfoLayout_o *SummonInfoControl__get_SummonInfoLayout(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *summonInfoLayout; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v10; // x8
  struct SummonInfoControl___c_StaticFields *static_fields; // x9
  System_Func_object__bool__o *_9__145_0; // x21
  Il2CppObject *v13; // x22
  struct SummonInfoControl___c_StaticFields *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_5934A33 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    sub_21FFC50(&System_Func_SummonInfoLayout__bool__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SummonInfoControl___c__get_SummonInfoLayout_b__145_0__);
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    byte_5934A33 = 1;
  }
  summonInfoLayout = (UnityEngine_Object_o *)this->fields.summonInfoLayout;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(summonInfoLayout, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_21FFECC(0, v6);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_388420C *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v10 = SummonInfoControl___c_TypeInfo;
    if ( !*(&SummonInfoControl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo, v7, v8);
      v10 = SummonInfoControl___c_TypeInfo;
    }
    static_fields = v10->static_fields;
    _9__145_0 = (System_Func_object__bool__o *)static_fields->__9__145_0;
    if ( !_9__145_0 )
    {
      if ( !*(&v10->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v10, v7, v8);
        static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      }
      v13 = (Il2CppObject *)static_fields->__9;
      _9__145_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__145_0, v13, Method_SummonInfoControl___c__get_SummonInfoLayout_b__145_0__, 0);
      v14 = SummonInfoControl___c_TypeInfo->static_fields;
      v14->__9__145_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__145_0;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v14->__9__145_0,
        (int32_t)_9__145_0,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
    }
    v21 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
            Components_object,
            (System_Func_TSource__bool__o *)_9__145_0,
            (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    this->fields.summonInfoLayout = (struct SummonInfoLayout_o *)v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.summonInfoLayout,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  return this->fields.summonInfoLayout;
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  __int64 (__fastcall *v13)(); // x8
  Il2CppObject *m_target; // x9
  char v15; // w21
  char v16; // w0
  __int64 v17; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1FF3B24;
LABEL_16:
      this->fields.invoke_impl = (intptr_t)v13;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !v12 )
    {
      if ( this->fields.method_is_virtual )
      {
        v15 = sub_21FFD20(method);
        v16 = sub_22002A4(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1FF3C1C;
          else
            v13 = sub_1FF3BE0;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1FF3B5C;
        }
        else
        {
          v13 = sub_1FF3B34;
        }
      }
      else
      {
        v13 = sub_1FF3B08;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1FF3AC0;
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
  return (System_IAsyncResult_o *)sub_21FFC04(this, &v6, callback, object);
}


void SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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
  int v2; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1

  v2 = (unsigned __int8)byte_5931940;
  *(_OWORD *)&this->fields.Top.fields.x = xmmword_E94210;
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712;
  if ( !v2 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5934A5F & 1) == 0 )
  {
    sub_21FFC50(&SummonInfoControl___c_TypeInfo);
    byte_5934A5F = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonInfoControl___c_TypeInfo->static_fields->__9 = (struct SummonInfoControl___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)SummonInfoControl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SummonInfoControl___c___ctor(SummonInfoControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SummonInfoControl___c___GetBonusSplitNum_b__180_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  if ( !*(_DWORD *)(qword_594C0B0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0B0, x, method);
  return System_Char__ToString((uint16_t)&v4, 0);
}


void SummonInfoControl___c___InitSummonBtnDisp_b__158_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  __int64 v5; // x2
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_5934A60 & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5934A60 = 1;
  }
  if ( !x )
    goto LABEL_15;
  singleSummonInfo = (UnityEngine_Object_o *)x->fields.singleSummonInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  if ( UnityEngine_Object__op_Inequality(singleSummonInfo, 0, 0) )
  {
    this = (SummonInfoControl___c_o *)x->fields.singleSummonInfo;
    if ( !this )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  }
  multiSummonInfo = (UnityEngine_Object_o *)x->fields.multiSummonInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, v5);
  if ( UnityEngine_Object__op_Inequality(multiSummonInfo, 0, 0) )
  {
    this = (SummonInfoControl___c_o *)x->fields.multiSummonInfo;
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      return;
    }
LABEL_15:
    sub_21FFECC(this, x);
  }
}


void SummonInfoControl___c___SetMultiTimeExButton_b__171_0(
        SummonInfoControl___c_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2

  if ( (byte_5934A61 & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_21FFC50(&AtlasManager_TypeInfo);
    byte_5934A61 = 1;
  }
  if ( !sprite )
    sub_21FFECC(this, sprite);
  UISprite__set_spriteName(sprite, **(System_String_o ***)(qword_594C0B8 + 184), 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetEventSprite(sprite, spriteName, 0);
}


System_String_o *SummonInfoControl___c___SetSummonGiftDisp_b__179_0(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  if ( !*(_DWORD *)(qword_594C0B0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0B0, x, method);
  return System_Char__ToString((uint16_t)&v4, 0);
}


System_String_o *SummonInfoControl___c___SetSummonGiftDisp_b__179_1(
        SummonInfoControl___c_o *this,
        uint16_t x,
        const MethodInfo *method)
{
  uint16_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = x;
  if ( !*(_DWORD *)(qword_594C0B0 + 228) )
    j_il2cpp_runtime_class_init_0(qword_594C0B0, x, method);
  return System_Char__ToString((uint16_t)&v4, 0);
}


bool SummonInfoControl___c___get_MultiExSummonInfoLayout_b__147_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.type == 1;
}


bool SummonInfoControl___c___get_SummonInfoLayout_b__145_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return x->fields.type == 0;
}


void SummonInfoControl___c__DisplayClass187_0___ctor(
        SummonInfoControl___c__DisplayClass187_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SummonInfoControl___c__DisplayClass187_0___SetSummonButtonsCollider_b__0(
        SummonInfoControl___c__DisplayClass187_0_o *this,
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
    sub_21FFECC(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, this->fields.onOff, v9);
}