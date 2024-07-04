void __fastcall BoardOptionEventTargetComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t v6; // w1
  struct BoardOptionEventTargetComponent_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48DF4B0 & 1) == 0 )
  {
    sub_1B00CCC(&BoardOptionEventTargetComponent_TypeInfo, v1);
    sub_1B00CCC(&StringLiteral_14905/*"Unlit/Transparent Colored_Choco"*/, v4);
    sub_1B00CCC(&StringLiteral_4922/*"Custom/SpriteWithMask_Choco"*/, v5);
    byte_48DF4B0 = 1;
  }
  BoardOptionEventTargetComponent_TypeInfo->static_fields->CHOCO_SHADER_TX = (struct System_String_o *)StringLiteral_14905/*"Unlit/Transparent Colored_Choco"*/;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)BoardOptionEventTargetComponent_TypeInfo->static_fields,
    StringLiteral_14905/*"Unlit/Transparent Colored_Choco"*/,
    v2,
    v3);
  v6 = StringLiteral_4922/*"Custom/SpriteWithMask_Choco"*/;
  static_fields = BoardOptionEventTargetComponent_TypeInfo->static_fields;
  static_fields->CHOCO_SHADER_SP = (struct System_String_o *)StringLiteral_4922/*"Custom/SpriteWithMask_Choco"*/;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->CHOCO_SHADER_SP, v6, v8, v9);
}


