void __fastcall HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_49F947D & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconListComponent_TypeInfo, v1);
    sub_1B640C8(&StringLiteral_15059/*"Unlit/Transparent Colored_Choco"*/, v4);
    sub_1B640C8(&StringLiteral_4953/*"Custom/SpriteWithMask_Choco"*/, v5);
    byte_49F947D = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15059/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15059/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3);
  v6 = StringLiteral_4953/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4953/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v6, v8, v9);
}


void __fastcall HorizontalQuestInformationIconListComponent___ctor(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  this->fields.displayLimitNum = 6;
  *(_QWORD *)&this->fields.questInfoFadeFrameNum = 0x4040000000000007LL;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x19
  System_Collections_Generic_List_object__o *iconGroupList; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_object__o **v15; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  __int64 v18; // x2
  System_Action_object__o *v19; // x22
  Il2CppObject *current; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_49F9471 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo, method);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__,
      v4);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__,
      v5);
    sub_1B640C8(
      &Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__,
      v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__, v8);
    sub_1B640C8(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass25_0__ChangeViewQuestInfoLb_b__0__,
      v9);
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c__DisplayClass25_0_TypeInfo, v10);
    byte_49F9471 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v11 = sub_1B64314(HorizontalQuestInformationIconListComponent___c__DisplayClass25_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11
    || (*(_QWORD *)(v11 + 24) = this,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v13, v14),
        *(_DWORD *)(v11 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0LL) )
  {
    sub_1B64324(iconGroupList);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    iconGroupList,
    (const MethodInfo_34AE26C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v15 = (System_Action_object__o **)(v11 + 32);
  while ( 1 )
  {
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_322A0B0 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v16 )
      break;
    v19 = *v15;
    current = v23.fields._current;
    if ( !*v15 )
    {
      v19 = (System_Action_object__o *)sub_1B64314(System_Action_HorizontalQuestInformationIconDraw__TypeInfo, v17, v18);
      System_Action_object____ctor(
        v19,
        (Il2CppObject *)v11,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass25_0__ChangeViewQuestInfoLb_b__0__,
        0LL);
      *v15 = v19;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v19, v21, v22);
    }
    if ( !current )
      sub_1B64324(v16);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v19,
      (const MethodInfo_34AE1B4 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v11 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_322A0AC *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int v6; // w20
  __int64 v9; // x1
  int32_t v10; // w22
  __int64 v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  __int64 v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  v6 = itemCnt;
  if ( (byte_49F9478 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, *(_QWORD *)&kind);
    sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v9);
    byte_49F9478 = 1;
  }
  if ( !kind )
  {
    if ( v6 >= 1 )
    {
      v10 = 0;
      while ( 1 )
      {
        v11 = sub_1B64314(QuestInformationListViewItem_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&itemCnt);
        ListViewItem___ctor_40370988((ListViewItem_o *)v11, v10, 0LL);
        *(_DWORD *)(v11 + 124) = 0;
        *(_QWORD *)(v11 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        items = itemList->fields._items;
        v16 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v11;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), v11, v12, v13);
        }
        if ( v6 == ++v10 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1B64324(itemList);
    }
    v6 = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v19 = sub_1B64314(QuestInformationListViewItem_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&itemCnt);
        ListViewItem___ctor_40370988((ListViewItem_o *)v19, v6, 0LL);
        *(_DWORD *)(v19 + 124) = 0;
        *(_QWORD *)(v19 + 112) = 0LL;
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        v22 = itemList->fields._items;
        v23 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__;
        ++itemList->fields._version;
        if ( !v22 )
          break;
        v24 = itemList->fields._size;
        if ( (unsigned int)v24 >= v22->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v19,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &v22->obj.klass + v24;
          itemList->fields._size = v24 + 1;
          v25[4] = (Il2CppClass *)v19;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v25 + 4), v19, v20, v21);
        }
        --svtCnt;
        ++v6;
        if ( !svtCnt )
          return;
      }
      goto LABEL_22;
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
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
  __int64 v28; // x20
  __int64 QuestEntity; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  __int64 *v32; // x21
  int32_t v33; // w2
  int32_t v34; // w3
  Il2CppObject *Master_object; // x22
  Il2CppObject *v36; // x24
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 *v39; // x25
  int32_t v40; // w2
  int32_t v41; // w3
  bool HasFlag; // w28
  Il2CppObject *v43; // x27
  __int64 v44; // x8
  __int64 v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  __int64 v48; // x1
  int32_t v49; // w2
  __int64 v50; // x8
  __int64 v51; // x29
  __int64 v52; // x23
  __int64 v53; // x26
  unsigned __int64 v54; // x9
  unsigned __int64 v55; // x19
  int32_t v56; // w3
  __int64 v57; // x8
  ViewEnemyEntity_o *v58; // x27
  unsigned int *v59; // x8
  ServantStatusBattleListViewItem_o *v60; // x0
  System_String_o *v61; // x0
  Il2CppObject *v62; // x27
  __int64 v63; // x1
  __int64 v64; // x2
  int32_t v65; // w3
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  Il2CppClass **v69; // x0
  ViewEnemyEntity_o *v70; // x28
  unsigned int *v71; // x28
  System_Object_array *v72; // x0
  int32_t v73; // w2
  int32_t v74; // w3
  __int64 v75; // x1
  __int64 v76; // x2
  System_Action_o *v77; // x19
  __int64 v78; // x0
  HorizontalQuestInformationIconListComponent_o *v79; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v80; // [xsp+8h] [xbp-88h]
  bool v81; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v83; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v84; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_49F9479 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B640C8(&AtlasManager_TypeInfo, v9);
    sub_1B640C8(&Method_DataManager_GetMaster_QuestMaster___, v10);
    sub_1B640C8(&Method_DataManager_GetMaster_ServantMaster___, v11);
    sub_1B640C8(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v12);
    sub_1B640C8(&Method_DataManager_GetMaster_ViewEnemyMaster___, v13);
    sub_1B640C8(&DataManager_TypeInfo, v14);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15);
    sub_1B640C8(&Method_System_Linq_Enumerable_Contains_int___, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Contains__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v21);
    sub_1B640C8(&NetworkManager_TypeInfo, v22);
    sub_1B640C8(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass36_0__CreateEnemyList_b__0__, v23);
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_TypeInfo, v24);
    sub_1B640C8(&ViewEnemyEntity___TypeInfo, v25);
    sub_1B640C8(&ViewEnemyEntity_TypeInfo, v26);
    sub_1B640C8(&StringLiteral_12595/*"Servants/Commands/"*/, v27);
    byte_49F9479 = 1;
  }
  v83 = 0LL;
  v84 = 0LL;
  entity = 0LL;
  v28 = sub_1B64314(
          HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_TypeInfo,
          *(_QWORD *)&kind,
          *(_QWORD *)&questId);
  System_Object___ctor((Il2CppObject *)v28, 0LL);
  if ( !v28 )
    goto LABEL_63;
  *(_QWORD *)(v28 + 16) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)this, v30, v31);
  *(_QWORD *)(v28 + 32) = enemies;
  v32 = (__int64 *)(v28 + 32);
  *(_DWORD *)(v28 + 24) = questId;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 32), (int32_t)enemies, v33, v34);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v36 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ServantMaster___);
  v80 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       v37,
                                                       v38);
  System_Collections_Generic_List_object____ctor(
    v80,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v28 + 40) = 0LL;
  v39 = (__int64 *)(v28 + 40);
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 40), 0, v40, v41);
  QuestEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_63;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_63;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v79 = this;
  v43 = DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v43 )
    goto LABEL_63;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v43, &entity, QuestEntity, *(_DWORD *)(v28 + 24), 0LL);
  v44 = *(_QWORD *)(v28 + 32);
  if ( v44 )
  {
    v45 = sub_1B64170(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v44 + 24));
    *v39 = v45;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)(v28 + 40), v45, v46, v47);
    v50 = *v32;
    if ( !*v32 )
      goto LABEL_63;
    v51 = 0LL;
    v52 = 8LL;
    v53 = 8LL;
    v81 = HasFlag;
    while ( 1 )
    {
      v54 = *(unsigned int *)(v50 + 24);
      v55 = v52 - 8;
      if ( v52 - 8 >= (int)v54 )
        break;
      if ( v55 >= v54 )
        goto LABEL_64;
      v56 = *(_DWORD *)(v50 + 4 * v52);
      if ( v56 < 1 )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_63;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      (ViewEnemyMaster_o *)Master_object,
                      &v83,
                      *(_DWORD *)(v28 + 24),
                      v56,
                      0LL);
      if ( (QuestEntity & 1) == 0 )
        goto LABEL_39;
      if ( !HasFlag )
      {
        if ( !entity )
          goto LABEL_28;
        QuestEntity = (__int64)entity->fields.enemyIds;
        if ( !QuestEntity || !*(_QWORD *)(QuestEntity + 24) )
          goto LABEL_28;
        if ( !v83 )
          goto LABEL_63;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v83->fields.enemyId,
                        (const MethodInfo_2E52CA8 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_28:
          v57 = *v32;
          if ( !*v32 )
            goto LABEL_63;
          if ( v55 >= *(unsigned int *)(v57 + 24) )
            goto LABEL_64;
          *(_DWORD *)(v57 + 4 * v52) = 0;
        }
      }
      if ( !v83 || !v36 )
        goto LABEL_63;
      QuestEntity = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v36,
                      &v84,
                      v83->fields.svtId,
                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v84;
        if ( !v84 )
          goto LABEL_63;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v84, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_38;
        QuestEntity = (__int64)v83;
        if ( !v83 )
          goto LABEL_63;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v83, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v83 )
            goto LABEL_63;
          v61 = System_Int32__ToString((int)v83 + 36, 0LL);
          v62 = (Il2CppObject *)System_String__Concat_61375396((System_String_o *)StringLiteral_12595/*"Servants/Commands/"*/, v61, 0LL);
          QuestEntity = (__int64)v80;
          if ( !v80 )
            goto LABEL_63;
          QuestEntity = System_Collections_Generic_List_object___Contains(
                          v80,
                          v62,
                          (const MethodInfo_34ADA64 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( (QuestEntity & 1) == 0 )
          {
            items = v80->fields._items;
            v67 = Method_System_Collections_Generic_List_string__Add__;
            ++v80->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v80->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                v62,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
            }
            else
            {
              v69 = &items->obj.klass + size;
              v80->fields._size = size + 1;
              v69[4] = (Il2CppClass *)v62;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v69 + 4), (int32_t)v62, v64, v65);
            }
          }
          v70 = v83;
          v58 = (ViewEnemyEntity_o *)sub_1B64314(ViewEnemyEntity_TypeInfo, v63, v64);
          ViewEnemyEntity___ctor_39950016(v58, v70, 0LL);
          v83 = v58;
          if ( !v58 )
            goto LABEL_63;
          v58->fields.iconId = 0;
        }
        else
        {
LABEL_38:
          v58 = v83;
        }
        v71 = (unsigned int *)*v39;
        if ( !*v39 )
          goto LABEL_63;
        if ( v58 )
        {
          QuestEntity = sub_1B64204(v58, *(_QWORD *)(*(_QWORD *)v71 + 64LL));
          if ( !QuestEntity )
          {
            v78 = sub_1B64348();
            sub_1B641F0(v78, 0LL);
          }
        }
        if ( v55 >= v71[6] )
