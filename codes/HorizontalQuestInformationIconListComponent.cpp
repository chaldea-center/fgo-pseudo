void __fastcall HorizontalQuestInformationIconListComponent___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct HorizontalQuestInformationIconListComponent_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A58174 & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/);
    sub_1B885B0(&StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/);
    byte_4A58174 = 1;
  }
  HorizontalQuestInformationIconListComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)HorizontalQuestInformationIconListComponent_TypeInfo->static_fields,
    StringLiteral_15130/*"Unlit/Transparent Colored_Choco"*/,
    v1,
    v2);
  v3 = StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = HorizontalQuestInformationIconListComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4976/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v3, v5, v6);
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
  __int64 v3; // x19
  System_Collections_Generic_List_object__o *iconGroupList; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_object__o **v8; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Action_object__o *v11; // x22
  Il2CppObject *current; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A58168 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__);
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
    byte_4A58168 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v3 = sub_1B887FC(HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3
    || (*(_QWORD *)(v3 + 24) = this,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v6, v7),
        *(_DWORD *)(v3 + 16) = 0,
        (iconGroupList = (System_Collections_Generic_List_object__o *)this->fields.iconGroupList) == 0LL) )
  {
    sub_1B8880C(iconGroupList, v5);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v15,
    iconGroupList,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___GetEnumerator__);
  v8 = (System_Action_object__o **)(v3 + 32);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v15,
           (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___MoveNext__);
    if ( !v9 )
      break;
    v11 = *v8;
    current = v15.fields._current;
    if ( !*v8 )
    {
      v11 = (System_Action_object__o *)sub_1B887FC(System_Action_HorizontalQuestInformationIconDraw__TypeInfo);
      System_Action_object____ctor(
        v11,
        (Il2CppObject *)v3,
        Method_HorizontalQuestInformationIconListComponent___c__DisplayClass27_0__ChangeViewQuestInfoLb_b__0__,
        0LL);
      *v8 = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)v11, v13, v14);
    }
    if ( !current )
      sub_1B8880C(v9, v10);
    System_Collections_Generic_List_object___ForEach(
      (System_Collections_Generic_List_object__o *)current,
      (System_Action_T__o *)v11,
      (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__ForEach__);
    ++*(_DWORD *)(v3 + 16);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v15,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_List_HorizontalQuestInformationIconDraw___Dispose__);
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t itemCnt,
        int32_t svtCnt,
        const MethodInfo *method)
{
  int32_t v9; // w22
  QuestInformationListViewItem_o *v10; // x23
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8
  QuestInformationListViewItem_o *v19; // x22
  int32_t v20; // w2
  int32_t v21; // w3
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  Il2CppClass **v25; // x8

  if ( (byte_4A5816F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A5816F = 1;
  }
  if ( !kind )
  {
    if ( itemCnt >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v10, v9, 2, 0, 0LL);
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
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v10, v12, v13);
        }
        if ( itemCnt == ++v9 )
          goto LABEL_14;
      }
LABEL_22:
      sub_1B8880C(itemList, v11);
    }
    itemCnt = 0;
LABEL_14:
    if ( svtCnt >= 1 )
    {
      while ( 1 )
      {
        v19 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v19, itemCnt, 1, 0, 0LL);
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
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
        }
        else
        {
          v25 = &v22->obj.klass + v24;
          itemList->fields._size = v24 + 1;
          v25[4] = (Il2CppClass *)v19;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 4), (int32_t)v19, v20, v21);
        }
        --svtCnt;
        ++itemCnt;
        if ( !svtCnt )
          return;
      }
      goto LABEL_22;
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t kind,
        int32_t questId,
        System_Int32_array *enemies,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 QuestEntity; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 *v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  Il2CppObject *Master_object; // x22
  Il2CppObject *v18; // x24
  __int64 *v19; // x25
  int32_t v20; // w2
  int32_t v21; // w3
  bool HasFlag; // w28
  Il2CppObject *v23; // x27
  __int64 v24; // x8
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  __int64 v29; // x8
  __int64 v30; // x29
  __int64 v31; // x23
  __int64 v32; // x26
  unsigned __int64 v33; // x9
  unsigned __int64 v34; // x19
  int32_t v35; // w3
  __int64 v36; // x8
  ViewEnemyEntity_o *v37; // x27
  unsigned int *v38; // x8
  ServantStatusBattleListViewItem_o *v39; // x0
  System_String_o *v40; // x0
  Il2CppObject *v41; // x27
  int32_t v42; // w2
  int32_t v43; // w3
  struct System_Object_array *items; // x8
  _QWORD *v45; // x9
  __int64 size; // x10
  Il2CppClass **v47; // x0
  ViewEnemyEntity_o *v48; // x28
  unsigned int *v49; // x28
  System_Object_array *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Action_o *v53; // x21
  int32_t v54; // w2
  int32_t v55; // w3
  System_Action_o *v56; // x21
  int32_t v57; // w2
  int32_t v58; // w3
  System_Action_o *v59; // x19
  __int64 v60; // x0
  HorizontalQuestInformationIconListComponent_o *v61; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_object__o *v62; // [xsp+8h] [xbp-88h]
  bool v63; // [xsp+14h] [xbp-7Ch]
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v65; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v66; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A58170 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_QuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ServantMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_UserQuestInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__);
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
    sub_1B885B0(&ViewEnemyEntity___TypeInfo);
    sub_1B885B0(&ViewEnemyEntity_TypeInfo);
    sub_1B885B0(&StringLiteral_12656/*"Servants/Commands/"*/);
    byte_4A58170 = 1;
  }
  v65 = 0LL;
  v66 = 0LL;
  entity = 0LL;
  v9 = sub_1B887FC(HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !v9 )
    goto LABEL_63;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = enemies;
  v14 = (__int64 *)(v9 + 32);
  *(_DWORD *)(v9 + 24) = questId;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 32), (int32_t)enemies, v15, v16);
  if ( kind )
    return;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v18 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ServantMaster___);
  v62 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v62,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v9 + 40) = 0LL;
  v19 = (__int64 *)(v9 + 40);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), 0, v20, v21);
  QuestEntity = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_QuestMaster___);
  if ( !QuestEntity )
    goto LABEL_63;
  QuestEntity = (__int64)QuestMaster__getQuestEntity((QuestMaster_o *)QuestEntity, *(_DWORD *)(v9 + 24), 0LL);
  if ( !QuestEntity )
    goto LABEL_63;
  HasFlag = QuestEntity__HasFlag((QuestEntity_o *)QuestEntity, 0x200000000000000LL, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v61 = this;
  v23 = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  QuestEntity = NetworkManager__get_UserId(0LL);
  if ( !v23 )
    goto LABEL_63;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v23, &entity, QuestEntity, *(_DWORD *)(v9 + 24), 0LL);
  v24 = *(_QWORD *)(v9 + 32);
  if ( v24 )
  {
    v25 = sub_1B88658(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v24 + 24));
    *v19 = v25;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 40), v25, v26, v27);
    v29 = *v14;
    if ( !*v14 )
      goto LABEL_63;
    v30 = 0LL;
    v31 = 8LL;
    v32 = 8LL;
    v63 = HasFlag;
    while ( 1 )
    {
      v33 = *(unsigned int *)(v29 + 24);
      v34 = v31 - 8;
      if ( v31 - 8 >= (int)v33 )
        break;
      if ( v34 >= v33 )
        goto LABEL_64;
      v35 = *(_DWORD *)(v29 + 4 * v31);
      if ( v35 < 1 )
        goto LABEL_39;
      if ( !Master_object )
        goto LABEL_63;
      QuestEntity = ViewEnemyMaster__TryGetEntity(
                      (ViewEnemyMaster_o *)Master_object,
                      &v65,
                      *(_DWORD *)(v9 + 24),
                      v35,
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
        if ( !v65 )
          goto LABEL_63;
        QuestEntity = System_Linq_Enumerable__Contains_int_(
                        (System_Collections_Generic_IEnumerable_TSource__o *)QuestEntity,
                        v65->fields.enemyId,
                        (const MethodInfo_2E99A14 *)Method_System_Linq_Enumerable_Contains_int___);
        if ( (QuestEntity & 1) == 0 )
        {
LABEL_28:
          v36 = *v14;
          if ( !*v14 )
            goto LABEL_63;
          if ( v34 >= *(unsigned int *)(v36 + 24) )
            goto LABEL_64;
          *(_DWORD *)(v36 + 4 * v31) = 0;
        }
      }
      if ( !v65 || !v18 )
        goto LABEL_63;
      QuestEntity = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)v18,
                      &v66,
                      v65->fields.svtId,
                      (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( (QuestEntity & 1) != 0 )
      {
        QuestEntity = (__int64)v66;
        if ( !v66 )
          goto LABEL_63;
        QuestEntity = ServantEntity__get_IsOrganization((ServantEntity_o *)v66, 0LL);
        if ( (QuestEntity & 1) == 0 )
          goto LABEL_38;
        QuestEntity = (__int64)v65;
        if ( !v65 )
          goto LABEL_63;
        QuestEntity = ViewEnemyEntity__IsIconIdUnique(v65, 0LL);
        if ( (QuestEntity & 1) == 0 )
        {
          if ( !v65 )
            goto LABEL_63;
          v40 = System_Int32__ToString((int)v65 + 36, 0LL);
          v41 = (Il2CppObject *)System_String__Concat_61707032((System_String_o *)StringLiteral_12656/*"Servants/Commands/"*/, v40, 0LL);
          QuestEntity = (__int64)v62;
          if ( !v62 )
            goto LABEL_63;
          QuestEntity = System_Collections_Generic_List_object___Contains(
                          v62,
                          v41,
                          (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( (QuestEntity & 1) == 0 )
          {
            items = v62->fields._items;
            v45 = Method_System_Collections_Generic_List_string__Add__;
            ++v62->fields._version;
            if ( !items )
              goto LABEL_63;
            size = v62->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v62,
                v41,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v45[4] + 192LL) + 112LL));
            }
            else
            {
              v47 = &items->obj.klass + size;
              v62->fields._size = size + 1;
              v47[4] = (Il2CppClass *)v41;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v47 + 4), (int32_t)v41, v42, v43);
            }
          }
          v48 = v65;
          v37 = (ViewEnemyEntity_o *)sub_1B887FC(ViewEnemyEntity_TypeInfo);
          ViewEnemyEntity___ctor_40282184(v37, v48, 0LL);
          v65 = v37;
          if ( !v37 )
            goto LABEL_63;
          v37->fields.iconId = 0;
        }
        else
        {
LABEL_38:
          v37 = v65;
        }
        v49 = (unsigned int *)*v19;
        if ( !*v19 )
          goto LABEL_63;
        if ( v37 )
        {
          QuestEntity = sub_1B886EC(v37, *(_QWORD *)(*(_QWORD *)v49 + 64LL));
          if ( !QuestEntity )
          {
            v60 = sub_1B88830();
            sub_1B886D8(v60, 0LL);
          }
        }
        if ( v34 >= v49[6] )