void __fastcall BoardOptionEventTargetComponent___ctor(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
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
  __int64 v31; // x20
  __int64 UserId; // x0
  __int64 v33; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 *v36; // x22
  int32_t v37; // w2
  int32_t v38; // w3
  System_Collections_Generic_List_object__o *v39; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Int32_array *v42; // x1
  int32_t v43; // w2
  int32_t v44; // w3
  Il2CppObject *Master_object; // x23
  Il2CppObject *v46; // x24
  System_Collections_Generic_List_object__o *v47; // x27
  unsigned int **v48; // x25
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x26
  const MethodInfo *v52; // x2
  __int64 v53; // x8
  __int64 v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  int32_t v57; // w3
  __int64 v58; // x8
  __int64 v59; // x29
  __int64 v60; // x28
  unsigned __int64 v61; // x21
  unsigned int *v62; // x8
  __int64 v63; // x8
  __int64 v64; // x8
  int32_t v65; // w2
  int32_t v66; // w3
  ViewEnemyEntity_o *v67; // x26
  System_String_o *v68; // x0
  Il2CppObject *v69; // x26
  int32_t v70; // w2
  int32_t v71; // w3
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  ViewEnemyEntity_o *v76; // x27
  unsigned int *v77; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v78; // x22
  BoardOptionEventTargetComponent___c_c *v79; // x0
  System_Func_object__bool__o *_9__8_0; // x23
  Il2CppObject *v81; // x24
  struct BoardOptionEventTargetComponent___c_StaticFields *static_fields; // x0
  int32_t v83; // w2
  int32_t v84; // w3
  int32_t v85; // w1
  struct System_String_array *v86; // x0
  struct System_String_array **p_loadedAssets; // x19
  int32_t v88; // w2
  int32_t v89; // w3
  System_Action_o *v90; // x19
  __int64 v91; // x0
  System_Collections_Generic_List_object__o *v92; // [xsp+8h] [xbp-88h]
  QuestInformationListViewItem_MissionTargetState_o missionTargetState; // [xsp+14h] [xbp-7Ch] BYREF
  UserQuestInfoEntity_o *entity; // [xsp+18h] [xbp-78h] BYREF
  ViewEnemyEntity_o *v95; // [xsp+20h] [xbp-70h] BYREF
  Il2CppObject *v96; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_48DF4A7 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, *(_QWORD *)&questId);
    sub_1B00CCC(&AtlasManager_TypeInfo, v7);
    sub_1B00CCC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_1B00CCC(&Method_DataManager_GetMaster_UserQuestInfoMaster___, v9);
    sub_1B00CCC(&Method_DataManager_GetMaster_ViewEnemyMaster___, v10);
    sub_1B00CCC(&DataManager_TypeInfo, v11);
    sub_1B00CCC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v12);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Contains_int___, v13);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Count_ViewEnemyEntity___, v14);
    sub_1B00CCC(&System_Func_ViewEnemyEntity__bool__TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Add__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__Contains__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string__ToArray__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem___ctor__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_string___ctor__, v20);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewItem__TypeInfo, v21);
    sub_1B00CCC(&System_Collections_Generic_List_string__TypeInfo, v22);
    sub_1B00CCC(&NetworkManager_TypeInfo, v23);
    sub_1B00CCC(&Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__, v24);
    sub_1B00CCC(&Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__, v25);
    sub_1B00CCC(&BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo, v26);
    sub_1B00CCC(&BoardOptionEventTargetComponent___c_TypeInfo, v27);
    sub_1B00CCC(&ViewEnemyEntity___TypeInfo, v28);
    sub_1B00CCC(&ViewEnemyEntity_TypeInfo, v29);
    sub_1B00CCC(&StringLiteral_12445/*"Servants/Commands/"*/, v30);
    byte_48DF4A7 = 1;
  }
  v95 = 0LL;
  v96 = 0LL;
  entity = 0LL;
  missionTargetState = 0;
  v31 = sub_1B00F18(BoardOptionEventTargetComponent___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v31, 0LL);
  if ( !v31 )
    goto LABEL_53;
  *(_QWORD *)(v31 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 16), (int32_t)this, v34, v35);
  *(_QWORD *)(v31 + 32) = enemies;
  v36 = (__int64 *)(v31 + 32);
  *(_DWORD *)(v31 + 24) = questId;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)enemies, v37, v38);
  v39 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_ListViewItem__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v39,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_ListViewItem___ctor__);
  this->fields.itemList = (struct System_Collections_Generic_List_ListViewItem__o *)v39;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.itemList, (int32_t)v39, v40, v41);
  this->fields.dispQuestId = *(_DWORD *)(v31 + 24);
  v42 = *(struct System_Int32_array **)(v31 + 32);
  this->fields.dispEnemies = v42;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.dispEnemies, (int32_t)v42, v43, v44);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ViewEnemyMaster___);
  v46 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ServantMaster___);
  v47 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v47,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_string___ctor__);
  *(_QWORD *)(v31 + 40) = 0LL;
  v48 = (unsigned int **)(v31 + 40);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 40), 0, v49, v50);
  v51 = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_UserQuestInfoMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  UserId = NetworkManager__get_UserId(0LL);
  if ( !v51 )
    goto LABEL_53;
  UserQuestInfoMaster__TryGetEntity((UserQuestInfoMaster_o *)v51, &entity, UserId, *(_DWORD *)(v31 + 24), 0LL);
  v53 = *(_QWORD *)(v31 + 32);
  if ( v53 )
  {
    v54 = sub_1B00D74(ViewEnemyEntity___TypeInfo, *(unsigned int *)(v53 + 24));
    *v48 = (unsigned int *)v54;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 40), v54, v55, v56);
    v58 = *v36;
    if ( !*v36 )
      goto LABEL_53;
    v59 = 8LL;
    v60 = 8LL;
    v92 = v47;
    while ( 1 )
    {
      v61 = v59 - 8;
      if ( v59 - 8 >= *(int *)(v58 + 24) )
        break;
      v62 = *v48;
      if ( !*v48 )
        goto LABEL_53;
      if ( v61 >= v62[6] )
        goto LABEL_67;
      *(_QWORD *)&v62[v60] = 0LL;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v62[v60], 0, (int32_t)v52, v57);
      v63 = *v36;
      if ( !*v36 )
        goto LABEL_53;
      if ( v61 >= *(unsigned int *)(v63 + 24) )
        goto LABEL_67;
      v57 = *(_DWORD *)(v63 + 4 * v59);
      if ( v57 >= 1 )
      {
        if ( !Master_object )
          goto LABEL_53;
        UserId = ViewEnemyMaster__TryGetEntity(
                   (ViewEnemyMaster_o *)Master_object,
                   &v95,
                   *(_DWORD *)(v31 + 24),
                   v57,
                   0LL);
        if ( (UserId & 1) != 0 )
        {
          UserId = (__int64)v95;
          if ( !v95 )
            goto LABEL_53;
          ViewEnemyEntity__IsMissionTarget(v95, v95->fields.questId, &missionTargetState, 0LL);
          if ( missionTargetState.fields.IsEventMission )
          {
            if ( !entity )
              goto LABEL_27;
            UserId = (__int64)entity->fields.enemyIds;
            if ( !UserId || !*(_QWORD *)(UserId + 24) )
              goto LABEL_27;
            if ( !v95 )
              goto LABEL_53;
            UserId = System_Linq_Enumerable__Contains_int_(
                       (System_Collections_Generic_IEnumerable_TSource__o *)UserId,
                       v95->fields.enemyId,
                       (const MethodInfo_2D7A61C *)Method_System_Linq_Enumerable_Contains_int___);
            if ( (UserId & 1) == 0 )
            {
LABEL_27:
              v64 = *v36;
              if ( !*v36 )
                goto LABEL_53;
              if ( v61 >= *(unsigned int *)(v64 + 24) )
                goto LABEL_67;
              *(_DWORD *)(v64 + 4 * v59) = 0;
            }
            if ( !v95 || !v46 )
              goto LABEL_53;
            UserId = DataMasterBase_object__object__int___TryGetEntity(
                       (DataMasterBase_TMaster__TEntity__PKType__o *)v46,
                       &v96,
                       v95->fields.svtId,
                       (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
            if ( (UserId & 1) != 0 )
            {
              UserId = (__int64)v96;
              if ( !v96 )
                goto LABEL_53;
              UserId = ServantEntity__get_IsOrganization((ServantEntity_o *)v96, 0LL);
              if ( (UserId & 1) == 0 )
                goto LABEL_37;
              UserId = (__int64)v95;
              if ( !v95 )
                goto LABEL_53;
              UserId = ViewEnemyEntity__IsIconIdUnique(v95, 0LL);
              if ( (UserId & 1) == 0 )
              {
                if ( !v95 )
                  goto LABEL_53;
                v68 = System_Int32__ToString((int)v95 + 36, 0LL);
                UserId = (__int64)System_String__Concat_60325748((System_String_o *)StringLiteral_12445/*"Servants/Commands/"*/, v68, 0LL);
                if ( !v47 )
                  goto LABEL_53;
                v69 = (Il2CppObject *)UserId;
                UserId = System_Collections_Generic_List_object___Contains(
                           v47,
                           (Il2CppObject *)UserId,
                           (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_string__Contains__);
                if ( (UserId & 1) == 0 )
                {
                  items = v47->fields._items;
                  v73 = Method_System_Collections_Generic_List_string__Add__;
                  ++v47->fields._version;
                  if ( !items )
                    goto LABEL_53;
                  size = v47->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v47,
                      v69,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v75 = &items->obj.klass + size;
                    v47->fields._size = size + 1;
                    v75[4] = (Il2CppClass *)v69;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v75 + 4), (int32_t)v69, v70, v71);
                  }
                }
                v76 = v95;
                v67 = (ViewEnemyEntity_o *)sub_1B00F18(ViewEnemyEntity_TypeInfo);
                ViewEnemyEntity___ctor_39002780(v67, v76, 0LL);
                v95 = v67;
                if ( !v67 )
                  goto LABEL_53;
                v67->fields.iconId = 0;
              }
              else
              {
LABEL_37:
                v67 = v95;
              }
              v77 = *v48;
              if ( !*v48 )
                goto LABEL_53;
              if ( v67 )
              {
                UserId = sub_1B00E08(v67, *(_QWORD *)(*(_QWORD *)v77 + 64LL));
                if ( !UserId )
                {
                  v91 = sub_1B00F4C();
                  sub_1B00DF4(v91, 0LL);
                }
              }
              if ( v61 >= v77[6] )
LABEL_67:
                sub_1B00F30(UserId, v33);
              *(_QWORD *)&v77[v60] = v67;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)&v77[v60], (int32_t)v67, v65, v66);
              v47 = v92;
            }
          }
        }
      }
      v58 = *v36;
      ++v59;
      v60 += 2LL;
      if ( !*v36 )
        goto LABEL_53;
    }
  }
  v78 = (System_Collections_Generic_IEnumerable_TSource__o *)*v48;
  if ( *v48 )
  {
    v79 = BoardOptionEventTargetComponent___c_TypeInfo;
    if ( !BoardOptionEventTargetComponent___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent___c_TypeInfo);
      v79 = BoardOptionEventTargetComponent___c_TypeInfo;
    }
    _9__8_0 = (System_Func_object__bool__o *)v79->static_fields->__9__8_0;
    if ( !_9__8_0 )
    {
      if ( !v79->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v79);
        v79 = BoardOptionEventTargetComponent___c_TypeInfo;
      }
      v81 = (Il2CppObject *)v79->static_fields->__9;
      _9__8_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_ViewEnemyEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__8_0,
        v81,
        Method_BoardOptionEventTargetComponent___c__CreateEnemyList_b__8_0__,
        0LL);
      static_fields = BoardOptionEventTargetComponent___c_TypeInfo->static_fields;
      static_fields->__9__8_0 = (struct System_Func_ViewEnemyEntity__bool__o *)_9__8_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v83, v84);
    }
    v85 = System_Linq_Enumerable__Count_object__47704992(
            v78,
            (System_Func_TSource__bool__o *)_9__8_0,
            (const MethodInfo_2D7EBA0 *)Method_System_Linq_Enumerable_Count_ViewEnemyEntity___);
  }
  else
  {
    v85 = 0;
  }
  BoardOptionEventTargetComponent__DispEmptyList(this, v85, v52);
  if ( !v47 )
