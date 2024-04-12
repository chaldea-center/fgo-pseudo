void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  CombineExpUpInfo_c *v1; // x8

  if ( (byte_42B0F26 & 1) == 0 )
  {
    sub_B52984(&CombineExpUpInfo_TypeInfo);
    byte_42B0F26 = 1;
  }
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_WIDTH = 56;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_HEIGHT = 36;
  v1 = CombineExpUpInfo_TypeInfo;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_OFF_WIDTH = 58;
  v1->static_fields->TYPE_BUTTON_OFF_HEIGHT = 38;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct System_String_array *v11; // x20
  __int64 v12; // x0
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Int32_array **v27; // x1
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x0
  __int64 v42; // x0

  if ( (byte_42B0F25 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
    sub_B52984(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
    sub_B52984(&string___TypeInfo);
    sub_B52984(&StringLiteral_17112/*"btn_hp_"*/);
    sub_B52984(&StringLiteral_17067/*"btn_atk_"*/);
    sub_B52984(&StringLiteral_17109/*"btn_experience_"*/);
    byte_42B0F25 = 1;
  }
  v3 = sub_B5299C(string___TypeInfo, 3LL);
  if ( !v3 )
LABEL_23:
    sub_B52A5C(v3, v4);
  v11 = (struct System_String_array *)v3;
  v12 = StringLiteral_17109/*"btn_experience_"*/;
  if ( StringLiteral_17109/*"btn_experience_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17109/*"btn_experience_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_22;
    v13 = (System_Int32_array **)StringLiteral_17109/*"btn_experience_"*/;
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v11->max_length )
    goto LABEL_21;
  v11->m_Items[0] = (System_String_o *)v13;
  sub_B52920((BattleServantConfConponent_o *)v11->m_Items, v13, v5, v6, v7, v8, v9, v10);
  v12 = StringLiteral_17067/*"btn_atk_"*/;
  if ( StringLiteral_17067/*"btn_atk_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17067/*"btn_atk_"*/, v11->obj.klass->_1.element_class);
    if ( !v12 )
      goto LABEL_22;
    v20 = (System_Int32_array **)StringLiteral_17067/*"btn_atk_"*/;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v11->max_length <= 1 )
    goto LABEL_21;
  v11->m_Items[1] = (System_String_o *)v20;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[1], v20, v14, v15, v16, v17, v18, v19);
  v12 = StringLiteral_17112/*"btn_hp_"*/;
  if ( StringLiteral_17112/*"btn_hp_"*/ )
  {
    v12 = sub_B52A44(StringLiteral_17112/*"btn_hp_"*/, v11->obj.klass->_1.element_class);
    if ( v12 )
    {
      v27 = (System_Int32_array **)StringLiteral_17112/*"btn_hp_"*/;
      goto LABEL_18;
    }
LABEL_22:
    v42 = sub_B52A7C(v12);
    sub_B52A28(v42, 0LL);
  }
  v27 = 0LL;