LABEL_64:
          sub_1B88814(QuestEntity, v11);
        v39 = (ServantStatusBattleListViewItem_o *)&v49[v32];
        HasFlag = v63;
        v39->klass = (ServantStatusBattleListViewItem_c *)v37;
      }
      else
      {
LABEL_39:
        v38 = (unsigned int *)*v19;
        if ( !*v19 )
          goto LABEL_63;
        if ( v34 >= v38[6] )
          goto LABEL_64;
        LODWORD(v37) = 0;
        v39 = (ServantStatusBattleListViewItem_o *)&v38[2 * v30 + 8];
        *(_QWORD *)&v38[v32] = 0LL;
      }
      sub_1B88554(v39, (int32_t)v37, v28, v35);
      v29 = *v14;
      ++v30;
      ++v31;
      v32 += 2LL;
      if ( !*v14 )
        goto LABEL_63;
    }
  }
  QuestEntity = (__int64)v62;
  if ( !v62 )
LABEL_63:
    sub_1B8880C(QuestEntity, v11);
  v50 = System_Collections_Generic_List_object___ToArray(
          v62,
          (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
  v61->fields.loadedAssets = (struct System_String_array *)v50;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v61->fields.loadedAssets, (int32_t)v50, v51, v52);
  v61->fields.loading = 1;
  v53 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__0__,
    0LL);
  v61->fields.assetStoragesLoadCallback = v53;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v61->fields.assetStoragesLoadCallback, (int32_t)v53, v54, v55);
  v56 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v56,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__1__,
    0LL);
  v61->fields.enemyAtlasLoadCallback = v56;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v61->fields.enemyAtlasLoadCallback, (int32_t)v56, v57, v58);
  v59 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v59,
    (Il2CppObject *)v9,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass38_0__CreateEnemyList_b__2__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v59, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall HorizontalQuestInformationIconListComponent__CreateEnemyList_34040920(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v7; // x21
  __int64 v8; // x8
  unsigned __int64 v9; // x25
  int32_t v10; // w22
  ViewEnemyEntity_o *v11; // x24
  QuestInformationListViewItem_o *v12; // x0
  Il2CppObject *v13; // x23
  int32_t v14; // w1
  ViewEnemyEntity_o *v15; // x2
  bool v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  __int64 v19; // x8
  _QWORD *v20; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v22; // x8

  v7 = this;
  if ( (byte_4A58171 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A58171 = 1;
  }
  if ( v7->fields.loading )
  {
    v7->fields.loading = 0;
    if ( enemies )
    {
      v8 = *(_QWORD *)&enemies->max_length;
      if ( (int)v8 >= 1 )
      {
        v9 = 0LL;
        v10 = 0;
        while ( 1 )
        {
          if ( v9 >= (unsigned int)v8 )
            goto LABEL_23;
          if ( !veEnts )
            goto LABEL_22;
          if ( v9 >= veEnts->max_length )
LABEL_23:
            sub_1B88814(this, *(_QWORD *)&questId);
          v11 = veEnts->m_Items[v9];
          if ( enemies->m_Items[v9 + 1] <= 0 )
            break;
          if ( v11 )
          {
            v12 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
            v13 = (Il2CppObject *)v12;
            v14 = v10;
            v15 = v11;
            v16 = 0;
            goto LABEL_14;
          }
LABEL_20:
          if ( (__int64)++v9 >= (int)v8 )
            return;
        }
        v12 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        v13 = (Il2CppObject *)v12;
        v16 = 1;
        v14 = v10;
        v15 = v11;
LABEL_14:
        QuestInformationListViewItem___ctor_34048556(v12, v14, v15, v16, 0LL);
        this = (HorizontalQuestInformationIconListComponent_o *)v7->fields.itemList;
        if ( !this
          || (v19 = *(_QWORD *)&this->fields.m_CachedPtr,
              v20 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v19) )
        {
LABEL_22:
          sub_1B8880C(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v19 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v13,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = v19 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v22 + 32) = v13;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 32), (int32_t)v13, v17, v18);
        }
        LODWORD(v8) = enemies->max_length;
        ++v10;
        goto LABEL_20;
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent__CreateIconGroupList(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x21
  __int64 v4; // x1
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *itemList; // x8
  UILabel_o *infoLabel; // x20
  int32_t iconType; // w19
  System_String_o **v8; // x8
  __int64 gameObject; // x0
  bool v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Collections_Generic_List_QuestInformationListViewItem__o *v13; // x22
  HorizontalQuestInformationIconListComponent___c_c *v14; // x0
  System_Func_T1__T2__TResult__o *_9__19_0; // x23
  Il2CppObject *v16; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x20
  System_Func_object__int__o *v21; // x22
  System_Collections_Generic_IEnumerable_IGrouping_TKey__TSource___o *v22; // x0
  HorizontalQuestInformationIconListComponent___c_c *v23; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x22
  System_Func_object__object__o *_9__19_2; // x23
  Il2CppObject *v26; // x20
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x26
  System_Collections_Generic_List_object__o *v31; // x20
  UnityEngine_GameObject_o *iconGrid; // x27
  int32_t v33; // w2
  int32_t v34; // w3
  int v35; // w29
  char v36; // w8
  System_Collections_Generic_List_object__o *iconDrawList; // x25
  UnityEngine_Transform_o *parent; // x20
  __int64 v39; // x1
  System_Collections_IEnumerator_o *Enumerator; // x26
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v45; // x8
  __int64 v46; // x9
  System_Collections_IEnumerator_c **v47; // x10
  __int64 v48; // x0
  UnityEngine_Component_o *v49; // x0
  __int64 v50; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *v52; // x0
  __int64 v53; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  Il2CppObject *v57; // x1
  struct System_Object_array *items; // x8
  _QWORD *v59; // x9
  __int64 size; // x10
  Il2CppClass **v61; // x0
  __int64 v62; // x8
  __int64 v63; // x26
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  struct System_Object_array *v67; // x8
  _QWORD *v68; // x9
  __int64 v69; // x10
  Il2CppClass **v70; // x0
  System_Collections_Generic_List_object__o *v71; // x19
  System_Collections_Generic_IEnumerable_TSource__c *v72; // x8
  __int64 v73; // x9
  int32_t *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x1
  int32_t v77; // w26
  Il2CppObject *v78; // x23
  HorizontalQuestInformationIconDraw_o *v79; // x25
  __int64 v80; // x8
  __int64 v81; // x9
  int *v82; // x10
  __int64 v83; // x0
  __int64 v84; // x8
  __int64 v85; // x9
  int *v86; // x10
  __int64 v87; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v88; // x0
  System_Collections_Generic_List_TSource__o *v89; // x0
  __int64 v90; // x1
  System_Collections_Generic_List_object__o *v91; // x27
  int32_t v92; // w24
  Il2CppObject *Item; // x0
  __int64 v94; // x1
  int32_t v95; // w2
  int32_t v96; // w3
  System_Collections_Generic_List_object__o *v97; // x26
  int32_t v98; // w28
  Il2CppObject *v99; // x29
  HorizontalQuestInformationIconDraw_o *v100; // x20
  Il2CppObject *v101; // x0
  const MethodInfo *v102; // x4
  const MethodInfo *v103; // x4
  Il2CppObject *v104; // x29
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  Il2CppClass **v108; // x0
  __int64 v109; // x8
  __int64 v110; // x9
  int *v111; // x10
  __int64 v112; // x20
  __int64 v113; // x0
  int32_t v114; // w2
  int32_t v115; // w3
  __int64 v116; // x0
  __int64 v117; // x20
  __int64 v118; // x8
  __int64 v119; // x9
  int *v120; // x10
  __int64 v121; // x0
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o **p_iconGroupList; // [xsp+8h] [xbp-88h]
  System_Collections_Generic_List_object__o *v123; // [xsp+10h] [xbp-80h]
  System_Collections_Generic_List_object__o *v124; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_IEnumerable_TSource__o *v125; // [xsp+20h] [xbp-70h]
  __int64 v126; // [xsp+20h] [xbp-70h]
  HorizontalQuestInformationIconListComponent_o *iconListComponent; // [xsp+28h] [xbp-68h]

  if ( (byte_4A58167 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
    sub_1B885B0(&Method_System_Linq_Enumerable_GroupBy___f__AnonymousType4_QuestInformationListViewItem__int___int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType4_QuestInformationListViewItem__int____);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    sub_1B885B0(&System_Func___f__AnonymousType4_QuestInformationListViewItem__int___int__TypeInfo);
    sub_1B885B0(&System_Func_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1B885B0(&System_Func_QuestInformationListViewItem__int____f__AnonymousType4_QuestInformationListViewItem__int___TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject____76171952);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__);
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8652/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/);
    sub_1B885B0(&StringLiteral_8653/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/);
    byte_4A58167 = 1;
  }
  v3 = sub_1B887FC(HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  itemList = this->fields.itemList;
  if ( itemList && itemList->fields._size >= 1 )
  {
    infoLabel = this->fields.infoLabel;
    iconType = this->fields.iconType;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v8 = (System_String_o **)&StringLiteral_8653/*"MISSION_NAVI_BOARD_REWARD_LABEL"*/;
    if ( iconType )
      v8 = (System_String_o **)&StringLiteral_8652/*"MISSION_NAVI_BOARD_ENEMY_LABEL"*/;
    gameObject = (__int64)LocalizationManager__Get(*v8, 0LL);
    if ( !infoLabel )
      goto LABEL_139;
    UILabel__set_text(infoLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v10 = 1;
  }
  else
  {
    gameObject = (__int64)this->fields.infoLabel;
    if ( !gameObject )
      goto LABEL_139;
    gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_139;
    v10 = 0;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v10, 0LL);
  this->fields.iconGroupList = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.iconGroupList, 0, v11, v12);
  if ( !v3 )
    goto LABEL_139;
  p_iconGroupList = &this->fields.iconGroupList;
  *(_DWORD *)(v3 + 16) = this->fields.displayLimitNum;
  v13 = this->fields.itemList;
  v14 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v14 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_0 = (System_Func_T1__T2__TResult__o *)v14->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__19_0 = (System_Func_T1__T2__TResult__o *)sub_1B887FC(System_Func_QuestInformationListViewItem__int____f__AnonymousType4_QuestInformationListViewItem__int___TypeInfo);
    System_Func_object__int__object____ctor(
      _9__19_0,
      v16,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_0__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = (struct System_Func_QuestInformationListViewItem__int____f__AnonymousType4_QuestInformationListViewItem__int___o *)_9__19_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v18, v19);
  }
  v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object__48957184(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v13,
                                                               (System_Func_TSource__int__TResult__o *)_9__19_0,
                                                               (const MethodInfo_2EB0700 *)Method_System_Linq_Enumerable_Select_QuestInformationListViewItem____f__AnonymousType4_QuestInformationListViewItem__int____);
  v21 = (System_Func_object__int__o *)sub_1B887FC(System_Func___f__AnonymousType4_QuestInformationListViewItem__int___int__TypeInfo);
  System_Func_object__int____ctor(
    v21,
    (Il2CppObject *)v3,
    Method_HorizontalQuestInformationIconListComponent___c__DisplayClass19_0__CreateIconGroupList_b__1__,
    0LL);
  v22 = System_Linq_Enumerable__GroupBy_object__int_(
          v20,
          (System_Func_TSource__TKey__o *)v21,
          (const MethodInfo_2EA4EF0 *)Method_System_Linq_Enumerable_GroupBy___f__AnonymousType4_QuestInformationListViewItem__int___int___);
  v23 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)v22;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v23 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_2 = (System_Func_object__object__o *)v23->static_fields->__9__19_2;
  if ( !_9__19_2 )
  {
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v23 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v26 = (Il2CppObject *)v23->static_fields->__9;
    _9__19_2 = (System_Func_object__object__o *)sub_1B887FC(System_Func_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___TypeInfo);
    System_Func_object__object____ctor(
      _9__19_2,
      v26,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_2__,
      0LL);
    v27 = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    v27->__9__19_2 = (struct System_Func_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem___o *)_9__19_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->__9__19_2, (int32_t)_9__19_2, v28, v29);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               v24,
                                                               (System_Func_TSource__TResult__o *)_9__19_2,
                                                               (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int____IEnumerable_QuestInformationListViewItem____);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  iconGrid = this->fields.iconGrid;
  iconListComponent = this;
  if ( !iconGrid )
    goto LABEL_139;
  UnityEngine_GameObject__SetActive(iconGrid, 1, 0LL);
  gameObject = System_Linq_Enumerable__Count_object_(
                 v30,
                 (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
  v124 = v31;
  if ( (int)gameObject >= 1 )
  {
    v35 = 0;
    v36 = 1;
    v123 = (System_Collections_Generic_List_object__o *)iconGrid;
    v125 = v30;
    do
    {
      if ( (v36 & 1) != 0 )
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)this->fields.iconDrawList;
      }
      else
      {
        iconDrawList = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_HorizontalQuestInformationIconDraw__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          iconDrawList,
          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw___ctor__);
        gameObject = (__int64)UnityEngine_GameObject__get_transform(iconGrid, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        parent = UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        gameObject = (__int64)UnityEngine_Object__Instantiate_object__49297800(
                                (Il2CppObject *)iconGrid,
                                parent,
                                (const MethodInfo_2F03988 *)Method_UnityEngine_Object_Instantiate_GameObject____76171952);
        if ( !gameObject )
          goto LABEL_139;
        gameObject = (__int64)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_139;
        Enumerator = UnityEngine_Transform__GetEnumerator((UnityEngine_Transform_o *)gameObject, 0LL);
        if ( !Enumerator )
          sub_1B8880C(0LL, v39);
        while ( 1 )
        {
          klass = Enumerator->klass;
          v42 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            p_offset = &klass->_1.interfaceOffsets->offset;
            while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v42;
              p_offset += 4;
              if ( !v42 )
                goto LABEL_44;
            }
            p_method = (__int64)&klass->vtable[*p_offset].method;
          }
          else
          {
LABEL_44:
            p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
          }
          if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
                  Enumerator,
                  *(_QWORD *)(p_method + 8)) & 1) == 0 )
            break;
          v45 = Enumerator->klass;
          v46 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
          if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
          {
            v47 = (System_Collections_IEnumerator_c **)&v45->_1.interfaceOffsets->offset;
            while ( *(v47 - 1) != System_Collections_IEnumerator_TypeInfo )
            {
              --v46;
              v47 += 2;
              if ( !v46 )
                goto LABEL_51;
            }
            v48 = (__int64)&v45->vtable[*(_DWORD *)v47 + 1].method;
          }
          else
          {
LABEL_51:
            v48 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
          }
          v49 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v48)(
                                             Enumerator,
                                             *(_QWORD *)(v48 + 8));
          if ( !v49 )
            sub_1B8880C(0LL, v50);
          methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v49->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
            || (UnityEngine_Transform_c *)v49->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
          {
            sub_1B88ACC(v49);
            v116 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
            v117 = v116;
            if ( v116 )
            {
              v118 = *(_QWORD *)v116;
              v119 = *(unsigned __int16 *)(*(_QWORD *)v116 + 302LL);
              if ( *(_WORD *)(*(_QWORD *)v116 + 302LL) )
              {
                v120 = (int *)(*(_QWORD *)(v118 + 176) + 8LL);
                while ( *((System_IDisposable_c **)v120 - 1) != System_IDisposable_TypeInfo )
                {
                  --v119;
                  v120 += 4;
                  if ( !v119 )
                    goto LABEL_150;
                }
                v121 = v118 + 16LL * *v120 + 312;
              }
              else
              {
LABEL_150:
                v121 = sub_1BDA590(v116, System_IDisposable_TypeInfo, 0LL);
              }
              (*(void (__fastcall **)(__int64, _QWORD))v121)(v117, *(_QWORD *)(v121 + 8));
            }
            sub_1B88804(iconGrid);
          }
          v52 = UnityEngine_Component__get_gameObject(v49, 0LL);
          if ( !v52 )
            sub_1B8880C(0LL, v53);
          ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                         v52,
                                         (const MethodInfo_2ECF11C *)Method_UnityEngine_GameObject_GetComponentInChildren_HorizontalQuestInformationIconDraw___);
          v57 = ComponentInChildren_object;
          if ( !iconDrawList )
            sub_1B8880C(ComponentInChildren_object, ComponentInChildren_object);
          items = iconDrawList->fields._items;
          v59 = Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__Add__;
          ++iconDrawList->fields._version;
          if ( !items )
            sub_1B8880C(ComponentInChildren_object, ComponentInChildren_object);
          size = iconDrawList->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              iconDrawList,
              ComponentInChildren_object,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
          }
          else
          {
            v61 = &items->obj.klass + size;
            iconDrawList->fields._size = size + 1;
            v61[4] = (Il2CppClass *)v57;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)v57, v55, v56);
          }
        }
        gameObject = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
        if ( gameObject )
        {
          v62 = *(_QWORD *)gameObject;
          v63 = gameObject;
          v64 = *(unsigned __int16 *)(*(_QWORD *)gameObject + 302LL);
          if ( *(_WORD *)(*(_QWORD *)gameObject + 302LL) )
          {
            v65 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
            while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
            {
              --v64;
              v65 += 4;
              if ( !v64 )
                goto LABEL_67;
            }
            v66 = v62 + 16LL * *v65 + 312;
          }
          else
          {
LABEL_67:
            v66 = sub_1BDA590(gameObject, System_IDisposable_TypeInfo, 0LL);
          }
          gameObject = (*(__int64 (__fastcall **)(__int64, _QWORD))v66)(v63, *(_QWORD *)(v66 + 8));
        }
        v31 = v124;
        v30 = v125;
        iconGrid = (UnityEngine_GameObject_o *)v123;
      }
      if ( !v31 )
        goto LABEL_139;
      v67 = v31->fields._items;
      v68 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
      ++v31->fields._version;
      if ( !v67 )
        goto LABEL_139;
      v69 = v31->fields._size;
      if ( (unsigned int)v69 >= v67->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v31,
          (Il2CppObject *)iconDrawList,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v68[4] + 192LL) + 112LL));
      }
      else
      {
        v70 = &v67->obj.klass + v69;
        v31->fields._size = v69 + 1;
        v70[4] = (Il2CppClass *)iconDrawList;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v70 + 4), (int32_t)iconDrawList, v33, v34);
      }
      ++v35;
      gameObject = System_Linq_Enumerable__Count_object_(
                     v30,
                     (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_IEnumerable_QuestInformationListViewItem____);
      v36 = 0;
    }
    while ( v35 < (int)gameObject );
  }
  v71 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v71,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw____ctor__);
  if ( !v30 )
