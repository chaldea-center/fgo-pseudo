void SummonInfoControl___cctor(const MethodInfo *method)
{
  struct SummonInfoControl_StaticFields *static_fields; // x8

  if ( (byte_4D2CDFC & 1) == 0 )
  {
    sub_1C93AD4(&SummonInfoControl_TypeInfo);
    byte_4D2CDFC = 1;
  }
  static_fields = SummonInfoControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->OPEN_TIME = xmmword_D02050;
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  struct System_Object_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  Il2CppClass **v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct System_Object_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  Il2CppClass **v55; // x0
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct System_Object_array *v72; // x8
  _QWORD *v73; // x9
  __int64 v74; // x10
  Il2CppClass **v75; // x0
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  const MethodInfo *v82; // x1

  if ( (byte_4D2CDD9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
    byte_4D2CDD9 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo___ctor__);
  if ( !v3 )
    goto LABEL_33;
  freeSummon = (Il2CppObject *)this->fields.freeSummon;
  items = v3->fields._items;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    v3->fields._size = size + 1;
    v15[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v15 + 4), (int32_t)freeSummon, v6, v7, v8, v9, v10, v11);
  }
  freeSummon = (Il2CppObject *)this->fields.friendPointSummon;
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
      freeSummon,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = &v22->obj.klass + v24;
    v3->fields._size = v24 + 1;
    v25[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v25 + 4), (int32_t)freeSummon, v16, v17, v18, v19, v20, v21);
  }
  freeSummon = (Il2CppObject *)this->fields.stoneSummon;
  v32 = v3->fields._items;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    v35 = &v32->obj.klass + v34;
    v3->fields._size = v34 + 1;
    v35[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v35 + 4), (int32_t)freeSummon, v26, v27, v28, v29, v30, v31);
  }
  freeSummon = (Il2CppObject *)this->fields.ticketSummon;
  v42 = v3->fields._items;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
  }
  else
  {
    v45 = &v42->obj.klass + v44;
    v3->fields._size = v44 + 1;
    v45[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v45 + 4), (int32_t)freeSummon, v36, v37, v38, v39, v40, v41);
  }
  freeSummon = (Il2CppObject *)this->fields.chargeSummon;
  v52 = v3->fields._items;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = &v52->obj.klass + v54;
    v3->fields._size = v54 + 1;
    v55[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v55 + 4), (int32_t)freeSummon, v46, v47, v48, v49, v50, v51);
  }
  freeSummon = (Il2CppObject *)this->fields.oneExSummon;
  v62 = v3->fields._items;
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
      *(const MethodInfo_387999C **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
  }
  else
  {
    v65 = &v62->obj.klass + v64;
    v3->fields._size = v64 + 1;
    v65[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v65 + 4), (int32_t)freeSummon, v56, v57, v58, v59, v60, v61);
  }
  freeSummon = (Il2CppObject *)this->fields.multiExSummon;
  v72 = v3->fields._items;
  v73 = Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__Add__;
  ++v3->fields._version;
  if ( !v72 )
LABEL_33:
    sub_1C93D2C(v4, freeSummon);
  v74 = v3->fields._size;
  if ( (unsigned int)v74 >= LODWORD(v72->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v3,
      freeSummon,
      *(const MethodInfo_387999C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
  }
  else
  {
    v75 = &v72->obj.klass + v74;
    v3->fields._size = v74 + 1;
    v75[4] = (Il2CppClass *)freeSummon;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v75 + 4), (int32_t)freeSummon, v66, v67, v68, v69, v70, v71);
  }
  this->fields.summonObjInfos = (struct System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__o *)v3;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.summonObjInfos, (int32_t)v3, v76, v77, v78, v79, v80, v81);
  SummonInfoControl__InitMasterData(this, v82);
}


void SummonInfoControl__ClickBase(SummonInfoControl_o *this, int32_t seKind, const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SummonInfoControl_ClickDelegate_o *clickCallbackFunc; // x8

  if ( (byte_4D2CDF7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SummonInfoControl_ClickBase__);
    byte_4D2CDF7 = 1;
  }
  v5 = Method_SummonInfoControl_ClickBase__;
  if ( (*((_BYTE *)Method_SummonInfoControl_ClickBase__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_SummonInfoControl_ClickBase__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *animationCallback; // x19

  animationCallback = this->fields.animationCallback;
  this->fields.animationCallback = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.animationCallback, 0, v2, v3, v4, v5, v6, v7);
  ActionExtensions__Call(animationCallback, 0);
}


void SummonInfoControl__FitToImageSize(SummonInfoControl_o *this, UISprite_o *image, const MethodInfo *method)
{
  if ( !image )
    sub_1C93D2C(this, 0);
  ((void (__fastcall *)(UISprite_o *, const MethodInfo *))image->klass->vtable._33_MakePixelPerfect.methodPtr)(
    image,
    image->klass->vtable._33_MakePixelPerfect.method);
}


int32_t SummonInfoControl__GetBonusSelectLineupCount(SummonInfoControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v3; // x20
  System_Int32_array *Master_object; // x0
  __int64 gachaBonusSelectLineupId; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  GachaBonusSelectEntity_array *v7; // x19
  int max_length; // w8
  unsigned int v9; // w22
  GachaBonusSelectEntity_o *v10; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  System_Collections_Generic_List_int__o *v14; // x19
  int32_t current; // w20
  Il2CppObject *v16; // x0
  __int64 v17; // x1
  _BOOL8 EntityList; // x0
  __int64 giftId; // x1
  GachaBonusSelectLineupEntity_array *v20; // x20
  int v21; // w8
  int i; // w22
  GachaBonusSelectLineupEntity_o *v23; // x8
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  System_Collections_Generic_List_int__o *v27; // x20
  int32_t v28; // w19
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  GiftEntity_array *GiftListById; // x0
  __int64 objectId; // x1
  GiftEntity_array *v33; // x19
  il2cpp_array_size_t v34; // x8
  __int64 v35; // x23
  GiftEntity_o *v36; // x9
  struct System_Int32_array *v37; // x9
  _QWORD *v38; // x10
  __int64 v39; // x11
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_List_Enumerator_int__o v42; // [xsp+0h] [xbp-A0h] BYREF
  GachaBonusSelectLineupEntity_array *gachaBonusSelectLineupEntities; // [xsp+18h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v44; // [xsp+20h] [xbp-80h] BYREF
  GachaBonusSelectEntity_array *entityArray; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4D2CDFB & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaBonusSelectMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GiftMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Distinct_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D2CDFB = 1;
  }
  entityArray = 0;
  memset(&v44, 0, sizeof(v44));
  gachaBonusSelectLineupEntities = 0;
  v3 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v3,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (System_Int32_array *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaBonusSelectMaster___);
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
    v7 = entityArray;
    if ( !entityArray )
      goto LABEL_68;
    max_length = entityArray->max_length;
    if ( max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( v9 >= max_length )
          sub_1C93D34(Master_object);
        v10 = v7->m_Items[v9];
        if ( !v10 )
          break;
        if ( !v3 )
          break;
        gachaBonusSelectLineupId = (unsigned int)v10->fields.gachaBonusSelectLineupId;
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
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v3->fields._size = size + 1;
          items->m_Items[size] = gachaBonusSelectLineupId;
        }
        max_length = v7->max_length;
        if ( (int)++v9 >= max_length )
          goto LABEL_19;
      }
LABEL_68:
      sub_1C93D2C(Master_object, gachaBonusSelectLineupId);
    }
  }
LABEL_19:
  v14 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v3 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    v3,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = v42;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v44,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v44.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v16 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaBonusSelectLineupMaster___);
    if ( !v16 )
      sub_1C93D2C(0, v17);
    EntityList = GachaBonusSelectLineupMaster__TryGetEntityList(
                   (GachaBonusSelectLineupMaster_o *)v16,
                   &gachaBonusSelectLineupEntities,
                   current,
                   0);
    if ( EntityList )
    {
      v20 = gachaBonusSelectLineupEntities;
      if ( !gachaBonusSelectLineupEntities )
        sub_1C93D2C(EntityList, giftId);
      v21 = gachaBonusSelectLineupEntities->max_length;
      if ( v21 >= 1 )
      {
        for ( i = 0; i < v21; ++i )
        {
          if ( i >= (unsigned int)v21 )
            sub_1C93D34(EntityList);
          v23 = v20->m_Items[i];
          if ( !v23 )
            sub_1C93D2C(EntityList, giftId);
          if ( !v14 )
            sub_1C93D2C(EntityList, giftId);
          giftId = (unsigned int)v23->fields.giftId;
          v24 = v14->fields._items;
          v25 = Method_System_Collections_Generic_List_int__Add__;
          ++v14->fields._version;
          if ( !v24 )
            sub_1C93D2C(EntityList, giftId);
          v26 = v14->fields._size;
          if ( (unsigned int)v26 >= LODWORD(v24->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v14,
              giftId,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
          }
          else
          {
            v14->fields._size = v26 + 1;
            v24->m_Items[v26] = giftId;
          }
          v21 = v20->max_length;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v44,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v27 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !v14 )
    goto LABEL_68;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    v14,
    (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v44 = v42;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v44,
            (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v28 = v44.fields._current;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v29 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GiftMaster___);
    if ( !v29 )
      sub_1C93D2C(0, v30);
    GiftListById = GiftMaster__GetGiftListById((GiftMaster_o *)v29, v28, 0);
    v33 = GiftListById;
    if ( !GiftListById )
      sub_1C93D2C(0, objectId);
    v34 = GiftListById->max_length;
    if ( v34 && (int)v34 >= 1 )
    {
      v35 = 0;
      do
      {
        if ( (unsigned int)v35 >= (unsigned int)v34 )
          sub_1C93D34(GiftListById);
        v36 = v33->m_Items[v35];
        if ( !v36 )
          sub_1C93D2C(GiftListById, objectId);
        if ( v36->fields.type == 1 )
        {
          if ( !v27 )
            sub_1C93D2C(GiftListById, objectId);
          objectId = (unsigned int)v36->fields.objectId;
          v37 = v27->fields._items;
          v38 = Method_System_Collections_Generic_List_int__Add__;
          ++v27->fields._version;
          if ( !v37 )
            sub_1C93D2C(GiftListById, objectId);
          v39 = v27->fields._size;
          if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v27,
              objectId,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            v34 = v33->max_length;
          }
          else
          {
            v27->fields._size = v39 + 1;
            v37->m_Items[v39] = objectId;
          }
        }
        ++v35;
      }
      while ( (int)v35 < (int)v34 );
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v44,
    (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v40 = System_Linq_Enumerable__Distinct_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v27,
          (const MethodInfo_31C72A8 *)Method_System_Linq_Enumerable_Distinct_int___);
  Master_object = System_Linq_Enumerable__ToArray_int_(
                    v40,
                    (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
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
  if ( (byte_4D2CDEF & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    byte_4D2CDEF = 1;
  }
  if ( !obj
    || (this = (SummonInfoControl_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Transform__Find((UnityEngine_Transform_o *)this, targetName, 0)) == 0
    || (this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0 )
  {
    sub_1C93D2C(this, obj);
  }
  return (UISprite_o *)UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)this,
                         (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
}


int32_t SummonInfoControl__GetGroupGachaId(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct VaildGachaInfo_o *currentSummonData; // x8

  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1C93D2C(this, method);
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
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x0
  __int64 v11; // x1
  ConstantMaster_o *v12; // x20
  Il2CppObject *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D2CDDA & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_14949/*"USER_FREE_STONE"*/);
    sub_1C93AD4(&StringLiteral_13636/*"TUTORIAL_GACHA_ID"*/);
    byte_4D2CDDA = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaMaster___);
  this->fields.gachaMaster = (struct GachaMaster_o *)Master_object;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.gachaMaster, (int32_t)Master_object, v4, v5, v6, v7, v8, v9);
  v10 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantMaster___);
  if ( !v10 )
    sub_1C93D2C(0, v11);
  v12 = (ConstantMaster_o *)v10;
  this->fields.tutorialGachaId = ConstantMaster__GetValue(
                                   (ConstantMaster_o *)v10,
                                   (System_String_o *)StringLiteral_13636/*"TUTORIAL_GACHA_ID"*/,
                                   0);
  this->fields.userFreeStone = ConstantMaster__GetValue(v12, (System_String_o *)StringLiteral_14949/*"USER_FREE_STONE"*/, 0);
  v13 = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ViewGachaFeaturedServantMaster___);
  this->fields.viewGachaFeaturedServantMaster = (struct ViewGachaFeaturedServantMaster_o *)v13;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.viewGachaFeaturedServantMaster,
    (int32_t)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
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
    sub_1C93D2C(v4, v5);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2CDDD & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_1C93AD4(&Method_SummonInfoControl___c__InitSummonBtnDisp_b__156_0__);
    sub_1C93AD4(&SummonInfoControl___c_TypeInfo);
    byte_4D2CDDD = 1;
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
    _9__156_0 = (System_Action_object__o *)sub_1C93D20(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    System_Action_object____ctor(_9__156_0, v6, Method_SummonInfoControl___c__InitSummonBtnDisp_b__156_0__, 0);
    static_fields = SummonInfoControl___c_TypeInfo->static_fields;
    static_fields->__9__156_0 = (struct System_Action_SummonInfoControl_SummonObjInfo__o *)_9__156_0;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__156_0,
      (int32_t)_9__156_0,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  if ( !summonObjInfos )
    sub_1C93D2C(v3, method);
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)_9__156_0,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w1
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7

  v4 = (UnityEngine_Component_o *)this;
  if ( (byte_4D2CDF4 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIWidget___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&SummonInfoControl_TypeInfo);
    this = (SummonInfoControl_o *)sub_1C93AD4(&StringLiteral_6008/*"EndAnimation"*/);
    byte_4D2CDF4 = 1;
  }
  if ( !target )
    goto LABEL_15;
  if ( !UnityEngine_GameObject__get_activeSelf(target, 0) )
    UnityEngine_GameObject__SetActive(target, 1, 0);
  this = (SummonInfoControl_o *)UnityEngine_GameObject__GetComponent_object_(
                                  target,
                                  (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIWidget___);
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
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v6->fields.eventReceiver,
        (int32_t)gameObject,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      v14 = StringLiteral_6008/*"EndAnimation"*/;
      v6->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6008/*"EndAnimation"*/;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.callWhenFinished, v14, v15, v16, v17, v18, v19, v20);
      return;
    }
LABEL_15:
    sub_1C93D2C(this, target);
  }
}


void SummonInfoControl__OffSetInfoBtn(SummonInfoControl_o *this, const MethodInfo *method)
{
  intptr_t gameObject; // x0
  const MethodInfo *v4; // x1
  UnityEngine_Component_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct UnityEngine_GameObject_o *summonDetailInfo; // x1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  UnityEngine_Component_c *klass; // x8
  __int64 v32; // x23
  unsigned int v33; // w22
  UnityEngine_GameObject_o *v34; // x21
  struct UnityEngine_Vector3_array *infoButtonLayouts; // x8

  if ( (byte_4D2CDDC & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_GameObject___TypeInfo);
    byte_4D2CDDC = 1;
  }
  gameObject = sub_1C93B7C(UnityEngine_GameObject___TypeInfo, 4);
  if ( !this->fields.possessionInfoButton )
    goto LABEL_27;
  v5 = (UnityEngine_Component_o *)gameObject;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject(
                           (UnityEngine_Component_o *)this->fields.possessionInfoButton,
                           0);
  if ( !v5 )
    goto LABEL_27;
  if ( !LODWORD(v5[1].klass) )
    goto LABEL_26;
  v5[1].monitor = (void *)gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[1].monitor, gameObject, v6, v7, v8, v9, v10, v11);
  gameObject = (intptr_t)this->fields.summonHistoryButton;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( LODWORD(v5[1].klass) <= 1 )
    goto LABEL_26;
  v5[1].fields.m_CachedPtr = gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[1].fields, gameObject, v12, v13, v14, v15, v16, v17);
  if ( LODWORD(v5[1].klass) <= 2 )
    goto LABEL_26;
  summonDetailInfo = this->fields.summonDetailInfo;
  v5[2].klass = (UnityEngine_Component_c *)summonDetailInfo;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[2], (int32_t)summonDetailInfo, v18, v19, v20, v21, v22, v23);
  gameObject = (intptr_t)this->fields.summonHelpInfo;
  if ( !gameObject )
    goto LABEL_27;
  gameObject = (intptr_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
  if ( LODWORD(v5[1].klass) <= 3 )
    goto LABEL_26;
  v5[2].monitor = (void *)gameObject;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v5[2].monitor, gameObject, v25, v26, v27, v28, v29, v30);
  klass = v5[1].klass;
  if ( (int)klass >= 1 )
  {
    v32 = 0;
    v33 = 0;
    while ( (unsigned int)v32 < (unsigned int)klass )
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
      klass = v5[1].klass;
      if ( (int)++v32 >= (int)klass )
        goto LABEL_22;
    }
