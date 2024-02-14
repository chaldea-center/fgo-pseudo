void __fastcall CombineExpUpInfo___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  CombineExpUpInfo_c *v2; // x8

  if ( (byte_421444B & 1) == 0 )
  {
    sub_B0D8A4(&CombineExpUpInfo_TypeInfo, v1);
    byte_421444B = 1;
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
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_array *v16; // x20
  __int64 v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_VoiceCondType_Type__o *v41; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  __int64 v48; // x0
  __int64 v49; // x0

  if ( (byte_421444A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__, v3);
    sub_B0D8A4(&System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo, v4);
    sub_B0D8A4(&string___TypeInfo, v5);
    sub_B0D8A4(&StringLiteral_17045/*"btn_hp_"*/, v6);
    sub_B0D8A4(&StringLiteral_17000/*"btn_atk_"*/, v7);
    sub_B0D8A4(&StringLiteral_17042/*"btn_experience_"*/, v8);
    byte_421444A = 1;
  }
  v9 = sub_B0D8BC(string___TypeInfo, 3LL);
  if ( !v9 )
LABEL_23:
    sub_B0D97C(v9);
  v16 = (struct System_String_array *)v9;
  v17 = StringLiteral_17042/*"btn_experience_"*/;
  if ( StringLiteral_17042/*"btn_experience_"*/ )
  {
    v17 = sub_B0D964(StringLiteral_17042/*"btn_experience_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_22;
    v18 = (System_Int32_array **)StringLiteral_17042/*"btn_experience_"*/;
  }
  else
  {
    v18 = 0LL;
  }
  if ( !v16->max_length )
    goto LABEL_21;
  v16->m_Items[0] = (System_String_o *)v18;
  sub_B0D840((BattleServantConfConponent_o *)v16->m_Items, v18, v10, v11, v12, v13, v14, v15);
  v17 = StringLiteral_17000/*"btn_atk_"*/;
  if ( StringLiteral_17000/*"btn_atk_"*/ )
  {
    v17 = sub_B0D964(StringLiteral_17000/*"btn_atk_"*/, v16->obj.klass->_1.element_class);
    if ( !v17 )
      goto LABEL_22;
    v25 = (System_Int32_array **)StringLiteral_17000/*"btn_atk_"*/;
  }
  else
  {
    v25 = 0LL;
  }
  if ( v16->max_length <= 1 )
    goto LABEL_21;
  v16->m_Items[1] = (System_String_o *)v25;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[1], v25, v19, v20, v21, v22, v23, v24);
  v17 = StringLiteral_17045/*"btn_hp_"*/;
  if ( StringLiteral_17045/*"btn_hp_"*/ )
  {
    v17 = sub_B0D964(StringLiteral_17045/*"btn_hp_"*/, v16->obj.klass->_1.element_class);
    if ( v17 )
    {
      v32 = (System_Int32_array **)StringLiteral_17045/*"btn_hp_"*/;
      goto LABEL_18;
    }
LABEL_22:
    v49 = sub_B0D99C(v17);
    sub_B0D948(v49, 0LL);
  }
  v32 = 0LL;
LABEL_18:
  if ( v16->max_length <= 2 )
  {
LABEL_21:
    v48 = sub_B0D9A8(v17);
    sub_B0D948(v48, 0LL);
  }
  v16->m_Items[2] = (System_String_o *)v32;
  sub_B0D840((BattleServantConfConponent_o *)&v16->m_Items[2], v32, v26, v27, v28, v29, v30, v31);
  this->fields.btnSpriteNameList = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.btnSpriteNameList,
    (System_Int32_array **)v16,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  v41 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B0D974(
                                                                   System_Collections_Generic_List_SvtClassAttri_TYPE__TypeInfo,
                                                                   v39,
                                                                   v40);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v41,
    (const MethodInfo_2FB217C *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE___ctor__);
  if ( !v41 )
    goto LABEL_23;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    1,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    2,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    3,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    4,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    5,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    6,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    7,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v41,
    1001,
    (const MethodInfo_2FB2ED8 *)Method_System_Collections_Generic_List_SvtClassAttri_TYPE__Add__);
  this->fields.SortClassOrder = (struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *)v41;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.SortClassOrder,
    (System_Int32_array **)v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
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
  const MethodInfo *v31; // x3
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *SortClassOrder; // x9
  int32_t nowKind; // w8
  signed __int64 size; // x27
  System_Int32_array *v35; // x22
  UserServantMaster_o *MasterData_WarQuestSelectionMaster; // x24
  UserServantStorageMaster_o *v37; // x23
  System_Collections_Generic_IEnumerable_T__o *CombineMaterialList; // x25
  __int64 v39; // x1
  __int64 v40; // x2
  System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *v41; // x24
  UserServantEntity_array *v42; // x23
  unsigned __int64 i; // x25
  struct System_Collections_Generic_List_SvtClassAttri_TYPE__o *v44; // x24
  int32_t v45; // w24
  CombineExpUpInfo_o *ClassId; // x0
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x4
  int32_t nowType; // w8
  int32_t v50; // w24
  const MethodInfo *v51; // x2
  const MethodInfo *v52; // x6
  int32_t v53; // w3
  struct DataMasterBase_array *datalist; // x8
  __int64 v55; // x9
  __int64 v56; // x11
  struct CombineExpUpClassInfo_array *expUpClassInfoList; // x8
  DataManager_o *v58; // x8
  int32_t v59; // w1
  int32_t v60; // w4
  int32_t v61; // w5
  struct CombineExpUpClassInfo_array *v62; // x8
  struct CombineExpUpClassInfo_array *v63; // x8
  System_Int32_array *v64; // x2
  System_Int32_array *v65; // x3
  __int64 v66; // x0

  if ( (byte_4214442 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__, *(_QWORD *)&kind);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantMaster___, v13);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserServantStorageMaster___, v14);
    sub_B0D8A4(&int___TypeInfo, v15);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__AddRange__, v16);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity__ToArray__, v17);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int_____ctor__, v18);
    sub_B0D8A4(&Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584, v19);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Count__, v20);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SvtClassAttri_TYPE__get_Item__, v21);
    sub_B0D8A4(&System_Collections_Generic_List_int____TypeInfo, v22);
    sub_B0D8A4(&System_Collections_Generic_List_UserServantEntity__TypeInfo, v23);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v24);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v25);
    byte_4214442 = 1;
  }
  this->fields.nowKind = kind;
  this->fields.nowType = type;
  p_changeAction = &this->fields.changeAction;
  if ( afterAction )
  {
    *p_changeAction = afterAction;
    sub_B0D840(
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
      (const MethodInfo_247B9E8 *)Method_System_Action_ListViewSort_ExpUpDispKind__ListViewSort_ExpUpDispType__Invoke__);
  v27 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_int____TypeInfo,
                                                                                                  *(_QWORD *)&kind,
                                                                                                  *(_QWORD *)&type);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v27,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_int_____ctor__);
  v28 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v28 = SvtClassAttri_TypeInfo;
  }
  v29 = sub_B0D8BC(int___TypeInfo, v28->static_fields->MAX_EXP_UP_RARITY);
  Instance = (DataManager_o *)sub_B0D8BC(int___TypeInfo, SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY);
  SortClassOrder = this->fields.SortClassOrder;
  if ( !SortClassOrder )
    goto LABEL_84;
  nowKind = this->fields.nowKind;
  size = SortClassOrder->fields._size;
  v35 = (System_Int32_array *)Instance;
  switch ( nowKind )
  {
    case 2:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      MasterData_WarQuestSelectionMaster = (UserServantMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                    Instance,
                                                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !MasterData_WarQuestSelectionMaster )
        goto LABEL_84;
      v37 = (UserServantStorageMaster_o *)Instance;
      CombineMaterialList = (System_Collections_Generic_IEnumerable_T__o *)UserServantMaster__getCombineMaterialList(
                                                                             MasterData_WarQuestSelectionMaster,
                                                                             0LL);
      v41 = (System_Collections_Generic_List_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                              System_Collections_Generic_List_UserServantEntity__TypeInfo,
                                                                              v39,
                                                                              v40);
      System_Collections_Generic_List_WarBoardAIRoute_RouteData____ctor(
        v41,
        CombineMaterialList,
        (const MethodInfo_2FC4C1C *)Method_System_Collections_Generic_List_UserServantEntity___ctor___67898584);
      if ( !v37 )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList(v37, 0LL);
      if ( !v41 )
        goto LABEL_84;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v41,
        (System_Collections_Generic_IEnumerable_T__o *)Instance,
        (const MethodInfo_2FC5938 *)Method_System_Collections_Generic_List_UserServantEntity__AddRange__);
      Instance = (DataManager_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                    (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v41,
                                    (const MethodInfo_2FC7834 *)Method_System_Collections_Generic_List_UserServantEntity__ToArray__);
      goto LABEL_26;
    case 1:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantStorageMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantStorageMaster__getList((UserServantStorageMaster_o *)Instance, 0LL);
      goto LABEL_26;
    case 0:
      Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                    Instance,
                                    (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserServantMaster___);
      if ( !Instance )
        goto LABEL_84;
      Instance = (DataManager_o *)UserServantMaster__getCombineMaterialList((UserServantMaster_o *)Instance, 0LL);
LABEL_26:
      v42 = (UserServantEntity_array *)Instance;
      goto LABEL_28;
  }
  v42 = 0LL;