LABEL_139:
    sub_1B8880C(gameObject, v4);
  v72 = v30->klass;
  v73 = *(unsigned __int16 *)(&v30->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v30->klass->_2.bitflags2 + 3) )
  {
    v74 = &v72->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___c **)v74 - 1) != System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo )
    {
      --v73;
      v74 += 4;
      if ( !v73 )
        goto LABEL_89;
    }
    v75 = (__int64)&v72->vtable[*v74].method;
  }
  else
  {
LABEL_89:
    v75 = sub_1BDA590(
            v30,
            System_Collections_Generic_IEnumerable_IEnumerable_QuestInformationListViewItem___TypeInfo,
            0LL);
  }
  v126 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v75)(
           v30,
           *(_QWORD *)(v75 + 8));
  if ( !v126 )
    sub_1B8880C(0LL, v76);
  v77 = 0;
  v78 = 0LL;
  v79 = 0LL;
  while ( 1 )
  {
    v80 = *(_QWORD *)v126;
    v81 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
    {
      v82 = (int *)(*(_QWORD *)(v80 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v82 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v81;
        v82 += 4;
        if ( !v81 )
          goto LABEL_97;
      }
      v83 = v80 + 16LL * *v82 + 312;
    }
    else
    {
LABEL_97:
      v83 = sub_1BDA590(v126, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v83)(v126, *(_QWORD *)(v83 + 8)) & 1) == 0 )
      break;
    v84 = *(_QWORD *)v126;
    v85 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
    {
      v86 = (int *)(*(_QWORD *)(v84 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___c **)v86 - 1) != System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo )
      {
        --v85;
        v86 += 4;
        if ( !v85 )
          goto LABEL_104;
      }
      v87 = v84 + 16LL * *v86 + 312;
    }
    else
    {
LABEL_104:
      v87 = sub_1BDA590(
              v126,
              System_Collections_Generic_IEnumerator_IEnumerable_QuestInformationListViewItem___TypeInfo,
              0LL);
    }
    v88 = (System_Collections_Generic_IEnumerable_TSource__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v87)(
                                                                 v126,
                                                                 *(_QWORD *)(v87 + 8));
    v89 = System_Linq_Enumerable__ToList_object_(
            v88,
            (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_QuestInformationListViewItem___);
    if ( !v31 )
      sub_1B8880C(v89, v90);
    v91 = (System_Collections_Generic_List_object__o *)v89;
    v92 = v77;
    Item = System_Collections_Generic_List_object___get_Item(
             v31,
             v77,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Item__);
    v97 = (System_Collections_Generic_List_object__o *)Item;
    if ( Item && *(int *)(v3 + 16) >= 1 )
    {
      if ( !v91 )
        sub_1B8880C(Item, v94);
      v98 = 0;
      do
      {
        if ( v91->fields._size <= v98 )
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v97,
                   v98,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v104 = Item;
          if ( !Item )
            Item = v78;
          if ( v104 )
          {
            if ( !Item )
              sub_1B8880C(0LL, v94);
            HorizontalQuestInformationIconDraw__SetItem(
              (HorizontalQuestInformationIconDraw_o *)Item,
              0LL,
              0,
              iconListComponent,
              v103);
            v78 = v104;
          }
        }
        else
        {
          Item = System_Collections_Generic_List_object___get_Item(
                   v97,
                   v98,
                   (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_HorizontalQuestInformationIconDraw__get_Item__);
          v99 = Item;
          if ( Item )
            v100 = (HorizontalQuestInformationIconDraw_o *)Item;
          else
            v100 = v79;
          if ( Item )
          {
            v101 = System_Collections_Generic_List_object___get_Item(
                     v91,
                     v98,
                     (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_QuestInformationListViewItem__get_Item__);
            if ( !v100 )
              sub_1B8880C(v101, v101);
            HorizontalQuestInformationIconDraw__SetItem(
              v100,
              (QuestInformationListViewItem_o *)v101,
              2,
              iconListComponent,
              v102);
            v79 = (HorizontalQuestInformationIconDraw_o *)v99;
          }
        }
        ++v98;
      }
      while ( v98 < *(_DWORD *)(v3 + 16) );
    }
    if ( !v71 )
      sub_1B8880C(Item, v94);
    v105 = v71->fields._items;
    v106 = Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___Add__;
    ++v71->fields._version;
    if ( !v105 )
      sub_1B8880C(Item, v94);
    v107 = v71->fields._size;
    if ( (unsigned int)v107 >= v105->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v71,
        (Il2CppObject *)v97,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    }
    else
    {
      v108 = &v105->obj.klass + v107;
      v71->fields._size = v107 + 1;
      v108[4] = (Il2CppClass *)v97;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v108 + 4), (int32_t)v97, v95, v96);
    }
    v31 = v124;
    v77 = v92 + 1;
  }
  v109 = *(_QWORD *)v126;
  v110 = *(unsigned __int16 *)(*(_QWORD *)v126 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v126 + 302LL) )
  {
    v111 = (int *)(*(_QWORD *)(v109 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v111 - 1) != System_IDisposable_TypeInfo )
    {
      --v110;
      v111 += 4;
      if ( !v110 )
        goto LABEL_134;
    }
    v112 = v126;
    v113 = v109 + 16LL * *v111 + 312;
  }
  else
  {
LABEL_134:
    v112 = v126;
    v113 = sub_1BDA590(v126, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v113)(v112, *(_QWORD *)(v113 + 8));
  iconListComponent->fields.iconGroupList = (struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *)v71;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_iconGroupList, (int32_t)v71, v114, v115);
  iconListComponent->fields.isNeedInit = 1;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardItemList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *items,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x25
  int32_t v9; // w23
  QuestInformationListViewItem_o *v10; // x22
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v6 = this;
  if ( (byte_4A5816D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A5816D = 1;
  }
  if ( items )
  {
    v7 = *(_QWORD *)&items->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1B88814(this, items);
        v9 = items->m_Items[v8 + 1];
        v10 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v10, sum + v8, 2, v9, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (v15 = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !v15) )
        {
          sub_1B8880C(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= v15->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &v15->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v10, v12, v13);
        }
        LODWORD(v7) = items->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
      sum += v8;
    }
  }
  return sum;
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