LABEL_26:
    sub_1C93D34(gameObject);
  }
  v33 = 0;
LABEL_22:
  gameObject = (intptr_t)this->fields.buttonLayout;
  if ( !gameObject )
LABEL_27:
    sub_1C93D2C(gameObject, v4);
  if ( v33 == (_DWORD)klass )
    SummonInfoLayout__UpdateCustom((SummonInfoLayout_o *)gameObject, v4);
  else
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
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w21
  System_String_o *SummonDetailUrl; // x21
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_String_o *v18; // x0
  System_Action_o *closeCallbackFunc; // x19
  System_String_o *v20; // x20

  if ( (byte_4D2CDF8 & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SummonInfoControl_OnClickDetail__);
    sub_1C93AD4(&WebViewManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_15654/*"WEB_VIEW_TITLE_SUMMON"*/);
    byte_4D2CDF8 = 1;
  }
  v5 = Method_SummonInfoControl_OnClickDetail__;
  if ( (*((_BYTE *)Method_SummonInfoControl_OnClickDetail__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C93AEC(Method_SummonInfoControl_OnClickDetail__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData )
    sub_1C93D2C(v7, v8);
  id = currentSummonData->fields.id;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  SummonDetailUrl = NetworkManager__getSummonDetailUrl(id, 0);
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_15654/*"WEB_VIEW_TITLE_SUMMON"*/, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  v20 = v18;
  if ( !WebViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WebViewManager_TypeInfo);
  WebViewManager__OpenView(v20, SummonDetailUrl, closeCallbackFunc, 0);
}


void SummonInfoControl__OnClickFreeSummon(SummonInfoControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  int64_t v5; // x20
  int32_t DrawNumChangeTime; // w22
  __int64 v7; // x9
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // [xsp+20h] [xbp-40h]

  if ( (byte_4D2CDF5 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    byte_4D2CDF5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
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
    sub_1C93D2C(Time, v4);
  v7 = 484;
  if ( v5 < DrawNumChangeTime )
    v7 = 480;
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
    0,
    0,
    0,
    v9);
  SummonInfoControl__ClickBase(this, 0, v8);
}


void SummonInfoControl__OnClickGacha(SummonInfoControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  struct GachaRqParamData_o *requestData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  const MethodInfo *v8; // [xsp+20h] [xbp-20h]

  SummonInfoControl__SetRequestData(this, -1, -1, -1, 1, -1, -1, -1, -1, 0, 0, 0, v8);
  if ( this->fields.ticketNum >= 1 )
  {
    requestData = this->fields.requestData;
    if ( !requestData
      || (requestData->fields.gachaType = 5,
          requestData->fields.gachaResourceNum = this->fields.gachaTime,
          (currentSummonData = this->fields.currentSummonData) == 0) )
    {
      sub_1C93D2C(v3, v4);
    }
    requestData->fields.ticketItemId = currentSummonData->fields.ticketItemId;
  }
  SummonInfoControl__ClickBase(this, 0, v5);
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
    sub_1C93D2C(this, method);
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
  __int64 v4; // x1
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // [xsp+20h] [xbp-20h]

  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !CurrentGachaEntity
    || (this->fields.payGachaPrice = GachaEntity__getPayMultiTimePrice(CurrentGachaEntity, 0),
        (CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v5)) == 0) )
  {
    sub_1C93D2C(CurrentGachaEntity, v4);
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
  if ( (byte_4D2CDF6 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C93AD4(&Method_SummonInfoControl_OnClickSinglePayExGacha__);
    byte_4D2CDF6 = 1;
  }
  if ( v2->fields.isOneExUsePossible )
  {
    currentSummonData = (int32_t *)v2->fields.currentSummonData;
    v2->fields.payGachaPrice = 1;
    if ( !currentSummonData )
      sub_1C93D2C(this, method);
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
      v5 = (_QWORD *)sub_1C93AEC(Method_SummonInfoControl_OnClickSinglePayExGacha__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v5, v5[4]);
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
    sub_1C93D2C(this, label);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isDisp, 0);
}


void SummonInfoControl__SetAlphaSummonBtn(
        SummonInfoControl_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_animationCallback; // x20
  const MethodInfo *v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct VaildGachaInfo_o *beforeSummonData; // x0
  System_Action_o *klass; // x19
  __int64 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  p_animationCallback = (GrandQuestFolderBoardItem_o *)&this->fields.animationCallback;
  this->fields.animationCallback = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.animationCallback,
    (int32_t)callback,
    (int32_t)method,
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
    klass = (System_Action_o *)p_animationCallback->klass;
    p_animationCallback->klass = 0;
    sub_1C93A78(p_animationCallback, 0, (int32_t)v10, v11, v12, v13, v14, v15);
    ActionExtensions__Call(klass, 0);
    return;
  }
  SummonInfoControl__MoveAlpha(this, this->fields.currentBtnInfo, v10);
  if ( this->fields.isDispPayOneExSummon )
  {
    oneExSummon = this->fields.oneExSummon;
    if ( !oneExSummon )
      goto LABEL_11;
    SummonInfoControl__MoveAlpha(this, oneExSummon->fields.singleSummonInfo, v20);
  }
  if ( this->fields.isDispPayMultiExSummon )
  {
    multiExSummon = this->fields.multiExSummon;
    if ( multiExSummon )
    {
      SummonInfoControl__MoveAlpha(this, multiExSummon->fields.singleSummonInfo, v20);
      return;
    }
LABEL_11:
    sub_1C93D2C(v18, v19);
  }
}


void SummonInfoControl__SetButtonCollider(
        SummonInfoControl_o *this,
        UIButton_o *button,
        bool onOff,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v7; // x1

  if ( (byte_4D2CDF3 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CDF3 = 1;
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
                                                     (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___)) == 0 )
    {
      sub_1C93D2C(gameObject, v7);
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
    sub_1C93D2C(this, summonInfo);
  }
  v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalPositionX(v11, multiPayX, 0);
}


void SummonInfoControl__SetChargeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v4; // x1
  SummonInfoControl_o *CurrentGachaEntity; // x0
  System_String_o *Empty; // x1
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
  UILabel_o *bonusSelectLabel; // x21
  System_String_o *v20; // x22
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x0
  UILabel_o *bonusSelectTopLabel; // x21
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

  if ( (byte_4D2CDEA & 1) == 0 )
  {
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_2960/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/);
    sub_1C93AD4(&StringLiteral_2961/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    sub_1C93AD4(&StringLiteral_9286/*"N0"*/);
    byte_4D2CDEA = 1;
  }
  BonusSelectLineupCount = 0;
  SummonInfoControl__InitStoneSummon(this, method);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.chargeSummon, 0, v3);
  SummonInfoControl__SetSummonInfo_36126216(this, v4);
  chargeSummon = this->fields.chargeSummon;
  if ( !chargeSummon )
    goto LABEL_42;
  multiPay = chargeSummon->fields.multiPay;
  if ( !multiPay )
    goto LABEL_42;
  SummonInfoControl__SetPriceText(this, multiPay->fields.needLabel, -1, (System_String_o *)StringLiteral_25426/*"{0}"*/, v7);
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
    (System_String_o *)StringLiteral_25376/*"{0:#,0}"*/,
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
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_2961/*"BONUS_SELECT_BUTTON_SUB_LABEL"*/, 0);
    BonusSelectLineupCount = SummonInfoControl__GetBonusSelectLineupCount(this, v21);
    v22 = (Il2CppObject *)System_Int32__ToString_65934220(
                            (int32_t)&BonusSelectLineupCount,
                            (System_String_o *)StringLiteral_9286/*"N0"*/,
                            0);
    CurrentGachaEntity = (SummonInfoControl_o *)System_String__Format(v20, v22, 0);
    if ( bonusSelectLabel )
    {
      UILabel__set_text(bonusSelectLabel, (System_String_o *)CurrentGachaEntity, 0);
      bonusSelectTopLabel = this->fields.bonusSelectTopLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      CurrentGachaEntity = (SummonInfoControl_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2960/*"BONUS_SELECT_BUTTON_MAIN_LABEL"*/, 0);
      Empty = (System_String_o *)CurrentGachaEntity;
      goto LABEL_24;
    }
LABEL_42:
    sub_1C93D2C(CurrentGachaEntity, Empty);
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
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)CurrentGachaEntity, (v18 & 1) == 0, 0);
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
  if ( (v18 & 1) != 0 )
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
  GameObjectExtensions__SetLocalScale_36747236(v32, 1.0, 1.0, 0);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct UnityEngine_GameObject_o **v18; // x8
  struct UnityEngine_GameObject_o *v19; // x1

  v6 = this;
  if ( (byte_4D2CDF0 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CDF0 = 1;
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
  v18 = (struct UnityEngine_GameObject_o **)(isSingle ? p_fields : p_multiSummonInfo);
  if ( !v6 )
LABEL_19:
    sub_1C93D2C(this, summonObjInfo);
  v19 = *v18;
  v6->fields.currentBtnInfo = *v18;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v6->fields.currentBtnInfo, (int32_t)v19, v12, v13, v14, v15, v16, v17);
}