LABEL_64:
          sub_1B6432C(QuestEntity, v48);
        v60 = (ServantStatusBattleListViewItem_o *)&v71[v53];
        HasFlag = v81;
        v60->klass = (ServantStatusBattleListViewItem_c *)v58;
      }
      else
      {
LABEL_39:
        v59 = (unsigned int *)*v39;
        if ( !*v39 )
          goto LABEL_63;
        if ( v55 >= v59[6] )
          goto LABEL_64;
        LODWORD(v58) = 0;
        v60 = (ServantStatusBattleListViewItem_o *)&v59[2 * v51 + 8];
        *(_QWORD *)&v59[v53] = 0LL;
      }
      sub_1B6406C(v60, (int32_t)v58, v49, v56);
      v50 = *v32;
      ++v51;
      ++v52;
      v53 += 2LL;
      if ( !*v32 )
        goto LABEL_63;
    }
  }
  QuestEntity = (__int64)v80;
  if ( !v80 )
LABEL_63:
    sub_1B64324(QuestEntity);
  v72 = System_Collections_Generic_List_object___ToArray(
          v80,
          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
  v79->fields.loadedAssets = (struct System_String_array *)v72;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v79->fields.loadedAssets, (int32_t)v72, v73, v74);
  v79->fields.loading = 1;
  v77 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v75, v76);
  System_Action___ctor(
    v77,
    (Il2CppObject *)v28,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass36_0__CreateEnemyList_b__0__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v77, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList_33750532(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x21
  __int64 v8; // x1
  __int64 v9; // x8
  unsigned __int64 v10; // x25
  int32_t v11; // w22
  ViewEnemyEntity_o *v12; // x24
  QuestInformationListViewItem_o *v13; // x0
  const MethodInfo *v14; // x4
  Il2CppObject *v15; // x23
  int32_t v16; // w1
  ViewEnemyEntity_o *v17; // x2
  bool v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v24; // x8

  v7 = this;
  if ( (byte_49F947A & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, *(_QWORD *)&questId);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v8);
    byte_49F947A = 1;
  }
  if ( v7->fields.loading )
  {
    v7->fields.loading = 0;
    if ( enemies )
    {
      v9 = *(_QWORD *)&enemies->max_length;
      if ( (int)v9 >= 1 )
      {
        v10 = 0LL;
        v11 = 0;
        while ( 1 )
        {
          if ( v10 >= (unsigned int)v9 )
            goto LABEL_23;
          if ( !veEnts )
            goto LABEL_22;
          if ( v10 >= veEnts->max_length )
LABEL_23:
            sub_1B6432C(this, *(_QWORD *)&questId);
          v12 = veEnts->m_Items[v10];
          if ( enemies->m_Items[v10 + 1] <= 0 )
            break;
          if ( v12 )
          {
            v13 = (QuestInformationListViewItem_o *)sub_1B64314(
                                                      QuestInformationListViewItem_TypeInfo,
                                                      *(_QWORD *)&questId,
                                                      enemies);
            v15 = (Il2CppObject *)v13;
            v16 = v11;
            v17 = v12;
            v18 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v10 >= (int)v9 )
            return;
        }
        v13 = (QuestInformationListViewItem_o *)sub_1B64314(
                                                  QuestInformationListViewItem_TypeInfo,
                                                  *(_QWORD *)&questId,
                                                  enemies);
        v15 = (Il2CppObject *)v13;
        v18 = 1;
        v16 = v11;
        v17 = v12;
LABEL_14:
        QuestInformationListViewItem___ctor_33750932(v13, v16, v17, v18, v14);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (v21 = *(_QWORD *)&this->fields.m_CachedPtr,
              v22 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v21) )
        {
LABEL_22:
          sub_1B64324(this);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        }
        else
        {
          v24 = v21 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v24 + 32) = v15;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v15, v19, v20);
        }
        LODWORD(v9) = enemies->max_length;
        ++v11;
        goto LABEL_20;
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateIconGroupList(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
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
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x21
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v41; // x8
  __int64 gameObject; // x0
  bool v43; // w1
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x1
  __int64 v47; // x2
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v48; // x22
  HorizontalQuestInformationIconListComponent___c_c *v49; // x0
  System_Func_T1__T2__TResult__o *_9__17_0; // x23
  Il2CppObject *v51; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  int32_t v54; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v55; // x20
  __int64 v56; // x1
  __int64 v57; // x2
  System_Func_object__int__o *v58; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v59; // x0
  __int64 v60; // x1
  __int64 v61; // x2
  HorizontalQuestInformationIconListComponent___c_c *v62; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x22
  System_Func_object__object__o *_9__17_2; // x23
  Il2CppObject *v65; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v66; // x0
  int32_t v67; // w2
  int32_t v68; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x26
  __int64 v70; // x1
  __int64 v71; // x2
  System_Collections_Generic_List_object__o *v72; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  __int64 v74; // x1
  __int64 v75; // x2
  int32_t v76; // w3
  int v77; // w29
  char v78; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  UnityEngine_Transform_o *parent; // x20
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v83; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v86; // x8
  __int64 v87; // x9
  System_Collections_IEnumerator_c **v88; // x10
  __int64 v89; // x0
  UnityEngine_Component_o *v90; // x0
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v92; // x0
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  Il2CppObject *v96; // x1
  struct System_Object_array *items; // x8
  _QWORD *v98; // x9
  __int64 size; // x10
  Il2CppClass **v100; // x0
  __int64 v101; // x8
  __int64 v102; // x26
  __int64 v103; // x9
  int *v104; // x10
  __int64 v105; // x0
  struct System_Object_array *v106; // x8
  _QWORD *v107; // x9
  __int64 v108; // x10
  Il2CppClass **v109; // x0
  System_Collections_Generic_List_object__o *v110; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v111; // x8
  __int64 v112; // x9
  int32_t *v113; // x10
  __int64 v114; // x0
  int32_t v115; // w26
  Il2CppObject *v116; // x23
  HorizontalQuestInformationIconDraw_o *v117; // x25
  __int64 v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  __int64 v122; // x8
  __int64 v123; // x9
  int *v124; // x10
  __int64 v125; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x0
  System_Collections_Generic_List_TSource__o *v127; // x0
  System_Collections_Generic_List_object__o *v128; // x27
  int32_t v129; // w24
  Il2CppObject *Item; // x0
  int32_t v131; // w2
  int32_t v132; // w3
  System_Collections_Generic_List_object__o *v133; // x26
  int32_t v134; // w28
  Il2CppObject *v135; // x29
  HorizontalQuestInformationIconDraw_o *v136; // x20
  Il2CppObject *v137; // x0
  Il2CppObject *v138; // x29
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  Il2CppClass **v142; // x0
  __int64 v143; // x8
  __int64 v144; // x9
  int *v145; // x10
  __int64 v146; // x20
  __int64 v147; // x0
  int32_t v148; // w2
  int32_t v149; // w3
  __int64 v150; // x0
  __int64 v151; // x20
  __int64 v152; // x8
  __int64 v153; // x9
  int *v154; // x10
  __int64 v155; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v157; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v158; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v159; // [xsp+20h] [xbp-70h]
  __int64 v160; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_49F9470 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____, method);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_GroupBy___f__AnonymousType3_QuestInformationListViewItem__int___int___,
      v4);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType3_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____,
      v5);
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType3_QuestInformationListViewItem__int____,
      v6);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___, v7);
    sub_1B640C8(
      &System_Func_IGrouping_int____f__AnonymousType3_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo,
      v8);
    sub_1B640C8(&System_Func___f__AnonymousType3_QuestInformationListViewItem__int___int__TypeInfo, v9);
    sub_1B640C8(
      &System_Func_QuestInformationListViewItem__int____f__AnonymousType3_QuestInformationListViewItem__int___TypeInfo,
      v10);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___, v11);
    sub_1B640C8(&System_IDisposable_TypeInfo, v12);
    sub_1B640C8(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo, v13);
    sub_1B640C8(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo, v14);
    sub_1B640C8(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__, v16);
    sub_1B640C8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__, v17);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__, v18);
    sub_1B640C8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__, v19);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__, v20);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__, v21);
    sub_1B640C8(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__, v23);
    sub_1B640C8(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo, v24);
    sub_1B640C8(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo, v25);
    sub_1B640C8(&LocalizationManager_TypeInfo, v26);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject____75791864, v27);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v28);
    sub_1B640C8(&UnityEngine_Transform_TypeInfo, v29);
    sub_1B640C8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__17_0__, v30);
    sub_1B640C8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__17_2__, v31);
    sub_1B640C8(
      &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass17_0__CreateIconGroupList_b__1__,
      v32);
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c__DisplayClass17_0_TypeInfo, v33);
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v34);
    sub_1B640C8(&StringLiteral_8612/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/, v35);
    sub_1B640C8(&StringLiteral_8613/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/, v36);
    byte_49F9470 = 1;
  }
  v37 = sub_1B64314(HorizontalQuestInformationIconListComponent___c__DisplayClass17_0_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v37, 0LL);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v41 = (System_String_o **)&StringLiteral_8613/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v41 = (System_String_o **)&StringLiteral_8612/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = (__int64)LocalizationManager__Get(*v41, 0LL);
    if ( !infoLabel )
      goto LABEL_139;
    UILabel__set_text(infoLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v43 = 1;
  }
  else
  {
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v43 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v43, 0LL);
  this->fields.iconGroupList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.iconGroupList, 0, v44, v45);
  if ( !v37 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  *(_DWORD *)(v37 + 16) = this->fields.displayLimitNum;
  v48 = this->fields.itemList;
  v49 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v49 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__17_0 = (System_Func_T1__T2__TResult__o *)v49->static_fields->__9__17_0;
  if ( !_9__17_0 )
  {
    if ( !v49->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v49);
      v49 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v51 = (Il2CppObject *)v49->static_fields->__9;
    _9__17_0 = (System_Func_T1__T2__TResult__o *)sub_1B64314(
                                                   System_Func_QuestInformationListViewItem__int____f__AnonymousType3_QuestInformationListViewItem__int___TypeInfo,
                                                   v46,
                                                   v47);
    System_Func_object__int__object____ctor(
      _9__17_0,
      v51,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__17_0__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__17_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType3_QuestInformationListViewItem__int___o *)_9__17_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v53, v54);
  }
  v55 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__48666272(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v48,
                                                               (System_Func_TSource__int__TResult__o *)_9__17_0,
                                                               (const MethodInfo_2E696A0 *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType3_QuestInformationListViewItem__int____);
  v58 = (System_Func_object__int__o *)sub_1B64314(
                                        System_Func___f__AnonymousType3_QuestInformationListViewItem__int___int__TypeInfo,
                                        v56,
                                        v57);
  System_Func_object__int____ctor(
    v58,
    (Il2CppObject *)v37,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass17_0__CreateIconGroupList_b__1__,
    0LL);
  v59 = System_Linq_Enumerable__GroupBy_object__int_(
          v55,
          (System_Func_TSource__TKey__o *)v58,
          (const MethodInfo_2E5E184 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType3_QuestInformationListViewItem__int___int___);
  v62 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v63 = (System_Collections_Generic_IEnumerable_TSource__o *)v59;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v62 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__17_2 = (System_Func_object__object__o *)v62->static_fields->__9__17_2;
  if ( !_9__17_2 )
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62);
      v62 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v65 = (Il2CppObject *)v62->static_fields->__9;
    _9__17_2 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func_IGrouping_int____f__AnonymousType3_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo,
                                                  v60,
                                                  v61);
    System_Func_object__object____ctor(
      _9__17_2,
      v65,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__17_2__,
      0LL);
    v66 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v66->__9__17_2 = (struct System_Func_IGrouping_int____f__AnonymousType3_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__17_2;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v66->__9__17_2, (int32_t)_9__17_2, v67, v68);
  }
  v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v63,
                                                               (System_Func_TSource__TResult__o *)_9__17_2,
                                                               (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType3_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v72 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo,
                                                       v70,
                                                       v71);
  System_Collections_Generic_List_object____ctor(
    v72,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0LL);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v69,
                 (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v158 = v72;
  if ( (int)gameObject >= 1 )
  {
    v77 = 0;
    v78 = 1;
    v157 = (System_Collections_Generic_List_object__o *)iconGrid;
    v159 = v69;
    do
    {
      if ( (v78 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                                      System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo,
                                                                      v74,
                                                                      v75);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__49003980(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_2EBBDCC *)Method_UnityEngine_Object_Instantiate_GameObject____75791864);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !Enumerator )
          sub_1B64324(0LL);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v83 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v83;
              p_offset += 4;
              if ( !v83 )
                goto LABEL_44;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_44:
            p_method = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v86 = Enumerator->klass;
          v87 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v88 = (System_Collections_IEnumerator_c **)&v86->_1.interfaceOffsets->offset;
            while ( *(v88 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v87;
              v88 += 2;
              if ( !v87 )
                goto LABEL_51;
            }
            v89 = (__int64)&v86->vtable[*(_DWORD *)v88 + 1].method;
          }
          else
          {
LABEL_51:
            v89 = sub_1BB60A8(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v90 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v89)(
                                             Enumerator,
                                             *(_QWORD *)(v89 + 8));
          if ( !v90 )
            sub_1B64324(0LL);
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v90->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (UnityEngine_Transform_c *)v90->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1B645E4(v90);
            v150 = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
            v151 = v150;
            if ( v150 )
            {
              v152 = *(_QWORD *)v150;
              v153 = *(unsigned __int16 *)(*(_QWORD *)v150 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v150 + 302LL) )
              {
                v154 = (int *)(*(_QWORD *)(v152 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v154 - 1) != System_IDisposable_TypeInfo )
                {
                  --v153;
                  v154 += 4;
                  if ( !v153 )
                    goto LABEL_150;
                }
                v155 = v152 + 16LL * *v154 + 312;
              }
              else
              {
LABEL_150:
                v155 = sub_1BB60A8(v150, System_IDisposable_TypeInfo, 0LL);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v155)(v151, *(_QWORD *)(v155 + 8));
            }
            sub_1B6431C(iconGrid);
          }
          v92 = UnityEngine_Component__get_gameObject(v90, 0LL);
          if ( !v92 )
            sub_1B64324(0LL);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v92,
                                         (const MethodInfo_2E8813C *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v96 = ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1B64324(ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v98 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1B64324(ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v98[4] + 192LL) + 112LL));
          }
          else
          {
            v100 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v100[4] = (Il2CppClass *)v96;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v100 + 4), (int32_t)v96, v94, v95);
          }
        }
        gameObject = sub_1B64204(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v101 = *(_QWORD *)gameObject;
          v102 = gameObject;
          v103 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v104 = (int *)(*(_QWORD *)(v101 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v104 - 1) != System_IDisposable_TypeInfo )
            {
              --v103;
              v104 += 4;
              if ( !v103 )
                goto LABEL_67;
            }
            v105 = v101 + 16LL * *v104 + 312;
          }
          else
          {
LABEL_67:
            v105 = sub_1BB60A8(gameObject, System_IDisposable_TypeInfo, 0LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v105)(v102, *(_QWORD *)(v105 + 8));
        }
        v72 = v158;
        v69 = v159;
        iconGrid = (UnityEngine_GameObject_o *)v157;
      }
      if ( !v72 )
        goto LABEL_139;
      v106 = v72->fields._items;
      v107 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v72->fields._version;
      if ( !v106 )
        goto LABEL_139;
      v108 = v72->fields._size;
      if ( (unsigned int)v108 >= v106->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v72,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v107[4] + 192LL) + 112LL));
      }
      else
      {
        v109 = &v106->obj.klass + v108;
        v72->fields._size = v108 + 1;
        v109[4] = (Il2CppClass *)iconDrawList;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v109 + 4), (int32_t)iconDrawList, v75, v76);
      }
      ++v77;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v69,
                     (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v78 = 0;
    }
    while ( v77 < (int)gameObject );
  }
  v110 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                        System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo,
                                                        v74,
                                                        v75);
  System_Collections_Generic_List_object____ctor(
    v110,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v69 )