int32_t __fastcall HorizontalQuestInformationIconListComponent__CreateRewardSvtList(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        int32_t sum,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent_o *v6; // x21
  __int64 v7; // x8
  unsigned __int64 v8; // x25
  int32_t v9; // w23
  QuestInformationListViewItem_o *v10; // x22
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *itemList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  Il2CppClass **v18; // x8

  v6 = this;
  if ( (byte_4A5816E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__);
    this = (HorizontalQuestInformationIconListComponent_o *)sub_1B885B0(&QuestInformationListViewItem_TypeInfo);
    byte_4A5816E = 1;
  }
  if ( svts )
  {
    v7 = *(_QWORD *)&svts->max_length;
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      do
      {
        if ( v8 >= (unsigned int)v7 )
          sub_1B88814(this, svts);
        v9 = svts->m_Items[v8 + 1];
        v10 = (QuestInformationListViewItem_o *)sub_1B887FC(QuestInformationListViewItem_TypeInfo);
        QuestInformationListViewItem___ctor(v10, sum + v8, 1, v9, 0LL);
        itemList = (System_Collections_Generic_List_object__o *)v6->fields.itemList;
        if ( !itemList
          || (items = itemList->fields._items,
              v16 = Method_System_Collections_Generic_List_QuestInformationListViewItem__Add__,
              ++itemList->fields._version,
              !items) )
        {
          sub_1B8880C(itemList, v11);
        }
        size = itemList->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v10,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v18 = &items->obj.klass + size;
          itemList->fields._size = size + 1;
          v18[4] = (Il2CppClass *)v10;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v10, v12, v13);
        }
        LODWORD(v7) = svts->max_length;
        ++v8;
      }
      while ( (__int64)v8 < (int)v7 );
      sum += v8;
    }
  }
  return sum;
}