LABEL_28:
  if ( (int)size >= 1 )
  {
    for ( i = 0LL; (__int64)i < size; ++i )
    {
      v44 = this->fields.SortClassOrder;
      if ( !v44 )
        goto LABEL_84;
      if ( i >= (unsigned int)v44->fields._size )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41496008(0LL);
      v45 = v44->fields._items->m_Items[i + 1];
      if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !SvtClassAttri_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
      }
      ClassId = (CombineExpUpInfo_o *)SvtClassAttri__getClassId(v45, 0LL);
      nowType = this->fields.nowType;
      v50 = (int)ClassId;
      if ( nowType == 1 )
      {
        v53 = 1;
      }
      else
      {
        if ( !nowType )
        {
          Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassMaterialInfo(ClassId, v42, (int32_t)ClassId, v47);
          if ( !Instance )
            return (char)Instance;
          goto LABEL_43;
        }
        v53 = 2;
      }
      Instance = (DataManager_o *)CombineExpUpInfo__GetTargetClassStatusUpInfo(ClassId, v42, (int32_t)ClassId, v53, v48);
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
          v66 = sub_B0D9A8(Instance);
          sub_B0D948(v66, 0LL);
        }
        v55 = 0LL;
        while ( 1 )
        {
          v56 = *((_QWORD *)&Instance->fields.lookup + v55);
          if ( !v56 || !v29 )
            break;
          if ( (unsigned int)v55 >= *(_DWORD *)(v29 + 24) )
            goto LABEL_83;
          *(_DWORD *)(v29 + 32 + 4 * v55) = *(_DWORD *)(v56 + 16);
          if ( !v35 )
            break;
          if ( (unsigned int)v55 >= v35->max_length )
            goto LABEL_83;
          v35->m_Items[v55 + 1] = *(_DWORD *)(v56 + 20);
          if ( (int)v55 + 1 >= (int)datalist )
            goto LABEL_55;
          if ( (unsigned int)++v55 >= LODWORD(Instance->fields.datalist) )
            goto LABEL_83;
        }