void SummonInfoControl__SetElevenBonusInfo(
        SummonInfoControl_o *this,
        GachaEntity_o *ent,
        bool ticket,
        SummonInfoControl_SummonObjInfo_o *summonObjInfo,
        int32_t oneCount,
        const MethodInfo *method)
{
  SummonInfoControl_o *v10; // x20
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  SummonInfoControl_SummonObjParts_o **p_onePay; // x26
  UISprite_o *numImg; // x24
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  const MethodInfo *v16; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t extraGroupId1; // w24
  UnityEngine_GameObject_o *v19; // x0
  SummonInfoControl_SummonObjParts_o *v20; // x8
  int v21; // w24
  UISprite_o *v22; // x24
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  const MethodInfo *v25; // x3
  UnityEngine_GameObject_o *v26; // x0
  const MethodInfo *v27; // x3
  bool v28; // w24
  UnityEngine_GameObject_o *v29; // x0
  SummonInfoControl_SummonObjParts_o *v30; // x8
  UISprite_o *bonusCount; // x25
  Il2CppObject *v32; // x0
  UnityEngine_GameObject_o *v33; // x0
  SummonInfoControl_o *v34; // x0
  const MethodInfo *v35; // x3
  UISprite_o *BonusSprite; // x25
  int v37; // w28
  Il2CppObject *v38; // x0
  SummonInfoControl_o *v39; // x0
  const MethodInfo *v40; // x3
  UISprite_o *v41; // x24
  Il2CppObject *v42; // x0
  UnityEngine_GameObject_o *v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  System_String_o **v45; // x24
  const MethodInfo *v46; // x4
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  const MethodInfo *v48; // x4
  int v49; // [xsp+8h] [xbp-58h] BYREF
  int32_t v50; // [xsp+Ch] [xbp-54h] BYREF

  v10 = this;
  if ( (byte_4D2CDE5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_17682/*"btn_txt_bonus_10times_plus1"*/);
    sub_1C93AD4(&StringLiteral_17656/*"btn_summon_bg2"*/);
    sub_1C93AD4(&StringLiteral_17655/*"btn_summon_bg1"*/);
    sub_1C93AD4(&StringLiteral_17683/*"btn_txt_bonus_1plus1"*/);
    sub_1C93AD4(&StringLiteral_17686/*"btn_txt_bonus_{0}_glow"*/);
    sub_1C93AD4(&StringLiteral_17752/*"btn_txt_summon{0:00}"*/);
    sub_1C93AD4(&StringLiteral_17684/*"btn_txt_bonus_count_{0}"*/);
    sub_1C93AD4(&StringLiteral_22609/*"num1"*/);
    sub_1C93AD4(&StringLiteral_17657/*"btn_summon_bg3"*/);
    sub_1C93AD4(&StringLiteral_22610/*"num1_glow"*/);
    this = (SummonInfoControl_o *)sub_1C93AD4(&StringLiteral_17685/*"btn_txt_bonus_{0}"*/);
    byte_4D2CDE5 = 1;
  }
  if ( !summonObjInfo )
    goto LABEL_98;
  p_onePay = &summonObjInfo->fields.onePay;
  onePay = summonObjInfo->fields.onePay;
  if ( !onePay )
    goto LABEL_98;
  numImg = onePay->fields.numImg;
  v50 = oneCount;
  v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
  v15 = System_String__Format((System_String_o *)StringLiteral_17752/*"btn_txt_summon{0:00}"*/, v14, 0);
  SummonInfoControl__SetGachaSprite(v10, numImg, v15, v16);
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
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPositionY(v19, 30.0, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !this )
      goto LABEL_98;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    this = (SummonInfoControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)DataManager__GetMasterData_object_(
                                    (DataManager_o *)this,
                                    (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_UserGachaExtraCountMaster___);
    if ( !this )
      goto LABEL_98;
    this = (SummonInfoControl_o *)UserGachaExtraCountMaster__getExtraCount(
                                    (UserGachaExtraCountMaster_o *)this,
                                    ent->fields.extraGroupId1,
                                    0);
    v20 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_98;
    v21 = (int)this;
    if ( (_DWORD)this == 9 )
    {
      v22 = v20->fields.numImg;
      v50 = 2;
      v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
      v24 = System_String__Format((System_String_o *)StringLiteral_17752/*"btn_txt_summon{0:00}"*/, v23, 0);
      SummonInfoControl__SetGachaSprite(v10, v22, v24, v25);
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
                UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17683/*"btn_txt_bonus_1plus1"*/, 0);
                if ( *p_onePay )
                {
                  this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
                  if ( this )
                  {
                    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                    GameObjectExtensions__SetLocalPosition_36745168(v26, 0.0, -35.0, 0);
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
                            UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17656/*"btn_summon_bg2"*/, 0);
                            if ( *p_onePay )
                            {
                              this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
                              if ( this )
                              {
                                UIButton__set_normalSprite(
                                  (UIButton_o *)this,
                                  (System_String_o *)StringLiteral_17656/*"btn_summon_bg2"*/,
                                  0);
                                if ( ticket )
                                {
LABEL_41:
                                  v28 = 1;
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
      sub_1C93D2C(this, ent);
    }
    this = (SummonInfoControl_o *)v20->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17682/*"btn_txt_bonus_10times_plus1"*/, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    GameObjectExtensions__SetLocalPosition_36745168(v29, 0.0, -34.0, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
    if ( !this )
      goto LABEL_98;
    UIWidget__SetDimensions((UIWidget_o *)this, 244, 38, 0);
    v30 = *p_onePay;
    if ( !*p_onePay )
      goto LABEL_98;
    if ( !ticket )
    {
      this = (SummonInfoControl_o *)v30->fields.singleDigit;
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
        v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v33, -36.0, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.remaining;
        if ( !this )
          goto LABEL_98;
        v34 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        BonusSprite = SummonInfoControl__GetBonusSprite(
                        v34,
                        (UnityEngine_GameObject_o *)v34,
                        (System_String_o *)StringLiteral_22609/*"num1"*/,
                        v35);
        v37 = 9 - v21;
        v50 = 9 - v21;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17685/*"btn_txt_bonus_{0}"*/, v38, 0);
        if ( !BonusSprite )
          goto LABEL_98;
        UISprite__set_spriteName(BonusSprite, (System_String_o *)this, 0);
        v39 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)BonusSprite, 0);
        v41 = SummonInfoControl__GetBonusSprite(
                v39,
                (UnityEngine_GameObject_o *)v39,
                (System_String_o *)StringLiteral_22610/*"num1_glow"*/,
                v40);
        v49 = v37;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v49);
        this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17686/*"btn_txt_bonus_{0}_glow"*/, v42, 0);
        if ( !v41 )
          goto LABEL_98;
        UISprite__set_spriteName(v41, (System_String_o *)this, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_98;
        v43 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v43, 0.825, 0);
        if ( !*p_onePay )
          goto LABEL_98;
        this = (SummonInfoControl_o *)(*p_onePay)->fields.bonusInfo;
        if ( !this )
          goto LABEL_98;
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v44, -29.7, 0);
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
      v30 = *p_onePay;
      if ( !*p_onePay )
        goto LABEL_98;
    }
    bonusCount = v30->fields.bonusCount;
    v50 = 9 - v21;
    v32 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v50);
    this = (SummonInfoControl_o *)System_String__Format((System_String_o *)StringLiteral_17684/*"btn_txt_bonus_count_{0}"*/, v32, 0);
    if ( !bonusCount )
      goto LABEL_98;
    UISprite__set_spriteName(bonusCount, (System_String_o *)this, 0);
LABEL_83:
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.buttonImg;
    v45 = (System_String_o **)(ticket ? &StringLiteral_17657/*"btn_summon_bg3"*/ : &StringLiteral_17655/*"btn_summon_bg1"*/);
    if ( !this )
      goto LABEL_98;
    UISprite__set_spriteName((UISprite_o *)this, *v45, 0);
    if ( !*p_onePay )
      goto LABEL_98;
    this = (SummonInfoControl_o *)(*p_onePay)->fields.button;
    if ( !this )
      goto LABEL_98;
    UIButton__set_normalSprite((UIButton_o *)this, *v45, 0);
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
  v28 = 0;
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
    v28 = 0;
  }
LABEL_92:
  SummonInfoControl__SetOneTimeExButton(v10, ent, ticket, v27);
  multiPay = summonObjInfo->fields.multiPay;
  if ( !multiPay )
    goto LABEL_98;
  SummonInfoControl__SetElevenBonusInfoSingle(
    this,
    ent->fields.drawNum2,
    multiPay->fields.numImg,
    multiPay->fields.bonusInfo,
    v46);
  SummonInfoControl__SetOneTimeFreeButton(v10, *p_onePay, oneCount, v28, v48);
}


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

  if ( (byte_4D2CDE6 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&StringLiteral_17681/*"btn_txt_bonus_10plus1"*/);
    sub_1C93AD4(&StringLiteral_17752/*"btn_txt_summon{0:00}"*/);
    byte_4D2CDE6 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = System_Math__Min_65947872(multiCount, 11, 0);
  v12 = v8;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  gameObject = System_String__Format((System_String_o *)StringLiteral_17752/*"btn_txt_summon{0:00}"*/, v9, 0);
  if ( !multiNumImg
    || (UISprite__set_spriteName(multiNumImg, gameObject, 0), !multiBonusInfo)
    || (gameObject = (System_String_o *)UnityEngine_Component__get_gameObject(
                                          (UnityEngine_Component_o *)multiBonusInfo,
                                          0)) == 0 )
  {
    sub_1C93D2C(gameObject, v11);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v8 > 10, 0);
  if ( v8 >= 11 )
    UISprite__set_spriteName(multiBonusInfo, (System_String_o *)StringLiteral_17681/*"btn_txt_bonus_10plus1"*/, 0);
}


void SummonInfoControl__SetEnableSummonBtn(SummonInfoControl_o *this, bool isEnable, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  struct VaildGachaInfo_o *currentSummonData; // x1
  _BOOL8 isDispSummonListDialog; // x1
  UnityEngine_GameObject_o *currentBtnInfo; // x0
  const MethodInfo *v13; // x2
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *v15; // x21
  struct VaildGachaInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8

  currentSummonData = this->fields.currentSummonData;
  this->fields.beforeSummonData = currentSummonData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.beforeSummonData,
    (int32_t)currentSummonData,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  currentBtnInfo = this->fields.currentBtnInfo;
  if ( !currentBtnInfo )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable, 0);
  SummonInfoControl__SetHelpBtnDisp(this, isEnable, v13);
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
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(v15, isDispSummonListDialog, 0);
  currentBtnInfo = (UnityEngine_GameObject_o *)this->fields.summonListButton;
  if ( !currentBtnInfo )
    goto LABEL_21;
  currentBtnInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)currentBtnInfo, 0);
  if ( isEnable )
  {
    v16 = this->fields.currentSummonData;
    if ( !v16 )
      goto LABEL_21;
    isDispSummonListDialog = v16->fields.isDispSummonListDialog;
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
    sub_1C93D2C(currentBtnInfo, isDispSummonListDialog);
  }
  UnityEngine_GameObject__SetActive(currentBtnInfo, isEnable && this->fields.isDispPayMultiExSummon, 0);
}


void SummonInfoControl__SetFreeSummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_o *v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  char v7; // w20
  UILabel_o *freeSummonCampaignLabel; // x21
  System_String_o *v9; // x22
  Il2CppObject *v10; // x23
  Il2CppObject *v11; // x0
  int64_t Time; // x0
  BalanceConfig_c *v13; // x8
  int64_t v14; // x20
  int64_t DrawNumChangeTime; // x22
  const MethodInfo *v16; // x3
  int64_t v17; // x20
  int64_t v18; // x22
  __int64 v19; // x9
  int32_t v20; // [xsp+8h] [xbp-48h] BYREF
  int32_t v21; // [xsp+Ch] [xbp-44h] BYREF
  int32_t maxNum[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4D2CDDE & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&UserGachaMaster_TypeInfo);
    sub_1C93AD4(&StringLiteral_6582/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_1116/*"0"*/);
    byte_4D2CDDE = 1;
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
  v7 = (char)gameObject;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.freeSummonCampaignLabel, 0);
  if ( !gameObject )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive(gameObject, v7 & 1, 0);
  freeSummonCampaignLabel = this->fields.freeSummonCampaignLabel;
  if ( (v7 & 1) != 0 )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6582/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_BUTTON_MSG"*/, 0);
    v21 = maxNum[1];
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v21);
    v20 = maxNum[0];
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_64467032(v9, v10, v11, 0);
    v4 = (System_String_o *)gameObject;
  }
  else
  {
    v4 = (System_String_o *)StringLiteral_1/*""*/;
  }
  if ( !freeSummonCampaignLabel )
    goto LABEL_35;
  UILabel__set_text(freeSummonCampaignLabel, v4, 0);
  if ( maxNum[1] >= 1 )
    this->fields.isFree = 1;
  if ( (v7 & 1) == 0 && !this->fields.isFree )
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
  UILabel__set_text((UILabel_o *)gameObject, (System_String_o *)StringLiteral_1116/*"0"*/, 0);
  if ( !this->fields.isFree )
  {
LABEL_33:
    SummonInfoControl__SetPointSummonInfo(this, (const MethodInfo *)v4);
    return;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Time = NetworkManager__getTime(0);
  v13 = BalanceConfig_TypeInfo;
  v14 = Time;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v13 = BalanceConfig_TypeInfo;
  }
  gameObject = this->fields.freeTxtInfoObj;
  if ( !gameObject
    || (DrawNumChangeTime = v13->static_fields->DrawNumChangeTime,
        UnityEngine_GameObject__SetActive(gameObject, v14 < DrawNumChangeTime, 0),
        (gameObject = this->fields.freeTenInfoObj) == 0) )
  {
LABEL_35:
    sub_1C93D2C(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive(gameObject, v14 >= DrawNumChangeTime, 0);
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.freeSummon, 1, v16);
  this->fields.price = 0;
  v17 = NetworkManager__getTime(0);
  v18 = BalanceConfig_TypeInfo->static_fields->DrawNumChangeTime;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  v19 = 484;
  if ( v17 < v18 )
    v19 = 480;
  this->fields.gachaTime = *(int32_t *)((char *)&BalanceConfig_TypeInfo->static_fields->CriticalRateToAddByQuickFirstBonus
                                      + v19);
}