LABEL_18:
  if ( v11->max_length <= 2 )
  {
LABEL_21:
    v41 = sub_B52A88(v12);
    sub_B52A28(v41, 0LL);
  }
  v11->m_Items[2] = (System_String_o *)v27;
  sub_B52920((BattleServantConfConponent_o *)&v11->m_Items[2], v27, v21, v22, v23, v24, v25, v26);
  this->fields.btnSpriteNameList = v11;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.btnSpriteNameList,
    (System_Int32_array **)v11,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  v34 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B52A54(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v34,
    (const MethodInfo_305922C *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v34 )
    goto LABEL_23;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    1,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    2,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    3,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    4,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    5,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    6,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    7,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v34,
    1001,
    (const MethodInfo_3059F88 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v34;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.SortClassOrder,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall CombineExpUpInfo__ExpUpInfoSet(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        bool isFirst,
        System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o *afterAction,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o **p_changeAction; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v14; // x0
  SvtClassAttri_c *v15; // x0
  __int64 v16; // x21
  DataManager_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  signed __int64 size; // x27
  System_Int32_array *v23; // x22
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v25; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v27; // x24
  UserServantEntity_array *v28; // x23
  unsigned __int64 i; // x25
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *v30; // x24
  int32_t v31; // w24
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x4
  int32_t nowType; // w8
  int32_t v36; // w24
  const MethodInfo *v37; // x2
  const MethodInfo *v38; // x6
  int32_t v39; // w3
  struct DataMasterBase_array *datalist; // x8
  __int64 v41; // x9
  __int64 v42; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x8
  DataManager_o *v44; // x8
  int32_t v45; // w1
  int32_t v46; // w4
  int32_t v47; // w5
  struct CombineExpUpClassInfo_array *v48; // x8
  struct CombineExpUpClassInfo_array *v49; // x8
  System_Int32_array *v50; // x2
  System_Int32_array *v51; // x3
  __int64 v52; // x0

  if ( (byte_42B0F1D & 1) == 0 )
  {
    sub_B52984(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_B52984(&Method_DataManager_GetMasterData_UserServantStorageMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_int_____ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_UserServantEntity___ctor___68526488);
    sub_B52984(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__);
    sub_B52984(&System_Collections_Generic_List_int____TypeInfo);
    sub_B52984(&System_Collections_Generic_List_UserServantEntity__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    byte_42B0F1D = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  p_changeAction = &this->fields.changeAction;
  if ( afterAction )
  {
    *p_changeAction = afterAction;
    sub_B52920(
      (BattleServantConfConponent_o *)&this->fields.changeAction,
      (System_Int32_array **)afterAction,
      *(System_String_array ***)&type,
      (System_String_array **)isFirst,
      (System_Boolean_array **)afterAction,
      (System_Int32_array **)method,
      v6,
      v7);
  }
  if ( *p_changeAction )
    System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType___Invoke(
      *p_changeAction,
      this->fields.nowKind,
      this->fields.nowType,
      (const MethodInfo_263472C *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__);
  v14 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v14,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_int_____ctor__);
  v15 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v15 = SvtClassAttri_TypeInfo;
  }
  v16 = sub_B5299C(int___TypeInfo, v15->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_B5299C(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_84;
  nowKind = this->fields.nowKind;
  size = SortClassOrder->fields._size;
  v23 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_84;
      v25 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             0LL);
      v27 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B52A54(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v27,
        CombineMaterialList,
        (const MethodInfo_2FF0B38 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___68526488);
      if ( !v25 )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v25, 0LL);
      if ( !v27 )
        goto LABEL_84;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v27,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_2FF1854 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v27,
                                    (const MethodInfo_2FF3750 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_26;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_26;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_26:
      v28 = (UserServantEntity_array *)Instance;
      goto LABEL_28;
  }
  v28 = 0LL;
LABEL_28:
  if ( (int)size >= 1 )
  {
    for ( i = 0LL; (__int64)i < size; ++i )
    {
      v30 = this->fields.SortClassOrder;
      if ( !v30 )
        goto LABEL_84;
      if ( i >= (unsigned int)v30->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42202232(0LL);
      v31 = v30->fields._items->m_Items[i + 1];
      if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SvtClassAttri_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      }
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(v31, 0LL);
      nowType = this->fields.nowType;
      v36 = (int)ClassId;
      if ( nowType == 1 )
      {
        v39 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v28, (int32_t)ClassId, v33);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_43;
        }
        v39 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v28, (int32_t)ClassId, v39, v34);
      if ( !Instance )
        return (char)Instance;
LABEL_43:
      datalist = Instance->fields.datalist;
      if ( !datalist )
      {
        LOBYTE(Instance) = 0;
        return (char)Instance;
      }
      if ( (int)datalist >= 1 )
      {
        if ( !(_DWORD)datalist )
        {
LABEL_83:
          v52 = sub_B52A88(Instance);
          sub_B52A28(v52, 0LL);
        }
        v41 = 0LL;
        while ( 1 )
        {
          v42 = *((_QWORD *)&Instance->fields.lookup + v41);
          if ( !v42 || !v16 )
            break;
          if ( (unsigned int)v41 >= *(_DWORD *)(v16 + 24) )
            goto LABEL_83;
          *(_DWORD *)(v16 + 32 + 4 * v41) = *(_DWORD *)(v42 + 16);
          if ( !v23 )
            break;
          if ( (unsigned int)v41 >= v23->max_length )
            goto LABEL_83;
          v23->m_Items[v41 + 1] = *(_DWORD *)(v42 + 20);
          if ( (int)v41 + 1 >= (int)datalist )
            goto LABEL_55;
          if ( (unsigned int)++v41 >= LODWORD(Instance->fields.datalist) )
            goto LABEL_83;
        }
LABEL_84:
        sub_B52A5C(Instance, v18);
      }
LABEL_55:
      if ( isFirst )
      {
        if ( this->fields.nowType )
        {
          expUpClassInfoList = this->fields.expUpClassInfoList;
          if ( !expUpClassInfoList )
            goto LABEL_84;
          if ( i >= expUpClassInfoList->max_length )
            goto LABEL_83;
          v44 = (DataManager_o *)expUpClassInfoList->m_Items[i];
          if ( !v44 )
            goto LABEL_84;
          if ( LODWORD(Instance->fields.datalist) == 5 )
          {
            if ( v36 == 1001 )
            {
              v45 = 1001;
              v46 = 1;
              v47 = 4;
              Instance = v44;
              goto LABEL_77;
            }
            v46 = 2;
LABEL_76:
            v47 = 3;
            Instance = v44;
            v45 = v36;
LABEL_77:
            v50 = (System_Int32_array *)v16;
            v51 = v23;
LABEL_78:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v45, v50, v51, v46, v47, v38);
            continue;
          }
          if ( v36 != 1001 )
          {
            v46 = 1;
            goto LABEL_76;
          }
          v45 = 1001;
          v47 = 4;
          Instance = v44;
        }
        else
        {
          v49 = this->fields.expUpClassInfoList;
          if ( !v49 )
            goto LABEL_84;
          if ( i >= v49->max_length )
            goto LABEL_83;
          Instance = (DataManager_o *)v49->m_Items[i];
          if ( !Instance )
            goto LABEL_84;
          v47 = 5;
          v45 = v36;
        }
        v50 = (System_Int32_array *)v16;
        v51 = v23;
        v46 = 0;
        goto LABEL_78;
      }
      v48 = this->fields.expUpClassInfoList;
      if ( !v48 )
        goto LABEL_84;
      if ( i >= v48->max_length )
        goto LABEL_83;
      Instance = (DataManager_o *)v48->m_Items[i];
      if ( !Instance )
        goto LABEL_84;
      CombineExpUpClassInfo__Set_26735988((CombineExpUpClassInfo_o *)Instance, v23, v37);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v19);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  SvtClassAttri_c *v6; // x0
  CombineExpUpInfo_MaterialData_array *v7; // x21
  __int64 Instance; // x0
  __int64 v9; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v11; // x22
  __int64 v12; // x25
  unsigned __int64 v13; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  CombineExpUpInfo_MaterialData_o *v15; // x23
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  signed __int64 v22; // x9
  __int64 v23; // x23
  unsigned __int64 v24; // x8
  __int64 v25; // x13
  int32_t v26; // w14
  __int64 v27; // x23
  il2cpp_array_size_t v28; // w25
  Il2CppClass **v29; // x8
  UserServantEntity_o *v30; // x22
  SvtClassAttri_c *v31; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v33; // x8
  __int64 v34; // x0
  __int64 v36; // x0

  if ( (byte_42B0F1E & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_B52984(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    byte_42B0F1E = 1;
  }
  v6 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v6 = SvtClassAttri_TypeInfo;
  }
  v7 = (CombineExpUpInfo_MaterialData_array *)sub_B5299C(
                                                CombineExpUpInfo_MaterialData___TypeInfo,
                                                v6->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_48;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v11 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v12 = 0LL;
  v13 = 0LL;
  m_Items = v7->m_Items;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v22 = **(int **)(Instance + 184);
    if ( (__int64)v13 >= v22 )
      break;
    v15 = (CombineExpUpInfo_MaterialData_o *)sub_B52A54(CombineExpUpInfo_MaterialData_TypeInfo);
    CombineExpUpInfo_MaterialData___ctor(v15, 0LL);
    if ( !v7 )
      goto LABEL_48;
    if ( v15 )
    {
      Instance = sub_B52A44(v15, v7->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v36 = sub_B52A7C(0LL);
        sub_B52A28(v36, 0LL);
      }
    }
    if ( v13 >= v7->max_length )
      goto LABEL_45;
    m_Items[v13] = v15;
    sub_B52920((BattleServantConfConponent_o *)&m_Items[v12], (System_Int32_array **)v15, v16, v17, v18, v19, v20, v21);
    ++v13;
    ++v12;
  }
  v23 = *(_QWORD *)&v11->max_length;
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v22) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v23 >= 1 )
  {
    if ( v7 )
    {
      v24 = 0LL;
      while ( ((_DWORD)v22 != (_DWORD)v23) + v24 < v7->max_length && v24 < v11->max_length )
      {
        v25 = *((_QWORD *)&v7->m_Items[(_DWORD)v22 != (_DWORD)v23] + v24);
        if ( !v25 )
          goto LABEL_48;
        v26 = v11->m_Items[++v24];
        *(_DWORD *)(v25 + 16) = v26;
        if ( (__int64)v24 >= (int)v23 )
          goto LABEL_30;
      }
LABEL_45:
      v34 = sub_B52A88(Instance);
      sub_B52A28(v34, 0LL);
    }
LABEL_48:
    sub_B52A5C(Instance, v9);
  }
LABEL_30:
  if ( !svtList )
    goto LABEL_48;
  v27 = *(_QWORD *)&svtList->max_length;
  if ( (int)v27 >= 1 )
  {
    v28 = 0;
    while ( 1 )
    {
      v29 = &svtList->obj.klass + (int)v28;
      v30 = (UserServantEntity_o *)v29[4];
      if ( !v30 )
        goto LABEL_48;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v29[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v30, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v31 = SvtClassAttri_TypeInfo;
          if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v31 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v31->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v30, 0LL);
          if ( !v7 )
            goto LABEL_48;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v7->max_length )
            goto LABEL_45;
          v33 = v7->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v33 )
            goto LABEL_48;
          ++v33->fields.num;
        }
      }
      if ( (int)++v28 >= (int)v27 )
        return v7;
      if ( v28 >= svtList->max_length )
        goto LABEL_45;
    }
  }
  return v7;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v9; // x1
  System_Int32_array *TargetClassStatusUpSvtIdList; // x24
  SvtClassAttri_c *v11; // x8
  __int64 v12; // x8
  __int64 v13; // x23
  int v14; // w22
  unsigned __int64 v15; // x27
  int32_t *v16; // x28
  int32_t v17; // w26
  ServantLeaderInfo_o *v18; // x25
  __int64 v19; // x9
  CombineExpUpInfo_MaterialData_array *v20; // x24
  BattleServantConfConponent_o *v21; // x25
  __int64 v22; // x20
  CombineExpUpInfo_MaterialData_o *v23; // x26
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  il2cpp_array_size_t v30; // w28
  BattleServantConfConponent_c *klass; // x8
  int v32; // w9
  __int64 v33; // x25
  il2cpp_array_size_t v34; // w20
  Il2CppClass **v35; // x8
  UserServantEntity_o *v36; // x23
  CombineExpUpInfo_MaterialData_o *v37; // x8
  __int64 v38; // x0
  __int64 v40; // x0
  int32_t v41; // [xsp+Ch] [xbp-54h]

  if ( (byte_42B0F1F & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_B52984(&int___TypeInfo);
    sub_B52984(&CombineExpUpInfo_MaterialData___TypeInfo);
    sub_B52984(&CombineExpUpInfo_MaterialData_TypeInfo);
    sub_B52984(&ServantLeaderInfo_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&SvtClassAttri_TypeInfo);
    byte_42B0F1F = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v11 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v11 = SvtClassAttri_TypeInfo;
  }
  Instance = sub_B5299C(int___TypeInfo, v11->static_fields->MAX_EXP_UP_RARITY);
  if ( !TargetClassStatusUpSvtIdList )
    goto LABEL_60;
  v12 = *(_QWORD *)&TargetClassStatusUpSvtIdList->max_length;
  v13 = Instance;
  v41 = classId;
  if ( (int)v12 < 1 )
    return 0LL;
  v14 = 0;
  v15 = 0LL;
  v16 = &TargetClassStatusUpSvtIdList->m_Items[1];
  do
  {
    if ( v15 >= (unsigned int)v12 )
    {
LABEL_57:
      v38 = sub_B52A88(Instance);
      sub_B52A28(v38, 0LL);
    }
    v17 = v16[v15];
    v18 = (ServantLeaderInfo_o *)sub_B52A54(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29276080(v18, v17, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v18 )
        goto LABEL_60;
      if ( !v18->fields.hp && !v18->fields.adjustHp )
        goto LABEL_25;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_25;
      if ( !v18 )
        goto LABEL_60;
      if ( !v18->fields.atk && !v18->fields.adjustAtk )
        goto LABEL_25;
    }
    if ( v15 >= TargetClassStatusUpSvtIdList->max_length )
      goto LABEL_57;
    if ( !v13 )
      goto LABEL_60;
    if ( (unsigned int)v14 >= *(_DWORD *)(v13 + 24) )
      goto LABEL_57;
    v19 = v13 + 4LL * v14++;
    *(_DWORD *)(v19 + 32) = v16[v15];
LABEL_25:
    LODWORD(v12) = TargetClassStatusUpSvtIdList->max_length;
    ++v15;
  }
  while ( (__int64)v15 < (int)v12 );
  if ( !v14 )
    return 0LL;
  Instance = sub_B5299C(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v14);
  v20 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v14 >= 1 )
  {
    v21 = (BattleServantConfConponent_o *)(Instance + 32);
    v22 = 8LL;
    while ( 1 )
    {
      v23 = (CombineExpUpInfo_MaterialData_o *)sub_B52A54(CombineExpUpInfo_MaterialData_TypeInfo);
      CombineExpUpInfo_MaterialData___ctor(v23, 0LL);
      if ( !v20 )
        break;
      if ( v23 )
      {
        Instance = sub_B52A44(v23, v20->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v40 = sub_B52A7C(0LL);
          sub_B52A28(v40, 0LL);
        }
      }
      v30 = v22 - 8;
      if ( (unsigned int)(v22 - 8) >= v20->max_length )
        goto LABEL_57;
      v21->klass = (BattleServantConfConponent_c *)v23;
      sub_B52920(v21, (System_Int32_array **)v23, v24, v25, v26, v27, v28, v29);
      if ( v30 >= v20->max_length )
        goto LABEL_57;
      if ( !v13 )
        break;
      if ( v30 >= *(_DWORD *)(v13 + 24) )
        goto LABEL_57;
      klass = v21->klass;
      if ( !v21->klass )
        break;
      v32 = *(_DWORD *)(v13 + 4 * v22++);
      v21 = (BattleServantConfConponent_o *)((char *)v21 + 8);
      LODWORD(klass->_1.name) = v32;
      if ( (int)v22 - 8 >= v14 )
        goto LABEL_38;
    }
LABEL_60:
    sub_B52A5C(Instance, v9);
  }