LABEL_139:
    sub_1B64324(gameObject);
  v111 = v69->klass;
  v112 = *(unsigned __int16 *)(&v69->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v69->klass->_2.bitflags2 + 3) )
  {
    v113 = &v111->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v113 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v112;
      v113 += 4;
      if ( !v112 )
        goto LABEL_89;
    }
    v114 = (__int64)&v111->vtable[*v113].method;
  }
  else
  {
LABEL_89:
    v114 = sub_1BB60A8(
             v69,
             System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
             0LL);
  }
  v160 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v114)(
           v69,
           *(_QWORD *)(v114 + 8));
  if ( !v160 )
    sub_1B64324(0LL);
  v115 = 0;
  v116 = 0LL;
  v117 = 0LL;
  while ( 1 )
  {
    v118 = *(_QWORD *)v160;
    v119 = *(unsigned __int16 *)(*(_QWORD *)v160 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v160 + 302LL) )
    {
      v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v120 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v119;
        v120 += 4;
        if ( !v119 )
          goto LABEL_97;
      }
      v121 = v118 + 16LL * *v120 + 312;
    }
    else
    {
LABEL_97:
      v121 = sub_1BB60A8(v160, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v121)(v160, *(_QWORD *)(v121 + 8)) & 1) == 0 )
      break;
    v122 = *(_QWORD *)v160;
    v123 = *(unsigned __int16 *)(*(_QWORD *)v160 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v160 + 302LL) )
    {
      v124 = (int *)(*(_QWORD *)(v122 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v124 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v123;
        v124 += 4;
        if ( !v123 )
          goto LABEL_104;
      }
      v125 = v122 + 16LL * *v124 + 312;
    }
    else
    {
LABEL_104:
      v125 = sub_1BB60A8(
               v160,
               System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
               0LL);
    }
    v126 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v125)(
                                                                  v160,
                                                                  *(_QWORD *)(v125 + 8));
    v127 = System_Linq_Enumerable__ToList_object_(
             v126,
             (const MethodInfo_2E7501C *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v72 )
      sub_1B64324(v127);
    v128 = (System_Collections_Generic_List_object__o *)v127;
    v129 = v115;
    Item = System_Collections_Generic_List_object___get_Item(
             v72,
             v115,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v133 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && *(int *)(v37 + 16) >= 1 )
    {
      if ( !v128 )
        sub_1B64324(Item);
      v134 = 0;
      do
      {
        if ( v128->fields._size <= v134 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v133,
                   v134,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v138 = Item;
          if ( !Item )
            Item = v116;
          if ( v138 )
          {
            if ( !Item )
              sub_1B64324(0LL);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0LL,
              0,
              iconListComponent,
              0LL);
            v116 = v138;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v133,
                   v134,
                   (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v135 = Item;
          if ( Item )
            v136 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v136 = v117;
          if ( Item )
          {
            v137 = System_Collections_Generic_List_object___get_Item(
                     v128,
                     v134,
                     (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v136 )
              sub_1B64324(v137);
            HorizontalQuestInformationIconDraw__SetItem(
              v136,
              (QuestInformationListViewItem_o *)v137,
              2,
              iconListComponent,
              0LL);
            v117 = (HorizontalQuestInformationIconDraw_o *)v135;
          }
        }
        ++v134;
      }
      while ( v134 < *(_DWORD *)(v37 + 16) );
    }
    if ( !v110 )
      sub_1B64324(Item);
    v139 = v110->fields._items;
    v140 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v110->fields._version;
    if ( !v139 )
      sub_1B64324(Item);
    v141 = v110->fields._size;
    if ( (unsigned int)v141 >= v139->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v110,
        (Il2CppObject *)v133,
        *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    }
    else
    {
      v142 = &v139->obj.klass + v141;
      v110->fields._size = v141 + 1;
      v142[4] = (Il2CppClass *)v133;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)(v142 + 4), (int32_t)v133, v131, v132);
    }
    v72 = v158;
    v115 = v129 + 1;
  }
  v143 = *(_QWORD *)v160;
  v144 = *(unsigned __int16 *)(*(_QWORD *)v160 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v160 + 302LL) )
  {
    v145 = (int *)(*(_QWORD *)(v143 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v145 - 1) != System_IDisposable_TypeInfo )
    {
      --v144;
      v145 += 4;
      if ( !v144 )
        goto LABEL_134;
    }
    v146 = v160;
    v147 = v143 + 16LL * *v145 + 312;
  }
  else
  {
LABEL_134:
    v146 = v160;
    v147 = sub_1BB60A8(v160, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v147)(v146, *(_QWORD *)(v147 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v110;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_iconGroupList, (int32_t)v110, v148, v149);
  iconListComponent->fields.isNeedInit = 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_49F9476 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, items);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v7);
    byte_49F9476 = 1;
  }
  if ( items )
  {
    v8 = *(_QWORD *)&items->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1B6432C(this, items);
        v10 = items->m_Items[v9 + 1];
        v11 = sub_1B64314(QuestInformationListViewItem_TypeInfo, items, *(_QWORD *)&sum);
        ListViewItem___ctor_40370988((ListViewItem_o *)v11, v4 + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x200000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v15 = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v15) )
        {
          sub_1B64324(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v15->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &v15->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v11;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), v11, v12, v13);
        }
        LODWORD(v8) = items->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      v4 += v9;
    }
  }
  return v4;
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        System_Int32_array *items,
        System_Int32_array *svts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x0
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x3
  int32_t RewardSvtList; // w0
  const MethodInfo *v11; // x3
  int32_t RewardItemList; // w0
  const MethodInfo *v13; // x3
  int32_t v14; // w0
  const MethodInfo *v15; // x3
  System_Int32_array *qps; // [xsp+8h] [xbp-38h] BYREF
  System_Int32_array *withoutQP; // [xsp+10h] [xbp-30h] BYREF
  System_Int32_array *combineMaterials; // [xsp+18h] [xbp-28h] BYREF
  System_Int32_array *withoutCM; // [xsp+28h] [xbp-18h] BYREF

  withoutQP = 0LL;
  combineMaterials = 0LL;
  qps = 0LL;
  if ( !kind )
  {
    HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
      this,
      svts,
      &withoutCM,
      &combineMaterials,
      method);
    HorizontalQuestInformationIconListComponent__SplitItemsWithQP(v7, items, &withoutQP, &qps, v8);
    RewardSvtList = HorizontalQuestInformationIconListComponent__CreateRewardSvtList(this, withoutCM, 0, v9);
    RewardItemList = HorizontalQuestInformationIconListComponent__CreateRewardItemList(
                       this,
                       withoutQP,
                       RewardSvtList,
                       v11);
    v14 = HorizontalQuestInformationIconListComponent__CreateRewardSvtList(this, combineMaterials, RewardItemList, v13);
    HorizontalQuestInformationIconListComponent__CreateRewardItemList(this, qps, v14, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardSvtList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  int32_t v4; // w19
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x8
  unsigned __int64 v9; // x24
  int32_t v10; // w29
  __int64 v11; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v4 = sum;
  v6 = this;
  if ( (byte_49F9477 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__, svts);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1B640C8(&QuestInformationListViewItem_TypeInfo, v7);
    byte_49F9477 = 1;
  }
  if ( svts )
  {
    v8 = *(_QWORD *)&svts->max_length;
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      do
      {
        if ( v9 >= (unsigned int)v8 )
          sub_1B6432C(this, svts);
        v10 = svts->m_Items[v9 + 1];
        v11 = sub_1B64314(QuestInformationListViewItem_TypeInfo, svts, *(_QWORD *)&sum);
        ListViewItem___ctor_40370988((ListViewItem_o *)v11, v4 + v9, 0LL);
        *(_QWORD *)(v11 + 112) = 0x100000000LL;
        *(_DWORD *)(v11 + 124) = v10;
        if ( !v10 )
          *(_DWORD *)(v11 + 116) = 0;
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1B64324(itemList);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v11,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v11;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v18 + 4), v11, v12, v13);
        }
        LODWORD(v8) = svts->max_length;
        ++v9;
      }
      while ( (__int64)v9 < (int)v8 );
      v4 += v9;
    }
  }
  return v4;
}