void SummonInfoControl__SetGachaSprite(
        SummonInfoControl_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( !sprite )
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(summonHelpInfo, isDisp);
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
  __int64 v12; // x1
  int32_t price; // w24
  int32_t maxDrawNum; // w23
  bool v15; // w22
  struct SummonInfoControl_SummonObjInfo_o *multiExSummon; // x8
  const MethodInfo *v17; // x2
  GachaAppendEntity_o *v18; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  SummonInfoControl_o *v20; // x0
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
  const MethodInfo *v31; // x3
  struct VaildGachaInfo_o *v32; // x8
  int32_t appendPayType; // w8
  System_String_o **v34; // x8
  SummonInfoControl_o *v35; // x0
  struct SummonInfoControl_SummonObjInfo_o *v36; // x9
  struct SummonInfoControl_SummonObjParts_o *v37; // x9
  const MethodInfo *v38; // x3
  struct SummonInfoControl_SummonObjInfo_o *v39; // x8
  struct SummonInfoControl_SummonObjParts_o *v40; // x8
  NumSpriteComponent_o *multiExNumSprite; // x20
  int64_t appendGachaTime; // x21
  System_Action_object__object__o *v43; // x23
  System_String_o *v44; // x22
  Il2CppObject *v45; // x24
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  UISprite_o *multiExSummonSprite; // x20
  UnityEngine_GameObject_o *v54; // x0
  float v55; // s0
  const MethodInfo *v56; // x4
  UnityEngine_GameObject_o *v57; // x0
  float v58; // s0
  UnityEngine_GameObject_o *v59; // x0
  float v60; // s0
  struct SummonInfoControl_SummonObjInfo_o *v61; // x8
  struct SummonInfoControl_SummonObjParts_o *v62; // x8
  UISprite_o *v63; // [xsp+8h] [xbp-58h] BYREF
  UISprite_o *sprite; // [xsp+10h] [xbp-50h] BYREF
  GachaAppendEntity_o *entity; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_4D2CDE9 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_UISprite__string__TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&string_TypeInfo);
    sub_1C93AD4(&SummonInfoControl_TypeInfo);
    sub_1C93AD4(&Method_SummonInfoControl___c__SetMultiTimeExButton_b__169_0__);
    sub_1C93AD4(&SummonInfoControl___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_17656/*"btn_summon_bg2"*/);
    sub_1C93AD4(&StringLiteral_20543/*"img_bg_friendpointuse"*/);
    sub_1C93AD4(&StringLiteral_17747/*"btn_txt_summon"*/);
    sub_1C93AD4(&StringLiteral_17749/*"btn_txt_summon_num_0"*/);
    sub_1C93AD4(&StringLiteral_25378/*"{0:#,0}  "*/);
    sub_1C93AD4(&StringLiteral_20555/*"img_bg_saintquartzuse"*/);
    byte_4D2CDE9 = 1;
  }
  sprite = 0;
  entity = 0;
  v63 = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaAppendMaster___);
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
    Master_object = (void *)System_Math__Min_65947872(friendPoint / price, maxDrawNum, 0);
    v15 = (int)Master_object > 10;
    this->fields.appendGachaTime = (int)Master_object;
  }
  else
  {
    v15 = 0;
  }
  multiExSummon = this->fields.multiExSummon;
  if ( !multiExSummon )
    goto LABEL_75;
  Master_object = multiExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_75;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v15, 0);
  this->fields.isDispPayMultiExSummon = v15;
  if ( v15 )
  {
    v18 = entity;
    if ( entity )
    {
      currentSummonData = this->fields.currentSummonData;
      if ( currentSummonData )
      {
        currentSummonData->fields.appendPayType = entity->fields.type;
        currentSummonData->fields.appendShopIdIndex = v18->fields.idx;
        currentSummonData->fields.appendDrawNum = this->fields.appendGachaTime;
        if ( isTicket )
          summonInfo = this->fields.ticketSummon;
        v20 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
        if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
          v20 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
        }
        SummonInfoControl__SetButtonLocalPosX(
          v20,
          summonInfo,
          *((float *)&v20->fields.possessionInfoButton->monitor + 1),
          *(float *)&v20->fields.possessionInfoButton->fields.m_CachedPtr,
          v17);
        v21 = this->fields.multiExSummon;
        if ( v21 )
        {
          Master_object = v21->fields.singleSummonInfo;
          if ( Master_object )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
            v22 = this->fields.multiExSummon;
            if ( v22 )
            {
              single = v22->fields.single;
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
                  v25 = this->fields.multiExSummon;
                  if ( v25 )
                  {
                    v26 = v25->fields.single;
                    if ( v26 )
                    {
                      Master_object = v26->fields.bonusInfo;
                      if ( Master_object )
                      {
                        v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
                        GameObjectExtensions__SetLocalPositionX(v27, 1.0, 0);
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
                              GameObjectExtensions__SetLocalScaleX(v30, 1.0, 0);
                              v32 = this->fields.currentSummonData;
                              if ( v32 )
                              {
                                appendPayType = v32->fields.appendPayType;
                                if ( appendPayType == 1 )
                                  v34 = (System_String_o **)&StringLiteral_20555/*"img_bg_saintquartzuse"*/;
                                else
                                  v34 = (System_String_o **)(appendPayType == 3
                                                           ? &StringLiteral_20543/*"img_bg_friendpointuse"*/
                                                           : string_TypeInfo->static_fields);
                                v36 = this->fields.multiExSummon;
                                if ( v36 )
                                {
                                  v37 = v36->fields.single;
                                  if ( v37 )
                                  {
                                    SummonInfoControl__SetGachaSprite(this, v37->fields.infoBgImg, *v34, v31);
                                    v39 = this->fields.multiExSummon;
                                    if ( v39 )
                                    {
                                      v40 = v39->fields.single;
                                      if ( v40 )
                                      {
                                        SummonInfoControl__SetGachaSprite(
                                          this,
                                          v40->fields.buttonImg,
                                          (System_String_o *)StringLiteral_17656/*"btn_summon_bg2"*/,
                                          v38);
                                        multiExNumSprite = this->fields.multiExNumSprite;
                                        appendGachaTime = this->fields.appendGachaTime;
                                        Master_object = SummonInfoControl___c_TypeInfo;
                                        if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
                                        {
                                          j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
                                          Master_object = SummonInfoControl___c_TypeInfo;
                                        }
                                        v43 = *(System_Action_object__object__o **)(*((_QWORD *)Master_object + 23)
                                                                                  + 32LL);
                                        v44 = (System_String_o *)StringLiteral_17749/*"btn_txt_summon_num_0"*/;
                                        if ( !v43 )
                                        {
                                          if ( !*((_DWORD *)Master_object + 56) )
                                          {
                                            j_il2cpp_runtime_class_init_0(Master_object);
                                            Master_object = SummonInfoControl___c_TypeInfo;
                                          }
                                          v45 = (Il2CppObject *)**((_QWORD **)Master_object + 23);
                                          v43 = (System_Action_object__object__o *)sub_1C93D20(System_Action_UISprite__string__TypeInfo);
                                          System_Action_object__object____ctor(
                                            v43,
                                            v45,
                                            Method_SummonInfoControl___c__SetMultiTimeExButton_b__169_0__,
                                            0);
                                          static_fields = SummonInfoControl___c_TypeInfo->static_fields;
                                          static_fields->__9__169_0 = (struct System_Action_UISprite__string__o *)v43;
                                          sub_1C93A78(
                                            (GrandQuestFolderBoardItem_o *)&static_fields->__9__169_0,
                                            (int32_t)v43,
                                            v47,
                                            v48,
                                            v49,
                                            v50,
                                            v51,
                                            v52);
                                        }
                                        if ( multiExNumSprite )
                                        {
                                          NumSpriteComponent__SetSprite(
                                            multiExNumSprite,
                                            appendGachaTime,
                                            v44,
                                            (System_Action_UISprite__string__o *)v43,
                                            0,
                                            0);
                                          multiExSummonSprite = this->fields.multiExSummonSprite;
                                          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
                                            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
                                          AtlasManager__SetEventSprite(
                                            multiExSummonSprite,
                                            (System_String_o *)StringLiteral_17747/*"btn_txt_summon"*/,
                                            0);
                                          Master_object = this->fields.multiExSummonSprite;
                                          if ( Master_object )
                                          {
                                            v54 = UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)Master_object,
                                                    0);
                                            v55 = 38.0;
                                            if ( this->fields.appendGachaTime <= 99 )
                                              v55 = 25.0;
                                            GameObjectExtensions__SetLocalPositionX(v54, v55, 0);
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
                                                                          &v63,
                                                                          1,
                                                                          0);
                                                if ( ((unsigned __int8)Master_object & 1) != 0 )
                                                {
                                                  Master_object = sprite;
                                                  if ( !sprite )
                                                    goto LABEL_75;
                                                  v57 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)sprite,
                                                          0);
                                                  v58 = -34.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v58 = -22.0;
                                                  GameObjectExtensions__SetLocalPositionX(v57, v58, 0);
                                                  Master_object = v63;
                                                  if ( !v63 )
                                                    goto LABEL_75;
                                                  v59 = UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)v63,
                                                          0);
                                                  v60 = -57.0;
                                                  if ( this->fields.appendGachaTime > 99 )
                                                    v60 = -50.0;
                                                  GameObjectExtensions__SetLocalPositionX(v59, v60, 0);
                                                }
                                              }
                                              v61 = this->fields.multiExSummon;
                                              if ( v61 )
                                              {
                                                v62 = v61->fields.single;
                                                if ( v62 )
                                                {
                                                  SummonInfoControl__SetPriceText(
                                                    this,
                                                    v62->fields.infoLabel,
                                                    this->fields.appendGachaTime * this->fields.price,
                                                    (System_String_o *)StringLiteral_25378/*"{0:#,0}  "*/,
                                                    v56);
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
    sub_1C93D2C(Master_object, v12);
  }
  if ( isTicket )
    summonInfo = this->fields.ticketSummon;
  v35 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v35 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  SummonInfoControl__SetButtonLocalPosX(
    v35,
    summonInfo,
    *((float *)&v35->fields.possessionInfoButton->klass + 1),
    *(float *)&v35->fields.possessionInfoButton->monitor,
    v17);
}


void SummonInfoControl__SetOneTimeExButton(
        SummonInfoControl_o *this,
        GachaEntity_o *gachaEnt,
        bool isTicket,
        const MethodInfo *method)
{
  GachaAppendMaster_o *Master_object; // x0
  __int64 v8; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int v10; // w21
  struct VaildGachaInfo_o *v11; // x9
  struct VaildGachaInfo_o *v12; // x10
  GachaAppendEntity_o *v13; // x10
  int32_t drawNum; // w9
  struct SummonInfoControl_SummonObjInfo_o *oneExSummon; // x8
  const MethodInfo *v16; // x2
  SummonInfoControl_o *v17; // x0
  __int64 v18; // x8
  SummonInfoControl_SummonObjInfo_o *v19; // x20
  float *possessionInfoButton; // x8
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
  struct SummonInfoControl_SummonObjInfo_o *v37; // x8
  struct SummonInfoControl_SummonObjParts_o *v38; // x8
  UISprite_o *buttonImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v40; // x8
  struct SummonInfoControl_SummonObjParts_o *v41; // x8
  struct SummonInfoControl_SummonObjInfo_o *v42; // x8
  struct SummonInfoControl_SummonObjParts_o *v43; // x8
  struct SummonInfoControl_SummonObjInfo_o *v44; // x8
  struct SummonInfoControl_SummonObjParts_o *v45; // x8
  const MethodInfo *v46; // x3
  struct SummonInfoControl_SummonObjInfo_o *v47; // x8
  struct SummonInfoControl_SummonObjParts_o *v48; // x8
  UISprite_o *numImg; // x20
  struct SummonInfoControl_SummonObjInfo_o *v50; // x8
  struct SummonInfoControl_SummonObjParts_o *v51; // x8
  struct SummonInfoControl_SummonObjInfo_o *v52; // x8
  struct SummonInfoControl_SummonObjParts_o *v53; // x8
  struct SummonInfoControl_SummonObjInfo_o *v54; // x8
  struct SummonInfoControl_SummonObjParts_o *v55; // x8
  const MethodInfo *v56; // x6
  struct SummonInfoControl_SummonObjInfo_o *v57; // x8
  GachaAppendEntity_o *appendEnt; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v59; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v60; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D2CDE7 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaAppendMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&SummonInfoControl_TypeInfo);
    sub_1C93AD4(&StringLiteral_17658/*"btn_summon_bg5"*/);
    sub_1C93AD4(&StringLiteral_17729/*"btn_txt_reset"*/);
    sub_1C93AD4(&StringLiteral_20556/*"img_bg_saintquartzuse3"*/);
    sub_1C93AD4(&StringLiteral_24133/*"summon_txt_done"*/);
    sub_1C93AD4(&StringLiteral_17748/*"btn_txt_summon01"*/);
    sub_1C93AD4(&StringLiteral_17720/*"btn_txt_only_1"*/);
    sub_1C93AD4(&StringLiteral_1166/*"1"*/);
    byte_4D2CDE7 = 1;
  }
  appendEnt = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaAppendMaster___);
  if ( !Master_object )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)GachaAppendMaster__GetAppendSummonState(Master_object, gachaEnt, &appendEnt, 0);
  currentSummonData = this->fields.currentSummonData;
  v10 = (int)Master_object;
  v11 = (_DWORD)Master_object ? this->fields.currentSummonData : 0LL;
  v12 = (_DWORD)Master_object ? 0LL : this->fields.currentSummonData;
  if ( (_DWORD)Master_object )
  {
    v13 = appendEnt;
    if ( !appendEnt )
      goto LABEL_78;
    if ( !v11 )
      goto LABEL_78;
    v11->fields.appendPayType = appendEnt->fields.type;
    v11->fields.appendShopIdIndex = v13->fields.idx;
    if ( !currentSummonData )
      goto LABEL_78;
    drawNum = v13->fields.drawNum;
  }
  else
  {
    if ( !v12 )
      goto LABEL_78;
    drawNum = 0;
    v12->fields.appendPayType = 7;
    currentSummonData->fields.appendShopIdIndex = 0;
  }
  currentSummonData->fields.appendDrawNum = drawNum;
  oneExSummon = this->fields.oneExSummon;
  if ( !oneExSummon )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)oneExSummon->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, v10 != 0, 0);
  this->fields.isDispPayOneExSummon = v10 != 0;
  this->fields.isOneExUsePossible = v10 == 2;
  v17 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  v18 = 48;
  if ( isTicket )
    v18 = 56;
  v19 = *(SummonInfoControl_SummonObjInfo_o **)((char *)&this->klass + v18);
  if ( !SummonInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SummonInfoControl_TypeInfo);
    v17 = (SummonInfoControl_o *)SummonInfoControl_TypeInfo;
  }
  possessionInfoButton = (float *)v17->fields.possessionInfoButton;
  if ( !v10 )
  {
    SummonInfoControl__SetButtonLocalPosX(v17, v19, possessionInfoButton[1], possessionInfoButton[2], v16);
    return;
  }
  SummonInfoControl__SetButtonLocalPosX(v17, v19, possessionInfoButton[4], possessionInfoButton[5], v16);
  v21 = this->fields.oneExSummon;
  if ( !v21 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v21->fields.singleSummonInfo;
  if ( !Master_object )
    goto LABEL_78;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
  v22 = this->fields.oneExSummon;
  if ( !v22 )
    goto LABEL_78;
  single = v22->fields.single;
  if ( !single )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)single->fields.button;
  if ( !Master_object )
    goto LABEL_78;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(gameObject, SummonInfoControl_TypeInfo->static_fields->APD_SUMMON_BTN1_X, 0);
  v25 = this->fields.oneExSummon;
  if ( !v25 )
    goto LABEL_78;
  v26 = v25->fields.single;
  if ( !v26 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v26->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPosition_36745272(v27, 0.0, 34.0, 0.0, 0);
  v28 = this->fields.oneExSummon;
  if ( !v28 )
    goto LABEL_78;
  v29 = v28->fields.single;
  if ( !v29 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v29->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalPositionX(v30, 1.0, 0);
  v31 = this->fields.oneExSummon;
  if ( !v31 )
    goto LABEL_78;
  v32 = v31->fields.single;
  if ( !v32 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v32->fields.bonusCount;
  if ( !Master_object )
    goto LABEL_78;
  v33 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalScaleX(v33, 1.0, 0);
  v34 = this->fields.oneExSummon;
  if ( !v34 )
    goto LABEL_78;
  v35 = v34->fields.single;
  if ( !v35 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v35->fields.bonusInfo;
  if ( !Master_object )
    goto LABEL_78;
  v36 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  GameObjectExtensions__SetLocalScaleX(v36, 1.0, 0);
  v37 = this->fields.oneExSummon;
  if ( !v37 )
    goto LABEL_78;
  v38 = v37->fields.single;
  if ( !v38 )
    goto LABEL_78;
  buttonImg = v38->fields.buttonImg;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           buttonImg,
                                           (System_String_o *)StringLiteral_17658/*"btn_summon_bg5"*/,
                                           0);
  v40 = this->fields.oneExSummon;
  if ( !v40 )
    goto LABEL_78;
  v41 = v40->fields.single;
  if ( !v41 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           v41->fields.bonusCount,
                                           (System_String_o *)StringLiteral_17729/*"btn_txt_reset"*/,
                                           0);
  v42 = this->fields.oneExSummon;
  if ( !v42 )
    goto LABEL_78;
  v43 = v42->fields.single;
  if ( !v43 )
    goto LABEL_78;
  AtlasManager__SetEventSprite(v43->fields.bonusInfo, (System_String_o *)StringLiteral_17720/*"btn_txt_only_1"*/, 0);
  Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                           this->fields.oneExSummonSingleInfoSprite,
                                           (System_String_o *)StringLiteral_20556/*"img_bg_saintquartzuse3"*/,
                                           0);
  v44 = this->fields.oneExSummon;
  if ( !v44 )
    goto LABEL_78;
  v45 = v44->fields.single;
  if ( !v45 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v45->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_78;
  UILabel__set_text((UILabel_o *)Master_object, (System_String_o *)StringLiteral_1166/*"1"*/, 0);
  v47 = this->fields.oneExSummon;
  if ( !v47 )
    goto LABEL_78;
  v48 = v47->fields.single;
  if ( !v48 )
    goto LABEL_78;
  numImg = v48->fields.numImg;
  if ( this->fields.isOneExUsePossible )
  {
    SummonInfoControl__SetGachaSprite(this, numImg, (System_String_o *)StringLiteral_17748/*"btn_txt_summon01"*/, v46);
  }
  else
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    Master_object = (GachaAppendMaster_o *)AtlasManager__SetEventSprite(
                                             numImg,
                                             (System_String_o *)StringLiteral_24133/*"summon_txt_done"*/,
                                             0);
  }
  v50 = this->fields.oneExSummon;
  if ( !v50 )
    goto LABEL_78;
  v51 = v50->fields.single;
  if ( !v51 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v51->fields.buttonImg;
  v59.fields.r = 1.0;
  if ( !this->fields.isOneExUsePossible )
    v59.fields.r = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v59.fields.a = 1.0;
  v59.fields.g = v59.fields.r;
  v59.fields.b = v59.fields.r;
  UIWidget__set_color((UIWidget_o *)Master_object, v59, 0);
  v52 = this->fields.oneExSummon;
  if ( !v52 )
    goto LABEL_78;
  v53 = v52->fields.single;
  if ( !v53 )
    goto LABEL_78;
  Master_object = (GachaAppendMaster_o *)v53->fields.button;
  v60.fields.r = 1.0;
  if ( !this->fields.isOneExUsePossible )
    v60.fields.r = 0.5;
  if ( !Master_object )
    goto LABEL_78;
  v60.fields.a = 1.0;
  v60.fields.g = v60.fields.r;
  v60.fields.b = v60.fields.r;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)Master_object, v60, 0);
  v54 = this->fields.oneExSummon;
  if ( !v54
    || (v55 = v54->fields.single) == 0
    || (Master_object = (GachaAppendMaster_o *)v55->fields.numImg) == 0
    || (Master_object = (GachaAppendMaster_o *)(*(__int64 (__fastcall **)(GachaAppendMaster_o *, _QWORD))&Master_object->klass[1]._2.element_size)(
                                                 Master_object,
                                                 *(_QWORD *)&Master_object->klass[1]._2.static_fields_size),
        (v57 = this->fields.oneExSummon) == 0) )
  {
LABEL_78:
    sub_1C93D2C(Master_object, v8);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v57->fields.single, 0, 0, 1, 0, v56);
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
  if ( (byte_4D2CDE8 & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_17656/*"btn_summon_bg2"*/);
    sub_1C93AD4(&StringLiteral_17751/*"btn_txt_summonfree02"*/);
    this = (SummonInfoControl_o *)sub_1C93AD4(&StringLiteral_17750/*"btn_txt_summonfree01"*/);
    byte_4D2CDE8 = 1;
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
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17656/*"btn_summon_bg2"*/, 0);
    this = (SummonInfoControl_o *)onePay->fields.button;
    if ( !this )
      goto LABEL_19;
    UIButton__set_normalSprite((UIButton_o *)this, (System_String_o *)StringLiteral_17656/*"btn_summon_bg2"*/, 0);
    this = (SummonInfoControl_o *)onePay->fields.numImg;
    v9 = (System_String_o **)(isMaxExtraCount ? &StringLiteral_17751/*"btn_txt_summonfree02"*/ : &StringLiteral_17750/*"btn_txt_summonfree01"*/);
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
      sub_1C93D2C(this, onePay);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    SummonInfoControl__SetSummonGiftDisp(v8, onePay, 1, 0, 0, 0, v12);
  }
}