LABEL_38:
  if ( !svtList )
    goto LABEL_60;
  v33 = *(_QWORD *)&svtList->max_length;
  if ( (int)v33 >= 1 )
  {
    v34 = 0;
    while ( 1 )
    {
      v35 = &svtList->obj.klass + (int)v34;
      v36 = (UserServantEntity_o *)v35[4];
      if ( !v36 )
        goto LABEL_60;
      Instance = UserServantEntity__IsStatusUp((UserServantEntity_o *)v35[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v36, 0LL);
        if ( (_DWORD)Instance == v41 )
        {
          if ( type == 2 )
          {
            if ( v36->fields.hp || v36->fields.adjustHp )
            {
LABEL_51:
              Instance = UserServantEntity__getRarity(v36, 0LL);
              if ( !v20 )
                goto LABEL_60;
              if ( (unsigned int)(v14 - Instance) >= v20->max_length )
                goto LABEL_57;
              v37 = v20->m_Items[v14 - (int)Instance];
              if ( !v37 )
                goto LABEL_60;
              ++v37->fields.num;
            }
          }
          else if ( type == 1 && (v36->fields.atk || v36->fields.adjustAtk) )
          {
            goto LABEL_51;
          }
        }
      }
      if ( (int)++v34 >= (int)v33 )
        return v20;
      if ( v34 >= svtList->max_length )
        goto LABEL_57;
    }
  }
  return v20;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_42B0F22 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0F22 = 1;
  }
  if ( this->fields.nowType != 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 1, 1, 0LL, v3);
  }
}


