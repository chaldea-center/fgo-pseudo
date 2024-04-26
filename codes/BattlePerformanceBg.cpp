void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1

  if ( (byte_435423A & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceBg_TypeInfo);
    sub_B70694(&StringLiteral_19209/*"front"*/);
    byte_435423A = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceBg_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_19209/*"front"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_19209/*"front"*/;
  sub_B70630(static_fields, v8, v1, v2, v3, v4, v5, v6);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v18; // x20
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v25; // x20
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x20
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_4354239 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
    sub_B70694(&Method_System_Collections_Generic_List_string___ctor__);
    sub_B70694(&System_Collections_Generic_List_string__TypeInfo);
    sub_B70694(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
    sub_B70694(&string_TypeInfo);
    byte_4354239 = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.loadedChangeBgList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)Empty,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v18,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgSpShadowList,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v25,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v25;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.historyBgState,
    (System_Int32_array **)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v32;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgInfoList,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall BattlePerformanceBg__AddCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        System_Action_BattlePerformanceBg_ChangedBgArgs__o *callback,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_onLoadBgFinished; // x19
  System_Delegate_o *onLoadBgFinished; // t1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  BattlePerformanceBg_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4354237 & 1) == 0 )
  {
    sub_B70694(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo);
    byte_4354237 = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (BattleServantConfConponent_o *)&this->fields.onLoadBgFinished;
  v7 = (System_Int32_array **)System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo )
  {
    sub_B70A60(v7);
    BattlePerformanceBg__ResetBgAnimation(v14, v15);
  }
  else
  {
    p_onLoadBgFinished->klass = (BattleServantConfConponent_c *)v7;
    sub_B70630(p_onLoadBgFinished, v7, v8, v9, v10, v11, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__AddChangeBgInfo(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  BattlePerformanceBg_BgInfo_o *v21; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v22; // x25
  __int64 v23; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x0
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_435422A & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceBg_BgInfo_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
    byte_435422A = 1;
  }
  v21 = (BattlePerformanceBg_BgInfo_o *)sub_B70764(BattlePerformanceBg_BgInfo_TypeInfo);
  v25.fields.x = v17;
  v25.fields.y = v16;
  v25.fields.z = v15;
  v26.fields.x = x;
  v26.fields.y = y;
  v26.fields.z = z;
  v22 = (EventMissionProgressRequest_Argument_ProgressData_o *)v21;
  BattlePerformanceBg_BgInfo___ctor(v21, No, tp, v25, v26, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B7076C(0LL, v23);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgInfoList,
    v22,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ChangeBg(
        BattlePerformanceBg_o *this,
        BattleFieldEnvironmentData_BackgroundData_o *curBg,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v8; // x6

  if ( !curBg )
    sub_B7076C(this, 0LL);
  BattlePerformanceBg__changeBg(
    this,
    *((_DWORD *)&curBg->fields.isActive + 1),
    curBg->fields.id,
    pos,
    rot,
    changeDirect,
    parentCamera,
    callback,
    v8);
}


void __fastcall BattlePerformanceBg__ClearCallbackOfOnLoadBgFinished(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields.onLoadBgFinished = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg__DebugPrint(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  int bgRoot; // w8
  int i; // w9
  __int64 v5; // x0

  if ( !data || (this = (BattlePerformanceBg_o *)AssetData__GetObjectNameList(data, 0LL)) == 0LL )
    sub_B7076C(this, data);
  bgRoot = (int)this->fields.bgRoot;
  if ( bgRoot >= 1 )
  {
    for ( i = 0; i < bgRoot; ++i )
    {
      if ( i >= (unsigned int)bgRoot )
      {
        v5 = sub_B70798(this);
        sub_B70738(v5, 0LL);
      }
    }
  }
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_435422B & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_B70694(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__);
    byte_435422B = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B7076C(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  _BOOL8 exists; // x0
  __int64 v4; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x20
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *v6; // x0
  BattlePerformanceBg_BgInfo_o *v7; // x19

  if ( (byte_435422C & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
    sub_B70694(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__);
    byte_435422C = 1;
  }
  exists = BattlePerformanceBg__ExistsLoadBgInfo(this, method);
  if ( !exists )
    return 0LL;
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B7076C(exists, v4);
  v6 = this->fields.bgInfoList;
  if ( !bgInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41939488(0LL);
  v7 = bgInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v6,
    0,
    (const MethodInfo_3027378 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v7;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  BattleBgComponent_array *BattleBgComponents; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v16; // x20

  if ( (byte_4354234 & 1) == 0 )
  {
    sub_B70694(&Method_BasicHelper_Find_BattleBgComponent___);
    sub_B70694(&Method_System_Func_BattleBgComponent__bool___ctor__);
    sub_B70694(&System_Func_BattleBgComponent__bool__TypeInfo);
    sub_B70694(&Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__);
    sub_B70694(&BattlePerformanceBg___c__DisplayClass67_0_TypeInfo);
    byte_4354234 = 1;
  }
  v5 = sub_B70764(BattlePerformanceBg___c__DisplayClass67_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass67_0___ctor((BattlePerformanceBg___c__DisplayClass67_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = key;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)key, v8, v9, v10, v11, v12, v13);
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v14);
  v16 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v16,
    (Il2CppObject *)v5,
    Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__,
    (const MethodInfo_29AC578 *)Method_System_Func_BattleBgComponent__bool___ctor__);
  return (BattleBgComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BattleBgComponents,
                                  (System_Func_T__bool__o *)v16,
                                  (const MethodInfo_1BDCFCC *)Method_BasicHelper_Find_BattleBgComponent___);
}


System_String_o *__fastcall BattlePerformanceBg__GetAssetPass(int32_t bgNo, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = bgNo;
  if ( (byte_435421E & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2867/*"Bg/"*/);
    byte_435421E = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44758168((System_String_o *)StringLiteral_2867/*"Bg/"*/, v2, 0LL);
}


UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  AssetData_o *BgAssetData; // x19
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  int32_t v8; // [xsp+Ch] [xbp-14h] BYREF

  v8 = shadowId;
  if ( (byte_4354232 & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_Texture2D____69232744);
    sub_B70694(&StringLiteral_22460/*"shadow_"*/);
    byte_4354232 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v5 = System_Int32__ToString((int32_t)&v8, 0LL);
  v6 = System_String__Concat_44758168((System_String_o *)StringLiteral_22460/*"shadow_"*/, v5, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      BgAssetData,
                                      v6,
                                      (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_Texture2D____69232744);
}


void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  BattleBgMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v19; // w21
  System_String_o *v20; // x19
  AssetLoader_LoadEndDataHandler_o *v21; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4354227 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattleEffectUtility_TypeInfo);
    sub_B70694(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_B70694(&Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__);
    sub_B70694(&BattlePerformanceBg___c__DisplayClass46_0_TypeInfo);
    byte_4354227 = 1;
  }
  effectPath = 0LL;
  v9 = sub_B70764(BattlePerformanceBg___c__DisplayClass46_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass46_0___ctor((BattlePerformanceBg___c__DisplayClass46_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_22;
  *(_QWORD *)(v9 + 16) = finishCallback;
  sub_B70630(
    (BattleServantConfConponent_o *)(v9 + 16),
    (System_Int32_array **)finishCallback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_WarQuestSelectionMaster, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_15;
  v19 = BgSpecialShadowEffectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v19, 0LL) )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Master_WarQuestSelectionMaster,
         (WarBoardManager_TaskList_o *)effectPath,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_15:
    ActionExtensions__Call(*(System_Action_o **)(v9 + 16), 0LL);
    return;
  }
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B7076C(Master_WarQuestSelectionMaster, v11);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)effectPath,
    (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
  v20 = effectPath;
  v21 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v21,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v20, v21, 1, 0LL);
}


void __fastcall BattlePerformanceBg__OnEndBgLoad(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  BattlePerformanceBg_BgInfo_o *BgInfo; // x0
  const MethodInfo *v5; // x6

  this->fields.IsLoading = 0;
  if ( BattlePerformanceBg__ExistsLoadBgInfo(this, method) )
  {
    BgInfo = BattlePerformanceBg__FetchBgInfo(this, v3);
    if ( BgInfo )
      BattlePerformanceBg__changeBg(
        this,
        BgInfo->fields.bgNo,
        BgInfo->fields.tp,
        BgInfo->fields.pos,
        BgInfo->fields.rot,
        BgInfo->fields.changeDirect,
        BgInfo->fields.parentCamera,
        BgInfo->fields.callback,
        v5);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBg(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct UnityEngine_GameObject_o **p_bgobject; // x20
  UnityEngine_Object_o *bgobject; // x21
  UnityEngine_Object_o *frontobject; // x21
  UnityEngine_Object_o *v7; // x21
  UnityEngine_Object_o *v8; // x21
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UnityEngine_Object_o *actionCamera; // x20
  __int64 v16; // x1
  BattleActionCamera_o *v17; // x0
  struct UnityEngine_GameObject_o **p_frontobject; // x20
  UnityEngine_Object_o *v19; // x21
  const MethodInfo *v20; // x2
  UnityEngine_Object_o *v21; // x21
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_4354221 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354221 = 1;
  }
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  p_bgobject = &this->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_11;
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_11:
    v7 = (UnityEngine_Object_o *)*p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v7, 0LL, 0LL) )
    {
      v8 = (UnityEngine_Object_o *)*p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v8, 0LL);
      *p_bgobject = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.bgobject, 0LL, v9, v10, v11, v12, v13, v14);
    }
    actionCamera = (UnityEngine_Object_o *)this->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      v17 = this->fields.actionCamera;
      if ( !v17 )
        sub_B7076C(0LL, v16);
      BattleActionCamera__stopCameraAnimation(v17, 0LL);
    }
    p_frontobject = &this->fields.frontobject;
    v19 = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v19, 0LL, 0LL) )
    {
      v21 = (UnityEngine_Object_o *)*p_frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v21, 0LL);
      *p_frontobject = 0LL;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.frontobject, 0LL, v22, v23, v24, v25, v26, v27);
    }
    BattlePerformanceBg__ReleaseBg_29554040(this, this->fields.nowBgId, v20);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4354225 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4354225 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v5,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgSpShadowList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v5,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v5.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v5,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
LABEL_12:
    sub_B7076C(bgSpShadowList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)bgSpShadowList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ReleaseBg_29554040(
        BattlePerformanceBg_o *this,
        int32_t no,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardManager_TaskList__o *AssetPass; // x0
  __int64 v6; // x1
  WarBoardManager_TaskList_o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_4354224 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&BattlePerformanceBg_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Remove__);
    byte_4354224 = 1;
  }
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)BattlePerformanceBg__GetAssetPass(
                                                                               no,
                                                                               *(const MethodInfo **)&no);
  if ( !this->fields.loadedChangeBgList )
    goto LABEL_14;
  v7 = (WarBoardManager_TaskList_o *)AssetPass;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
         (WarBoardManager_TaskList_o *)AssetPass,
         (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList;
    if ( AssetPass )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        AssetPass,
        v7,
        (const MethodInfo_3027034 *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B7076C(AssetPass, v6);
  }
LABEL_10:
  this->fields.BgAssetData = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.BgAssetData, 0LL, v8, v9, v10, v11, v12, v13);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)v7, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4354223 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Clear__);
    sub_B70694(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    byte_4354223 = 1;
  }
  memset(&v6, 0, sizeof(v6));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedChangeBgList,
    (const MethodInfo_3026504 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_22212CC *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v6.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetStorage = AssetManager__getAssetStorage((System_String_o *)current, 0LL);
    if ( AssetStorage )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAsset_31197044(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_22212C8 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
LABEL_16:
    sub_B7076C(loadedChangeBgList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedChangeBgList,
    (const MethodInfo_3025A90 *)Method_System_Collections_Generic_List_string__Clear__);
}


void __fastcall BattlePerformanceBg__ResetBgAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  __int64 v6; // x8
  BattleBgComponent_array *v7; // x19
  unsigned __int64 v8; // x21
  UnityEngine_Object_o *v9; // x20
  __int64 v10; // x0

  if ( (byte_4354238 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354238 = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_16:
    sub_B7076C(BattleBgComponents, v5);
  v6 = *(_QWORD *)&BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v10 = sub_B70798(BattleBgComponents);
        sub_B70738(v10, 0LL);
      }
      v9 = (UnityEngine_Object_o *)v7->m_Items[v8];
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      BattleBgComponents = (BattleBgComponent_array *)UnityEngine_Object__op_Equality(v9, 0LL, 0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) == 0 )
      {
        if ( !v9 )
          goto LABEL_16;
        BattleBgComponent__ResetAnimation((BattleBgComponent_o *)v9, 0LL);
      }
      LODWORD(v6) = v7->max_length;
      ++v8;
    }
    while ( (__int64)v8 < (int)v6 );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__UpdateColor(
        BattlePerformanceBg_o *this,
        UnityEngine_Color_o color,
        const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientLight(color, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__changeBg(
        BattlePerformanceBg_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x7
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  System_Action_o **p_EndCallback; // x25
  const MethodInfo *v23; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v25; // x0
  __int64 v26; // x1
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Object_array *v33; // x20
  __int64 v34; // x0
  System_Int32_array **v35; // x1
  __int64 v36; // x2
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Int32_array **v43; // x21
  System_String_array **v44; // x2
  System_String_array **v45; // x3
  System_Boolean_array **v46; // x4
  System_Int32_array **v47; // x5
  System_Int32_array *v48; // x6
  System_Int32_array *v49; // x7
  System_Int32_array **v50; // x1
  __int64 v51; // x2
  System_String_array **v52; // x2
  System_String_array **v53; // x3
  System_Boolean_array **v54; // x4
  System_Int32_array **v55; // x5
  System_Int32_array *v56; // x6
  System_Int32_array *v57; // x7
  System_Int32_array **v58; // x21
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  __int64 v66; // x2
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x21
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x1
  System_String_array **v81; // x2
  System_String_array **v82; // x3
  System_Boolean_array **v83; // x4
  System_Int32_array **v84; // x5
  System_Int32_array *v85; // x6
  System_Int32_array *v86; // x7
  System_Int32_array **v87; // x1
  System_String_array **v88; // x2
  System_String_array **v89; // x3
  System_Boolean_array **v90; // x4
  System_Int32_array **v91; // x5
  System_Int32_array *v92; // x6
  System_Int32_array *v93; // x7
  System_Int32_array **v94; // x1
  System_String_array **v95; // x2
  System_String_array **v96; // x3
  System_Boolean_array **v97; // x4
  System_Int32_array **v98; // x5
  System_Int32_array *v99; // x6
  System_Int32_array *v100; // x7
  System_Int32_array **v101; // x1
  System_Collections_Hashtable_o *v102; // x0
  __int64 v103; // x0
  __int64 v104; // x0
  int v105; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_Color_o black; // [xsp+10h] [xbp-90h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_435422D & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Color_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_18623/*"endChangeColor"*/);
    sub_B70694(&StringLiteral_15247/*"UpdateColor"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_435422D = 1;
  }
  if ( this->fields.IsLoading )
  {
    v108.fields.x = v18;
    v108.fields.y = v17;
    v108.fields.z = v16;
    v109.fields.x = x;
    v109.fields.y = y;
    v109.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v108, v109, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.EndCallback,
    (System_Int32_array **)callback,
    *(System_String_array ***)&tp,
    (System_String_array **)changeDirect,
    (System_Boolean_array **)parentCamera,
    (System_Int32_array **)callback,
    (System_Int32_array *)method,
    v9);
  if ( this->fields.fade && !changeDirect )
  {
    if ( *p_EndCallback )
      System_Action__Invoke(*p_EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v23);
    return;
  }
  this->fields.loadbgno = No;
  this->fields.loadbgType = tp;
  this->fields.pos.fields.x = v18;
  this->fields.pos.fields.y = v17;
  this->fields.pos.fields.z = v16;
  this->fields.rot.fields.x = x;
  this->fields.rot.fields.y = y;
  this->fields.rot.fields.z = z;
  this->fields.changeDirect = changeDirect;
  this->fields.parentCamera = parentCamera;
  this->fields.fade = 1;
  if ( changeDirect )
  {
    BattlePerformanceBg__endChangeColor(this, v23);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v25 = sub_B706AC(object___TypeInfo, 10LL);
  if ( !v25 )
    sub_B7076C(0LL, v26);
  v33 = (System_Object_array *)v25;
  v34 = StringLiteral_19208/*"from"*/;
  if ( StringLiteral_19208/*"from"*/ )
  {
    v34 = sub_B70754(StringLiteral_19208/*"from"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
    v35 = (System_Int32_array **)StringLiteral_19208/*"from"*/;
  }
  else
  {
    v35 = 0LL;
  }
  if ( !v33->max_length )
    goto LABEL_61;
  v33->m_Items[0] = (Il2CppObject *)v35;
  sub_B70630((BattleServantConfConponent_o *)v33->m_Items, v35, v27, v28, v29, v30, v31, v32);
  tmpcolor = this->fields.tmpcolor;
  v34 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v36);
  v43 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = sub_B70754(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
  }
  if ( v33->max_length <= 1 )
    goto LABEL_61;
  v33->m_Items[1] = (Il2CppObject *)v43;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[1], v43, v37, v38, v39, v40, v41, v42);
  v34 = StringLiteral_23091/*"to"*/;
  if ( StringLiteral_23091/*"to"*/ )
  {
    v34 = sub_B70754(StringLiteral_23091/*"to"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
    v50 = (System_Int32_array **)StringLiteral_23091/*"to"*/;
  }
  else
  {
    v50 = 0LL;
  }
  if ( v33->max_length <= 2 )
    goto LABEL_61;
  v33->m_Items[2] = (Il2CppObject *)v50;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[2], v50, v44, v45, v46, v47, v48, v49);
  black = UnityEngine_Color__get_black(0LL);
  v34 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black, v51);
  v58 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = sub_B70754(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
  }
  if ( v33->max_length <= 3 )
    goto LABEL_61;
  v33->m_Items[3] = (Il2CppObject *)v58;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[3], v58, v52, v53, v54, v55, v56, v57);
  v34 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v34 = sub_B70754(StringLiteral_23053/*"time"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
    v65 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v65 = 0LL;
  }
  if ( v33->max_length <= 4 )
    goto LABEL_61;
  v33->m_Items[4] = (Il2CppObject *)v65;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[4], v65, v59, v60, v61, v62, v63, v64);
  v105 = 1056964608;
  v34 = j_il2cpp_value_box_0(float_TypeInfo, &v105, v66);
  v73 = (System_Int32_array **)v34;
  if ( v34 )
  {
    v34 = sub_B70754(v34, v33->obj.klass->_1.element_class);
    if ( !v34 )
    {
LABEL_62:
      v104 = sub_B7078C(v34);
      sub_B70738(v104, 0LL);
    }
  }
  if ( v33->max_length <= 5 )
    goto LABEL_61;
  v33->m_Items[5] = (Il2CppObject *)v73;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[5], v73, v67, v68, v69, v70, v71, v72);
  v34 = StringLiteral_21614/*"onupdate"*/;
  if ( StringLiteral_21614/*"onupdate"*/ )
  {
    v34 = sub_B70754(StringLiteral_21614/*"onupdate"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
    v80 = (System_Int32_array **)StringLiteral_21614/*"onupdate"*/;
  }
  else
  {
    v80 = 0LL;
  }
  if ( v33->max_length <= 6 )
    goto LABEL_61;
  v33->m_Items[6] = (Il2CppObject *)v80;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[6], v80, v74, v75, v76, v77, v78, v79);
  v34 = StringLiteral_15247/*"UpdateColor"*/;
  if ( StringLiteral_15247/*"UpdateColor"*/ )
  {
    v34 = sub_B70754(StringLiteral_15247/*"UpdateColor"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
    v87 = (System_Int32_array **)StringLiteral_15247/*"UpdateColor"*/;
  }
  else
  {
    v87 = 0LL;
  }
  if ( v33->max_length <= 7 )
    goto LABEL_61;
  v33->m_Items[7] = (Il2CppObject *)v87;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[7], v87, v81, v82, v83, v84, v85, v86);
  v34 = StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v34 = sub_B70754(StringLiteral_21605/*"oncomplete"*/, v33->obj.klass->_1.element_class);
    if ( !v34 )
      goto LABEL_62;
    v94 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v33->max_length <= 8 )
    goto LABEL_61;
  v33->m_Items[8] = (Il2CppObject *)v94;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[8], v94, v88, v89, v90, v91, v92, v93);
  v34 = StringLiteral_18623/*"endChangeColor"*/;
  if ( StringLiteral_18623/*"endChangeColor"*/ )
  {
    v34 = sub_B70754(StringLiteral_18623/*"endChangeColor"*/, v33->obj.klass->_1.element_class);
    if ( v34 )
    {
      v101 = (System_Int32_array **)StringLiteral_18623/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_62;
  }
  v101 = 0LL;
LABEL_56:
  if ( v33->max_length <= 9 )
  {
LABEL_61:
    v103 = sub_B70798(v34);
    sub_B70738(v103, 0LL);
  }
  v33->m_Items[9] = (Il2CppObject *)v101;
  sub_B70630((BattleServantConfConponent_o *)&v33->m_Items[9], v101, v95, v96, v97, v98, v99, v100);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v102 = iTween__Hash(v33, 0LL);
  iTween__ValueTo(gameObject, v102, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endChangeBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *BgObject; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  struct BattlePerformanceBg_BgState_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  BattlePerformanceBg_o *v20; // x0
  const MethodInfo *v21; // x3
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v23; // x21
  UnityEngine_Transform_o *transform; // x22
  int v25; // s0
  UnityEngine_Transform_o *v28; // x22
  int v29; // s0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  BattlePerformanceBg_o *v38; // x0
  const MethodInfo *v39; // x3
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v41; // x2
  UnityEngine_Transform_o *v42; // x21
  int v43; // s0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v56; // w23
  BattlePerformanceBg_ChangedBgArgs_o *v57; // x24
  const MethodInfo *v58; // x1
  System_Action_o *EndCallback; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  System_Object_array *v67; // x21
  __int64 v68; // x0
  System_Int32_array **v69; // x1
  __int64 v70; // x2
  System_String_array **v71; // x2
  System_String_array **v72; // x3
  System_Boolean_array **v73; // x4
  System_Int32_array **v74; // x5
  System_Int32_array *v75; // x6
  System_Int32_array *v76; // x7
  System_Int32_array **v77; // x22
  System_String_array **v78; // x2
  System_String_array **v79; // x3
  System_Boolean_array **v80; // x4
  System_Int32_array **v81; // x5
  System_Int32_array *v82; // x6
  System_Int32_array *v83; // x7
  System_Int32_array **v84; // x1
  __int64 v85; // x2
  System_String_array **v86; // x2
  System_String_array **v87; // x3
  System_Boolean_array **v88; // x4
  System_Int32_array **v89; // x5
  System_Int32_array *v90; // x6
  System_Int32_array *v91; // x7
  System_Int32_array **v92; // x19
  System_String_array **v93; // x2
  System_String_array **v94; // x3
  System_Boolean_array **v95; // x4
  System_Int32_array **v96; // x5
  System_Int32_array *v97; // x6
  System_Int32_array *v98; // x7
  System_Int32_array **v99; // x1
  __int64 v100; // x2
  System_String_array **v101; // x2
  System_String_array **v102; // x3
  System_Boolean_array **v103; // x4
  System_Int32_array **v104; // x5
  System_Int32_array *v105; // x6
  System_Int32_array *v106; // x7
  System_Int32_array **v107; // x19
  System_String_array **v108; // x2
  System_String_array **v109; // x3
  System_Boolean_array **v110; // x4
  System_Int32_array **v111; // x5
  System_Int32_array *v112; // x6
  System_Int32_array *v113; // x7
  System_Int32_array **v114; // x1
  System_String_array **v115; // x2
  System_String_array **v116; // x3
  System_Boolean_array **v117; // x4
  System_Int32_array **v118; // x5
  System_Int32_array *v119; // x6
  System_Int32_array *v120; // x7
  System_Int32_array **v121; // x1
  System_String_array **v122; // x2
  System_String_array **v123; // x3
  System_Boolean_array **v124; // x4
  System_Int32_array **v125; // x5
  System_Int32_array *v126; // x6
  System_Int32_array *v127; // x7
  System_Int32_array **v128; // x1
  System_String_array **v129; // x2
  System_String_array **v130; // x3
  System_Boolean_array **v131; // x4
  System_Int32_array **v132; // x5
  System_Int32_array *v133; // x6
  System_Int32_array *v134; // x7
  System_Int32_array **v135; // x1
  System_Collections_Hashtable_o *v136; // x0
  __int64 v137; // x0
  __int64 v138; // x0
  int v139; // [xsp+Ch] [xbp-54h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o black; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4354230 & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_B70694(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    sub_B70694(&UnityEngine_Color_TypeInfo);
    sub_B70694(&object___TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&float_TypeInfo);
    sub_B70694(&StringLiteral_19208/*"from"*/);
    sub_B70694(&StringLiteral_18623/*"endChangeColor"*/);
    sub_B70694(&StringLiteral_15247/*"UpdateColor"*/);
    sub_B70694(&StringLiteral_23053/*"time"*/);
    sub_B70694(&StringLiteral_21614/*"onupdate"*/);
    sub_B70694(&StringLiteral_23091/*"to"*/);
    sub_B70694(&StringLiteral_21605/*"oncomplete"*/);
    sub_B70694(&iTween_TypeInfo);
    byte_4354230 = 1;
  }
  this->fields.BgAssetData = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.BgAssetData,
    (System_Int32_array **)data,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !data )
    goto LABEL_78;
  v13 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v12);
  this->fields.nowBgState = v13;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.nowBgState,
    (System_Int32_array **)v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  BgObject = BattlePerformanceBg__getBgObject(v20, data, this->fields.loadbgType, v21);
  if ( !BgObject )
    goto LABEL_78;
  parentCamera = this->fields.parentCamera;
  v23 = BgObject;
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v23, 0LL);
    *(UnityEngine_Vector3_o *)&v25 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_78;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v25, 0LL);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v23, 0LL);
  if ( !BgObject )
    goto LABEL_78;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  v28 = UnityEngine_GameObject__get_transform(v23, 0LL);
  *(UnityEngine_Vector3_o *)&v29 = UnityEngine_Vector3__get_one(0LL);
  if ( !v28 )
    goto LABEL_78;
  UnityEngine_Transform__set_localScale(v28, *(UnityEngine_Vector3_o *)&v29, 0LL);
  this->fields.bgobject = v23;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.bgobject,
    (System_Int32_array **)v23,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v38, data, this->fields.loadbgType, v39);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(FrontObject, 0LL, 0LL);
  if ( ((unsigned __int8)BgObject & 1) != 0 )
  {
    if ( !FrontObject )
      goto LABEL_78;
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)FrontObject,
                                             0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
    v42 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_Vector3__get_one(0LL);
    if ( !v42 )
      goto LABEL_78;
    UnityEngine_Transform__set_localScale(v42, *(UnityEngine_Vector3_o *)&v43, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.frontobject,
      (System_Int32_array **)FrontObject,
      v46,
      v47,
      v48,
      v49,
      v50,
      v51);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (UnityEngine_GameObject_o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v41);
  if ( !nowBgState )
    goto LABEL_78;
  BattlePerformanceBg_BgState__loadSaveData(
    nowBgState,
    (BattleBgComponent_array *)BgObject,
    this->fields.actionCamera,
    0LL);
  onLoadBgFinished = (System_Action_T__o *)this->fields.onLoadBgFinished;
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v56 = this->fields.parentCamera;
  v57 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B70764(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v57, loadbgno, loadbgType, v56, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v57,
    (const MethodInfo_2BFC288 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    this->fields.fade = 0;
    white = UnityEngine_Color__get_white(0LL);
    UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      System_Action__Invoke(EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v58);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = (UnityEngine_GameObject_o *)sub_B706AC(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_78:
    sub_B7076C(BgObject, v11);
  v67 = (System_Object_array *)BgObject;
  v68 = StringLiteral_19208/*"from"*/;
  if ( StringLiteral_19208/*"from"*/ )
  {
    v68 = sub_B70754(StringLiteral_19208/*"from"*/, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
    v69 = (System_Int32_array **)StringLiteral_19208/*"from"*/;
  }
  else
  {
    v69 = 0LL;
  }
  if ( !v67->max_length )
    goto LABEL_79;
  v67->m_Items[0] = (Il2CppObject *)v69;
  sub_B70630((BattleServantConfConponent_o *)v67->m_Items, v69, v61, v62, v63, v64, v65, v66);
  black = UnityEngine_Color__get_black(0LL);
  v68 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black, v70);
  v77 = (System_Int32_array **)v68;
  if ( v68 )
  {
    v68 = sub_B70754(v68, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
  }
  if ( v67->max_length <= 1 )
    goto LABEL_79;
  v67->m_Items[1] = (Il2CppObject *)v77;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[1], v77, v71, v72, v73, v74, v75, v76);
  v68 = StringLiteral_23091/*"to"*/;
  if ( StringLiteral_23091/*"to"*/ )
  {
    v68 = sub_B70754(StringLiteral_23091/*"to"*/, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
    v84 = (System_Int32_array **)StringLiteral_23091/*"to"*/;
  }
  else
  {
    v84 = 0LL;
  }
  if ( v67->max_length <= 2 )
    goto LABEL_79;
  v67->m_Items[2] = (Il2CppObject *)v84;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[2], v84, v78, v79, v80, v81, v82, v83);
  tmpcolor = this->fields.tmpcolor;
  v68 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor, v85);
  v92 = (System_Int32_array **)v68;
  if ( v68 )
  {
    v68 = sub_B70754(v68, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
  }
  if ( v67->max_length <= 3 )
    goto LABEL_79;
  v67->m_Items[3] = (Il2CppObject *)v92;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[3], v92, v86, v87, v88, v89, v90, v91);
  v68 = StringLiteral_23053/*"time"*/;
  if ( StringLiteral_23053/*"time"*/ )
  {
    v68 = sub_B70754(StringLiteral_23053/*"time"*/, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
    v99 = (System_Int32_array **)StringLiteral_23053/*"time"*/;
  }
  else
  {
    v99 = 0LL;
  }
  if ( v67->max_length <= 4 )
    goto LABEL_79;
  v67->m_Items[4] = (Il2CppObject *)v99;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[4], v99, v93, v94, v95, v96, v97, v98);
  v139 = 1056964608;
  v68 = j_il2cpp_value_box_0(float_TypeInfo, &v139, v100);
  v107 = (System_Int32_array **)v68;
  if ( v68 )
  {
    v68 = sub_B70754(v68, v67->obj.klass->_1.element_class);
    if ( !v68 )
    {
LABEL_80:
      v138 = sub_B7078C(v68);
      sub_B70738(v138, 0LL);
    }
  }
  if ( v67->max_length <= 5 )
    goto LABEL_79;
  v67->m_Items[5] = (Il2CppObject *)v107;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[5], v107, v101, v102, v103, v104, v105, v106);
  v68 = StringLiteral_21614/*"onupdate"*/;
  if ( StringLiteral_21614/*"onupdate"*/ )
  {
    v68 = sub_B70754(StringLiteral_21614/*"onupdate"*/, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
    v114 = (System_Int32_array **)StringLiteral_21614/*"onupdate"*/;
  }
  else
  {
    v114 = 0LL;
  }
  if ( v67->max_length <= 6 )
    goto LABEL_79;
  v67->m_Items[6] = (Il2CppObject *)v114;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[6], v114, v108, v109, v110, v111, v112, v113);
  v68 = StringLiteral_15247/*"UpdateColor"*/;
  if ( StringLiteral_15247/*"UpdateColor"*/ )
  {
    v68 = sub_B70754(StringLiteral_15247/*"UpdateColor"*/, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
    v121 = (System_Int32_array **)StringLiteral_15247/*"UpdateColor"*/;
  }
  else
  {
    v121 = 0LL;
  }
  if ( v67->max_length <= 7 )
    goto LABEL_79;
  v67->m_Items[7] = (Il2CppObject *)v121;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[7], v121, v115, v116, v117, v118, v119, v120);
  v68 = StringLiteral_21605/*"oncomplete"*/;
  if ( StringLiteral_21605/*"oncomplete"*/ )
  {
    v68 = sub_B70754(StringLiteral_21605/*"oncomplete"*/, v67->obj.klass->_1.element_class);
    if ( !v68 )
      goto LABEL_80;
    v128 = (System_Int32_array **)StringLiteral_21605/*"oncomplete"*/;
  }
  else
  {
    v128 = 0LL;
  }
  if ( v67->max_length <= 8 )
    goto LABEL_79;
  v67->m_Items[8] = (Il2CppObject *)v128;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[8], v128, v122, v123, v124, v125, v126, v127);
  v68 = StringLiteral_18623/*"endChangeColor"*/;
  if ( StringLiteral_18623/*"endChangeColor"*/ )
  {
    v68 = sub_B70754(StringLiteral_18623/*"endChangeColor"*/, v67->obj.klass->_1.element_class);
    if ( v68 )
    {
      v135 = (System_Int32_array **)StringLiteral_18623/*"endChangeColor"*/;
      goto LABEL_73;
    }
    goto LABEL_80;
  }
  v135 = 0LL;