void SummonInfoControl__SetPaySummonInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  GachaEntity_o *CurrentGachaEntity; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int32_t id; // w20
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  struct VaildGachaInfo_o *v9; // x8
  GachaEntity_o *v10; // x20
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  int32_t ticketNum; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4D2CDE0 & 1) == 0 )
  {
    sub_1C93AD4(&UserGachaMaster_TypeInfo);
    byte_4D2CDE0 = 1;
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
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v7);
  v9 = this->fields.currentSummonData;
  if ( !v9 )
LABEL_13:
    sub_1C93D2C(CurrentGachaEntity, v4);
  v10 = CurrentGachaEntity;
  if ( v9->fields.id == this->fields.tutorialGachaId )
  {
    SummonInfoControl__TutorialGacha(this, CurrentGachaEntity, v8);
  }
  else if ( SummonInfoControl__TryGetTicket(this, &ticketNum, v8) && !this->fields._IsOneTimeFreeActive_k__BackingField )
  {
    SummonInfoControl__TicketGacha(this, v10, ticketNum, v12);
  }
  else
  {
    SummonInfoControl__StoneGacha(this, v10, v11);
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
  int32_t v10; // w21
  int v11; // w0
  const MethodInfo *v12; // x3
  SummonInfoControl_SummonObjInfo_o *friendPointSummon; // x1
  const MethodInfo *v14; // x4
  struct SummonInfoControl_SummonObjInfo_o *v15; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  UILabel_o *infoLabel; // x1
  int32_t v18; // w2
  System_String_o *v19; // x3
  struct SummonInfoControl_SummonObjInfo_o *v20; // x8
  struct SummonInfoControl_SummonObjParts_o *multiPay; // x8
  UISprite_o *numImg; // x21
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x4
  struct SummonInfoControl_SummonObjInfo_o *v25; // x8
  struct SummonInfoControl_SummonObjParts_o *onePay; // x8
  struct SummonInfoControl_SummonObjInfo_o *v27; // x8
  struct SummonInfoControl_SummonObjParts_o *v28; // x8
  const MethodInfo *v29; // x1
  GachaEntity_o *CurrentGachaEntity; // x0
  const MethodInfo *v31; // x5
  int32_t gachaTime; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2CDDF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&System_Math_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_17752/*"btn_txt_summon{0:00}"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    byte_4D2CDDF = 1;
  }
  v4 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C69B68(v2);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C69B68(v2);
  MasterData_object = **(void ***)(v5 + 184);
  if ( !MasterData_object )
    goto LABEL_27;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_TblUserMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_27;
  if ( !MasterData_object )
    goto LABEL_27;
  MasterData_object = TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, usrData->fields.userId, 0);
  if ( !MasterData_object )
    goto LABEL_27;
  v8 = *((_DWORD *)MasterData_object + 6);
  MasterData_object = SummonInfoControl__get_CurrentGachaEntity(this, method);
  if ( !MasterData_object )
    goto LABEL_27;
  Price = GachaEntity__getPrice((GachaEntity_o *)MasterData_object, 0);
  this->fields.price = Price;
  v10 = Price;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v11 = System_Math__Min_65947872(v8 / v10, 10, 0);
  friendPointSummon = this->fields.friendPointSummon;
  this->fields.gachaTime = v11;
  if ( v11 >= 2 )
  {
    SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 0, v12);
    v20 = this->fields.friendPointSummon;
    if ( v20 )
    {
      multiPay = v20->fields.multiPay;
      if ( multiPay )
      {
        numImg = multiPay->fields.numImg;
        gachaTime = this->fields.gachaTime;
        v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &gachaTime);
        MasterData_object = System_String__Format((System_String_o *)StringLiteral_17752/*"btn_txt_summon{0:00}"*/, v23, 0);
        if ( numImg )
        {
          UISprite__set_spriteName(numImg, (System_String_o *)MasterData_object, 0);
          v25 = this->fields.friendPointSummon;
          if ( v25 )
          {
            onePay = v25->fields.onePay;
            if ( onePay )
            {
              SummonInfoControl__SetPriceText(
                this,
                onePay->fields.infoLabel,
                this->fields.price,
                (System_String_o *)StringLiteral_25376/*"{0:#,0}"*/,
                v24);
              v27 = this->fields.friendPointSummon;
              if ( v27 )
              {
                v28 = v27->fields.multiPay;
                if ( v28 )
                {
                  infoLabel = v28->fields.infoLabel;
                  v19 = (System_String_o *)StringLiteral_25376/*"{0:#,0}"*/;
                  v18 = this->fields.gachaTime * this->fields.price;
                  goto LABEL_26;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_1C93D2C(MasterData_object, method);
  }
  SummonInfoControl__SetCurrentSummonInfo(this, friendPointSummon, 1, v12);
  v15 = this->fields.friendPointSummon;
  if ( !v15 )
    goto LABEL_27;
  single = v15->fields.single;
  if ( !single )
    goto LABEL_27;
  infoLabel = single->fields.infoLabel;
  v18 = -1;
  v19 = (System_String_o *)StringLiteral_25426/*"{0}"*/;
LABEL_26:
  SummonInfoControl__SetPriceText(this, infoLabel, v18, v19, v14);
  CurrentGachaEntity = SummonInfoControl__get_CurrentGachaEntity(this, v29);
  SummonInfoControl__SetMultiTimeExButton(this, CurrentGachaEntity, 0, this->fields.friendPointSummon, v8, v31);
}


void SummonInfoControl__SetPriceText(
        SummonInfoControl_o *this,
        UILabel_o *label,
        int32_t price,
        System_String_o *format,
        const MethodInfo *method)
{
  SummonInfoControl_o *v8; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // [xsp+Ch] [xbp-34h] BYREF

  v8 = this;
  if ( (byte_4D2CDEB & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C93AD4(&int_TypeInfo);
    byte_4D2CDEB = 1;
  }
  SummonInfoControl__SetActiveInfoLabel(this, label, 1, (const MethodInfo *)format);
  if ( price < 0 )
    price = v8->fields.price;
  v12 = price;
  v9 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12);
  v10 = System_String__Format(format, v9, 0);
  if ( !label )
    sub_1C93D2C(v10, v11);
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
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  adjustStoryGachaIds = storyAdjustIds;
  v14 = gachaSubId;
  summonType = gachaType;
  v22 = this;
  if ( (byte_4D2CDF1 & 1) != 0 )
  {
    if ( (gachaType & 0x80000000) == 0 )
      goto LABEL_3;
  }
  else
  {
    this = (SummonInfoControl_o *)sub_1C93AD4(&GachaRqParamData_TypeInfo);
    byte_4D2CDF1 = 1;
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
    sub_1C93D2C(this, *(_QWORD *)&gachaType);
  adjustStoryGachaIds = v26->fields.adjustStoryGachaIds;
LABEL_22:
  v27 = ticketItemId & ~(ticketItemId >> 31);
  if ( shopIdIdx < 0 )
    shopIdIdx = 1;
  v28 = (GachaRqParamData_o *)sub_1C93D20(GachaRqParamData_TypeInfo);
  GachaRqParamData___ctor_35969412(
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
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v22->fields.requestData, (int32_t)v28, v29, v30, v31, v32, v33, v34);
}


void SummonInfoControl__SetStoneNum(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *usrData; // x8

  usrData = this->fields.usrData;
  if ( !usrData )
    sub_1C93D2C(this, method);
  this->fields.haveStoneNum = usrData->fields.stone;
  *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)&usrData->fields.freeStone;
}


void SummonInfoControl__SetSummonButtonsCollider(SummonInfoControl_o *this, bool onOff, const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  System_Collections_Generic_List_object__o *summonObjInfos; // x19
  System_Action_object__o *v15; // x20

  if ( (byte_4D2CDF2 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_SummonInfoControl_SummonObjInfo__TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
    sub_1C93AD4(&Method_SummonInfoControl___c__DisplayClass183_0__SetSummonButtonsCollider_b__0__);
    sub_1C93AD4(&SummonInfoControl___c__DisplayClass183_0_TypeInfo);
    byte_4D2CDF2 = 1;
  }
  v5 = sub_1C93D20(SummonInfoControl___c__DisplayClass183_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13),
        *(_BYTE *)(v5 + 24) = onOff,
        summonObjInfos = (System_Collections_Generic_List_object__o *)this->fields.summonObjInfos,
        v15 = (System_Action_object__o *)sub_1C93D20(System_Action_SummonInfoControl_SummonObjInfo__TypeInfo),
        System_Action_object____ctor(
          v15,
          (Il2CppObject *)v5,
          Method_SummonInfoControl___c__DisplayClass183_0__SetSummonButtonsCollider_b__0__,
          0),
        !summonObjInfos) )
  {
    sub_1C93D2C(v6, v7);
  }
  System_Collections_Generic_List_object___ForEach(
    summonObjInfos,
    (System_Action_T__o *)v15,
    (const MethodInfo_387A3DC *)Method_System_Collections_Generic_List_SummonInfoControl_SummonObjInfo__ForEach__);
}


void SummonInfoControl__SetSummonDispInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
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

  if ( (byte_4D2CDDB & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_int__TypeInfo);
    sub_1C93AD4(&Method_SummonInfoControl__SetSummonDispInfo_b__153_0__);
    byte_4D2CDDB = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v4, v5, v6, v7, v8, v9);
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
    sub_1C93D2C(summonDetailInfo, v11);
  }
  UnityEngine_GameObject__SetActive(summonDetailInfo, currentSummonData->fields.isDispSummonListDialog, 0);
  *(_WORD *)&this->fields.isOneExUsePossible = 0;
  this->fields.isDispPayMultiExSummon = 0;
  v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  v17 = (System_Action_int__o *)sub_1C93D20(System_Action_int__TypeInfo);
  System_Action_int____ctor(v17, (Il2CppObject *)this, Method_SummonInfoControl__SetSummonDispInfo_b__153_0__, 0);
  StoneCountRefreshComponent__AttachToGameObject(v16, v17, 0, 0);
  SummonInfoControl__SetUpSummonInfos(this, v18);
  SummonInfoControl__OffSetInfoBtn(this, v19);
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  SummonInfoControl_o *v25; // x20
  System_String_o *v26; // x20
  SummonInfoControl___c_c *v27; // x8
  System_Func_T__TResult__o *_9__177_1; // x23
  Il2CppObject *v29; // x24
  struct SummonInfoControl___c_StaticFields *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  System_String_o *v33; // x4
  int32_t v34; // w5
  int64_t v35; // x6
  System_String_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  System_String_o *v38; // x20
  SummonInfoControl___c_c *v39; // x8
  System_Func_T__TResult__o *_9__177_3; // x21
  Il2CppObject *v41; // x22
  struct SummonInfoControl___c_StaticFields *v42; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  UnityEngine_Object_o *bonusCount; // x21
  UnityEngine_GameObject_o *v51; // x0
  UnityEngine_GameObject_o *v52; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Object_o *bonusInfo; // x21
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_GameObject_o *v56; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SummonInfoControl_o *v58; // x0
  const MethodInfo *v59; // x3
  UnityEngine_Object_o *v60; // x22
  SummonInfoControl_o *v61; // x0
  const MethodInfo *v62; // x3
  UnityEngine_Object_o *v63; // x21
  SummonInfoControl_o *v64; // x0
  const MethodInfo *v65; // x3
  UISprite_o *v66; // x23
  _BOOL8 v67; // x0
  System_String_o *v68; // x0
  Il2CppObject *friendPointSummon; // x1
  System_String_o *v70; // x0
  int v71; // w21
  bool v72; // w1
  SummonInfoControl_o *v73; // x0
  const MethodInfo *v74; // x3
  UnityEngine_Component_o *v75; // x24
  SummonInfoControl_o *v76; // x0
  const MethodInfo *v77; // x3
  UnityEngine_Component_o *v78; // x23
  SummonInfoControl_o *v79; // x0
  const MethodInfo *v80; // x3
  UISprite_o *v81; // x22
  SummonInfoControl_o *v82; // x0
  const MethodInfo *v83; // x3
  SummonInfoControl_o *v84; // x0
  const MethodInfo *v85; // x3
  UISprite_o *BonusSprite; // x25
  System_String_o *v87; // x0
  System_String_o *v88; // x0
  System_String_o *v89; // x20
  SummonInfoControl___c_c *v90; // x8
  System_Func_T__TResult__o *_9__177_2; // x23
  Il2CppObject *v92; // x24
  struct SummonInfoControl___c_StaticFields *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_String_o *v96; // x4
  int32_t v97; // w5
  int64_t v98; // x6
  System_String_o *v99; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v100; // x0
  UnityEngine_Object_o *button; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v103; // x0
  UnityEngine_GameObject_o *v104; // x0

  v12 = this;
  if ( (byte_4D2CDEE & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_char__string___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_1C93AD4(&System_Func_char__string__TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_0__);
    sub_1C93AD4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_1__);
    sub_1C93AD4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_2__);
    sub_1C93AD4(&Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_3__);
    sub_1C93AD4(&SummonInfoControl___c_TypeInfo);
    sub_1C93AD4(&StringLiteral_17686/*"btn_txt_bonus_{0}_glow"*/);
    sub_1C93AD4(&StringLiteral_22611/*"num2"*/);
    sub_1C93AD4(&StringLiteral_22609/*"num1"*/);
    sub_1C93AD4(&StringLiteral_8178/*"Item"*/);
    sub_1C93AD4(&StringLiteral_22610/*"num1_glow"*/);
    sub_1C93AD4(&StringLiteral_22612/*"num2_glow"*/);
    this = (SummonInfoControl_o *)sub_1C93AD4(&StringLiteral_17685/*"btn_txt_bonus_{0}"*/);
    byte_4D2CDEE = 1;
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
      _9__177_0 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_0, v16, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_0__, 0);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__177_0 = (struct System_Func_char__string__o *)_9__177_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__177_0,
        (int32_t)_9__177_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                                 (System_Func_TSource__TResult__o *)_9__177_0,
                                                                 (const MethodInfo_31D71D4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v24,
                                    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
    v25 = this;
    if ( !isMulti )
      goto LABEL_22;
  }
  else
  {
    v25 = 0;
    if ( !isMulti )
      goto LABEL_22;
  }
  if ( v12->fields.shopId2GiftNum )
  {
    v26 = System_Int32__ToString((int)v12 + 412, 0);
    v27 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v27 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_1 = (System_Func_T__TResult__o *)v27->static_fields->__9__177_1;
    if ( !_9__177_1 )
    {
      if ( !v27->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v27);
        v27 = SummonInfoControl___c_TypeInfo;
      }
      v29 = (Il2CppObject *)v27->static_fields->__9;
      _9__177_1 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_1, v29, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_1__, 0);
      v30 = SummonInfoControl___c_TypeInfo->static_fields;
      v30->__9__177_1 = (struct System_Func_char__string__o *)_9__177_1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v30->__9__177_1, (int32_t)_9__177_1, v31, v32, v33, v34, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                                 (System_Func_TSource__TResult__o *)_9__177_1,
                                                                 (const MethodInfo_31D71D4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v37,
                                    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
    v25 = this;
  }
  else if ( v12->fields.shopId1GiftNum && isChargeSummon )
  {
    v89 = System_Int32__ToString((int)v12 + 408, 0);
    v90 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v90 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_2 = (System_Func_T__TResult__o *)v90->static_fields->__9__177_2;
    if ( !_9__177_2 )
    {
      if ( !v90->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v90);
        v90 = SummonInfoControl___c_TypeInfo;
      }
      v92 = (Il2CppObject *)v90->static_fields->__9;
      _9__177_2 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_2, v92, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_2__, 0);
      v93 = SummonInfoControl___c_TypeInfo->static_fields;
      v93->__9__177_2 = (struct System_Func_char__string__o *)_9__177_2;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v93->__9__177_2, (int32_t)_9__177_2, v94, v95, v96, v97, v98, v99);
    }
    v100 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                  (System_Collections_Generic_IEnumerable_TSource__o *)v89,
                                                                  (System_Func_TSource__TResult__o *)_9__177_2,
                                                                  (const MethodInfo_31D71D4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v100,
                                    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v25 = this;
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
        GameObjectExtensions__SetLocalScale_36747176(gameObject, 0.9, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.button;
        if ( !this )
          goto LABEL_131;
        v103 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v103, -6.0, 0);
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
        v104 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v104, 45.0, 0);
      }
    }
  }