void __fastcall HorizontalQuestInformationIconListComponent__DeleteCallback(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t v5; // w2
  int32_t v6; // w3

  this->fields.assetStoragesLoadCallback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.assetStoragesLoadCallback, 0, v2, v3);
  this->fields.enemyAtlasLoadCallback = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.enemyAtlasLoadCallback, 0, v5, v6);
}


void __fastcall HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *questInfoRoot; // x0

  questInfoRoot = this->fields.questInfoRoot;
  if ( !questInfoRoot )
    sub_1B8880C(0LL, method);
  UnityEngine_GameObject__SetActive(questInfoRoot, 0, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent__InitQuestInfoLb(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  AlphaTransitionCalculator_o *questInfoPanel; // x0
  const MethodInfo *v4; // x1
  float v5; // s8
  TitleInfoControl_c *v6; // x0
  System_Func_float__float__float__float__o *v7; // x21
  AlphaTransitionCalculator_o *v8; // x22
  int32_t v9; // w2
  int32_t v10; // w3
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x8

  if ( (byte_4A58169 & 1) == 0 )
  {
    sub_1B885B0(&AlphaTransitionCalculator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_1B885B0(&TitleInfoControl_TypeInfo);
    byte_4A58169 = 1;
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
  v5 = ChangedFPSUtil__CovertFrameNumToSecond(this->fields.questInfoFadeFrameNum, 0LL);
  v6 = TitleInfoControl_TypeInfo;
  if ( !TitleInfoControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TitleInfoControl_TypeInfo);
    v6 = TitleInfoControl_TypeInfo;
  }
  v7 = ExtraEasing__AsymptoticSeriesFloat(
         v6->static_fields->EVENT_ALPHA_ANIM_SPD_RATE,
         (float)this->fields.questInfoFadeFrameNum,
         0LL);
  v8 = (AlphaTransitionCalculator_o *)sub_1B887FC(AlphaTransitionCalculator_TypeInfo);
  AlphaTransitionCalculator___ctor(v8, v5, v7, 0LL);
  this->fields.questInfoAlphaCalculator = v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.questInfoAlphaCalculator, (int32_t)v8, v9, v10);
  questInfoPanel = this->fields.questInfoAlphaCalculator;
  if ( !questInfoPanel )
LABEL_14:
    sub_1B8880C(questInfoPanel, method);
  AlphaTransitionCalculator__MakeFadeInFinished(questInfoPanel, 0LL);
LABEL_9:
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( iconGroupList->fields._size < 1 )
    {
      HorizontalQuestInformationIconListComponent__HideQuestInfoIconLb(this, v4);
    }
    else
    {
      this->fields.currentInformationIndex = 0;
      HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v4);
    }
  }
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForSprite(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_mChocoMaterialSp; // x20
  UnityEngine_Object_o *mChocoMaterialSp; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  HorizontalQuestInformationIconListComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1

  if ( (byte_4A58173 & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A58173 = 1;
  }
  p_mChocoMaterialSp = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialSp;
  mChocoMaterialSp = (UnityEngine_Object_o *)this->fields.mChocoMaterialSp;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialSp, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B88554(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_SP, 0LL);
    v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0LL);
    p_mChocoMaterialSp->klass = (ServantStatusBattleListViewItem_c *)v13;
    sub_1B88554(p_mChocoMaterialSp, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialSp->klass )
      sub_1B8880C(0LL, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall HorizontalQuestInformationIconListComponent__NewChocoMaterialForTexture(
        HorizontalQuestInformationIconListComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_mChocoMaterialTx; // x20
  UnityEngine_Object_o *mChocoMaterialTx; // x21
  ServantStatusBattleListViewItem_o *p_mChocoTex; // x19
  UnityEngine_Object_o *v6; // x21
  struct UnityEngine_Texture2D_o *mChocoTex; // t1
  Il2CppObject *object; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  HorizontalQuestInformationIconListComponent_c *v11; // x0
  UnityEngine_Shader_o *v12; // x21
  UnityEngine_Material_o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x1

  if ( (byte_4A58172 & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconListComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Material_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Resources_Load_Texture2D___);
    sub_1B885B0(&StringLiteral_16160/*"_ChocoTex"*/);
    sub_1B885B0(&StringLiteral_12735/*"Shaders/ChocoMap"*/);
    byte_4A58172 = 1;
  }
  p_mChocoMaterialTx = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoMaterialTx;
  mChocoMaterialTx = (UnityEngine_Object_o *)this->fields.mChocoMaterialTx;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mChocoMaterialTx, 0LL, 0LL) )
  {
    mChocoTex = this->fields.mChocoTex;
    p_mChocoTex = (ServantStatusBattleListViewItem_o *)&this->fields.mChocoTex;
    v6 = (UnityEngine_Object_o *)mChocoTex;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v6, 0LL, 0LL) )
    {
      object = UnityEngine_Resources__Load_object_(
                 (System_String_o *)StringLiteral_12735/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2F130B0 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B88554(p_mChocoTex, (int32_t)object, v9, v10);
    }
    v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    if ( !HorizontalQuestInformationIconListComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent_TypeInfo);
      v11 = HorizontalQuestInformationIconListComponent_TypeInfo;
    }
    v12 = UnityEngine_Shader__Find(v11->static_fields->CHOCO_SHADER_TX, 0LL);
    v13 = (UnityEngine_Material_o *)sub_1B887FC(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v13, v12, 0LL);
    p_mChocoMaterialTx->klass = (ServantStatusBattleListViewItem_c *)v13;
    sub_1B88554(p_mChocoMaterialTx, (int32_t)v13, v14, v15);
    if ( !p_mChocoMaterialTx->klass )
      sub_1B8880C(0LL, v16);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_16160/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