LABEL_73:
  if ( v67->max_length <= 9 )
  {
LABEL_79:
    v137 = sub_B70798(v68);
    sub_B70738(v137, 0LL);
  }
  v67->m_Items[9] = (Il2CppObject *)v135;
  sub_B70630((BattleServantConfConponent_o *)&v67->m_Items[9], v135, v129, v130, v131, v132, v133, v134);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v136 = iTween__Hash(v67, 0LL);
  iTween__ValueTo(gameObject, v136, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  int32_t fade; // w8
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  int32_t loadbgno; // w20
  WarBoardManager_TaskList_o *AssetPass; // x0
  __int64 v8; // x1
  System_String_o *v9; // x20
  AssetLoader_LoadEndDataHandler_o *v10; // x21
  System_Action_o *EndCallback; // x0
  AssetLoader_LoadEndDataHandler_o *v12; // x21
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4354231 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_BattlePerformanceBg_endChangeBg__);
    sub_B70694(&BattlePerformanceBg_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_List_string__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4354231 = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    black = UnityEngine_Color__get_black(0LL);
    UnityEngine_RenderSettings__set_ambientLight(black, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v4);
    loadbgno = this->fields.loadbgno;
    if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    }
    AssetPass = (WarBoardManager_TaskList_o *)BattlePerformanceBg__GetAssetPass(loadbgno, v5);
    if ( this->fields.loadedChangeBgList )
    {
      v9 = (System_String_o *)AssetPass;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
             AssetPass,
             (const MethodInfo_3025AD8 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
        v10 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(v10, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getAsset_31195996(v9, v10, 0LL) )
          return;
LABEL_21:
        v12 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(v12, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__loadAssetStorage(v9, v12, 1, 0LL);
        return;
      }
      if ( !System_String__op_Inequality(v9, this->fields.initLoadedBgPath, 0LL) )
        goto LABEL_21;
      AssetPass = (WarBoardManager_TaskList_o *)this->fields.loadedChangeBgList;
      if ( AssetPass )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)AssetPass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v9,
          (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_string__Add__);
        goto LABEL_21;
      }
    }
    sub_B7076C(AssetPass, v8);
  }
  EndCallback = this->fields.EndCallback;
  this->fields.fade = 0;
  if ( EndCallback )
    System_Action__Invoke(EndCallback, 0LL);
  BattlePerformanceBg__OnEndBgLoad(this, method);
}


