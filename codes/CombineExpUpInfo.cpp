void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineExpUpInfo_c *v2; // x8

  if ( (byte_41861A7 & 1) == 0 )
  {
    sub_B2C35C(&CombineExpUpInfo_TypeInfo, v1);
    byte_41861A7 = 1;
  }
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_WIDTH = 56;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_ON_HEIGHT = 36;
  v2 = CombineExpUpInfo_TypeInfo;
  CombineExpUpInfo_TypeInfo->static_fields->TYPE_BUTTON_OFF_WIDTH = 58;
  v2->static_fields->TYPE_BUTTON_OFF_HEIGHT = 38;
}


void __fastcall CombineExpUpInfo___ctor(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x0
  __int64 v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_array *v17; // x20
  __int64 v18; // x0
  System_Int32_array **v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Int32_array **v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v40; // x20
  System_String_array **v41; // x2
  System_String_array **v42; // x3
  System_Boolean_array **v43; // x4
  System_Int32_array **v44; // x5
  System_Int32_array *v45; // x6
  System_Int32_array *v46; // x7
  __int64 v47; // x0
  __int64 v48; // x0

  if ( (byte_41861A6 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v3);
    sub_B2C35C(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v4);
    sub_B2C35C(&string___TypeInfo, v5);
    sub_B2C35C(&StringLiteral_16994/*"btn_hp_"*/, v6);
    sub_B2C35C(&StringLiteral_16949/*"btn_atk_"*/, v7);
    sub_B2C35C(&StringLiteral_16991/*"btn_experience_"*/, v8);
    byte_41861A6 = 1;
  }
  v9 = sub_B2C374(string___TypeInfo, 3LL);
  if ( !v9 )
LABEL_23:
    sub_B2C434(v9, v10);
  v17 = (struct System_String_array *)v9;
  v18 = StringLiteral_16991/*"btn_experience_"*/;
  if ( StringLiteral_16991/*"btn_experience_"*/ )
  {
    v18 = sub_B2C41C(StringLiteral_16991/*"btn_experience_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_22;
    v19 = (System_Int32_array **)StringLiteral_16991/*"btn_experience_"*/;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v17->max_length )
    goto LABEL_21;
  v17->m_Items[0] = (System_String_o *)v19;
  sub_B2C2F8((BattleServantConfConponent_o *)v17->m_Items, v19, v11, v12, v13, v14, v15, v16);
  v18 = StringLiteral_16949/*"btn_atk_"*/;
  if ( StringLiteral_16949/*"btn_atk_"*/ )
  {
    v18 = sub_B2C41C(StringLiteral_16949/*"btn_atk_"*/, v17->obj.klass->_1.element_class);
    if ( !v18 )
      goto LABEL_22;
    v26 = (System_Int32_array **)StringLiteral_16949/*"btn_atk_"*/;
  }
  else
  {
    v26 = 0LL;
  }
  if ( v17->max_length <= 1 )
    goto LABEL_21;
  v17->m_Items[1] = (System_String_o *)v26;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[1], v26, v20, v21, v22, v23, v24, v25);
  v18 = StringLiteral_16994/*"btn_hp_"*/;
  if ( StringLiteral_16994/*"btn_hp_"*/ )
  {
    v18 = sub_B2C41C(StringLiteral_16994/*"btn_hp_"*/, v17->obj.klass->_1.element_class);
    if ( v18 )
    {
      v33 = (System_Int32_array **)StringLiteral_16994/*"btn_hp_"*/;
      goto LABEL_18;
    }
LABEL_22:
    v48 = sub_B2C454();
    sub_B2C400(v48, 0LL);
  }
  v33 = 0LL;
LABEL_18:
  if ( v17->max_length <= 2 )
  {
LABEL_21:
    v47 = sub_B2C460(v18);
    sub_B2C400(v47, 0LL);
  }
  v17->m_Items[2] = (System_String_o *)v33;
  sub_B2C2F8((BattleServantConfConponent_o *)&v17->m_Items[2], v33, v27, v28, v29, v30, v31, v32);
  this->fields.btnSpriteNameList = v17;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.btnSpriteNameList,
    (System_Int32_array **)v17,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  v40 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B2C42C(System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v40,
    (const MethodInfo_2F69274 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v40 )
    goto LABEL_23;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    1,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    2,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    3,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    4,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    5,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    6,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    7,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v40,
    1001,
    (const MethodInfo_2F69FD0 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v40;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.SortClassOrder,
    (System_Int32_array **)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
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
  System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__o **p_changeAction; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v27; // x0
  SvtClassAttri_c *v28; // x0
  __int64 v29; // x21
  DataManager_o *Instance; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  signed __int64 size; // x27
  System_Int32_array *v36; // x22
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v38; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v40; // x24
  UserServantEntity_array *v41; // x23
  unsigned __int64 i; // x25
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *v43; // x24
  int32_t v44; // w24
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x4
  int32_t nowType; // w8
  int32_t v49; // w24
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x6
  int32_t v52; // w3
  struct DataMasterBase_array *datalist; // x8
  __int64 v54; // x9
  __int64 v55; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x8
  DataManager_o *v57; // x8
  int32_t v58; // w1
  int32_t v59; // w4
  int32_t v60; // w5
  struct CombineExpUpClassInfo_array *v61; // x8
  struct CombineExpUpClassInfo_array *v62; // x8
  System_Int32_array *v63; // x2
  System_Int32_array *v64; // x3
  __int64 v65; // x0

  if ( (byte_418619E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__, *(_QWORD *)&kind);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_B2C35C(&int___TypeInfo, v15);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v16);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17);
    sub_B2C35C(&Method_System_Collections_Generic_List_int_____ctor__, v18);
    sub_B2C35C(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992, v19);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v20);
    sub_B2C35C(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v21);
    sub_B2C35C(&System_Collections_Generic_List_int____TypeInfo, v22);
    sub_B2C35C(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v25);
    byte_418619E = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  p_changeAction = &this->fields.changeAction;
  if ( afterAction )
  {
    *p_changeAction = afterAction;
    sub_B2C2F8(
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
      (const MethodInfo_24C8A84 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_int____TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_int_____ctor__);
  v28 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v28 = SvtClassAttri_TypeInfo;
  }
  v29 = sub_B2C374(int___TypeInfo, v28->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_B2C374(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_84;
  nowKind = this->fields.nowKind;
  size = SortClassOrder->fields._size;
  v36 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_84;
      v38 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             0LL);
      v40 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B2C42C(System_Collections_Generic_List_UserServantEntity__TypeInfo);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v40,
        CombineMaterialList,
        (const MethodInfo_2EF3994 *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67324992);
      if ( !v38 )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v38, 0LL);
      if ( !v40 )
        goto LABEL_84;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v40,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v40,
                                    (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_26;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_26;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_26:
      v41 = (UserServantEntity_array *)Instance;
      goto LABEL_28;
  }
  v41 = 0LL;
LABEL_28:
  if ( (int)size >= 1 )
  {
    for ( i = 0LL; (__int64)i < size; ++i )
    {
      v43 = this->fields.SortClassOrder;
      if ( !v43 )
        goto LABEL_84;
      if ( i >= (unsigned int)v43->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v44 = v43->fields._items->m_Items[i + 1];
      if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SvtClassAttri_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      }
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(v44, 0LL);
      nowType = this->fields.nowType;
      v49 = (int)ClassId;
      if ( nowType == 1 )
      {
        v52 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v41, (int32_t)ClassId, v46);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_43;
        }
        v52 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v41, (int32_t)ClassId, v52, v47);
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
          v65 = sub_B2C460(Instance);
          sub_B2C400(v65, 0LL);
        }
        v54 = 0LL;
        while ( 1 )
        {
          v55 = *((_QWORD *)&Instance->fields.lookup + v54);
          if ( !v55 || !v29 )
            break;
          if ( (unsigned int)v54 >= *(_DWORD *)(v29 + 24) )
            goto LABEL_83;
          *(_DWORD *)(v29 + 32 + 4 * v54) = *(_DWORD *)(v55 + 16);
          if ( !v36 )
            break;
          if ( (unsigned int)v54 >= v36->max_length )
            goto LABEL_83;
          v36->m_Items[v54 + 1] = *(_DWORD *)(v55 + 20);
          if ( (int)v54 + 1 >= (int)datalist )
            goto LABEL_55;
          if ( (unsigned int)++v54 >= LODWORD(Instance->fields.datalist) )
            goto LABEL_83;
        }
LABEL_84:
        sub_B2C434(Instance, v31);
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
          v57 = (DataManager_o *)expUpClassInfoList->m_Items[i];
          if ( !v57 )
            goto LABEL_84;
          if ( LODWORD(Instance->fields.datalist) == 5 )
          {
            if ( v49 == 1001 )
            {
              v58 = 1001;
              v59 = 1;
              v60 = 4;
              Instance = v57;
              goto LABEL_77;
            }
            v59 = 2;
LABEL_76:
            v60 = 3;
            Instance = v57;
            v58 = v49;
LABEL_77:
            v63 = (System_Int32_array *)v29;
            v64 = v36;
LABEL_78:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v58, v63, v64, v59, v60, v51);
            continue;
          }
          if ( v49 != 1001 )
          {
            v59 = 1;
            goto LABEL_76;
          }
          v58 = 1001;
          v60 = 4;
          Instance = v57;
        }
        else
        {
          v62 = this->fields.expUpClassInfoList;
          if ( !v62 )
            goto LABEL_84;
          if ( i >= v62->max_length )
            goto LABEL_83;
          Instance = (DataManager_o *)v62->m_Items[i];
          if ( !Instance )
            goto LABEL_84;
          v60 = 5;
          v58 = v49;
        }
        v63 = (System_Int32_array *)v29;
        v64 = v36;
        v59 = 0;
        goto LABEL_78;
      }
      v61 = this->fields.expUpClassInfoList;
      if ( !v61 )
        goto LABEL_84;
      if ( i >= v61->max_length )
        goto LABEL_83;
      Instance = (DataManager_o *)v61->m_Items[i];
      if ( !Instance )
        goto LABEL_84;
      CombineExpUpClassInfo__Set_21966624((CombineExpUpClassInfo_o *)Instance, v36, v50);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v32);
  LOBYTE(Instance) = 1;
  return (char)Instance;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassMaterialInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  SvtClassAttri_c *v10; // x0
  CombineExpUpInfo_MaterialData_array *v11; // x21
  __int64 Instance; // x0
  __int64 v13; // x1
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  System_Int32_array *v15; // x22
  __int64 v16; // x25
  unsigned __int64 v17; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  CombineExpUpInfo_MaterialData_o *v19; // x23
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  signed __int64 v26; // x9
  __int64 v27; // x23
  unsigned __int64 v28; // x8
  __int64 v29; // x13
  int32_t v30; // w14
  __int64 v31; // x23
  il2cpp_array_size_t v32; // w25
  Il2CppClass **v33; // x8
  UserServantEntity_o *v34; // x22
  SvtClassAttri_c *v35; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v37; // x8
  __int64 v38; // x0
  __int64 v40; // x0

  if ( (byte_418619F & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_B2C35C(&CombineExpUpInfo_MaterialData___TypeInfo, v6);
    sub_B2C35C(&CombineExpUpInfo_MaterialData_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v9);
    byte_418619F = 1;
  }
  v10 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  v11 = (CombineExpUpInfo_MaterialData_array *)sub_B2C374(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v10->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_48;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v15 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v16 = 0LL;
  v17 = 0LL;
  m_Items = v11->m_Items;
  while ( 1 )
  {
    Instance = (__int64)SvtClassAttri_TypeInfo;
    if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SvtClassAttri_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      Instance = (__int64)SvtClassAttri_TypeInfo;
    }
    v26 = **(int **)(Instance + 184);
    if ( (__int64)v17 >= v26 )
      break;
    v19 = (CombineExpUpInfo_MaterialData_o *)sub_B2C42C(CombineExpUpInfo_MaterialData_TypeInfo);
    CombineExpUpInfo_MaterialData___ctor(v19, 0LL);
    if ( !v11 )
      goto LABEL_48;
    if ( v19 )
    {
      Instance = sub_B2C41C(v19, v11->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v40 = sub_B2C454();
        sub_B2C400(v40, 0LL);
      }
    }
    if ( v17 >= v11->max_length )
      goto LABEL_45;
    m_Items[v17] = v19;
    sub_B2C2F8((BattleServantConfConponent_o *)&m_Items[v16], (System_Int32_array **)v19, v20, v21, v22, v23, v24, v25);
    ++v17;
    ++v16;
  }
  v27 = *(_QWORD *)&v15->max_length;
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v26) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v27 >= 1 )
  {
    if ( v11 )
    {
      v28 = 0LL;
      while ( ((_DWORD)v26 != (_DWORD)v27) + v28 < v11->max_length && v28 < v15->max_length )
      {
        v29 = *((_QWORD *)&v11->m_Items[(_DWORD)v26 != (_DWORD)v27] + v28);
        if ( !v29 )
          goto LABEL_48;
        v30 = v15->m_Items[++v28];
        *(_DWORD *)(v29 + 16) = v30;
        if ( (__int64)v28 >= (int)v27 )
          goto LABEL_30;
      }
LABEL_45:
      v38 = sub_B2C460(Instance);
      sub_B2C400(v38, 0LL);
    }
LABEL_48:
    sub_B2C434(Instance, v13);
  }