LABEL_22:
  if ( isSingle && v12->fields.appendGiftNum )
  {
    v38 = System_Int32__ToString((int)v12 + 416, 0);
    v39 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v39 = SummonInfoControl___c_TypeInfo;
    }
    _9__177_3 = (System_Func_T__TResult__o *)v39->static_fields->__9__177_3;
    if ( !_9__177_3 )
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        v39 = SummonInfoControl___c_TypeInfo;
      }
      v41 = (Il2CppObject *)v39->static_fields->__9;
      _9__177_3 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_char__string__TypeInfo);
      System_Func_char__object____ctor(_9__177_3, v41, Method_SummonInfoControl___c__SetSummonGiftDisp_b__177_3__, 0);
      v42 = SummonInfoControl___c_TypeInfo->static_fields;
      v42->__9__177_3 = (struct System_Func_char__string__o *)_9__177_3;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v42->__9__177_3, (int32_t)_9__177_3, v43, v44, v45, v46, v47, v48);
    }
    v49 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)v38,
                                                                 (System_Func_TSource__TResult__o *)_9__177_3,
                                                                 (const MethodInfo_31D71D4 *)Method_System_Linq_Enumerable_Select_char__string___);
    this = (SummonInfoControl_o *)System_Linq_Enumerable__ToArray_object_(
                                    v49,
                                    (const MethodInfo_31E3D18 *)Method_System_Linq_Enumerable_ToArray_string___);
    if ( !summonObjParts )
      goto LABEL_131;
    v25 = this;
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
        v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v51, 42.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v52 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionY(v52, -34.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusCount;
        if ( !this )
          goto LABEL_131;
        v53 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v53, 0.9, 0);
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
        v55 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPositionX(v55, -60.0, 0);
        this = (SummonInfoControl_o *)summonObjParts->fields.bonusInfo;
        if ( !this )
          goto LABEL_131;
        v56 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScaleX(v56, 0.9, 0);
      }
    }
  }
  if ( !v25 || (m_CancellationTokenSource = v25->fields.m_CancellationTokenSource) == 0 )
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
    v73 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v73,
                                    (UnityEngine_GameObject_o *)v73,
                                    (System_String_o *)StringLiteral_22609/*"num1"*/,
                                    v74);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v75 = (UnityEngine_Component_o *)this;
    v76 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v76,
                                    (UnityEngine_GameObject_o *)v76,
                                    (System_String_o *)StringLiteral_22611/*"num2"*/,
                                    v77);
    if ( !v75 )
      goto LABEL_131;
    v78 = (UnityEngine_Component_o *)this;
    v79 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v75, 0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v79,
                                    (UnityEngine_GameObject_o *)v79,
                                    (System_String_o *)StringLiteral_22610/*"num1_glow"*/,
                                    v80);
    if ( !v78 )
      goto LABEL_131;
    v81 = (UISprite_o *)this;
    v82 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(v78, 0);
    this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                    v82,
                                    (UnityEngine_GameObject_o *)v82,
                                    (System_String_o *)StringLiteral_22612/*"num2_glow"*/,
                                    v83);
    if ( !summonObjParts->fields.doubleDigits )
      goto LABEL_131;
    v63 = (UnityEngine_Object_o *)this;
    v84 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                   (UnityEngine_Component_o *)summonObjParts->fields.doubleDigits,
                                   0);
    BonusSprite = SummonInfoControl__GetBonusSprite(
                    v84,
                    (UnityEngine_GameObject_o *)v84,
                    (System_String_o *)StringLiteral_8178/*"Item"*/,
                    v85);
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetItem(BonusSprite, 7, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v75, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v81, 0, 0) )
        {
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v67 = UnityEngine_Object__op_Inequality(v63, 0, 0);
          if ( v67 )
          {
            if ( LODWORD(v25->fields.m_CancellationTokenSource) )
            {
              v87 = System_String__Format(
                      (System_String_o *)StringLiteral_17685/*"btn_txt_bonus_{0}"*/,
                      (Il2CppObject *)v25->fields.freeSummon,
                      0);
              UISprite__set_spriteName((UISprite_o *)v75, v87, 0);
              if ( LODWORD(v25->fields.m_CancellationTokenSource) > 1 )
              {
                v88 = System_String__Format(
                        (System_String_o *)StringLiteral_17685/*"btn_txt_bonus_{0}"*/,
                        (Il2CppObject *)v25->fields.friendPointSummon,
                        0);
                UISprite__set_spriteName((UISprite_o *)v78, v88, 0);
                if ( LODWORD(v25->fields.m_CancellationTokenSource) )
                {
                  this = (SummonInfoControl_o *)System_String__Format(
                                                  (System_String_o *)StringLiteral_17686/*"btn_txt_bonus_{0}_glow"*/,
                                                  (Il2CppObject *)v25->fields.freeSummon,
                                                  0);
                  if ( !v81 )
                    goto LABEL_131;
                  UISprite__set_spriteName(v81, (System_String_o *)this, 0);
                  if ( LODWORD(v25->fields.m_CancellationTokenSource) > 1 )
                  {
                    friendPointSummon = (Il2CppObject *)v25->fields.friendPointSummon;
                    v70 = (System_String_o *)StringLiteral_17686/*"btn_txt_bonus_{0}_glow"*/;
                    goto LABEL_68;
                  }
                }
              }
            }
LABEL_132:
            sub_1C93D34(v67);
          }
        }
      }
    }