bool __fastcall HorizontalQuestInformationIconListComponent__Setup(
        HorizontalQuestInformationIconListComponent_o *this,
        int32_t questId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x1
  int32_t iconType; // w8
  int64_t Master_object; // x0
  Il2CppObject *MasterData_object; // x21
  const MethodInfo *v12; // x4
  const MethodInfo *v13; // x1
  ViewEnemyEntity_array *EntityListFromQuestId; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  HorizontalQuestInformationIconListComponent___c_c *v16; // x0
  System_Func_object__int__o *_9__18_0; // x22
  Il2CppObject *v18; // x23
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  System_Int32_array *v23; // x0
  const MethodInfo *v24; // x4
  const MethodInfo *v25; // x4
  Il2CppObject *v27; // [xsp+8h] [xbp-48h] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A58166 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_ViewEnemyMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_ViewEnemyEntity__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__);
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4A58166 = 1;
  }
  entity = 0LL;
  v27 = 0LL;
  this->fields.isNeedInit = 0;
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_QuestInformationListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_QuestInformationListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_QuestInformationListViewItem__o *)v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v5, v6, v7);
  iconType = this->fields.iconType;
  if ( iconType == 1 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (int64_t)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ViewEnemyMaster___);
    if ( !Master_object )
      goto LABEL_35;
    EntityListFromQuestId = ViewEnemyMaster__GetEntityListFromQuestId((ViewEnemyMaster_o *)Master_object, questId, 0LL);
    if ( EntityListFromQuestId )
    {
      v15 = (System_Collections_Generic_IEnumerable_TSource__o *)EntityListFromQuestId;
      if ( *(_QWORD *)&EntityListFromQuestId->max_length )
      {
        v16 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
          v16 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
        }
        _9__18_0 = (System_Func_object__int__o *)v16->static_fields->__9__18_0;
        if ( !_9__18_0 )
        {
          if ( !v16->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v16);
            v16 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
          }
          v18 = (Il2CppObject *)v16->static_fields->__9;
          _9__18_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_ViewEnemyEntity__int__TypeInfo);
          System_Func_object__int____ctor(
            _9__18_0,
            v18,
            Method_HorizontalQuestInformationIconListComponent___c__Setup_b__18_0__,
            0LL);
          static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
          static_fields->__9__18_0 = (struct System_Func_ViewEnemyEntity__int__o *)_9__18_0;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__18_0, (int32_t)_9__18_0, v20, v21);
        }
        v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                     v15,
                                                                     (System_Func_TSource__TResult__o *)_9__18_0,
                                                                     (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_ViewEnemyEntity__int___);
        v23 = System_Linq_Enumerable__ToArray_int_(
                v22,
                (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
        HorizontalQuestInformationIconListComponent__CreateEnemyList(this, 0, questId, v23, v24);
        return 1;
      }
    }
  }
  else if ( !iconType )
  {
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_35;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Master_object,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestInfoMaster___);
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
          v12);
LABEL_29:
        HorizontalQuestInformationIconListComponent__CreateIconGroupList(this, v13);
        return 1;
      }
      goto LABEL_35;
    }
    Master_object = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = (int64_t)DataManager__GetMasterData_object_(
                               (DataManager_o *)Master_object,
                               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ViewQuestInfoMaster___);
    if ( !Master_object )
      goto LABEL_35;
    Master_object = DataMasterBase_object__object__int___TryGetEntity(
                      (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                      &v27,
                      questId,
                      (const MethodInfo_311D988 *)Method_DataMasterBase_ViewQuestInfoMaster__ViewQuestInfoEntity__int__TryGetEntity__);
    if ( (Master_object & 1) != 0 )
    {
      if ( v27 )
      {
        HorizontalQuestInformationIconListComponent__CreateEmptyRewardList(
          this,
          0,
          (int32_t)v27[1].monitor,
          HIDWORD(v27[1].klass),
          v25);
        goto LABEL_29;
      }
LABEL_35:
      sub_1B8880C(Master_object, v8);
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
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  ItemMaster_o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *v15; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  char *v19; // x8
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  struct System_Int32_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  char *v26; // x8
  __int64 v27; // x8
  System_Collections_Generic_List_int__o *v28; // x0
  const MethodInfo_34E0810 *v29; // x2
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  System_Int32_array *v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3

  if ( (byte_4A5816C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ItemMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5816C = 1;
  }
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_42;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ItemMaster___);
  if ( !itms )
    goto LABEL_42;
  v12 = *(_QWORD *)&itms->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (ItemMaster_o *)Instance;
    v14 = 0LL;
    v15 = &itms->m_Items[1];
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
LABEL_43:
        sub_1B88814(Instance, v11);
      v11 = (unsigned int)v15[v14];
      if ( !(_DWORD)v11 )
        break;
      if ( (_DWORD)v11 == -1 )
      {
        if ( !v9 )
          goto LABEL_42;
        items = v9->fields._items;
        v17 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_42;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v27 = v17[4];
          v28 = v9;
          goto LABEL_28;
        }
        v19 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v19 + 8) = 0;
        goto LABEL_38;
      }
      if ( !v13 )
        goto LABEL_42;
      Instance = (Il2CppObject *)ItemMaster__isQP(v13, v11, 0LL);
      if ( v14 >= itms->max_length )
        goto LABEL_43;
      v11 = (unsigned int)v15[v14];
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !v9 )
          goto LABEL_42;
        v23 = v9->fields._items;
        v24 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v23 )
          goto LABEL_42;
        v25 = v9->fields._size;
        if ( (unsigned int)v25 >= v23->max_length )
        {
          v33 = v24[4];
          v28 = v9;
LABEL_36:
          v29 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v33 + 192) + 112LL);
          goto LABEL_37;
        }
        v26 = (char *)v23 + 4 * v25;
        v9->fields._size = v25 + 1;
      }
      else
      {
        if ( !v8 )
          goto LABEL_42;
        v30 = v8->fields._items;
        v31 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v30 )
          goto LABEL_42;
        v32 = v8->fields._size;
        if ( (unsigned int)v32 >= v30->max_length )
        {
          v33 = v31[4];
          v28 = v8;
          goto LABEL_36;
        }
        v26 = (char *)v30 + 4 * v32;
        v8->fields._size = v32 + 1;
      }
      *((_DWORD *)v26 + 8) = v11;