void __fastcall CombineExpUpInfo__OnClickChangeButton(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  int32_t nowKind; // w8
  int32_t v5; // w1

  if ( (byte_42B0F24 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0F24 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  nowKind = this->fields.nowKind;
  if ( nowKind )
    v5 = 2 * (nowKind == 1);
  else
    v5 = 1;
  CombineExpUpInfo__ExpUpInfoSet(this, v5, this->fields.nowType, 0, 0LL, v3);
}


void __fastcall CombineExpUpInfo__OnClickLeft(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_42B0F21 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0F21 = 1;
  }
  if ( this->fields.nowType )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 0, 1, 0LL, v3);
  }
}


void __fastcall CombineExpUpInfo__OnClickRight(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_42B0F23 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B0F23 = 1;
  }
  if ( this->fields.nowType != 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    CombineExpUpInfo__ExpUpInfoSet(this, this->fields.nowKind, 2, 1, 0LL, v3);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CombineExpUpInfo__SetBtnState(
        CombineExpUpInfo_o *this,
        int32_t kind,
        int32_t type,
        const MethodInfo *method)
{
  CombineExpUpInfo_o *v5; // x19
  __int64 v6; // x24
  struct UnityEngine_GameObject_array *btnObjList; // x8
  il2cpp_array_size_t v8; // w25
  struct UISprite_array *btnSpriteList; // x8
  struct UISprite_array *v10; // x8
  UIWidget_o *v11; // x22
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v14; // x22
  System_String_o *v15; // x0
  System_String_o *v16; // x1
  struct UISprite_array *v17; // x8
  struct UISprite_array *v18; // x8
  UIWidget_o *v19; // x22
  struct UISprite_array *v20; // x8
  struct System_String_array *v21; // x9
  __int64 *v22; // x8
  __int64 v23; // x0

  v5 = this;
  if ( (byte_42B0F20 & 1) == 0 )
  {
    sub_B52984(&CombineExpUpInfo_TypeInfo);
    sub_B52984(&StringLiteral_21366/*"off"*/);
    sub_B52984(&StringLiteral_17073/*"btn_bg_02_on"*/);
    sub_B52984(&StringLiteral_21396/*"on"*/);
    sub_B52984(&StringLiteral_17261/*"button_total"*/);
    sub_B52984(&StringLiteral_17260/*"button_storage"*/);
    sub_B52984(&StringLiteral_17255/*"button_possess"*/);
    this = (CombineExpUpInfo_o *)sub_B52984(&StringLiteral_17072/*"btn_bg_02_off"*/);
    byte_42B0F20 = 1;
  }
  v6 = 4LL;
  do
  {
    btnObjList = v5->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_49;
    v8 = v6 - 4;
    if ( (unsigned int)(v6 - 4) >= btnObjList->max_length )
      goto LABEL_50;
    this = (CombineExpUpInfo_o *)*((_QWORD *)&btnObjList->obj.klass + v6);
    if ( !this )
      goto LABEL_49;
    if ( (_DWORD)v6 - type == 4 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v5->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_49;
      if ( btnSpriteList->max_length <= type )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)*((_QWORD *)&btnSpriteList->obj.klass + v6);
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17073/*"btn_bg_02_on"*/, 0LL);
      v10 = v5->fields.btnSpriteList;
      if ( !v10 )
        goto LABEL_49;
      if ( v10->max_length <= type )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v11 = (UIWidget_o *)*((_QWORD *)&v10->obj.klass + v6);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v11 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v11,
        (int32_t)this[1].fields.SortClassOrder->klass,
        HIDWORD(this[1].fields.SortClassOrder->klass),
        0LL);
      btnTxtSpriteList = v5->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_49;
      if ( btnTxtSpriteList->max_length <= type )
        goto LABEL_50;
      btnSpriteNameList = v5->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_49;
      if ( btnSpriteNameList->max_length <= type )
        goto LABEL_50;
      v14 = (UISprite_o *)*((_QWORD *)&btnTxtSpriteList->obj.klass + v6);
      v15 = (System_String_o *)*((_QWORD *)&btnSpriteNameList->obj.klass + v6);
      v16 = (System_String_o *)StringLiteral_21396/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v17 = v5->fields.btnSpriteList;
      if ( !v17 )
        goto LABEL_49;
      if ( v8 >= v17->max_length )
      {
LABEL_50:
        v23 = sub_B52A88(this);
        sub_B52A28(v23, 0LL);
      }
      this = (CombineExpUpInfo_o *)*((_QWORD *)&v17->obj.klass + v6);
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17072/*"btn_bg_02_off"*/, 0LL);
      v18 = v5->fields.btnSpriteList;
      if ( !v18 )
        goto LABEL_49;
      if ( v8 >= v18->max_length )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v19 = (UIWidget_o *)*((_QWORD *)&v18->obj.klass + v6);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v19 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v19,
        (int32_t)this[1].fields.SortClassOrder->monitor,
        HIDWORD(this[1].fields.SortClassOrder->monitor),
        0LL);
      v20 = v5->fields.btnTxtSpriteList;
      if ( !v20 )
        goto LABEL_49;
      if ( v8 >= v20->max_length )
        goto LABEL_50;
      v21 = v5->fields.btnSpriteNameList;
      if ( !v21 )
        goto LABEL_49;
      if ( v8 >= v21->max_length )
        goto LABEL_50;
      v14 = (UISprite_o *)*((_QWORD *)&v20->obj.klass + v6);
      v15 = (System_String_o *)*((_QWORD *)&v21->obj.klass + v6);
      v16 = (System_String_o *)StringLiteral_21366/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_44568316(v15, v16, 0LL);
    if ( !v14 )
      goto LABEL_49;
    UISprite__set_spriteName(v14, (System_String_o *)this, 0LL);
    ++v6;
  }
  while ( (unsigned int)(v6 - 5) < 2 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v22 = &StringLiteral_17261/*"button_total"*/;
        goto LABEL_47;
      }
LABEL_49:
      sub_B52A5C(this, *(_QWORD *)&kind);
    case 1:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v22 = &StringLiteral_17260/*"button_storage"*/;
        goto LABEL_47;
      }
      goto LABEL_49;
    case 0:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v22 = &StringLiteral_17255/*"button_possess"*/;
LABEL_47:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v22, 0LL);
        return;
      }
      goto LABEL_49;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}