void __fastcall HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1B64324(0LL);
  UnityEngine_GameObject__SetActive(questInfoRoot, 0, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__InitQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  AlphaTransitionCalculator_o *questInfoPanel; // x0
  const MethodInfo *v6; // x1
  float v7; // s8
  TitleInfoControl_c *v8; // x0
  System_Func_float__float__float__float__o *v9; // x21
  __int64 v10; // x1
  __int64 v11; // x2
  AlphaTransitionCalculator_o *v12; // x22
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_49F9472 & 1) == 0 )
  {
    sub_1B640C8(&AlphaTransitionCalculator_TypeInfo, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v3);
    sub_1B640C8(&TitleInfoControl_TypeInfo, v4);
    byte_49F9472 = 1;
  }
  questInfoPanel = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
  this->fields.mstQuestInfoIconUpdateTimer = 0.0;
  if ( !questInfoPanel )
    goto LABEL_14;
  ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))questInfoPanel->klass[1]._1.castClass)(
    questInfoPanel,
    questInfoPanel->klass[1]._1.declaringType,
    1.0);
  if ( this->fields.questInfoAlphaCalculator )
    goto LABEL_9;
  v7 = ChangedFPSUtil__CovertFrameNumToSecond(this->fields.questInfoFadeFrameNum, 0LL);
  v8 = TitleInfoControl_TypeInfo;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v8 = TitleInfoControl_TypeInfo;
  }
  v9 = ExtraEasing__AsymptoticSeriesFloat(
         v8->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)this->fields.questInfoFadeFrameNum,
         0LL);
  v12 = (AlphaTransitionCalculator_o *)sub_1B64314(AlphaTransitionCalculator_TypeInfo, v10, v11);
  AlphaTransitionCalculator___ctor(v12, v7, v9, 0LL);
  this->fields.questInfoAlphaCalculator = v12;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.questInfoAlphaCalculator, (int32_t)v12, v13, v14);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1B64324(questInfoPanel);
  AlphaTransitionCalculator__MakeFadeInFinished(questInfoPanel, 0LL);