LABEL_38:
      LODWORD(v12) = itms->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_39;
    }
    if ( !v8 )
      goto LABEL_42;
    v20 = v8->fields._items;
    v21 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !v20 )
      goto LABEL_42;
    v22 = v8->fields._size;
    if ( (unsigned int)v22 >= v20->max_length )
    {
      v27 = v21[4];
      v28 = v8;
LABEL_28:
      v29 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27 + 192) + 112LL);
      LODWORD(v11) = 0;
LABEL_37:
      System_Collections_Generic_List_int___AddWithResize(v28, v11, v29);
      goto LABEL_38;
    }
    v19 = (char *)v20 + 4 * v22;
    v8->fields._size = v22 + 1;
    goto LABEL_18;
  }
LABEL_39:
  if ( !v8
    || (v34 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutQP = v34,
        sub_1B88554((ServantStatusBattleListViewItem_o *)withoutQP, (int32_t)v34, v35, v36),
        !v9) )
  {
LABEL_42:
    sub_1B8880C(Instance, v11);
  }
  v37 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *qps = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)qps, (int32_t)v37, v38, v39);
}


void __fastcall HorizontalQuestInformationIconListComponent__SplitSvtsWithCombineMaterial(
        HorizontalQuestInformationIconListComponent_o *this,
        System_Int32_array *svts,
        System_Int32_array **withoutCM,
        System_Int32_array **combineMaterials,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v8; // x23
  System_Collections_Generic_List_int__o *v9; // x22
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x24
  unsigned __int64 v14; // x25
  int32_t *v15; // x28
  int32_t v16; // w2
  struct System_Int32_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  char *v20; // x8
  struct System_Int32_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  struct System_Int32_array *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  char *v27; // x8
  struct System_Int32_array *v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  System_Collections_Generic_List_int__o *v32; // x0
  const MethodInfo_34E0810 *v33; // x2
  __int64 v34; // x8
  System_Int32_array *v35; // x0
  int32_t v36; // w2
  int32_t v37; // w3
  System_Int32_array *v38; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5816B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5816B = 1;
  }
  entity = 0LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_45;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !svts )
    goto LABEL_45;
  v12 = *(_QWORD *)&svts->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v14 = 0LL;
    v15 = &svts->m_Items[1];
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v12 )
LABEL_46:
        sub_1B88814(Instance, v11);
      v16 = v15[v14];
      if ( !v16 )
        break;
      if ( v16 == -1 )
      {
        if ( !v9 )
          goto LABEL_45;
        items = v9->fields._items;
        v18 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !items )
          goto LABEL_45;
        size = v9->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v31 = v18[4];
          v32 = v9;
LABEL_36:
          v33 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31 + 192) + 112LL);
          LODWORD(v11) = 0;
          goto LABEL_40;
        }
        v20 = (char *)items + 4 * size;
        v9->fields._size = size + 1;
LABEL_18:
        *((_DWORD *)v20 + 8) = 0;
        goto LABEL_41;
      }
      if ( !v13 )
        goto LABEL_45;
      Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                   v13,
                                   &entity,
                                   v16,
                                   (const MethodInfo_311D988 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
        goto LABEL_28;
      Instance = entity;
      if ( !entity )
        goto LABEL_45;
      Instance = (Il2CppObject *)ServantEntity__get_IsCombineMaterial((ServantEntity_o *)entity, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( v14 >= svts->max_length )
          goto LABEL_46;
        if ( !v9 )
          goto LABEL_45;
        v11 = (unsigned int)v15[v14];
        v24 = v9->fields._items;
        v25 = Method_System_Collections_Generic_List_int__Add__;
        ++v9->fields._version;
        if ( !v24 )
          goto LABEL_45;
        v26 = v9->fields._size;
        if ( (unsigned int)v26 >= v24->max_length )
        {
          v34 = v25[4];
          v32 = v9;
LABEL_39:
          v33 = *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34 + 192) + 112LL);
LABEL_40:
          System_Collections_Generic_List_int___AddWithResize(v32, v11, v33);
          goto LABEL_41;
        }
        v27 = (char *)v24 + 4 * v26;
        v9->fields._size = v26 + 1;
      }
      else
      {
LABEL_28:
        if ( v14 >= svts->max_length )
          goto LABEL_46;
        if ( !v8 )
          goto LABEL_45;
        v11 = (unsigned int)v15[v14];
        v28 = v8->fields._items;
        v29 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v28 )
          goto LABEL_45;
        v30 = v8->fields._size;
        if ( (unsigned int)v30 >= v28->max_length )
        {
          v34 = v29[4];
          v32 = v8;
          goto LABEL_39;
        }
        v27 = (char *)v28 + 4 * v30;
        v8->fields._size = v30 + 1;
      }
      *((_DWORD *)v27 + 8) = v11;
LABEL_41:
      LODWORD(v12) = svts->max_length;
      if ( (__int64)++v14 >= (int)v12 )
        goto LABEL_42;
    }
    if ( !v8 )
      goto LABEL_45;
    v21 = v8->fields._items;
    v22 = Method_System_Collections_Generic_List_int__Add__;
    ++v8->fields._version;
    if ( !v21 )
      goto LABEL_45;
    v23 = v8->fields._size;
    if ( (unsigned int)v23 >= v21->max_length )
    {
      v31 = v22[4];
      v32 = v8;
      goto LABEL_36;
    }
    v20 = (char *)v21 + 4 * v23;
    v8->fields._size = v23 + 1;
    goto LABEL_18;
  }
LABEL_42:
  if ( !v8
    || (v35 = System_Collections_Generic_List_int___ToArray(
                v8,
                (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__),
        *withoutCM = v35,
        sub_1B88554((ServantStatusBattleListViewItem_o *)withoutCM, (int32_t)v35, v36, v37),
        !v9) )
  {
LABEL_45:
    sub_1B8880C(Instance, v11);
  }
  v38 = System_Collections_Generic_List_int___ToArray(
          v9,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *combineMaterials = v38;
  sub_1B88554((ServantStatusBattleListViewItem_o *)combineMaterials, (int32_t)v38, v39, v40);
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
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *iconGroupList; // x0
  TransitionCalculator_float__o *questInfoAlphaCalculator; // x0
  AlphaTransitionCalculator_o *Instance; // x0
  const MethodInfo *v6; // x1
  float mstQuestInfoIconUpdateTimer; // s8
  float deltaTime; // s0
  float questInfoChangeInterval; // s1
  float v10; // s0
  int32_t currentInformationIndex; // w20
  struct System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___o *v12; // x8
  struct AlphaTransitionCalculator_o *v13; // x8

  if ( (byte_4A5816A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____);
    sub_1B885B0(&Method_System_Collections_Generic_List_List_HorizontalQuestInformationIconDraw___get_Count__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&Method_TransitionCalculator_float__Update__);
    sub_1B885B0(&Method_TransitionCalculator_float__get_Current__);
    byte_4A5816A = 1;
  }
  iconGroupList = this->fields.iconGroupList;
  if ( iconGroupList )
  {
    if ( System_Linq_Enumerable__Count_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)iconGroupList,
           (const MethodInfo_2E9CA20 *)Method_System_Linq_Enumerable_Count_List_HorizontalQuestInformationIconDraw____) >= 2 )
    {
      questInfoAlphaCalculator = (TransitionCalculator_float__o *)this->fields.questInfoAlphaCalculator;
      if ( questInfoAlphaCalculator )
      {
        TransitionCalculator_float___Update(
          questInfoAlphaCalculator,
          (const MethodInfo_37B9DC0 *)Method_TransitionCalculator_float__Update__);
        Instance = (AlphaTransitionCalculator_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !Instance )
          goto LABEL_20;
        if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)Instance, 0LL) )
        {
          mstQuestInfoIconUpdateTimer = this->fields.mstQuestInfoIconUpdateTimer;
          deltaTime = UnityEngine_Time__get_deltaTime(0LL);
          questInfoChangeInterval = this->fields.questInfoChangeInterval;
          v10 = mstQuestInfoIconUpdateTimer + deltaTime;
          this->fields.mstQuestInfoIconUpdateTimer = v10;
          if ( v10 >= questInfoChangeInterval )
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
            v12 = this->fields.iconGroupList;
            if ( !v12 )
              goto LABEL_20;
            this->fields.currentInformationIndex = (currentInformationIndex + 1) % v12->fields._size;
            HorizontalQuestInformationIconListComponent__ChangeViewQuestInfoLb(this, v6);
          }
          v13 = this->fields.questInfoAlphaCalculator;
          if ( v13 )
          {
            Instance = (AlphaTransitionCalculator_o *)this->fields.questInfoPanel;
            if ( Instance )
            {
              ((void (__fastcall *)(AlphaTransitionCalculator_o *, Il2CppClass *, float))Instance->klass[1]._1.castClass)(
                Instance,
                Instance->klass[1]._1.declaringType,
                v13->fields._Current_k__BackingField);
              return;
            }
          }
        }