LABEL_84:
        sub_B0D97C(Instance);
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
          v58 = (DataManager_o *)expUpClassInfoList->m_Items[i];
          if ( !v58 )
            goto LABEL_84;
          if ( LODWORD(Instance->fields.datalist) == 5 )
          {
            if ( v50 == 1001 )
            {
              v59 = 1001;
              v60 = 1;
              v61 = 4;
              Instance = v58;
              goto LABEL_77;
            }
            v60 = 2;
LABEL_76:
            v61 = 3;
            Instance = v58;
            v59 = v50;
LABEL_77:
            v64 = (System_Int32_array *)v29;
            v65 = v35;
LABEL_78:
            CombineExpUpClassInfo__Set((CombineExpUpClassInfo_o *)Instance, v59, v64, v65, v60, v61, v52);
            continue;
          }
          if ( v50 != 1001 )
          {
            v60 = 1;
            goto LABEL_76;
          }
          v59 = 1001;
          v61 = 4;
          Instance = v58;
        }
        else
        {
          v63 = this->fields.expUpClassInfoList;
          if ( !v63 )
            goto LABEL_84;
          if ( i >= v63->max_length )
            goto LABEL_83;
          Instance = (DataManager_o *)v63->m_Items[i];
          if ( !Instance )
            goto LABEL_84;
          v61 = 5;
          v59 = v50;
        }
        v64 = (System_Int32_array *)v29;
        v65 = v35;
        v60 = 0;
        goto LABEL_78;
      }
      v62 = this->fields.expUpClassInfoList;
      if ( !v62 )
        goto LABEL_84;
      if ( i >= v62->max_length )
        goto LABEL_83;
      Instance = (DataManager_o *)v62->m_Items[i];
      if ( !Instance )
        goto LABEL_84;
      CombineExpUpClassInfo__Set_24321260((CombineExpUpClassInfo_o *)Instance, v35, v51);
    }
  }
  CombineExpUpInfo__SetBtnState(this, this->fields.nowKind, this->fields.nowType, v31);
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
  System_Int32_array *TargetClassMaterialSvtIdList; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_Int32_array *v16; // x22
  __int64 v17; // x25
  unsigned __int64 v18; // x26
  CombineExpUpInfo_MaterialData_o **m_Items; // x27
  CombineExpUpInfo_MaterialData_o *v20; // x23
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  signed __int64 v27; // x9
  __int64 v28; // x23
  unsigned __int64 v29; // x8
  __int64 v30; // x13
  int32_t v31; // w14
  __int64 v32; // x23
  il2cpp_array_size_t v33; // w25
  Il2CppClass **v34; // x8
  UserServantEntity_o *v35; // x22
  SvtClassAttri_c *v36; // x0
  int32_t MAX_EXP_UP_RARITY; // w26
  CombineExpUpInfo_MaterialData_o *v38; // x8
  __int64 v39; // x0
  __int64 v41; // x0

  if ( (byte_4214443 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_B0D8A4(&CombineExpUpInfo_MaterialData___TypeInfo, v6);
    sub_B0D8A4(&CombineExpUpInfo_MaterialData_TypeInfo, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v9);
    byte_4214443 = 1;
  }
  v10 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v10 = SvtClassAttri_TypeInfo;
  }
  v11 = (CombineExpUpInfo_MaterialData_array *)sub_B0D8BC(
                                                 CombineExpUpInfo_MaterialData___TypeInfo,
                                                 v10->static_fields->MAX_EXP_UP_RARITY);
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_48;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_48;
  TargetClassMaterialSvtIdList = ServantMaster__GetTargetClassMaterialSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  if ( !TargetClassMaterialSvtIdList )
    return 0LL;
  v16 = TargetClassMaterialSvtIdList;
  if ( !*(_QWORD *)&TargetClassMaterialSvtIdList->max_length )
    return 0LL;
  v17 = 0LL;
  v18 = 0LL;
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
    v27 = **(int **)(Instance + 184);
    if ( (__int64)v18 >= v27 )
      break;
    v20 = (CombineExpUpInfo_MaterialData_o *)sub_B0D974(CombineExpUpInfo_MaterialData_TypeInfo, v14, v15);
    CombineExpUpInfo_MaterialData___ctor(v20, 0LL);
    if ( !v11 )
      goto LABEL_48;
    if ( v20 )
    {
      Instance = sub_B0D964(v20, v11->obj.klass->_1.element_class);
      if ( !Instance )
      {
        v41 = sub_B0D99C(0LL);
        sub_B0D948(v41, 0LL);
      }
    }
    if ( v18 >= v11->max_length )
      goto LABEL_45;
    m_Items[v18] = v20;
    sub_B0D840((BattleServantConfConponent_o *)&m_Items[v17], (System_Int32_array **)v20, v21, v22, v23, v24, v25, v26);
    ++v18;
    ++v17;
  }
  v28 = *(_QWORD *)&v16->max_length;
  if ( (*(_BYTE *)(Instance + 307) & 4) != 0 && !*(_DWORD *)(Instance + 224) )
  {
    j_il2cpp_runtime_class_init_0(Instance);
    LODWORD(v27) = SvtClassAttri_TypeInfo->static_fields->MAX_EXP_UP_RARITY;
  }
  if ( (int)v28 >= 1 )
  {
    if ( v11 )
    {
      v29 = 0LL;
      while ( ((_DWORD)v27 != (_DWORD)v28) + v29 < v11->max_length && v29 < v16->max_length )
      {
        v30 = *((_QWORD *)&v11->m_Items[(_DWORD)v27 != (_DWORD)v28] + v29);
        if ( !v30 )
          goto LABEL_48;
        v31 = v16->m_Items[++v29];
        *(_DWORD *)(v30 + 16) = v31;
        if ( (__int64)v29 >= (int)v28 )
          goto LABEL_30;
      }
LABEL_45:
      v39 = sub_B0D9A8(Instance);
      sub_B0D948(v39, 0LL);
    }
LABEL_48:
    sub_B0D97C(Instance);
  }