LABEL_9:
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( iconGroupList->fields._size < 1 )
    {
      HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(this, v6);
    }
    else
    {
      this->fields.currentInformationIndex = 0;
      HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v6);
    }
  }
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusBattleListViewItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  HorizontalQuestInformationIconListComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Material_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49F947C & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconListComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v6);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v7);
    byte_49F947C = 1;
  }
  p_mChocoMaterialSp = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B6406C(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_SP, 0LL);
    v20 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v18, v19);
    UnityEngine_Material___ctor(v20, v17, 0LL);
    p_mChocoMaterialSp->klass = (ServantStatusBattleListViewItem_c *)v20;
    sub_1B6406C(p_mChocoMaterialSp, (int32_t)v20, v21, v22);
    if ( !p_mChocoMaterialSp->klass )
      sub_1B64324(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ServantStatusBattleListViewItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v11; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  HorizontalQuestInformationIconListComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  UnityEngine_Material_o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_49F947B & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconListComponent_TypeInfo, method);
    sub_1B640C8(&UnityEngine_Material_TypeInfo, v3);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B640C8(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B640C8(&StringLiteral_16091/*"_ChocoTex"*/, v6);
    sub_1B640C8(&StringLiteral_12673/*"Shaders/ChocoMap"*/, v7);
    byte_49F947B = 1;
  }
  p_mChocoMaterialTx = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    v11 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v11, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12673/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2ECC0A8 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B6406C(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v16 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_TX, 0LL);
    v20 = (UnityEngine_Material_o *)sub_1B64314(UnityEngine_Material_TypeInfo, v18, v19);
    UnityEngine_Material___ctor(v20, v17, 0LL);
    p_mChocoMaterialTx->klass = (ServantStatusBattleListViewItem_c *)v20;
    sub_1B6406C(p_mChocoMaterialTx, (int32_t)v20, v21, v22);
    if ( !p_mChocoMaterialTx->klass )
      sub_1B64324(0LL);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16091/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall HorizontalQuestInformationIconListComponent__Setup(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v18; // x21
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t iconType; // w8
  int64_t Master_object; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x21
  HorizontalQuestInformationIconListComponent___c_c *v30; // x0
  System_Func_object__int__o *_9__16_0; // x22
  Il2CppObject *v32; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Int32_array *v37; // x0
  const MethodInfo *v38; // x4
  const MethodInfo *v39; // x4
  Il2CppObject *v41; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_49F946F & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_UserQuestInfoMaster___, *(_QWORD *)&questId);
    sub_1B640C8(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___, v5);
    sub_1B640C8(&Method_DataManager_GetMaster_ViewEnemyMaster___, v6);
    sub_1B640C8(&DataManager_TypeInfo, v7);
    sub_1B640C8(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___, v9);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_int___, v10);
    sub_1B640C8(&System_Func_ViewEnemyEntity__int__TypeInfo, v11);
    sub_1B640C8(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__, v12);
    sub_1B640C8(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo, v13);
    sub_1B640C8(&NetworkManager_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B640C8(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__16_0__, v16);
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v17);
    byte_49F946F = 1;
  }
  entity = 0LL;
  v41 = 0LL;
  this->fields.isNeedInit = 0;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo,
                                                       *(_QWORD *)&questId,
                                                       method);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v18;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v18, v19, v20);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E39398 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_35;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)Master_object, questId, 0LL);
    if ( EntityListFromQuestId )
    {
      v29 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( *(_QWORD *)&EntityListFromQuestId->max_length )
      {
        v30 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
          v30 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__16_0 = (System_Func_object__int__o *)v30->static_fields->__9__16_0;
        if ( !_9__16_0 )
        {
          if ( !v30->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v30);
            v30 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v32 = (Il2CppObject *)v30->static_fields->__9;
          _9__16_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_ViewEnemyEntity__int__TypeInfo, v27, v28);
          System_Func_object__int____ctor(
            _9__16_0,
            v32,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__16_0__,
            0LL);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__16_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__16_0;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__16_0, (int32_t)_9__16_0, v34, v35);
        }
        v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v29,
                                                                     (System_Func_TSource__TResult__o *)_9__16_0,
                                                                     (const MethodInfo_2E68AD0 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v37 = System_Linq_Enumerable__ToArray_int_(
                v36,
                (const MethodInfo_2E7122C *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v37, v38);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Master_object = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    Master_object = UserQuestInfoMaster__TryGetEntity(
                      (UserQuestInfoMaster_o *)MasterData_object,
                      &entity,
                      Master_object,
                      questId,
                      0LL);
    if ( (Master_object & 1) != 0 )
    {
      if ( entity )
      {
        HorizontalQuestInformationIconListComponent__CreateRewardList(
          this,
          0,
          entity->fields.dropItemIds,
          entity->fields.dropSvtIds,
          v24);
LABEL_29:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v25);
        return 1;
      }
      goto LABEL_35;
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &v41,
                      questId,
                      (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( v41 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v41[1].monitor,
          HIDWORD(v41[1].klass),
          v39);
        goto LABEL_29;
      }
LABEL_35:
      sub_1B64324(Master_object);
    }
  }
  Master_object = (int64_t)this->fields.infoLabel;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0LL);
  if ( !Master_object )
    goto LABEL_35;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
  return 0;
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitItemsWithQP(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *itms,
        System_Int32_array **withoutQP,
        System_Int32_array **qps,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_int__o *v13; // x23
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x22
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  __int64 v19; // x8
  ItemMaster_o *v20; // x24
  unsigned __int64 v21; // x25
  int32_t *v22; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  char *v26; // x8
  struct System_Int32_array *v27; // x8
  _QWORD *v28; // x9
  __int64 v29; // x10
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  char *v33; // x8
  __int64 v34; // x8
  System_Collections_Generic_List_int__o *v35; // x0
  const MethodInfo_348FEDC *v36; // x2
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  __int64 v40; // x8
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Int32_array *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3

  if ( (byte_49F9475 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ItemMaster___, itms);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v10);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    byte_49F9475 = 1;
  }
  v13 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    itms,
                                                    withoutQP);
  System_Collections_Generic_List_int____ctor(
    v13,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v16 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v19 = *(_QWORD *)&itms->max_length;
  if ( (int)v19 >= 1 )
  {
    v20 = (ItemMaster_o *)Instance;
    v21 = 0LL;
    v22 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v19 )
LABEL_43:
        sub_1B6432C(Instance, v18);
      v18 = (unsigned int)v22[v21];
      if ( !(_DWORD)v18 )
        break;
      if ( (_DWORD)v18 == -1 )
      {
        if ( !v16 )
          goto LABEL_42;
        items = v16->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v16->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v34 = v24[4];
          v35 = v16;
          goto LABEL_28;
        }
        v26 = (char *)items + 4 * size;
        v16->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v26 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v20 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v20, v18, 0LL);
      if ( v21 >= itms->max_length )
        goto LABEL_43;
      v18 = (unsigned int)v22[v21];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v16 )
          goto LABEL_42;
        v30 = v16->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v16->fields._version;
        if ( !v30 )
          goto LABEL_42;
        v32 = v16->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v40 = v31[4];
          v35 = v16;