void __fastcall BattlePerformanceBg__endloadBg(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v22; // x23
  const MethodInfo *v23; // x4

  if ( (byte_4354228 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__);
    sub_B70694(&BattlePerformanceBg___c__DisplayClass47_0_TypeInfo);
    byte_4354228 = 1;
  }
  v5 = sub_B70764(BattlePerformanceBg___c__DisplayClass47_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass47_0___ctor((BattlePerformanceBg___c__DisplayClass47_0_o *)v5, 0LL);
  if ( !v5 )
    sub_B7076C(v6, v7);
  *(_QWORD *)(v5 + 16) = this;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = data;
  sub_B70630((BattleServantConfConponent_o *)(v5 + 24), (System_Int32_array **)data, v14, v15, v16, v17, v18, v19);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v22 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v22, (Il2CppObject *)v5, Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v22, v23);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  System_Int32_array **v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *v21; // x22
  UnityEngine_Object_o *v22; // x22
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v26; // x2
  BattlePerformanceBg_o *v27; // x0
  const MethodInfo *v28; // x3
  _BOOL4 parentCamera; // w23
  UnityEngine_GameObject_o *v30; // x22
  UnityEngine_Transform_o *transform; // x23
  int v32; // s0
  UnityEngine_Transform_o *v35; // x23
  int v36; // s0
  int32_t newBgId; // w8
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  BattlePerformanceBg_o *v46; // x0
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *v48; // x20
  const MethodInfo *v49; // x2
  UnityEngine_Transform_o *v50; // x21
  int v51; // s0
  System_String_array **v54; // x2
  System_String_array **v55; // x3
  System_Boolean_array **v56; // x4
  System_Int32_array **v57; // x5
  System_Int32_array *v58; // x6
  System_Int32_array *v59; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v64; // w19
  BattlePerformanceBg_ChangedBgArgs_o *v65; // x23

  v4 = this;
  if ( (byte_4354229 & 1) == 0 )
  {
    sub_B70694(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
    sub_B70694(&BattlePerformanceBg_ChangedBgArgs_TypeInfo);
    this = (BattlePerformanceBg_o *)sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354229 = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_57;
  v5 = (System_Int32_array **)BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = (struct BattlePerformanceBg_BgState_o *)v5;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.nowBgState, v5, v6, v7, v8, v9, v10, v11);
  p_bgobject = (UnityEngine_Object_o **)&v4->fields.bgobject;
  bgobject = (UnityEngine_Object_o *)v4->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
    goto LABEL_12;
  frontobject = (UnityEngine_Object_o *)v4->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
  {
LABEL_12:
    v21 = *p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v21, 0LL, 0LL) )
    {
      v22 = *p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v22, 0LL);
    }
    v23 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_36067208(v24, 0LL);
    }
    actionCamera = (UnityEngine_Object_o *)v4->fields.actionCamera;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(actionCamera, 0LL, 0LL) )
    {
      this = (BattlePerformanceBg_o *)v4->fields.actionCamera;
      if ( !this )
        goto LABEL_57;
      BattleActionCamera__stopCameraAnimation((BattleActionCamera_o *)this, 0LL);
    }
    BattlePerformanceBg__ReleaseBg_29554040(v4, v4->fields.nowBgId, v26);
  }
  v4->fields.BgAssetData = data;
  sub_B70630(
    (BattleServantConfConponent_o *)&v4->fields.BgAssetData,
    (System_Int32_array **)data,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBgObject(v27, data, v4->fields.loadbgType, v28);
  if ( !this )
    goto LABEL_57;
  parentCamera = v4->fields.parentCamera;
  v30 = (UnityEngine_GameObject_o *)this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v30, 0LL);
    *(UnityEngine_Vector3_o *)&v32 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_57;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v32, 0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v30, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  v35 = UnityEngine_GameObject__get_transform(v30, 0LL);
  *(UnityEngine_Vector3_o *)&v36 = UnityEngine_Vector3__get_one(0LL);
  if ( !v35 )
    goto LABEL_57;
  UnityEngine_Transform__set_localScale(v35, *(UnityEngine_Vector3_o *)&v36, 0LL);
  newBgId = v4->fields.newBgId;
  v4->fields.bgobject = v30;
  v4->fields.nowBgId = newBgId;
  sub_B70630(
    (BattleServantConfConponent_o *)&v4->fields.bgobject,
    (System_Int32_array **)v30,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  v48 = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v46, data, v4->fields.loadbgType, v47);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v48, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v48 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            v50 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v48, 0LL);
            *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Vector3__get_one(0LL);
            if ( v50 )
            {
              UnityEngine_Transform__set_localScale(v50, *(UnityEngine_Vector3_o *)&v51, 0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v48;
              sub_B70630(
                (BattleServantConfConponent_o *)&v4->fields.frontobject,
                (System_Int32_array **)v48,
                v54,
                v55,
                v56,
                v57,
                v58,
                v59);
              goto LABEL_55;
            }
          }
        }
      }
    }