LABEL_20:
        sub_1B8880C(Instance, v6);
      }
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A58175 & 1) == 0 )
  {
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4A58175 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(HorizontalQuestInformationIconListComponent___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields->__9 = (struct HorizontalQuestInformationIconListComponent___c_o *)v1;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void __fastcall HorizontalQuestInformationIconListComponent___c___ctor(
        HorizontalQuestInformationIconListComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


__f__AnonymousType4_QuestInformationListViewItem__int__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        QuestInformationListViewItem_o *v,
        int32_t i,
        const MethodInfo *method)
{
  __f__AnonymousType4__v_j__TPar___i_j__TPar__o *v6; // x21

  if ( (byte_4A58176 & 1) == 0 )
  {
    sub_1B885B0(&Method___f__AnonymousType4_QuestInformationListViewItem__int___ctor__);
    sub_1B885B0(&_f__AnonymousType4_QuestInformationListViewItem__int__TypeInfo);
    byte_4A58176 = 1;
  }
  v6 = (__f__AnonymousType4__v_j__TPar___i_j__TPar__o *)sub_1B887FC(_f__AnonymousType4_QuestInformationListViewItem__int__TypeInfo);
  _f__AnonymousType4_object__int____ctor(
    v6,
    (Il2CppObject *)v,
    i,
    (const MethodInfo_30515D8 *)Method___f__AnonymousType4_QuestInformationListViewItem__int___ctor__);
  return (__f__AnonymousType4_QuestInformationListViewItem__int__o *)v6;
}


System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_2(
        HorizontalQuestInformationIconListComponent___c_o *this,
        System_Linq_IGrouping_int____f__AnonymousType4_QuestInformationListViewItem__int___o *g,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c_c *v4; // x0
  System_Func_object__object__o *_9__19_3; // x20
  Il2CppObject *v6; // x21
  struct HorizontalQuestInformationIconListComponent___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A58177 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem___);
    sub_1B885B0(&System_Func___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    sub_1B885B0(&Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__);
    sub_1B885B0(&HorizontalQuestInformationIconListComponent___c_TypeInfo);
    byte_4A58177 = 1;
  }
  v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  if ( !HorizontalQuestInformationIconListComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(HorizontalQuestInformationIconListComponent___c_TypeInfo);
    v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
  }
  _9__19_3 = (System_Func_object__object__o *)v4->static_fields->__9__19_3;
  if ( !_9__19_3 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = HorizontalQuestInformationIconListComponent___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__19_3 = (System_Func_object__object__o *)sub_1B887FC(System_Func___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem__TypeInfo);
    System_Func_object__object____ctor(
      _9__19_3,
      v6,
      Method_HorizontalQuestInformationIconListComponent___c__CreateIconGroupList_b__19_3__,
      0LL);
    static_fields = HorizontalQuestInformationIconListComponent___c_TypeInfo->static_fields;
    static_fields->__9__19_3 = (struct System_Func___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem__o *)_9__19_3;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__19_3, (int32_t)_9__19_3, v8, v9);
  }
  return (System_Collections_Generic_IEnumerable_QuestInformationListViewItem__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                     (System_Collections_Generic_IEnumerable_TSource__o *)g,
                                                                                     (System_Func_TSource__TResult__o *)_9__19_3,
                                                                                     (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select___f__AnonymousType4_QuestInformationListViewItem__int___QuestInformationListViewItem___);
}


QuestInformationListViewItem_o *__fastcall HorizontalQuestInformationIconListComponent___c___CreateIconGroupList_b__19_3(
        HorizontalQuestInformationIconListComponent___c_o *this,
        __f__AnonymousType4_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  if ( (byte_4A58178 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c_o *)sub_1B885B0(&Method___f__AnonymousType4_QuestInformationListViewItem__int__get_v__);
    byte_4A58178 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return x->fields._v_i__Field;
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c___Setup_b__18_0(
        HorizontalQuestInformationIconListComponent___c_o *this,
        ViewEnemyEntity_o *value,
        const MethodInfo *method)
{
  if ( !value )
    sub_1B8880C(this, 0LL);
  return value->fields.enemyId;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass19_0___CreateIconGroupList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *this,
        __f__AnonymousType4_QuestInformationListViewItem__int__o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *v4; // x20

  v4 = this;
  if ( (byte_4A58179 & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass19_0_o *)sub_1B885B0(&Method___f__AnonymousType4_QuestInformationListViewItem__int__get_i__);
    byte_4A58179 = 1;
  }
  if ( !x )
    sub_1B8880C(this, x);
  return x->fields._i_i__Field / v4->fields.chunkSize;
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass27_0___ChangeViewQuestInfoLb_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *this,
        HorizontalQuestInformationIconDraw_o *x,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *v3; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  if ( !x
    || (v3 = this,
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass27_0_o *)UnityEngine_Component__get_gameObject(
                                                                                        (UnityEngine_Component_o *)x,
                                                                                        0LL),
        (_4__this = v3->fields.__4__this) == 0LL)
    || !this )
  {
    sub_1B8880C(this, x);
  }
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    v3->fields.index == _4__this->fields.currentInformationIndex,
    0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___ctor(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__0(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v2; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x20
  const MethodInfo *v4; // x4

  v2 = this;
  if ( (byte_4A5817A & 1) == 0 )
  {
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5817A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  if ( _4__this->fields.enemyAtlasLoadCallback && _4__this->fields.assetStoragesLoadCallback )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)_4__this, 0LL, 0LL) )
    {
      this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
      if ( this )
      {
        HorizontalQuestInformationIconListComponent__CreateEnemyList_34040920(
          (HorizontalQuestInformationIconListComponent_o *)this,
          (int32_t)method,
          v2->fields.enemies,
          v2->fields.veEnts,
          v4);
        this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)v2->fields.__4__this;
        if ( this )
        {
          HorizontalQuestInformationIconListComponent__CreateIconGroupList(
            (HorizontalQuestInformationIconListComponent_o *)this,
            method);
          return;
        }
      }
LABEL_13:
      sub_1B8880C(this, method);
    }
  }
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__1(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *v2; // x19
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  Il2CppObject *assetStoragesLoadCallback; // x21
  System_Action_o *v6; // x20

  v2 = this;
  if ( (byte_4A5817B & 1) == 0 )
  {
    sub_1B885B0(&Method_ActionExtensions_Call__);
    sub_1B885B0(&System_Action_TypeInfo);
    this = (HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *)sub_1B885B0(&AssetManager_TypeInfo);
    byte_4A5817B = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  assetStoragesLoadCallback = (Il2CppObject *)_4__this->fields.assetStoragesLoadCallback;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, assetStoragesLoadCallback, Method_ActionExtensions_Call__, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_37797288(loadedAssets, v6, 1, 0LL);
}


void __fastcall HorizontalQuestInformationIconListComponent___c__DisplayClass38_0___CreateEnemyList_b__2(
        HorizontalQuestInformationIconListComponent___c__DisplayClass38_0_o *this,
        const MethodInfo *method)
{
  struct HorizontalQuestInformationIconListComponent_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B8880C(this, method);
  ActionExtensions__Call(_4__this->fields.enemyAtlasLoadCallback, 0LL);
}