LABEL_36:
          v36 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v40 + 192) + 112LL);
          goto LABEL_37;
        }
        v33 = (char *)v30 + 4 * v32;
        v16->fields._size = v32 + 1;
      }
      else
      {
        if ( !v13 )
          goto LABEL_42;
        v37 = v13->fields._items;
        v38 = Method_System_Collections_Generic_List_int__Add__;
        ++v13->fields._version;
        if ( !v37 )
          goto LABEL_42;
        v39 = v13->fields._size;
        if ( (unsigned int)v39 >= v37->max_length )
        {
          v40 = v38[4];
          v35 = v13;
          goto LABEL_36;
        }
        v33 = (char *)v37 + 4 * v39;
        v13->fields._size = v39 + 1;
      }
      *((_DWORD *)v33 + 8) = v18;
LABEL_38:
      LODWORD(v19) = itms->max_length;
      if ( (__int64)++v21 >= (int)v19 )
        goto LABEL_39;
    }
    if ( !v13 )
      goto LABEL_42;
    v27 = v13->fields._items;
    v28 = Method_System_Collections_Generic_List_int__Add__;
    ++v13->fields._version;
    if ( !v27 )
      goto LABEL_42;
    v29 = v13->fields._size;
    if ( (unsigned int)v29 >= v27->max_length )
    {
      v34 = v28[4];
      v35 = v13;
LABEL_28:
      v36 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v34 + 192) + 112LL);
      LODWORD(v18) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v35, v18, v36);
      goto LABEL_38;
    }
    v26 = (char *)v27 + 4 * v29;
    v13->fields._size = v29 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v13
    || (v41 = System_Collections_Generic_List_int___ToArray(
                v13,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v41,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)withoutQP, (int32_t)v41, v42, v43),
        !v16) )
  {
LABEL_42:
    sub_1B64324(Instance);
  }
  v44 = System_Collections_Generic_List_int___ToArray(
          v16,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v44;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)qps, (int32_t)v44, v45, v46);
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x23
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_List_int__o *v17; // x22
  Il2CppObject *Instance; // x0
  __int64 v19; // x1
  __int64 v20; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v21; // x24
  unsigned __int64 v22; // x25
  int32_t *v23; // x28
  int32_t v24; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  char *v28; // x8
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  struct System_Int32_array *v32; // x8
  _QWORD *v33; // x9
  __int64 v34; // x10
  char *v35; // x8
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  __int64 v39; // x8
  System_Collections_Generic_List_int__o *v40; // x0
  const MethodInfo_348FEDC *v41; // x2
  __int64 v42; // x8
  System_Int32_array *v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  System_Int32_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_49F9474 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataManager_GetMasterData_ServantMaster___, svts);
    sub_1B640C8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B640C8(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B640C8(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B640C8(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B640C8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_49F9474 = 1;
  }
  entity = 0LL;
  v14 = (System_Collections_Generic_List_int__o *)sub_1B64314(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    svts,
                                                    withoutCM);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = (System_Collections_Generic_List_int__o *)sub_1B64314(System_Collections_Generic_List_int__TypeInfo, v15, v16);
  System_Collections_Generic_List_int____ctor(
    v17,
    (const MethodInfo_348F688 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E393EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v20 = *(_QWORD *)&svts->max_length;
  if ( (int)v20 >= 1 )
  {
    v21 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v22 = 0LL;
    v23 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v22 >= (unsigned int)v20 )
LABEL_46:
        sub_1B6432C(Instance, v19);
      v24 = v23[v22];
      if ( !v24 )
        break;
      if ( v24 == -1 )
      {
        if ( !v17 )
          goto LABEL_45;
        items = v17->fields._items;
        v26 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v17->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v39 = v26[4];
          v40 = v17;
LABEL_36:
          v41 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v39 + 192) + 112LL);
          LODWORD(v19) = 0;
          goto LABEL_40;
        }
        v28 = (char *)items + 4 * size;
        v17->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v28 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v21 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v21,
                                   &entity,
                                   v24,
                                   (const MethodInfo_30D3EF8 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v22 >= svts->max_length )
          goto LABEL_46;
        if ( !v17 )
          goto LABEL_45;
        v19 = (unsigned int)v23[v22];
        v32 = v17->fields._items;
        v33 = Method_System_Collections_Generic_List_int__Add__;
        ++v17->fields._version;
        if ( !v32 )
          goto LABEL_45;
        v34 = v17->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          v42 = v33[4];
          v40 = v17;
LABEL_39:
          v41 = *(const MethodInfo_348FEDC **)(*(_QWORD *)(v42 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v40, v19, v41);
          goto LABEL_41;
        }
        v35 = (char *)v32 + 4 * v34;
        v17->fields._size = v34 + 1;
      }
      else
      {
LABEL_28:
        if ( v22 >= svts->max_length )
          goto LABEL_46;
        if ( !v14 )
          goto LABEL_45;
        v19 = (unsigned int)v23[v22];
        v36 = v14->fields._items;
        v37 = Method_System_Collections_Generic_List_int__Add__;
        ++v14->fields._version;
        if ( !v36 )
          goto LABEL_45;
        v38 = v14->fields._size;
        if ( (unsigned int)v38 >= v36->max_length )
        {
          v42 = v37[4];
          v40 = v14;
          goto LABEL_39;
        }
        v35 = (char *)v36 + 4 * v38;
        v14->fields._size = v38 + 1;
      }
      *((_DWORD *)v35 + 8) = v19;
LABEL_41:
      LODWORD(v20) = svts->max_length;
      if ( (__int64)++v22 >= (int)v20 )
        goto LABEL_42;
    }
    if ( !v14 )
      goto LABEL_45;
    v29 = v14->fields._items;
    v30 = Method_System_Collections_Generic_List_int__Add__;
    ++v14->fields._version;
    if ( !v29 )
      goto LABEL_45;
    v31 = v14->fields._size;
    if ( (unsigned int)v31 >= v29->max_length )
    {
      v39 = v30[4];
      v40 = v14;
      goto LABEL_36;
    }
    v28 = (char *)v29 + 4 * v31;
    v14->fields._size = v31 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v14
    || (v43 = System_Collections_Generic_List_int___ToArray(
                v14,
                (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v43,
        sub_1B6406C((ServantStatusBattleListViewItem_o *)withoutCM, (int32_t)v43, v44, v45),
        !v17) )
  {
LABEL_45:
    sub_1B64324(Instance);
  }
  v46 = System_Collections_Generic_List_int___ToArray(
          v17,
          (const MethodInfo_3491A34 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v46;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)combineMaterials, (int32_t)v46, v47, v48);
}