LABEL_30:
  if ( !svtList )
    goto LABEL_48;
  v32 = *(_QWORD *)&svtList->max_length;
  if ( (int)v32 >= 1 )
  {
    v33 = 0;
    while ( 1 )
    {
      v34 = &svtList->obj.klass + (int)v33;
      v35 = (UserServantEntity_o *)v34[4];
      if ( !v35 )
        goto LABEL_48;
      Instance = UserServantEntity__IsCombineMaterial((UserServantEntity_o *)v34[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v35, 0LL);
        if ( (_DWORD)Instance == classId )
        {
          v36 = SvtClassAttri_TypeInfo;
          if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SvtClassAttri_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
            v36 = SvtClassAttri_TypeInfo;
          }
          MAX_EXP_UP_RARITY = v36->static_fields->MAX_EXP_UP_RARITY;
          Instance = UserServantEntity__getRarity(v35, 0LL);
          if ( !v11 )
            goto LABEL_48;
          if ( (unsigned int)(MAX_EXP_UP_RARITY - Instance) >= v11->max_length )
            goto LABEL_45;
          v38 = v11->m_Items[MAX_EXP_UP_RARITY - (int)Instance];
          if ( !v38 )
            goto LABEL_48;
          ++v38->fields.num;
        }
      }
      if ( (int)++v33 >= (int)v32 )
        return v11;
      if ( v33 >= svtList->max_length )
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
  System_Int32_array *TargetClassStatusUpSvtIdList; // x24
  SvtClassAttri_c *v16; // x8
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x8
  __int64 v20; // x23
  int v21; // w22
  unsigned __int64 v22; // x27
  int32_t *v23; // x28
  int32_t v24; // w26
  ServantLeaderInfo_o *v25; // x25
  __int64 v26; // x9
  __int64 v27; // x1
  __int64 v28; // x2
  CombineExpUpInfo_MaterialData_array *v29; // x24
  BattleServantConfConponent_o *v30; // x25
  __int64 v31; // x20
  CombineExpUpInfo_MaterialData_o *v32; // x26
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  il2cpp_array_size_t v39; // w28
  BattleServantConfConponent_c *klass; // x8
  int v41; // w9
  __int64 v42; // x25
  il2cpp_array_size_t v43; // w20
  Il2CppClass **v44; // x8
  UserServantEntity_o *v45; // x23
  CombineExpUpInfo_MaterialData_o *v46; // x8
  __int64 v47; // x0
  __int64 v49; // x0
  int32_t v50; // [xsp+Ch] [xbp-54h]

  if ( (byte_4214444 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_ServantMaster___, svtList);
    sub_B0D8A4(&int___TypeInfo, v8);
    sub_B0D8A4(&CombineExpUpInfo_MaterialData___TypeInfo, v9);
    sub_B0D8A4(&CombineExpUpInfo_MaterialData_TypeInfo, v10);
    sub_B0D8A4(&ServantLeaderInfo_TypeInfo, v11);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v12);
    sub_B0D8A4(&SvtClassAttri_TypeInfo, v13);
    byte_4214444 = 1;
  }
  Instance = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_60;
  Instance = (__int64)DataManager__GetMasterData_WarQuestSelectionMaster_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !Instance )
    goto LABEL_60;
  TargetClassStatusUpSvtIdList = ServantMaster__GetTargetClassStatusUpSvtIdList(
                                   (ServantMaster_o *)Instance,
                                   classId,
                                   0LL);
  v16 = SvtClassAttri_TypeInfo;
  if ( (BYTE3(SvtClassAttri_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !SvtClassAttri_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SvtClassAttri_TypeInfo);
    v16 = SvtClassAttri_TypeInfo;
  }
  Instance = sub_B0D8BC(int___TypeInfo, v16->static_fields->MAX_EXP_UP_RARITY);
  if ( !TargetClassStatusUpSvtIdList )
    goto LABEL_60;
  v19 = *(_QWORD *)&TargetClassStatusUpSvtIdList->max_length;
  v20 = Instance;
  v50 = classId;
  if ( (int)v19 < 1 )
    return 0LL;
  v21 = 0;
  v22 = 0LL;
  v23 = &TargetClassStatusUpSvtIdList->m_Items[1];
  do
  {
    if ( v22 >= (unsigned int)v19 )
    {
LABEL_57:
      v47 = sub_B0D9A8(Instance);
      sub_B0D948(v47, 0LL);
    }
    v24 = v23[v22];
    v25 = (ServantLeaderInfo_o *)sub_B0D974(ServantLeaderInfo_TypeInfo, v17, v18);
    ServantLeaderInfo___ctor_28142536(v25, v24, 0, 1, 0LL);
    if ( type == 2 )
    {
      if ( !v25 )
        goto LABEL_60;
      if ( !v25->fields.hp && !v25->fields.adjustHp )
        goto LABEL_25;
    }
    else
    {
      if ( type != 1 )
        goto LABEL_25;
      if ( !v25 )
        goto LABEL_60;
      if ( !v25->fields.atk && !v25->fields.adjustAtk )
        goto LABEL_25;
    }
    if ( v22 >= TargetClassStatusUpSvtIdList->max_length )
      goto LABEL_57;
    if ( !v20 )
      goto LABEL_60;
    if ( (unsigned int)v21 >= *(_DWORD *)(v20 + 24) )
      goto LABEL_57;
    v26 = v20 + 4LL * v21++;
    *(_DWORD *)(v26 + 32) = v23[v22];
LABEL_25:
    LODWORD(v19) = TargetClassStatusUpSvtIdList->max_length;
    ++v22;
  }
  while ( (__int64)v22 < (int)v19 );
  if ( !v21 )
    return 0LL;
  Instance = sub_B0D8BC(CombineExpUpInfo_MaterialData___TypeInfo, (unsigned int)v21);
  v29 = (CombineExpUpInfo_MaterialData_array *)Instance;
  if ( v21 >= 1 )
  {
    v30 = (BattleServantConfConponent_o *)(Instance + 32);
    v31 = 8LL;
    while ( 1 )
    {
      v32 = (CombineExpUpInfo_MaterialData_o *)sub_B0D974(CombineExpUpInfo_MaterialData_TypeInfo, v27, v28);
      CombineExpUpInfo_MaterialData___ctor(v32, 0LL);
      if ( !v29 )
        break;
      if ( v32 )
      {
        Instance = sub_B0D964(v32, v29->obj.klass->_1.element_class);
        if ( !Instance )
        {
          v49 = sub_B0D99C(0LL);
          sub_B0D948(v49, 0LL);
        }
      }
      v39 = v31 - 8;
      if ( (unsigned int)(v31 - 8) >= v29->max_length )
        goto LABEL_57;
      v30->klass = (BattleServantConfConponent_c *)v32;
      sub_B0D840(v30, (System_Int32_array **)v32, v33, v34, v35, v36, v37, v38);
      if ( v39 >= v29->max_length )
        goto LABEL_57;
      if ( !v20 )
        break;
      if ( v39 >= *(_DWORD *)(v20 + 24) )
        goto LABEL_57;
      klass = v30->klass;
      if ( !v30->klass )
        break;
      v41 = *(_DWORD *)(v20 + 4 * v31++);
      v30 = (BattleServantConfConponent_o *)((char *)v30 + 8);
      LODWORD(klass->_1.name) = v41;
      if ( (int)v31 - 8 >= v21 )
        goto LABEL_38;
    }
LABEL_60:
    sub_B0D97C(Instance);
  }
LABEL_38:
  if ( !svtList )
    goto LABEL_60;
  v42 = *(_QWORD *)&svtList->max_length;
  if ( (int)v42 >= 1 )
  {
    v43 = 0;
    while ( 1 )
    {
      v44 = &svtList->obj.klass + (int)v43;
      v45 = (UserServantEntity_o *)v44[4];
      if ( !v45 )
        goto LABEL_60;
      Instance = UserServantEntity__IsStatusUp((UserServantEntity_o *)v44[4], 0LL);
      if ( (Instance & 1) != 0 )
      {
        Instance = UserServantEntity__getSvtClassId(v45, 0LL);
        if ( (_DWORD)Instance == v50 )
        {
          if ( type == 2 )
          {
            if ( v45->fields.hp || v45->fields.adjustHp )
            {
LABEL_51:
              Instance = UserServantEntity__getRarity(v45, 0LL);
              if ( !v29 )
                goto LABEL_60;
              if ( (unsigned int)(v21 - Instance) >= v29->max_length )
                goto LABEL_57;
              v46 = v29->m_Items[v21 - (int)Instance];
              if ( !v46 )
                goto LABEL_60;
              ++v46->fields.num;
            }
          }
          else if ( type == 1 && (v45->fields.atk || v45->fields.adjustAtk) )
          {
            goto LABEL_51;
          }
        }
      }
      if ( (int)++v43 >= (int)v42 )
        return v29;
      if ( v43 >= svtList->max_length )
        goto LABEL_57;
    }
  }
  return v29;
}