LABEL_30:
  if ( !svtList )
    goto LABEL_48;
  v31 = *(_QWORD *)&svtList->max_length;
  if ( (int)v31 >= 1 )
  {
    v32 = 0;
    while ( 1 )
    {
      v33 = &svtList->obj.klass + (int)v32;
      v34 = (UserServantEntity_o *)v33[4];
      if ( !v34 )
        goto LABEL_48;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v33[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v34, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v35 = SvtClassAttri_TypeInfo;
          if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v35 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v35->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v34, 0LL);
          if ( !v11 )
            goto LABEL_48;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v11->max_length )
            goto LABEL_45;
          v37 = v11->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v37 )
            goto LABEL_48;
          ++v37->fields.num;
        }
      }
      if ( (int)++v32 >= (int)v31 )
        return v11;
      if ( v32 >= svtList->max_length )
        goto LABEL_45;
    }
  }
  return v11;
}


CombineExpUpInfo_MaterialData_array *__fastcall CombineExpUpInfo__GetTargetClassStatusUpInfo(
        CombineExpUpInfo_o *this,
        UserServantEntity_array *svtList,
        int32_t classId,
        int32_t type,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 Instance; // x0
  __int64 v15; // x1
  System_Int32_array *TargetClassStatusUpSvtIdList; // x24
  SvtClassAttri_c *v17; // x8
  __int64 v18; // x8
  __int64 v19; // x23
  int v20; // w22
  unsigned __int64 v21; // x27
  int32_t *v22; // x28
  int32_t v23; // w26
  ServantLeaderInfo_o *v24; // x25
  __int64 v25; // x9
  CombineExpUpInfo_MaterialData_array *v26; // x24
  BattleServantConfConponent_o *v27; // x25
  __int64 v28; // x20
  CombineExpUpInfo_MaterialData_o *v29; // x26
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  il2cpp_array_size_t v36; // w28
  BattleServantConfConponent_c *klass; // x8
  int v38; // w9
  __int64 v39; // x25
  il2cpp_array_size_t v40; // w20
  Il2CppClass **v41; // x8
  UserServantEntity_o *v42; // x23
  CombineExpUpInfo_MaterialData_o *v43; // x8
  __int64 v44; // x0
  __int64 v46; // x0
  int32_t v47; // [xsp+Ch] [xbp-54h]

  if ( (byte_41861A0 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_B2C35C(&int___TypeInfo, v8);
    sub_B2C35C(&CombineExpUpInfo_MaterialData___TypeInfo, v9);
    sub_B2C35C(&CombineExpUpInfo_MaterialData_TypeInfo, v10);
    sub_B2C35C(&ServantLeaderInfo_TypeInfo, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B2C35C(&SvtClassAttri_TypeInfo, v13);
    byte_41861A0 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v17 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v17 = SvtClassAttri_TypeInfo;
  }
  Instance = sub_B2C374(int___TypeInfo, v17->static_fields->MAX_EXP_UP_RARITY);
  if ( !TargetClassStatusUpSvtIdList )
    goto LABEL_60;
  v18 = *(_QWORD *)&TargetClassStatusUpSvtIdList->max_length;
  v19 = Instance;
  v47 = classId;
  if ( (int)v18 < 1 )
    return 0LL;
  v20 = 0;
  v21 = 0LL;
  v22 = &TargetClassStatusUpSvtIdList->m_Items[1];
  do
  {
    if ( v21 >= (unsigned int)v18 )
    {
LABEL_57:
      v44 = sub_B2C460(Instance);
      sub_B2C400(v44, 0LL);
    }
    v23 = v22[v21];
    v24 = (ServantLeaderInfo_o *)sub_B2C42C(ServantLeaderInfo_TypeInfo);
    ServantLeaderInfo___ctor_29329736(v24, v23, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v24 )
        goto LABEL_60;
      if ( !v24->fields.hp && !v24->fields.adjustHp )
        goto LABEL_25;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_25;
      if ( !v24 )
        goto LABEL_60;
      if ( !v24->fields.atk && !v24->fields.adjustAtk )
        goto LABEL_25;
    }
    if ( v21 >= TargetClassStatusUpSvtIdList->max_length )
      goto LABEL_57;
    if ( !v19 )
      goto LABEL_60;
    if ( (unsigned int)v20 >= *(_DWORD *)(v19 + 24) )
      goto LABEL_57;
    v25 = v19 + 4LL * v20++;
    *(_DWORD *)(v25 + 32) = v22[v21];
LABEL_25:
    LODWORD(v18) = TargetClassStatusUpSvtIdList->max_length;
    ++v21;
  }
  while ( (__int64)v21 < (int)v18 );
  if ( !v20 )
    return 0LL;
  Instance = sub_B2C374(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v20);
  v26 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v20 >= 1 )
  {
    v27 = (BattleServantConfConponent_o *)(Instance + 32);
    v28 = 8LL;
    while ( 1 )
    {
      v29 = (CombineExpUpInfo_MaterialData_o *)sub_B2C42C(CombineExpUpInfo_MaterialData_TypeInfo);
      CombineExpUpInfo_MaterialData___ctor(v29, 0LL);
      if ( !v26 )
        break;
      if ( v29 )
      {
        Instance = sub_B2C41C(v29, v26->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v46 = sub_B2C454();
          sub_B2C400(v46, 0LL);
        }
      }
      v36 = v28 - 8;
      if ( (unsigned int)(v28 - 8) >= v26->max_length )
        goto LABEL_57;
      v27->klass = (BattleServantConfConponent_c *)v29;
      sub_B2C2F8(v27, (System_Int32_array **)v29, v30, v31, v32, v33, v34, v35);
      if ( v36 >= v26->max_length )
        goto LABEL_57;
      if ( !v19 )
        break;
      if ( v36 >= *(_DWORD *)(v19 + 24) )
        goto LABEL_57;
      klass = v27->klass;
      if ( !v27->klass )
        break;
      v38 = *(_DWORD *)(v19 + 4 * v28++);
      v27 = (BattleServantConfConponent_o *)((char *)v27 + 8);
      LODWORD(klass->_1.name) = v38;
      if ( (int)v28 - 8 >= v20 )
        goto LABEL_38;
    }
LABEL_60:
    sub_B2C434(Instance, v15);
  }
LABEL_38:
  if ( !svtList )
    goto LABEL_60;
  v39 = *(_QWORD *)&svtList->max_length;
  if ( (int)v39 >= 1 )
  {
    v40 = 0;
    while ( 1 )
    {
      v41 = &svtList->obj.klass + (int)v40;
      v42 = (UserServantEntity_o *)v41[4];
      if ( !v42 )
        goto LABEL_60;
      Instance = UserServantEntity__IsStatusUp((UserServantEntity_o *)v41[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v42, 0LL);
        if ( (_DWORD)Instance == v47 )
        {
          if ( type == 2 )
          {
            if ( v42->fields.hp || v42->fields.adjustHp )
            {
LABEL_51:
              Instance = UserServantEntity__getRarity(v42, 0LL);
              if ( !v26 )
                goto LABEL_60;
              if ( (unsigned int)(v20 - Instance) >= v26->max_length )
                goto LABEL_57;
              v43 = v26->m_Items[v20 - (int)Instance];
              if ( !v43 )
                goto LABEL_60;
              ++v43->fields.num;
            }
          }
          else if ( type == 1 && (v42->fields.atk || v42->fields.adjustAtk) )
          {
            goto LABEL_51;
          }
        }
      }
      if ( (int)++v40 >= (int)v39 )
        return v26;
      if ( v40 >= svtList->max_length )
        goto LABEL_57;
    }
  }
  return v26;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_41861A3 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41861A3 = 1;
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

  if ( (byte_41861A5 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41861A5 = 1;
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

  if ( (byte_41861A2 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41861A2 = 1;
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

  if ( (byte_41861A4 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_41861A4 = 1;
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x24
  struct UnityEngine_GameObject_array *btnObjList; // x8
  il2cpp_array_size_t v15; // w25
  struct UISprite_array *btnSpriteList; // x8
  struct UISprite_array *v17; // x8
  UIWidget_o *v18; // x22
  struct UISprite_array *btnTxtSpriteList; // x8
  struct System_String_array *btnSpriteNameList; // x9
  UISprite_o *v21; // x22
  System_String_o *v22; // x0
  System_String_o *v23; // x1
  struct UISprite_array *v24; // x8
  struct UISprite_array *v25; // x8
  UIWidget_o *v26; // x22
  struct UISprite_array *v27; // x8
  struct System_String_array *v28; // x9
  __int64 v29; // x0

  v5 = this;
  if ( (byte_41861A1 & 1) == 0 )
  {
    sub_B2C35C(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&StringLiteral_21196/*"off"*/, v6);
    sub_B2C35C(&StringLiteral_16955/*"btn_bg_02_on"*/, v7);
    sub_B2C35C(&StringLiteral_21226/*"on"*/, v8);
    sub_B2C35C(&StringLiteral_17142/*"button_total"*/, v9);
    sub_B2C35C(&StringLiteral_17141/*"button_storage"*/, v10);
    sub_B2C35C(&StringLiteral_17136/*"button_possess"*/, v11);
    this = (CombineExpUpInfo_o *)sub_B2C35C(&StringLiteral_16954/*"btn_bg_02_off"*/, v12);
    byte_41861A1 = 1;
  }
  v13 = 4LL;
  do
  {
    btnObjList = v5->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_48;
    v15 = v13 - 4;
    if ( (unsigned int)(v13 - 4) >= btnObjList->max_length )
      goto LABEL_49;
    this = (CombineExpUpInfo_o *)*((_QWORD *)&btnObjList->obj.klass + v13);
    if ( !this )
      goto LABEL_48;
    if ( (_DWORD)v13 - type == 4 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v5->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_48;
      if ( btnSpriteList->max_length <= type )
        goto LABEL_49;
      this = (CombineExpUpInfo_o *)*((_QWORD *)&btnSpriteList->obj.klass + v13);
      if ( !this )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_16955/*"btn_bg_02_on"*/, 0LL);
      v17 = v5->fields.btnSpriteList;
      if ( !v17 )
        goto LABEL_48;
      if ( v17->max_length <= type )
        goto LABEL_49;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v18 = (UIWidget_o *)*((_QWORD *)&v17->obj.klass + v13);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_48;
      UIWidget__SetDimensions(
        v18,
        (int32_t)this[1].fields.SortClassOrder->klass,
        HIDWORD(this[1].fields.SortClassOrder->klass),
        0LL);
      btnTxtSpriteList = v5->fields.btnTxtSpriteList;
      if ( !btnTxtSpriteList )
        goto LABEL_48;
      if ( btnTxtSpriteList->max_length <= type )
        goto LABEL_49;
      btnSpriteNameList = v5->fields.btnSpriteNameList;
      if ( !btnSpriteNameList )
        goto LABEL_48;
      if ( btnSpriteNameList->max_length <= type )
        goto LABEL_49;
      v21 = (UISprite_o *)*((_QWORD *)&btnTxtSpriteList->obj.klass + v13);
      v22 = (System_String_o *)*((_QWORD *)&btnSpriteNameList->obj.klass + v13);
      v23 = (System_String_o *)StringLiteral_21226/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v24 = v5->fields.btnSpriteList;
      if ( !v24 )
        goto LABEL_48;
      if ( v15 >= v24->max_length )
      {
LABEL_49:
        v29 = sub_B2C460(this);
        sub_B2C400(v29, 0LL);
      }
      this = (CombineExpUpInfo_o *)*((_QWORD *)&v24->obj.klass + v13);
      if ( !this )
        goto LABEL_48;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_16954/*"btn_bg_02_off"*/, 0LL);
      v25 = v5->fields.btnSpriteList;
      if ( !v25 )
        goto LABEL_48;
      if ( v15 >= v25->max_length )
        goto LABEL_49;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v26 = (UIWidget_o *)*((_QWORD *)&v25->obj.klass + v13);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_48;
      UIWidget__SetDimensions(
        v26,
        (int32_t)this[1].fields.SortClassOrder->monitor,
        HIDWORD(this[1].fields.SortClassOrder->monitor),
        0LL);
      v27 = v5->fields.btnTxtSpriteList;
      if ( !v27 )
        goto LABEL_48;
      if ( v15 >= v27->max_length )
        goto LABEL_49;
      v28 = v5->fields.btnSpriteNameList;
      if ( !v28 )
        goto LABEL_48;
      if ( v15 >= v28->max_length )
        goto LABEL_49;
      v21 = (UISprite_o *)*((_QWORD *)&v27->obj.klass + v13);
      v22 = (System_String_o *)*((_QWORD *)&v28->obj.klass + v13);
      v23 = (System_String_o *)StringLiteral_21196/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_44305532(v22, v23, 0LL);
    if ( !v21 )
      goto LABEL_48;
    UISprite__set_spriteName(v21, (System_String_o *)this, 0LL);
    ++v13;
  }
  while ( (unsigned int)(v13 - 5) < 2 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( !this )
        goto LABEL_48;
      goto LABEL_50;
    case 1:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( !this )
        goto LABEL_48;
LABEL_50:
      JUMPOUT(0x150AEACLL);
    case 0:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
        goto LABEL_50;
LABEL_48:
      sub_B2C434(this, *(_QWORD *)&kind);
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}