void __fastcall HorizontalQuestInformationIconListComponent__Update(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isNeedInit )
  {
    HorizontalQuestInformationIconListComponent__InitQuestInfoLb(this, method);
    this->fields.isNeedInit = 0;
  }
  if ( this->fields.iconGroupList )
    HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(this, method);
}


void __fastcall HorizontalQuestInformationIconListComponent__UpdateQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x0
  TransitionCalculator_float__o *questInfoAlphaCalculator; // x0
  AlphaTransitionCalculator_o *Instance; // x0
  float mstQuestInfoIconUpdateTimer; // s8
  float deltaTime; // s0
  float questInfoChangeInterval; // s1
  float v13; // s0
  int32_t currentInformationIndex; // w20
  const MethodInfo *v15; // x1
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v16; // x8
  struct AlphaTransitionCalculator_o *v17; // x8

  if ( (byte_49F9473 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_TransitionCalculator_float__Update__, v5);
    sub_1B640C8(&Method_TransitionCalculator_float__get_Current__, v6);
    byte_49F9473 = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_2E55CB4 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_376C0A0 *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0LL);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          v13 = mstQuestInfoIconUpdateTimer + deltaTime;
          this->fields.mstQuestInfoIconUpdateTimer = v13;
          if ( v13 >= questInfoChangeInterval )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            this->fields.mstQuestInfoIconUpdateTimer = 0.0;
            if ( !Instance )
              goto LABEL_20;
            AlphaTransitionCalculator__StartFadeOut(Instance, 0LL);
          }
        }
        Instance = this->fields.questInfoAlphaCalculator;
        if ( Instance )
        {
          Instance = (AlphaTransitionCalculator_o *)AlphaTransitionCalculator__IsFadeOutFinished(Instance, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = this->fields.questInfoAlphaCalculator;
            if ( !Instance )
              goto LABEL_20;
            currentInformationIndex = this->fields.currentInformationIndex;
            AlphaTransitionCalculator__StartFadeIn(Instance, 0LL);
            v16 = this->fields.iconGroupList;
            if ( !v16 )
              goto LABEL_20;
            this->fields.currentInformationIndex = (currentInformationIndex + 1) % v16->fields._size;
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v15);
          }
          v17 = this->fields.questInfoAlphaCalculator;
          if ( v17 )
          {
            Instance = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
            if ( Instance )
            {
              ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
                Instance,
                Instance->klass[1]._1.declaringType,
                v17->fields._Current_k__BackingField);
              return;
            }
          }
        }