LABEL_71:
    v71 = 0;
    goto LABEL_72;
  }
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  v58 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v58,
                                  (UnityEngine_GameObject_o *)v58,
                                  (System_String_o *)StringLiteral_22609/*"num1"*/,
                                  v59);
  if ( !this )
    goto LABEL_131;
  v60 = (UnityEngine_Object_o *)this;
  v61 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this = (SummonInfoControl_o *)SummonInfoControl__GetBonusSprite(
                                  v61,
                                  (UnityEngine_GameObject_o *)v61,
                                  (System_String_o *)StringLiteral_22610/*"num1_glow"*/,
                                  v62);
  if ( !summonObjParts->fields.singleDigit )
    goto LABEL_131;
  v63 = (UnityEngine_Object_o *)this;
  v64 = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject(
                                 (UnityEngine_Component_o *)summonObjParts->fields.singleDigit,
                                 0);
  v66 = SummonInfoControl__GetBonusSprite(
          v64,
          (UnityEngine_GameObject_o *)v64,
          (System_String_o *)StringLiteral_8178/*"Item"*/,
          v65);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetItem(v66, 7, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Inequality(v60, 0, 0) )
    goto LABEL_71;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v67 = UnityEngine_Object__op_Inequality(v60, 0, 0);
  if ( !v67 )
    goto LABEL_71;
  if ( !LODWORD(v25->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  v68 = System_String__Format((System_String_o *)StringLiteral_17685/*"btn_txt_bonus_{0}"*/, (Il2CppObject *)v25->fields.freeSummon, 0);
  UISprite__set_spriteName((UISprite_o *)v60, v68, 0);
  if ( !LODWORD(v25->fields.m_CancellationTokenSource) )
    goto LABEL_132;
  friendPointSummon = (Il2CppObject *)v25->fields.freeSummon;
  v70 = (System_String_o *)StringLiteral_17686/*"btn_txt_bonus_{0}_glow"*/;
LABEL_68:
  this = (SummonInfoControl_o *)System_String__Format(v70, friendPointSummon, 0);
  if ( !v63 )
    goto LABEL_131;
  UISprite__set_spriteName((UISprite_o *)v63, (System_String_o *)this, 0);
  v71 = 1;
LABEL_72:
  this = (SummonInfoControl_o *)summonObjParts->fields.singleDigit;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v71 )
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
          v72 = 0;
          goto LABEL_83;
        }
      }
    }
LABEL_131:
    sub_1C93D2C(this, summonObjParts);
  }
  if ( !v25 )
    goto LABEL_131;
  if ( !this )
    goto LABEL_131;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    SLODWORD(v25->fields.m_CancellationTokenSource) < 2,
    0);
  this = (SummonInfoControl_o *)summonObjParts->fields.doubleDigits;
  if ( !this )
    goto LABEL_131;
  this = (SummonInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_131;
  v72 = SLODWORD(v25->fields.m_CancellationTokenSource) > 1;
LABEL_83:
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v72, 0);
}


void SummonInfoControl__SetSummonGiftInfo(SummonInfoControl_o *this, const MethodInfo *method)
{
  char *Instance; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  __int64 v6; // x8
  char *v7; // x20
  __int64 v8; // x22
  char *v9; // x23
  __int64 v10; // x9
  __int64 v11; // x8
  __int64 v12; // x9
  int v13; // w9

  if ( (byte_4D2CDED & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMasterData_GachaExtraGiftMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_GiftMaster___);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4D2CDED = 1;
  }
  if ( this->fields.currentSummonData )
  {
    Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = (char *)DataManager__GetMasterData_object_(
                               (DataManager_o *)Instance,
                               (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GachaExtraGiftMaster___),
          (currentSummonData = this->fields.currentSummonData) == 0)
      || !Instance )
    {
LABEL_31:
      sub_1C93D2C(Instance, v4);
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
              sub_1C93D34(Instance);
            v10 = *(_QWORD *)&v9[8 * v8];
            if ( !v10 )
              goto LABEL_31;
            if ( *(_DWORD *)(v10 + 36) == 1 )
            {
              Instance = (char *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
              if ( !Instance )
                goto LABEL_31;
              Instance = (char *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)Instance,
                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_GiftMaster___);
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

  if ( (byte_4D2CDFA & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CDFA = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonHistorySprite)
      || (UISprite__set_atlas(this->fields.summonHistorySprite, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonHistorySprite) == 0)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonHistoryButton) == 0) )
    {
      sub_1C93D2C(Component_object, v8);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  const MethodInfo *v16; // x1
  const MethodInfo *v17; // x1

  this->fields.isFree = 0;
  this->fields.ticketNum = 0;
  *(_QWORD *)&this->fields.shopId1GiftNum = 0;
  this->fields.appendGiftNum = 0;
  if ( !gachaData )
    sub_1C93D2C(this, 0);
  this->fields.summonType = gachaData->fields.type;
  this->fields.clickCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.clickCallbackFunc,
    (int32_t)callback,
    (int32_t)callback,
    (int32_t)method,
    v4,
    v5,
    v6,
    v7);
  this->fields.currentSummonData = gachaData;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.currentSummonData,
    (int32_t)gachaData,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  SummonInfoControl__SetSummonGiftInfo(this, v16);
  SummonInfoControl__SetSummonDispInfo(this, v17);
}