void __fastcall CombineExpUpInfo__OnClickCenter(CombineExpUpInfo_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x5

  if ( (byte_4214447 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214447 = 1;
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

  if ( (byte_4214449 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214449 = 1;
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

  if ( (byte_4214446 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214446 = 1;
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

  if ( (byte_4214448 & 1) == 0 )
  {
    sub_B0D8A4(&SoundManager_TypeInfo, method);
    byte_4214448 = 1;
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
  __int64 *v29; // x8
  __int64 v30; // x0

  v5 = this;
  if ( (byte_4214445 & 1) == 0 )
  {
    sub_B0D8A4(&CombineExpUpInfo_TypeInfo, *(_QWORD *)&kind);
    sub_B0D8A4(&StringLiteral_21265/*"off"*/, v6);
    sub_B0D8A4(&StringLiteral_17006/*"btn_bg_02_on"*/, v7);
    sub_B0D8A4(&StringLiteral_21295/*"on"*/, v8);
    sub_B0D8A4(&StringLiteral_17194/*"button_total"*/, v9);
    sub_B0D8A4(&StringLiteral_17193/*"button_storage"*/, v10);
    sub_B0D8A4(&StringLiteral_17188/*"button_possess"*/, v11);
    this = (CombineExpUpInfo_o *)sub_B0D8A4(&StringLiteral_17005/*"btn_bg_02_off"*/, v12);
    byte_4214445 = 1;
  }
  v13 = 4LL;
  do
  {
    btnObjList = v5->fields.btnObjList;
    if ( !btnObjList )
      goto LABEL_49;
    v15 = v13 - 4;
    if ( (unsigned int)(v13 - 4) >= btnObjList->max_length )
      goto LABEL_50;
    this = (CombineExpUpInfo_o *)*((_QWORD *)&btnObjList->obj.klass + v13);
    if ( !this )
      goto LABEL_49;
    if ( (_DWORD)v13 - type == 4 )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      btnSpriteList = v5->fields.btnSpriteList;
      if ( !btnSpriteList )
        goto LABEL_49;
      if ( btnSpriteList->max_length <= type )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)*((_QWORD *)&btnSpriteList->obj.klass + v13);
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17006/*"btn_bg_02_on"*/, 0LL);
      v17 = v5->fields.btnSpriteList;
      if ( !v17 )
        goto LABEL_49;
      if ( v17->max_length <= type )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v18 = (UIWidget_o *)*((_QWORD *)&v17->obj.klass + v13);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v18 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v18,
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
      v21 = (UISprite_o *)*((_QWORD *)&btnTxtSpriteList->obj.klass + v13);
      v22 = (System_String_o *)*((_QWORD *)&btnSpriteNameList->obj.klass + v13);
      v23 = (System_String_o *)StringLiteral_21295/*"on"*/;
    }
    else
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      v24 = v5->fields.btnSpriteList;
      if ( !v24 )
        goto LABEL_49;
      if ( v15 >= v24->max_length )
      {
LABEL_50:
        v30 = sub_B0D9A8(this);
        sub_B0D948(v30, 0LL);
      }
      this = (CombineExpUpInfo_o *)*((_QWORD *)&v24->obj.klass + v13);
      if ( !this )
        goto LABEL_49;
      UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)StringLiteral_17005/*"btn_bg_02_off"*/, 0LL);
      v25 = v5->fields.btnSpriteList;
      if ( !v25 )
        goto LABEL_49;
      if ( v15 >= v25->max_length )
        goto LABEL_50;
      this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      v26 = (UIWidget_o *)*((_QWORD *)&v25->obj.klass + v13);
      if ( (BYTE3(CombineExpUpInfo_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !CombineExpUpInfo_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CombineExpUpInfo_TypeInfo);
        this = (CombineExpUpInfo_o *)CombineExpUpInfo_TypeInfo;
      }
      if ( !v26 )
        goto LABEL_49;
      UIWidget__SetDimensions(
        v26,
        (int32_t)this[1].fields.SortClassOrder->monitor,
        HIDWORD(this[1].fields.SortClassOrder->monitor),
        0LL);
      v27 = v5->fields.btnTxtSpriteList;
      if ( !v27 )
        goto LABEL_49;
      if ( v15 >= v27->max_length )
        goto LABEL_50;
      v28 = v5->fields.btnSpriteNameList;
      if ( !v28 )
        goto LABEL_49;
      if ( v15 >= v28->max_length )
        goto LABEL_50;
      v21 = (UISprite_o *)*((_QWORD *)&v27->obj.klass + v13);
      v22 = (System_String_o *)*((_QWORD *)&v28->obj.klass + v13);
      v23 = (System_String_o *)StringLiteral_21265/*"off"*/;
    }
    this = (CombineExpUpInfo_o *)System_String__Concat_43849904(v22, v23, 0LL);
    if ( !v21 )
      goto LABEL_49;
    UISprite__set_spriteName(v21, (System_String_o *)this, 0LL);
    ++v13;
  }
  while ( (unsigned int)(v13 - 5) < 2 );
  switch ( kind )
  {
    case 2:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v29 = &StringLiteral_17194/*"button_total"*/;
        goto LABEL_47;
      }
LABEL_49:
      sub_B0D97C(this);
    case 1:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v29 = &StringLiteral_17193/*"button_storage"*/;
        goto LABEL_47;
      }
      goto LABEL_49;
    case 0:
      this = (CombineExpUpInfo_o *)v5->fields.btnChangeSprite;
      if ( this )
      {
        v29 = &StringLiteral_17188/*"button_possess"*/;
LABEL_47:
        UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v29, 0LL);
        return;
      }
      goto LABEL_49;
  }
}


void __fastcall CombineExpUpInfo_MaterialData___ctor(CombineExpUpInfo_MaterialData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}