LABEL_20:
        sub_1B64324(Instance);
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49F947E & 1) == 0 )
  {
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v1);
    byte_49F947E = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(HorizontalQuestInformationIconListComponent___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
}


void __fastcall HorizontalQuestInformationIconListComponent___c___ctor(
        HorizontalQuestInformationIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
__f__AnonymousType3_QuestInformationListViewItem__int__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__17_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __f__AnonymousType3__v_j__TPar___i_j__TPar__o *v7; // x21

  if ( (byte_49F947F & 1) == 0 )
  {
    sub_1B640C8(&Method___f__AnonymousType3_QuestInformationListViewItem__int___ctor__, v);
    sub_1B640C8(&_f__AnonymousType3_QuestInformationListViewItem__int__TypeInfo, v6);
    byte_49F947F = 1;
  }
  v7 = (__f__AnonymousType3__v_j__TPar___i_j__TPar__o *)sub_1B64314(
                                                          _f__AnonymousType3_QuestInformationListViewItem__int__TypeInfo,
                                                          v,
                                                          *(_QWORD *)&i);
  _f__AnonymousType3_object__int____ctor(
    v7,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_3007F90 *)Method___f__AnonymousType3_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType3_QuestInformationListViewItem__int__o *)v7;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__17_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType3_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  HorizontalQuestInformationIconListComponent___c_c *v7; // x0
  System_Func_object__object__o *_9__17_3; // x20
  Il2CppObject *v9; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_49F9480 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_System_Linq_Enumerable_Select___f__AnonymousType3_QuestInformationListViewItem__int___QuestInformationListViewItem___,
      g);
    sub_1B640C8(
      &System_Func___f__AnonymousType3_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo,
      v4);
    sub_1B640C8(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__17_3__, v5);
    sub_1B640C8(&HorizontalQuestInformationIconListComponent___c_TypeInfo, v6);
    byte_49F9480 = 1;
  }
  v7 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v7 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__17_3 = (System_Func_object__object__o *)v7->static_fields->__9__17_3;
  if ( !_9__17_3 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v7->static_fields->__9;
    _9__17_3 = (System_Func_object__object__o *)sub_1B64314(
                                                  System_Func___f__AnonymousType3_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo,
                                                  g,
                                                  method);
    System_Func_object__object____ctor(
      _9__17_3,
      v9,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__17_3__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__17_3 = (struct System_Func___f__AnonymousType3_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__17_3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_3, (int32_t)_9__17_3, v11, v12);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__17_3,
                                                                                     (const MethodInfo_2E693AC *)Method_System_Linq_Enumerable_Select___f__AnonymousType3_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__17_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType3_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_49F9481 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1B640C8(
                                                                  &Method___f__AnonymousType3_QuestInformationListViewItem__int__get_v__,
                                                                  x);
    byte_49F9481 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return x->fields._v_i__Field;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c___Setup_b__16_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B64324(this);
  return value->fields.enemyId;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass17_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass17_0___CreateIconGroupList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass17_0_o *this,
        __f__AnonymousType3_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass17_0_o *v4; // x20

  v4 = this;
  if ( (byte_49F9482 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass17_0_o *)sub_1B640C8(
                                                                                    &Method___f__AnonymousType3_QuestInformationListViewItem__int__get_i__,
                                                                                    x);
    byte_49F9482 = 1;
  }
  if ( !x )
    sub_1B64324(this);
  return x->fields._i_i__Field / v4->fields.chunkSize;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass25_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass25_0___ChangeViewQuestInfoLb_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass25_0_o *this,
        HorizontalQuestInformationIconDraw_o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass25_0_o *v3; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass25_0_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)x,
                                                                                        0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_1B64324(this);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    v3->fields.index == _4__this->fields.currentInformationIndex,
    0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass36_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass36_0___CreateEnemyList_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x1
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__1; // x21
  int32_t v9; // w2
  int32_t v10; // w3

  v3 = this;
  if ( (byte_49F9483 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_o *)sub_1B640C8(
                                                                                    &Method_HorizontalQuestInformationIconListComponent___c__DisplayClass36_0__CreateEnemyList_b__1__,
                                                                                    v5);
    byte_49F9483 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    sub_1B64324(this);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v3->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, method, v2);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v3,
      Method_HorizontalQuestInformationIconListComponent___c__DisplayClass36_0__CreateEnemyList_b__1__,
      0LL);
    v3->fields.__9__1 = _9__1;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v3->fields.__9__1, (int32_t)_9__1, v9, v10);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37484096(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass36_0___CreateEnemyList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass36_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  HorizontalQuestInformationIconListComponent_o *_4__this; // x0
  const MethodInfo *v5; // x1

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (HorizontalQuestInformationIconListComponent__CreateEnemyList_33750532(
          _4__this,
          (int32_t)method,
          this->fields.enemies,
          this->fields.veEnts,
          v2),
        (_4__this = this->fields.__4__this) == 0LL) )
  {
    sub_1B64324(_4__this);
  }
  HorizontalQuestInformationIconListComponent__CreateIconGroupList(_4__this, v5);
}