void SummonInfoControl__SetSummonInfo_36126216(SummonInfoControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1
  struct VaildGachaInfo_o *currentSummonData; // x8
  int klass; // w22
  int32_t PayOneTimePrice; // w21
  __int64 v8; // x20
  int klass_high; // w22
  int32_t PayMultiTimePrice; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CDEC & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C93AD4(&SummonInfoControl_SummonInfo_TypeInfo);
    byte_4D2CDEC = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_GachaMaster___);
  currentSummonData = this->fields.currentSummonData;
  if ( !currentSummonData || !Master_object )
    goto LABEL_17;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
          &entity,
          currentSummonData->fields.id,
          (const MethodInfo_34632C0 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__) )
    return;
  Master_object = entity;
  if ( !entity )
    goto LABEL_17;
  if ( SHIDWORD(entity[3].klass) >= 1 )
  {
    klass = (int)entity[4].klass;
    PayOneTimePrice = GachaEntity__getPayOneTimePrice((GachaEntity_o *)entity, 0);
    v8 = sub_1C93D20(SummonInfoControl_SummonInfo_TypeInfo);
    System_Object___ctor((Il2CppObject *)v8, 0);
    *(_DWORD *)(v8 + 16) = klass;
    *(_DWORD *)(v8 + 20) = PayOneTimePrice;
    *(_DWORD *)(v8 + 24) = 1;
    Master_object = entity;
    if ( entity )
    {
      if ( SLODWORD(entity[3].monitor) < 1 )
        goto LABEL_15;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C93D2C(Master_object, v4);
  }
  if ( SLODWORD(entity[3].monitor) < 1 )
    return;
LABEL_14:
  klass_high = HIDWORD(Master_object[4].klass);
  PayMultiTimePrice = GachaEntity__getPayMultiTimePrice((GachaEntity_o *)Master_object, 0);
  v8 = sub_1C93D20(SummonInfoControl_SummonInfo_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = klass_high;
  *(_DWORD *)(v8 + 20) = PayMultiTimePrice;
  *(_DWORD *)(v8 + 24) = 2;
LABEL_15:
  *(int32x2_t *)&this->fields.price = vrev64_s32(*(int32x2_t *)(v8 + 16));
  this->fields.shopIdIdx = *(_DWORD *)(v8 + 24);
}


void SummonInfoControl__SetSummonListSprite(
        SummonInfoControl_o *this,
        UnityEngine_GameObject_o *bannerAtlas,
        System_String_o *imgName,
        const MethodInfo *method)
{
  UIAtlas_o *Component_object; // x0
  __int64 v8; // x1

  if ( (byte_4D2CDF9 & 1) == 0 )
  {
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CDF9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Component_object = (UIAtlas_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)bannerAtlas, 0, 0);
  if ( ((unsigned __int8)Component_object & 1) == 0 )
  {
    if ( !bannerAtlas
      || (Component_object = (UIAtlas_o *)UnityEngine_GameObject__GetComponent_object_(
                                            bannerAtlas,
                                            (const MethodInfo_31FC084 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___),
          !this->fields.summonListSprite)
      || (UISprite__set_atlas(this->fields.summonListSprite, Component_object, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonListSprite) == 0)
      || (UISprite__set_spriteName((UISprite_o *)Component_object, imgName, 0),
          (Component_object = (UIAtlas_o *)this->fields.summonListButton) == 0) )
    {
      sub_1C93D2C(Component_object, v8);
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
    sub_1C93D2C(this, isEnable);
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
    sub_1C93D2C(this, isEnable);
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
      sub_1C93D2C(possessionInfoButton, method);
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
  if ( (byte_4D2CDE4 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    this = (SummonInfoControl_o *)sub_1C93AD4(&StringLiteral_17752/*"btn_txt_summon{0:00}"*/);
    byte_4D2CDE4 = 1;
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
        SummonInfoControl__SetPriceText(v5, onePay->fields.infoLabel, -1, (System_String_o *)StringLiteral_25426/*"{0}"*/, v6);
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
              (System_String_o *)StringLiteral_25426/*"{0}"*/,
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
    sub_1C93D2C(this, payGachaEnt);
  }
  SummonInfoControl__SetCurrentSummonInfo(v5, v5->fields.stoneSummon, 1, v3);
  SummonInfoControl__SetSummonInfo_36126216(v5, v19);
  gachaTime = v5->fields.gachaTime;
  v21 = (System_String_o *)StringLiteral_17752/*"btn_txt_summon{0:00}"*/;
  if ( gachaTime >= 11 )
    gachaTime = 11;
  v28 = gachaTime;
  v22 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
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
  SummonInfoControl__SetPriceText(v5, v27->fields.infoLabel, -1, (System_String_o *)StringLiteral_25426/*"{0}"*/, v25);
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

  if ( (byte_4D2CDE3 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    sub_1C93AD4(&StringLiteral_25376/*"{0:#,0}"*/);
    byte_4D2CDE3 = 1;
  }
  SummonInfoControl__SetCurrentSummonInfo(this, this->fields.ticketSummon, 0, method);
  ticketSummon = this->fields.ticketSummon;
  this->fields.ticketNum = ticketNum;
  if ( !ticketSummon )
    goto LABEL_12;
  onePay = ticketSummon->fields.onePay;
  if ( !onePay )
    goto LABEL_12;
  SummonInfoControl__SetPriceText(this, onePay->fields.needLabel, 1, (System_String_o *)StringLiteral_25426/*"{0}"*/, v9);
  v13 = this->fields.ticketSummon;
  if ( !v13 )
    goto LABEL_12;
  v14 = v13->fields.onePay;
  if ( !v14
    || (SummonInfoControl__SetPriceText(
          this,
          v14->fields.haveLabel,
          ticketNum,
          (System_String_o *)StringLiteral_25376/*"{0:#,0}"*/,
          v12),
        (v15 = this->fields.ticketSummon) == 0)
    || (multiPay = v15->fields.multiPay) == 0
    || !payGachaEnt
    || (infoLabel = multiPay->fields.infoLabel,
        PayMultiTimePrice = GachaEntity__getPayMultiTimePrice(payGachaEnt, 0),
        SummonInfoControl__SetPriceText(this, infoLabel, PayMultiTimePrice, (System_String_o *)StringLiteral_25426/*"{0}"*/, v19),
        (v21 = this->fields.ticketSummon) == 0) )
  {
LABEL_12:
    sub_1C93D2C(v7, v8);
  }
  SummonInfoControl__SetSummonGiftDisp(this, v21->fields.multiPay, 0, 1, 0, 0, v20);
  SummonInfoControl__SetElevenBonusInfo(this, payGachaEnt, 1, this->fields.ticketSummon, 1, v22);
}


bool SummonInfoControl__TryGetTicket(SummonInfoControl_o *this, int32_t *ticketNum, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1
  struct UserGameEntity_o *usrData; // x8
  struct VaildGachaInfo_o *currentSummonData; // x9
  bool v9; // w9
  bool result; // w0
  int32_t num; // w10
  UserItemEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2CDE2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserItemMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    byte_4D2CDE2 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserItemMaster___);
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
      v9 = entity->fields.num > 0;
LABEL_12:
      num = entity->fields.num;
      result = v9;
      goto LABEL_13;
    }
LABEL_14:
    sub_1C93D2C(Master_object, v6);
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


void SummonInfoControl__TutorialGacha(SummonInfoControl_o *this, GachaEntity_o *payGachaEnt, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  struct SummonInfoControl_SummonObjInfo_o *stoneSummon; // x8
  int32_t haveStoneNum; // w21
  int32_t userFreeStone; // w22
  __int64 v11; // x9
  const MethodInfo *v12; // x6
  int32_t v13; // w8
  struct SummonInfoControl_SummonObjInfo_o *v14; // x9
  const MethodInfo *v15; // x4
  struct SummonInfoControl_SummonObjInfo_o *v16; // x8
  struct SummonInfoControl_SummonObjParts_o *single; // x8
  const MethodInfo *v18; // x4
  struct SummonInfoControl_SummonObjInfo_o *v19; // x8
  struct SummonInfoControl_SummonObjParts_o *v20; // x8
  int32_t servantEquipSum[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4D2CDE1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_25426/*"{0}"*/);
    byte_4D2CDE1 = 1;
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
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !Master_object )
    goto LABEL_19;
  Master_object = (Il2CppObject *)UserServantMaster__getCountWithoutMaterial(
                                    (UserServantMaster_o *)Master_object,
                                    &servantEquipSum[1],
                                    servantEquipSum,
                                    0);
  if ( !payGachaEnt )
    goto LABEL_19;
  v11 = 64;
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
    v11 = 68;
  this->fields.gachaTime = *(_DWORD *)((char *)&payGachaEnt->klass + v11);
  if ( haveStoneNum >= userFreeStone || (int)Master_object > 10 )
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayMultiTimePrice(payGachaEnt, 0);
    v13 = 2;
  }
  else
  {
    Master_object = (Il2CppObject *)GachaEntity__getPayOneTimePrice(payGachaEnt, 0);
    v13 = 1;
  }
  v14 = this->fields.stoneSummon;
  this->fields.price = (int)Master_object;
  this->fields.shopIdIdx = v13;
  if ( !v14
    || (SummonInfoControl__SetSummonGiftDisp(this, v14->fields.single, 0, 1, 0, 0, v12),
        (v16 = this->fields.stoneSummon) == 0)
    || (single = v16->fields.single) == 0
    || (SummonInfoControl__SetPriceText(this, single->fields.infoLabel, -1, (System_String_o *)StringLiteral_25426/*"{0}"*/, v15),
        (v19 = this->fields.stoneSummon) == 0)
    || (v20 = v19->fields.single) == 0 )
  {
LABEL_19:
    sub_1C93D2C(Master_object, v7);
  }
  SummonInfoControl__SetElevenBonusInfoSingle(
    (SummonInfoControl_o *)Master_object,
    this->fields.gachaTime,
    v20->fields.numImg,
    v20->fields.bonusInfo,
    v18);
}


void SummonInfoControl___SetSummonDispInfo_b__153_0(
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
      sub_1C93D2C(SelfUserGame, v5);
    this->fields.haveStoneNum = *(_DWORD *)((char *)&qword_B8 + (_QWORD)entity);
    *(_QWORD *)&this->fields._HaveFreeStoneNum_k__BackingField = *(_QWORD *)((char *)&dword_B0 + (_QWORD)v6);
  }
}


GachaEntity_o *SummonInfoControl__get_CurrentGachaEntity(SummonInfoControl_o *this, const MethodInfo *method)
{
  SummonInfoControl_o *v2; // x19
  struct VaildGachaInfo_o *currentSummonData; // x8

  v2 = this;
  if ( (byte_4D2CDD8 & 1) == 0 )
  {
    this = (SummonInfoControl_o *)sub_1C93AD4(&Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
    byte_4D2CDD8 = 1;
  }
  currentSummonData = v2->fields.currentSummonData;
  if ( !currentSummonData || (this = (SummonInfoControl_o *)v2->fields.gachaMaster) == 0 )
    sub_1C93D2C(this, method);
  return (GachaEntity_o *)DataMasterBase_object__object__int___GetEntity(
                            (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                            currentSummonData->fields.id,
                            (const MethodInfo_3463274 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__GetEntity__);
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
    sub_1C93D2C(this, method);
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
  GrandQuestFolderBoardItem_o *p_multiExSummonInfoLayout; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v8; // x8
  System_Func_object__bool__o *_9__145_0; // x21
  Il2CppObject *v10; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2CDD7 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    sub_1C93AD4(&System_Func_SummonInfoLayout__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__145_0__);
    sub_1C93AD4(&SummonInfoControl___c_TypeInfo);
    byte_4D2CDD7 = 1;
  }
  multiExSummonInfoLayout = (UnityEngine_Object_o *)this->fields.multiExSummonInfoLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_multiExSummonInfoLayout = (GrandQuestFolderBoardItem_o *)&this->fields.multiExSummonInfoLayout;
  if ( UnityEngine_Object__op_Equality(multiExSummonInfoLayout, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v6);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_31FC9E0 *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v8 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v8 = SummonInfoControl___c_TypeInfo;
    }
    _9__145_0 = (System_Func_object__bool__o *)v8->static_fields->__9__145_0;
    if ( !_9__145_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = SummonInfoControl___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__145_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__145_0,
        v10,
        Method_SummonInfoControl___c__get_MultiExSummonInfoLayout_b__145_0__,
        0);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__145_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__145_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__145_0,
        (int32_t)_9__145_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
            Components_object,
            (System_Func_TSource__bool__o *)_9__145_0,
            (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    p_multiExSummonInfoLayout->klass = (GrandQuestFolderBoardItem_c *)v18;
    sub_1C93A78(p_multiExSummonInfoLayout, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  }
  return (SummonInfoLayout_o *)p_multiExSummonInfoLayout->klass;
}


SummonInfoLayout_o *SummonInfoControl__get_SummonInfoLayout(SummonInfoControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *summonInfoLayout; // x21
  GrandQuestFolderBoardItem_o *p_summonInfoLayout; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *Components_object; // x20
  SummonInfoControl___c_c *v8; // x8
  System_Func_object__bool__o *_9__143_0; // x21
  Il2CppObject *v10; // x22
  struct SummonInfoControl___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Il2CppObject *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7

  if ( (byte_4D2CDD6 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    sub_1C93AD4(&System_Func_SummonInfoLayout__bool__TypeInfo);
    sub_1C93AD4(&Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&Method_SummonInfoControl___c__get_SummonInfoLayout_b__143_0__);
    sub_1C93AD4(&SummonInfoControl___c_TypeInfo);
    byte_4D2CDD6 = 1;
  }
  summonInfoLayout = (UnityEngine_Object_o *)this->fields.summonInfoLayout;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_summonInfoLayout = (GrandQuestFolderBoardItem_o *)&this->fields.summonInfoLayout;
  if ( UnityEngine_Object__op_Equality(summonInfoLayout, 0, 0) )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      sub_1C93D2C(0, v6);
    Components_object = (System_Collections_Generic_IEnumerable_TSource__o *)UnityEngine_GameObject__GetComponents_object_(
                                                                               gameObject,
                                                                               (const MethodInfo_31FC9E0 *)Method_UnityEngine_GameObject_GetComponents_SummonInfoLayout___);
    v8 = SummonInfoControl___c_TypeInfo;
    if ( !SummonInfoControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonInfoControl___c_TypeInfo);
      v8 = SummonInfoControl___c_TypeInfo;
    }
    _9__143_0 = (System_Func_object__bool__o *)v8->static_fields->__9__143_0;
    if ( !_9__143_0 )
    {
      if ( !v8->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v8);
        v8 = SummonInfoControl___c_TypeInfo;
      }
      v10 = (Il2CppObject *)v8->static_fields->__9;
      _9__143_0 = (System_Func_object__bool__o *)sub_1C93D20(System_Func_SummonInfoLayout__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__143_0, v10, Method_SummonInfoControl___c__get_SummonInfoLayout_b__143_0__, 0);
      static_fields = SummonInfoControl___c_TypeInfo->static_fields;
      static_fields->__9__143_0 = (struct System_Func_SummonInfoLayout__bool__o *)_9__143_0;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__143_0,
        (int32_t)_9__143_0,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
    }
    v18 = System_Linq_Enumerable__FirstOrDefault_object__52221724(
            Components_object,
            (System_Func_TSource__bool__o *)_9__143_0,
            (const MethodInfo_31CD71C *)Method_System_Linq_Enumerable_FirstOrDefault_SummonInfoLayout___);
    p_summonInfoLayout->klass = (GrandQuestFolderBoardItem_c *)v18;
    sub_1C93A78(p_summonInfoLayout, (int32_t)v18, v19, v20, v21, v22, v23, v24);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
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
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) != 0 )
  {
    if ( v12 == 1 )
    {
      v13 = sub_1AC4740;
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
        v15 = sub_1C93B8C(method);
        v16 = sub_1C94120(method);
        if ( (v15 & 1) != 0 )
        {
          if ( (v16 & 1) != 0 )
            v13 = sub_1AC483C;
          else
            v13 = sub_1AC4800;
        }
        else if ( (v16 & 1) != 0 )
        {
          v13 = sub_1AC477C;
        }
        else
        {
          v13 = sub_1AC4750;
        }
      }
      else
      {
        v13 = sub_1AC4720;
      }
      goto LABEL_16;
    }
    if ( !object )
    {
      v17 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v17, 0);
    }
  }
  m_target = this->fields.m_target;
  this->fields.invoke_impl = this->fields.method_ptr;
  this->fields.method_code = (intptr_t)m_target;
LABEL_17:
  this->fields.extra_arg = (intptr_t)sub_1AC46D8;
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
  return sub_1C93A88(this, &v6, callback, object);
}


void SummonInfoControl_ClickDelegate__EndInvoke(
        SummonInfoControl_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
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

  *(_OWORD *)&this->fields.Top.fields.x = xmmword_D00540;
  *(_QWORD *)&this->fields.Center.fields.y = 1113587712;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2CDFD & 1) == 0 )
  {
    sub_1C93AD4(&SummonInfoControl___c_TypeInfo);
    byte_4D2CDFD = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(SummonInfoControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SummonInfoControl___c_TypeInfo->static_fields->__9 = (struct SummonInfoControl___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)SummonInfoControl___c_TypeInfo->static_fields,
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


void SummonInfoControl___c___InitSummonBtnDisp_b__156_0(
        SummonInfoControl___c_o *this,
        SummonInfoControl_SummonObjInfo_o *x,
        const MethodInfo *method)
{
  UnityEngine_Object_o *singleSummonInfo; // x20
  UnityEngine_Object_o *multiSummonInfo; // x20

  if ( (byte_4D2CDFE & 1) == 0 )
  {
    this = (SummonInfoControl___c_o *)sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2CDFE = 1;
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
    sub_1C93D2C(this, x);
  }
}


void SummonInfoControl___c___SetMultiTimeExButton_b__169_0(
        SummonInfoControl___c_o *this,
        UISprite_o *sprite,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  if ( (byte_4D2CDFF & 1) == 0 )
  {
    sub_1C93AD4(&AtlasManager_TypeInfo);
    this = (SummonInfoControl___c_o *)sub_1C93AD4(&string_TypeInfo);
    byte_4D2CDFF = 1;
  }
  if ( !sprite )
    sub_1C93D2C(this, sprite);
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
  if ( (byte_4D2CE00 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    byte_4D2CE00 = 1;
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
  if ( (byte_4D2CE01 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    byte_4D2CE01 = 1;
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
  if ( (byte_4D2CE02 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    byte_4D2CE02 = 1;
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
  if ( (byte_4D2CE03 & 1) == 0 )
  {
    sub_1C93AD4(&char_TypeInfo);
    byte_4D2CE03 = 1;
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
    sub_1C93D2C(this, 0);
  return x->fields.type == 1;
}


bool SummonInfoControl___c___get_SummonInfoLayout_b__143_0(
        SummonInfoControl___c_o *this,
        SummonInfoLayout_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C93D2C(this, 0);
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
    sub_1C93D2C(this, x);
  }
  SummonInfoControl__SetButtonCollider((SummonInfoControl_o *)this, multiPay->fields.button, this->fields.onOff, v9);
}