LABEL_57:
    sub_B7076C(this, data);
  }
LABEL_55:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v49);
  if ( !nowBgState )
    goto LABEL_57;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  loadbgno = v4->fields.loadbgno;
  loadbgType = v4->fields.loadbgType;
  v64 = v4->fields.parentCamera;
  v65 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B70764(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v65, loadbgno, loadbgType, v64, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v65,
    (const MethodInfo_2BFC288 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v7; // x1
  UnityEngine_GameObject_o *v8; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4354222 & 1) == 0 )
  {
    sub_B70694(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
    sub_B70694(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
    sub_B70694(&System_Collections_Generic_List_BattleBgComponent__TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354222 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    v8 = this->fields.bgobject;
    if ( !v8 )
      goto LABEL_19;
    v8 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                       v8,
                                       includeInactive,
                                       (const MethodInfo_1D4B288 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v5 )
      goto LABEL_19;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
      (System_Collections_Generic_IEnumerable_T__o *)v8,
      (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)v8 & 1) == 0 )
  {
    if ( v5 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                          (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_19:
    sub_B7076C(v8, v7);
  }
  v8 = this->fields.frontobject;
  if ( !v8 )
    goto LABEL_19;
  v8 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                     v8,
                                     includeInactive,
                                     (const MethodInfo_1D4B288 *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v5 )
    goto LABEL_19;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v5,
    (System_Collections_Generic_IEnumerable_T__o *)v8,
    (const MethodInfo_30258D8 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v5,
                                      (const MethodInfo_30277D4 *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  System_String_o *v6; // x1
  System_String_o *v7; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v8; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v11; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x19
  int32_t v13; // [xsp+Ch] [xbp-24h] BYREF

  v13 = tp;
  if ( (byte_435422E & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_16945/*"bg"*/);
    this = (BattlePerformanceBg_o *)sub_B70694(&StringLiteral_16948/*"bg0"*/);
    byte_435422E = 1;
  }
  if ( tp < 1 )
  {
    if ( !data )
      sub_B7076C(this, data);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16945/*"bg"*/,
                                                                                 (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           Object_WarBoardWaitTimeSetting,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16948/*"bg0"*/,
                                                        (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v12,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v6 = System_Int32__ToString((int32_t)&v13, 0LL);
    v7 = System_String__Concat_44758168((System_String_o *)StringLiteral_16945/*"bg"*/, v6, 0LL);
    if ( !data )
      sub_B7076C(v7, v7);
    v8 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                     data,
                                                     v7,
                                                     (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v8,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v11 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16945/*"bg"*/,
                                                        (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v11,
                                           (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
}


System_String_array *__fastcall BattlePerformanceBg__getChangeBgList(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  return this->fields.debuglist;
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getFrontObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  void *v6; // x0
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  System_String_o *v9; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  BattlePerformanceBg_c *v11; // x0
  bool v12; // w8
  UnityEngine_GameObject_o *result; // x0
  int32_t v14; // [xsp+Ch] [xbp-24h] BYREF

  v14 = tp;
  if ( (byte_435422F & 1) == 0 )
  {
    sub_B70694(&Method_AssetData_GetObject_GameObject____69232720);
    sub_B70694(&BattlePerformanceBg_TypeInfo);
    sub_B70694(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_435422F = 1;
  }
  v6 = BattlePerformanceBg_TypeInfo;
  if ( tp > 0 )
  {
    if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
      v6 = BattlePerformanceBg_TypeInfo;
    }
    v7 = (System_String_o *)**((_QWORD **)v6 + 23);
    v8 = System_Int32__ToString((int32_t)&v14, 0LL);
    v6 = System_String__Concat_44758168(v7, v8, 0LL);
    v9 = (System_String_o *)v6;
    if ( data )
      goto LABEL_8;
LABEL_28:
    sub_B7076C(v6, v9);
  }
  if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v6 = BattlePerformanceBg_TypeInfo;
  }
  v9 = (System_String_o *)**((_QWORD **)v6 + 23);
  if ( !data )
    goto LABEL_28;
LABEL_8:
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v9,
                                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_19;
  v11 = BattlePerformanceBg_TypeInfo;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v11 = BattlePerformanceBg_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v11->static_fields->Frontfile,
                                                             (const MethodInfo_1BD6720 *)Method_AssetData_GetObject_GameObject____69232720);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v12 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( v12 )
  {
LABEL_19:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_1D58764 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


BattlePerformanceBg_SaveData_o *__fastcall BattlePerformanceBg__getSaveData(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  __int64 v6; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct BattlePerformanceBg_BgState_o *v14; // x8
  System_Int32_array **bgName; // x1
  struct BattlePerformanceBg_BgState_o *v16; // x8
  unsigned int Count; // w0
  System_Int32_array **v18; // x0
  _DWORD **v19; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  struct BattlePerformanceBg_BgState_o *v26; // x8
  unsigned int v27; // w25
  System_Int32_array **value; // x23
  System_Int32_array **key; // x24
  __int64 v30; // x22
  __int64 v31; // x0
  __int64 v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7
  __int64 v45; // x0
  __int64 v46; // x1
  _DWORD *v47; // x23
  __int64 v48; // x0
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  _DWORD *v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v59; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v60; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_435421F & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_B70694(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__);
    sub_B70694(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__);
    sub_B70694(&BattlePerformanceBg_SaveData_TypeInfo);
    byte_435421F = 1;
  }
  memset(&v60, 0, sizeof(v60));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v4 = sub_B70764(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v4, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( !nowBgState )
    goto LABEL_24;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)nowBgState->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                   compDictionary,
                                                                                                   (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  if ( (int)compDictionary < 1 )
  {
LABEL_24:
    if ( v4 )
      goto LABEL_25;
LABEL_26:
    sub_B7076C(compDictionary, v6);
  }
  v14 = this->fields.nowBgState;
  if ( !v14 )
    goto LABEL_26;
  if ( !v4 )
    goto LABEL_26;
  bgName = (System_Int32_array **)v14->fields.bgName;
  *(_QWORD *)(v4 + 16) = bgName;
  sub_B70630((BattleServantConfConponent_o *)(v4 + 16), bgName, v8, v9, v10, v11, v12, v13);
  v16 = this->fields.nowBgState;
  if ( !v16 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v16->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            compDictionary,
            (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  v18 = (System_Int32_array **)sub_B706AC(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count);
  *(_QWORD *)(v4 + 24) = v18;
  v19 = (_DWORD **)(v4 + 24);
  sub_B70630((BattleServantConfConponent_o *)(v4 + 24), v18, v20, v21, v22, v23, v24, v25);
  v26 = this->fields.nowBgState;
  if ( !v26 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v26->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v59,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)compDictionary,
    (const MethodInfo_2F4FFC4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
  v60 = v59;
  v27 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v60,
            (const MethodInfo_277B4A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
  {
    key = (System_Int32_array **)v60.fields.current.fields.key;
    value = (System_Int32_array **)v60.fields.current.fields.value;
    v30 = sub_B70764(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v30, 0LL);
    if ( !v30 )
      sub_B7076C(v31, v32);
    *(_QWORD *)(v30 + 16) = key;
    sub_B70630((BattleServantConfConponent_o *)(v30 + 16), key, v33, v34, v35, v36, v37, v38);
    *(_QWORD *)(v30 + 24) = value;
    sub_B70630((BattleServantConfConponent_o *)(v30 + 24), value, v39, v40, v41, v42, v43, v44);
    v47 = *v19;
    if ( !*v19 )
      sub_B7076C(v45, v46);
    v48 = sub_B70754(v30, *(_QWORD *)(*(_QWORD *)v47 + 64LL));
    if ( !v48 )
    {
      v56 = sub_B7078C(0LL);
      sub_B70738(v56, 0LL);
    }
    if ( v27 >= v47[6] )
    {
      v57 = sub_B70798(v48);
      sub_B70738(v57, 0LL);
    }
    v55 = &v47[2 * v27];
    *((_QWORD *)v55 + 4) = v30;
    sub_B70630((BattleServantConfConponent_o *)(v55 + 8), (System_Int32_array **)v30, v49, v50, v51, v52, v53, v54);
    ++v27;
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v60,
    (const MethodInfo_277B608 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
LABEL_25:
  result = (BattlePerformanceBg_SaveData_o *)v4;
  *(_DWORD *)(v4 + 32) = this->fields.loadbgno;
  *(_DWORD *)(v4 + 36) = this->fields.loadbgType;
  return result;
}


bool __fastcall BattlePerformanceBg__get_IsBusy(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.IsLoading;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgNo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno;
}


int32_t __fastcall BattlePerformanceBg__get_LoadBgType(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgType;
}


bool __fastcall BattlePerformanceBg__isReload(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  return this->fields.loadbgno != -1 && this->fields.loadbgType != -1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__loadBg(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        const MethodInfo *method)
{
  struct System_String_o *AssetPass; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  AssetLoader_LoadEndDataHandler_o *v14; // x21

  if ( (byte_4354226 & 1) == 0 )
  {
    sub_B70694(&AssetManager_TypeInfo);
    sub_B70694(&Method_BattlePerformanceBg_endloadBg__);
    sub_B70694(&BattlePerformanceBg_TypeInfo);
    sub_B70694(&AssetLoader_LoadEndDataHandler_TypeInfo);
    byte_4354226 = 1;
  }
  this->fields.IsLoading = 1;
  if ( !no )
    goto LABEL_11;
  this->fields.loadbgno = no;
  this->fields.loadbgType = tp;
  this->fields.newBgId = no;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
  }
  AssetPass = BattlePerformanceBg__GetAssetPass(no, *(const MethodInfo **)&no);
  this->fields.initLoadedBgPath = AssetPass;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)AssetPass,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_B70764(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v14, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPass, v14, 1, 0LL) )
LABEL_11:
    this->fields.IsLoading = 0;
}


void __fastcall BattlePerformanceBg__playAnimation(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        System_String_o *animName,
        float timeline,
        const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v9; // x1
  int max_length; // w8
  BattleBgComponent_array *v11; // x21
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  BattleBgComponent_o *v14; // x22
  __int64 v15; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, (const MethodInfo *)animName);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v11 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v15 = sub_B70798(BattleBgComponents);
        sub_B70738(v15, 0LL);
      }
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBgComponent_o *)v13[4];
      if ( !v14 )
        break;
      BattleBgComponents = (BattleBgComponent_array *)BattleBgComponent__checkKey(
                                                        (BattleBgComponent_o *)v13[4],
                                                        key,
                                                        0LL);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
        BattleBgComponent__playAnimation(v14, animName, timeline, 0LL);
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_11:
    sub_B7076C(BattleBgComponents, v9);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4354236 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_21850/*"playerfield"*/);
    sub_B70694(&StringLiteral_2845/*"BattleIn"*/);
    byte_4354236 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21850/*"playerfield"*/,
    (System_String_o *)StringLiteral_2845/*"BattleIn"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4354235 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_2847/*"BattleOut"*/);
    sub_B70694(&StringLiteral_21850/*"playerfield"*/);
    byte_4354235 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21850/*"playerfield"*/,
    (System_String_o *)StringLiteral_2847/*"BattleOut"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playLoadEndAnimation(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBgComponent_array *v6; // x19
  unsigned int v7; // w20
  __int64 v8; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v6 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v8 = sub_B70798(BattleBgComponents);
        sub_B70738(v8, 0LL);
      }
      BattleBgComponents = (BattleBgComponent_array *)v6->m_Items[v7];
      if ( !BattleBgComponents )
        break;
      if ( LOBYTE(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__playLoadEndAnimation((BattleBgComponent_o *)BattleBgComponents, 0LL);
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_B7076C(BattleBgComponents, v4);
  }
}


void __fastcall BattlePerformanceBg__reloadBg(
        BattlePerformanceBg_o *this,
        int32_t *outNo,
        int32_t *outType,
        const MethodInfo *method)
{
  *outNo = this->fields.loadbgno;
  *outType = this->fields.loadbgType;
  BattlePerformanceBg__loadBg(this, this->fields.loadbgno, this->fields.loadbgType, method);
}


BattlePerformanceBg_BgState_o *__fastcall BattlePerformanceBg__saveHistoryBgState(
        BattlePerformanceBg_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v6; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v10; // x8
  struct BattlePerformanceBg_BgState_o *v11; // x8
  struct BattlePerformanceBg_BgState_o *v12; // x2
  __int64 v13; // x21

  if ( (byte_4354233 & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceBg_BgState_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_4354233 = 1;
  }
  if ( this->fields.nowBgState )
  {
    bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
      goto LABEL_12;
    frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL) )
    {
LABEL_12:
      nowBgState = this->fields.nowBgState;
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v6);
      if ( !nowBgState )
        goto LABEL_32;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v10 = this->fields.nowBgState;
      if ( !v10 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                        (System_Xml_XmlQualifiedName_o *)v10->fields.bgName,
                                                        (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v11 = this->fields.nowBgState;
        if ( !v11 )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                          (System_Xml_XmlQualifiedName_o *)v11->fields.bgName,
                                                          (const MethodInfo_2F51454 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v12 = this->fields.nowBgState;
      if ( !v12 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
        (System_Xml_XmlQualifiedName_o *)v12->fields.bgName,
        (System_Xml_Schema_XmlSchemaObject_o *)v12,
        (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0LL;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
LABEL_32:
    sub_B7076C(BattleBgComponents, inName);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          (System_Xml_XmlQualifiedName_o *)inName,
          (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    v13 = sub_B70764(BattlePerformanceBg_BgState_TypeInfo);
    BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v13, inName, 0LL);
    if ( v13 )
    {
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( BattleBgComponents )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          *(System_Xml_XmlQualifiedName_o **)(v13 + 16),
          (System_Xml_Schema_XmlSchemaObject_o *)v13,
          (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
        return (BattlePerformanceBg_BgState_o *)v13;
      }
    }
    goto LABEL_32;
  }
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
    goto LABEL_32;
  return (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                                            (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)BattleBgComponents,
                                            (System_Type_o *)inName,
                                            (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
}


void __fastcall BattlePerformanceBg__setCutNodeNoble(BattlePerformanceBg_o *this, bool flg, const MethodInfo *method)
{
  BattleBgComponent_array *BattleBgComponents; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleBgComponent_array *v7; // x19
  unsigned int v8; // w21
  bool v9; // w20
  __int64 v10; // x0

  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 1, method);
  if ( !BattleBgComponents )
    goto LABEL_11;
  max_length = BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = flg;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v10 = sub_B70798(BattleBgComponents);
        sub_B70738(v10, 0LL);
      }
      BattleBgComponents = (BattleBgComponent_array *)v7->m_Items[v8];
      if ( !BattleBgComponents )
        break;
      if ( BYTE1(BattleBgComponents->m_Items[1]) )
        BattleBgComponent__setCutNodeNoble((BattleBgComponent_o *)BattleBgComponents, v9, 0LL);
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_11:
    sub_B7076C(BattleBgComponents, v5);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v6; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v17; // x21
  int max_length; // w8
  unsigned int v19; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v20; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  __int64 v22; // x0

  if ( (byte_4354220 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    byte_4354220 = 1;
  }
  if ( saveData )
  {
    this->fields.loadbgno = saveData->fields.bgNo;
    this->fields.loadbgType = saveData->fields.bgTp;
    compSaveDataList = saveData->fields.compSaveDataList;
    if ( compSaveDataList )
    {
      if ( *(_QWORD *)&compSaveDataList->max_length )
      {
        v6 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, method);
        p_nowBgState = &this->fields.nowBgState;
        this->fields.nowBgState = v6;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.nowBgState,
          (System_Int32_array **)v6,
          v8,
          v9,
          v10,
          v11,
          v12,
          v13);
        v17 = saveData->fields.compSaveDataList;
        if ( !v17 )
          goto LABEL_21;
        max_length = v17->max_length;
        if ( max_length >= 1 )
        {
          v19 = 0;
          while ( 1 )
          {
            if ( v19 >= max_length )
            {
              v22 = sub_B70798(compDictionary);
              sub_B70738(v22, 0LL);
            }
            if ( !*p_nowBgState )
              break;
            v20 = v17->m_Items[v19];
            if ( !v20 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(compDictionary, (System_Xml_XmlQualifiedName_o *)v20->fields.bgCompName, (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                compDictionary,
                (System_Xml_XmlQualifiedName_o *)v20->fields.bgCompName,
                (System_Xml_Schema_XmlSchemaObject_o *)v20->fields.bgCompData,
                (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v17->max_length;
            if ( (int)++v19 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_B7076C(compDictionary, v15);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v16);
        if ( !nowBgState )
          goto LABEL_21;
        BattlePerformanceBg_BgState__loadSaveData(
          nowBgState,
          (BattleBgComponent_array *)compDictionary,
          this->fields.actionCamera,
          0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg_BgInfo___ctor(
        BattlePerformanceBg_BgInfo_o *this,
        int32_t No,
        int32_t tp,
        UnityEngine_Vector3_o pos,
        UnityEngine_Vector3_o rot,
        bool changeDirect,
        bool parentCamera,
        System_Action_o *callback,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s9
  float x; // s10
  float v16; // s11
  float v17; // s12
  float v18; // s13
  BattlePerformanceBg_BgInfo_o *v20; // x24
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  v20 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v20->fields.callback = callback;
  v20 = (BattlePerformanceBg_BgInfo_o *)((char *)v20 + 56);
  LODWORD(v20[-1].fields.pos.fields.x) = No;
  LODWORD(v20[-1].fields.pos.fields.y) = tp;
  v20[-1].fields.pos.fields.z = v18;
  v20[-1].fields.rot.fields.x = v17;
  v20[-1].fields.rot.fields.y = v16;
  v20[-1].fields.rot.fields.z = x;
  *(float *)&v20[-1].fields.changeDirect = y;
  *(float *)(&v20[-1].fields.parentCamera + 3) = z;
  LOBYTE(v20[-1].fields.callback) = changeDirect;
  BYTE1(v20[-1].fields.callback) = parentCamera;
  sub_B70630((BattleServantConfConponent_o *)v20, (System_Int32_array **)callback, v21, v22, v23, v24, v25, v26);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_Fields *p_fields; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7

  if ( (byte_434F7E6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
    byte_434F7E6 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  p_fields = &this->fields;
  sub_B70630((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)inName, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B70764(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v12,
    (const MethodInfo_2F4EE38 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  p_fields->compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&p_fields->compDictionary,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattlePerformanceBg_BgState_o *v10; // x21
  signed int max_length; // w8
  unsigned int v12; // w24
  BattleBgComponent_o *v13; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v15; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v17; // x0

  v10 = this;
  if ( (byte_434F7E8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
    this = (BattlePerformanceBg_BgState_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
    byte_434F7E8 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
      {
        v17 = sub_B70798(this);
        sub_B70738(v17, 0LL);
      }
      v13 = list->m_Items[v12];
      if ( !v13 )
        break;
      v13[1].klass = (BattleBgComponent_c *)actionCamera;
      sub_B70630(
        (BattleServantConfConponent_o *)&v13[1],
        (System_Int32_array **)actionCamera,
        (System_String_array **)actionCamera,
        (System_String_array **)method,
        v4,
        v5,
        v6,
        v7);
      if ( LOBYTE(v13->fields.motionKey) )
      {
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                  compDictionary,
                                                  (System_Xml_XmlQualifiedName_o *)this,
                                                  (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v15 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v10->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v13, 0LL);
          if ( !v15 )
            break;
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v15,
                   (System_Type_o *)this,
                   (const MethodInfo_2F4F924 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v13, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_15:
    sub_B7076C(this, list);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v7; // w24
  BattleBgComponent_o *v8; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v9; // x21
  System_String_o *name; // x23
  __int64 v11; // x0

  if ( (byte_434F7E7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
    byte_434F7E7 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    compDictionary,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
      {
        v11 = sub_B70798(compDictionary);
        sub_B70738(v11, 0LL);
      }
      v8 = list->m_Items[v7];
      if ( !v8 )
        break;
      if ( LOBYTE(v8->fields.motionKey) )
      {
        v9 = this->fields.compDictionary;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v8, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponent__getSaveData(v8, 0LL);
        if ( !v9 )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v9,
          (System_Xml_XmlQualifiedName_o *)name,
          (System_Xml_Schema_XmlSchemaObject_o *)compDictionary,
          (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_B7076C(compDictionary, list);
  }
}


void __fastcall BattlePerformanceBg_ChangedBgArgs___ctor(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t bgNo,
        int32_t bgType,
        bool useParentCamera,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BgNo_k__BackingField = bgNo;
  this->fields._UseParentCamera_k__BackingField = useParentCamera;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgNo_k__BackingField;
}


int32_t __fastcall BattlePerformanceBg_ChangedBgArgs__get_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._BgType_k__BackingField;
}


bool __fastcall BattlePerformanceBg_ChangedBgArgs__get_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._UseParentCamera_k__BackingField;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgNo(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgNo_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_BgType(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._BgType_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_ChangedBgArgs__set_UseParentCamera(
        BattlePerformanceBg_ChangedBgArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._UseParentCamera_k__BackingField = value;
}


void __fastcall BattlePerformanceBg_SaveData___ctor(BattlePerformanceBg_SaveData_o *this, const MethodInfo *method)
{
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_434F7E9 & 1) == 0 )
  {
    sub_B70694(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo);
    sub_B70694(&string_TypeInfo);
    byte_434F7E9 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)Empty, v5, v6, v7, v8, v9, v10);
  v11 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_B706AC(
                                                                    BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                    0LL);
  this->fields.compSaveDataList = v11;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.compSaveDataList,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


void __fastcall BattlePerformanceBg_SaveData_CompSaveData___ctor(
        BattlePerformanceBg_SaveData_CompSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___ctor(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass46_0___LoadBgSpShadowEffect_b__0(
        BattlePerformanceBg___c__DisplayClass46_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.finishCallback, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___ctor(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass47_0___endloadBg_b__0(
        BattlePerformanceBg___c__DisplayClass47_0_o *this,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B7076C(0LL, method);
  BattlePerformanceBg__endloadBgAll(_4__this, this->fields.data, 0LL);
}


void __fastcall BattlePerformanceBg___c__DisplayClass67_0___ctor(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattlePerformanceBg___c__DisplayClass67_0___FindComponentByKey_b__0(
        BattlePerformanceBg___c__DisplayClass67_0_o *this,
        BattleBgComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B7076C(this, 0LL);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}