LABEL_53:
    sub_1B00F28(UserId, v33);
  v86 = (struct System_String_array *)System_Collections_Generic_List_object___ToArray(
                                        v47,
                                        (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v86;
  p_loadedAssets = &this->fields.loadedAssets;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_loadedAssets, (int32_t)v86, v88, v89);
  *((_BYTE *)p_loadedAssets + 8) = 1;
  v90 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(
    v90,
    (Il2CppObject *)v31,
    Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__1__,
    0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v90, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__CreateEnemyList_32350828(
        BoardOptionEventTargetComponent_o *this,
        int32_t questId,
        System_Int32_array *enemies,
        ViewEnemyEntity_array *veEnts,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  int32_t v12; // w22
  ViewEnemyEntity_o *v13; // x24
  QuestInformationListViewItem_o *v14; // x0
  Il2CppObject *v15; // x23
  int32_t v16; // w1
  ViewEnemyEntity_o *v17; // x2
  int32_t v18; // w2
  int32_t v19; // w3
  __int64 v20; // x8
  _QWORD *v21; // x9
  __int64 m_CancellationTokenSource_low; // x10
  __int64 v23; // x8
  const MethodInfo *v24; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  v8 = this;
  if ( (byte_48DF4A9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__Add__, *(_QWORD *)&questId);
    this = (BoardOptionEventTargetComponent_o *)sub_1B00CCC(&QuestInformationListViewItem_TypeInfo, v9);
    byte_48DF4A9 = 1;
  }
  if ( v8->fields.loading && v8->fields.dispQuestId == questId )
  {
    v8->fields.loading = 0;
    if ( enemies )
    {
      v10 = *(_QWORD *)&enemies->max_length;
      if ( (int)v10 >= 1 )
      {
        v11 = 0LL;
        v12 = 0;
        while ( 1 )
        {
          if ( v11 >= (unsigned int)v10 )
LABEL_28:
            sub_1B00F30(this, *(_QWORD *)&questId);
          if ( enemies->m_Items[v11 + 1] <= 0 )
            break;
          if ( !veEnts )
            goto LABEL_27;
          if ( v11 >= veEnts->max_length )
            goto LABEL_28;
          v13 = veEnts->m_Items[v11];
          if ( v13 )
          {
            v14 = (QuestInformationListViewItem_o *)sub_1B00F18(QuestInformationListViewItem_TypeInfo);
            v15 = (Il2CppObject *)v14;
            v16 = v12;
            v17 = v13;
            goto LABEL_15;
          }
LABEL_21:
          if ( (__int64)++v11 >= (int)v10 )
            goto LABEL_22;
        }
        v14 = (QuestInformationListViewItem_o *)sub_1B00F18(QuestInformationListViewItem_TypeInfo);
        v15 = (Il2CppObject *)v14;
        v16 = v12;
        v17 = 0LL;
LABEL_15:
        QuestInformationListViewItem___ctor_32838448(v14, v16, v17, 0, 0LL);
        this = (BoardOptionEventTargetComponent_o *)v8->fields.itemList;
        if ( !this
          || (v20 = *(_QWORD *)&this->fields.m_CachedPtr,
              v21 = Method_System_Collections_Generic_List_ListViewItem__Add__,
              ++HIDWORD(this->fields.m_CancellationTokenSource),
              !v20) )
        {
LABEL_27:
          sub_1B00F28(this, *(_QWORD *)&questId);
        }
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            v15,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = v20 + 8 * m_CancellationTokenSource_low;
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_QWORD *)(v23 + 32) = v15;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 32), (int32_t)v15, v18, v19);
        }
        LODWORD(v10) = enemies->max_length;
        ++v12;
        goto LABEL_21;
      }
    }
LABEL_22:
    BoardOptionEventTargetComponent__DispList(v8, 0, (const MethodInfo *)enemies);
  }
  else
  {
    BoardOptionEventTargetComponent__DestroyList(v8, *(const MethodInfo **)&questId);
    dispQuestId = v8->fields.dispQuestId;
    if ( dispQuestId )
    {
      dispEnemies = v8->fields.dispEnemies;
      if ( dispEnemies )
        BoardOptionEventTargetComponent__CreateEnemyList(v8, dispQuestId, dispEnemies, v24);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent__DestroyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48DF4AB & 1) == 0 )
  {
    sub_1B00CCC(&AssetManager_TypeInfo, method);
    byte_48DF4AB = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (ServantStatusBattleListViewItem_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAssetStorage_36598596(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_1B00C70(p_loadedAssets, 0, v6, v7);
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__DispEmptyList(
        BoardOptionEventTargetComponent_o *this,
        int32_t useNum,
        const MethodInfo *method)
{
  int32_t v3; // w20
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  __int64 v7; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *v9; // x8
  int max_length; // w9
  unsigned int v11; // w10
  __int64 v12; // x21
  const MethodInfo *v13; // x3
  struct BoardOptionEventTargetListViewItemDraw_array *v14; // x8

  v3 = useNum;
  if ( (byte_48DF4A8 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&useNum);
    byte_48DF4A8 = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_26;
    if ( !*(_QWORD *)&eventTargetItemDrawList->max_length )
      return;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, v3 > 0, 0LL),
          (v9 = this->fields.eventTargetItemDrawList) == 0LL) )
    {
LABEL_26:
      sub_1B00F28(gameObject, v7);
    }
    max_length = v9->max_length;
    if ( max_length < v3 )
      v3 = v9->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0;
      do
      {
        if ( v11 >= max_length )
LABEL_27:
          sub_1B00F30(gameObject, v7);
        v12 = (int)v11;
        gameObject = v9->m_Items[v11];
        if ( !gameObject )
          goto LABEL_26;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                   (UnityEngine_Component_o *)gameObject,
                                                                   0LL);
        if ( !gameObject )
          goto LABEL_26;
        if ( (int)v12 >= v3 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
        }
        else
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
          v14 = this->fields.eventTargetItemDrawList;
          if ( !v14 )
            goto LABEL_26;
          if ( (unsigned int)v12 >= v14->max_length )
            goto LABEL_27;
          gameObject = v14->m_Items[v12];
          if ( !gameObject )
            goto LABEL_26;
          BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, 0LL, 0, v13);
        }
        v9 = this->fields.eventTargetItemDrawList;
        if ( !v9 )
          goto LABEL_26;
        max_length = v9->max_length;
        v11 = v12 + 1;
      }
      while ( (int)v12 + 1 < max_length );
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__DispList(
        BoardOptionEventTargetComponent_o *this,
        int32_t offset,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *missionTargetLabel; // x21
  BoardOptionEventTargetListViewItemDraw_o *gameObject; // x0
  QuestInformationListViewItem_o *v10; // x1
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v13; // x9
  struct BoardOptionEventTargetListViewItemDraw_array *v14; // x8
  int v15; // w21
  unsigned int v16; // w23
  __int64 v17; // x9
  const MethodInfo *v18; // x3
  __int64 methodPtr_low; // x10
  struct BoardOptionEventTargetListViewItemDraw_array *v20; // x8
  struct System_Collections_Generic_List_ListViewItem__o *v21; // x8

  if ( (byte_48DF4AA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Count__, *(_QWORD *)&offset);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewItem__get_Item__, v5);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v6);
    sub_1B00CCC(&QuestInformationListViewItem_TypeInfo, v7);
    byte_48DF4AA = 1;
  }
  missionTargetLabel = (UnityEngine_Object_o *)this->fields.missionTargetLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Object__op_Equality(missionTargetLabel, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) == 0 )
  {
    eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      goto LABEL_32;
    if ( !*(_QWORD *)&eventTargetItemDrawList->max_length )
      return;
    itemList = this->fields.itemList;
    if ( !itemList )
      goto LABEL_32;
    gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.missionTargetLabel;
    if ( !gameObject )
      goto LABEL_32;
    if ( itemList->fields._size <= 0 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      return;
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
    v13 = this->fields.itemList;
    this->fields.nowOffset = offset;
    if ( !v13 )
      goto LABEL_32;
    v14 = this->fields.eventTargetItemDrawList;
    if ( !v14 )
      goto LABEL_32;
    v15 = 0;
    v16 = (v13->fields._size - offset) & ~((v13->fields._size - offset) >> 31);
    while ( 1 )
    {
      v17 = *(_QWORD *)&v14->max_length;
      if ( v15 >= (int)v17 )
        break;
      if ( v15 >= (unsigned int)v17 )
        goto LABEL_38;
      gameObject = v14->m_Items[v15];
      if ( !gameObject )
        goto LABEL_32;
      gameObject = (BoardOptionEventTargetListViewItemDraw_o *)UnityEngine_Component__get_gameObject(
                                                                 (UnityEngine_Component_o *)gameObject,
                                                                 0LL);
      if ( !gameObject )
        goto LABEL_32;
      if ( v15 >= v16 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0LL);
      }
      else
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)this->fields.itemList;
        if ( !gameObject )
          goto LABEL_32;
        gameObject = (BoardOptionEventTargetListViewItemDraw_o *)System_Collections_Generic_List_object___get_Item(
                                                                   (System_Collections_Generic_List_object__o *)gameObject,
                                                                   offset + v15,
                                                                   (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
        if ( gameObject
          && (methodPtr_low = LOBYTE(QuestInformationListViewItem_TypeInfo->vtable._0_Equals.methodPtr),
              LOBYTE(gameObject->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low) )
        {
          v10 = (QuestInformationListViewItem_c *)gameObject->klass->_2.typeHierarchy[methodPtr_low - 1] == QuestInformationListViewItem_TypeInfo
              ? (QuestInformationListViewItem_o *)gameObject
              : 0LL;
        }
        else
        {
          v10 = 0LL;
        }
        v20 = this->fields.eventTargetItemDrawList;
        if ( !v20 )
          goto LABEL_32;
        if ( v15 >= v20->max_length )
LABEL_38:
          sub_1B00F30(gameObject, v10);
        gameObject = v20->m_Items[v15];
        if ( !gameObject )
          goto LABEL_32;
        BoardOptionEventTargetListViewItemDraw__SetItem(gameObject, v10, 2, v18);
      }
      v14 = this->fields.eventTargetItemDrawList;
      ++v15;
      if ( !v14 )
        goto LABEL_32;
    }
    v21 = this->fields.itemList;
    if ( !v21 )
LABEL_32:
      sub_1B00F28(gameObject, v10);
    if ( v21->fields._size <= (int)v17 )
      BoardOptionEventTargetComponent__SetAlpha(this, 1.0, (const MethodInfo *)v10);
  }
}


bool __fastcall BoardOptionEventTargetComponent__IsNeedAnim(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent_o *v2; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9

  v2 = this;
  if ( (byte_48DF4AE & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1B00CCC(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_48DF4AE = 1;
  }
  itemList = v2->fields.itemList;
  if ( !itemList )
    return 0;
  eventTargetItemDrawList = v2->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
    sub_1B00F28(this, method);
  return itemList->fields._size > (signed int)eventTargetItemDrawList->max_length;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForSprite(
        BoardOptionEventTargetComponent_o *this,
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
  BoardOptionEventTargetComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1

  if ( (byte_48DF4AD & 1) == 0 )
  {
    sub_1B00CCC(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Material_TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B00CCC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B00CCC(&StringLiteral_15928/*"_ChocoTex"*/, v6);
    sub_1B00CCC(&StringLiteral_12522/*"Shaders/ChocoMap"*/, v7);
    byte_48DF4AD = 1;
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
                 (System_String_o *)StringLiteral_12522/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2DE4C60 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B00C70(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v16 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_SP, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1B00F18(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    p_mChocoMaterialSp->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B00C70(p_mChocoMaterialSp, (int32_t)v18, v19, v20);
    if ( !p_mChocoMaterialSp->klass )
      sub_1B00F28(0LL, v21);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialSp->klass,
      (System_String_o *)StringLiteral_15928/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialSp->klass;
}


UnityEngine_Material_o *__fastcall BoardOptionEventTargetComponent__NewChocoMaterialForTexture(
        BoardOptionEventTargetComponent_o *this,
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
  BoardOptionEventTargetComponent_c *v16; // x0
  UnityEngine_Shader_o *v17; // x21
  UnityEngine_Material_o *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x1

  if ( (byte_48DF4AC & 1) == 0 )
  {
    sub_1B00CCC(&BoardOptionEventTargetComponent_TypeInfo, method);
    sub_1B00CCC(&UnityEngine_Material_TypeInfo, v3);
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, v4);
    sub_1B00CCC(&Method_UnityEngine_Resources_Load_Texture2D___, v5);
    sub_1B00CCC(&StringLiteral_15928/*"_ChocoTex"*/, v6);
    sub_1B00CCC(&StringLiteral_12522/*"Shaders/ChocoMap"*/, v7);
    byte_48DF4AC = 1;
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
                 (System_String_o *)StringLiteral_12522/*"Shaders/ChocoMap"*/,
                 (const MethodInfo_2DE4C60 *)Method_UnityEngine_Resources_Load_Texture2D___);
      p_mChocoTex->klass = (ServantStatusBattleListViewItem_c *)object;
      sub_1B00C70(p_mChocoTex, (int32_t)object, v14, v15);
    }
    v16 = BoardOptionEventTargetComponent_TypeInfo;
    if ( !BoardOptionEventTargetComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BoardOptionEventTargetComponent_TypeInfo);
      v16 = BoardOptionEventTargetComponent_TypeInfo;
    }
    v17 = UnityEngine_Shader__Find(v16->static_fields->CHOCO_SHADER_TX, 0LL);
    v18 = (UnityEngine_Material_o *)sub_1B00F18(UnityEngine_Material_TypeInfo);
    UnityEngine_Material___ctor(v18, v17, 0LL);
    p_mChocoMaterialTx->klass = (ServantStatusBattleListViewItem_c *)v18;
    sub_1B00C70(p_mChocoMaterialTx, (int32_t)v18, v19, v20);
    if ( !p_mChocoMaterialTx->klass )
      sub_1B00F28(0LL, v21);
    UnityEngine_Material__SetTexture(
      (UnityEngine_Material_o *)p_mChocoMaterialTx->klass,
      (System_String_o *)StringLiteral_15928/*"_ChocoTex"*/,
      (UnityEngine_Texture_o *)p_mChocoTex->klass,
      0LL);
  }
  return (UnityEngine_Material_o *)p_mChocoMaterialTx->klass;
}


void __fastcall BoardOptionEventTargetComponent__ReCreateEnemyList(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t dispQuestId; // w1
  System_Int32_array *dispEnemies; // x2

  dispQuestId = this->fields.dispQuestId;
  if ( dispQuestId )
  {
    dispEnemies = this->fields.dispEnemies;
    if ( dispEnemies )
      BoardOptionEventTargetComponent__CreateEnemyList(this, dispQuestId, dispEnemies, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BoardOptionEventTargetComponent__SetAlpha(
        BoardOptionEventTargetComponent_o *this,
        float alpha,
        const MethodInfo *method)
{
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x8
  BoardOptionEventTargetComponent_o *v4; // x19
  long double v5; // q8
  __int64 v6; // x20
  int max_length; // w9
  BoardOptionEventTargetListViewItemDraw_o *v8; // x8

  eventTargetItemDrawList = this->fields.eventTargetItemDrawList;
  if ( !eventTargetItemDrawList )
LABEL_8:
    sub_1B00F28(this, method);
  v4 = this;
  v5 = *(long double *)&alpha;
  v6 = 0LL;
  while ( 1 )
  {
    max_length = eventTargetItemDrawList->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B00F30(this, method);
    v8 = eventTargetItemDrawList->m_Items[v6];
    if ( v8 )
    {
      this = (BoardOptionEventTargetComponent_o *)v8->fields.iconBaseSprite;
      if ( this )
      {
        this = (BoardOptionEventTargetComponent_o *)((__int64 (__fastcall *)(BoardOptionEventTargetComponent_o *, Il2CppClass *, long double))this->klass[1]._1.castClass)(
                                                      this,
                                                      this->klass[1]._1.declaringType,
                                                      v5);
        eventTargetItemDrawList = v4->fields.eventTargetItemDrawList;
        ++v6;
        if ( eventTargetItemDrawList )
          continue;
      }
    }
    goto LABEL_8;
  }
}


void __fastcall BoardOptionEventTargetComponent__SetNextTarget(
        BoardOptionEventTargetComponent_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BoardOptionEventTargetComponent_o *v3; // x19
  struct System_Collections_Generic_List_ListViewItem__o *itemList; // x8
  struct BoardOptionEventTargetListViewItemDraw_array *eventTargetItemDrawList; // x9
  int32_t size; // w8
  signed int max_length; // w9
  int32_t v8; // w9
  int32_t v9; // w1

  v3 = this;
  if ( (byte_48DF4AF & 1) == 0 )
  {
    this = (BoardOptionEventTargetComponent_o *)sub_1B00CCC(
                                                  &Method_System_Collections_Generic_List_ListViewItem__get_Count__,
                                                  method);
    byte_48DF4AF = 1;
  }
  itemList = v3->fields.itemList;
  if ( itemList )
  {
    eventTargetItemDrawList = v3->fields.eventTargetItemDrawList;
    if ( !eventTargetItemDrawList )
      sub_1B00F28(this, method);
    size = itemList->fields._size;
    max_length = eventTargetItemDrawList->max_length;
    if ( size > max_length )
    {
      v8 = v3->fields.nowOffset + max_length;
      if ( v8 <= size )
        v9 = v8;
      else
        v9 = 0;
      BoardOptionEventTargetComponent__DispList(v3, v9, v2);
    }
  }
}


void __fastcall BoardOptionEventTargetComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48DF4B1 & 1) == 0 )
  {
    sub_1B00CCC(&BoardOptionEventTargetComponent___c_TypeInfo, v1);
    byte_48DF4B1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BoardOptionEventTargetComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BoardOptionEventTargetComponent___c_TypeInfo->static_fields->__9 = (struct BoardOptionEventTargetComponent___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)BoardOptionEventTargetComponent___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BoardOptionEventTargetComponent___c___ctor(
        BoardOptionEventTargetComponent___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BoardOptionEventTargetComponent___c___CreateEnemyList_b__8_0(
        BoardOptionEventTargetComponent___c_o *this,
        ViewEnemyEntity_o *n,
        const MethodInfo *method)
{
  return n != 0LL;
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___ctor(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__1(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  BoardOptionEventTargetComponent___c__DisplayClass8_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  struct BoardOptionEventTargetComponent_o *_4__this; // x8
  System_String_array *loadedAssets; // x20
  System_Action_o *_9__2; // x21
  int32_t v8; // w2
  int32_t v9; // w3

  v2 = this;
  if ( (byte_48DF4B2 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&AssetManager_TypeInfo, v3);
    this = (BoardOptionEventTargetComponent___c__DisplayClass8_0_o *)sub_1B00CCC(
                                                                       &Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
                                                                       v4);
    byte_48DF4B2 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__2 = v2->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)v2,
      Method_BoardOptionEventTargetComponent___c__DisplayClass8_0__CreateEnemyList_b__2__,
      0LL);
    v2->fields.__9__2 = _9__2;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v2->fields.__9__2, (int32_t)_9__2, v8, v9);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_36596448(loadedAssets, _9__2, 1, 0LL);
}


void __fastcall BoardOptionEventTargetComponent___c__DisplayClass8_0___CreateEnemyList_b__2(
        BoardOptionEventTargetComponent___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x4

  if ( !this->fields.__4__this )
    sub_1B00F28(this, method);
  BoardOptionEventTargetComponent__CreateEnemyList_32350828(
    this->fields.__4__this,
    this->fields.questId,
    this->fields.enemies,
    this->fields.veEnts,
    v2);
}