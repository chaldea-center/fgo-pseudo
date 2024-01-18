void __fastcall BattlePerformanceBg___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v8; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v10; // x1

  if ( (byte_4189DAE & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceBg_TypeInfo, v1);
    sub_B2C35C(&StringLiteral_18915/*"front"*/, v8);
    byte_4189DAE = 1;
  }
  static_fields = (BattleServantConfConponent_o *)BattlePerformanceBg_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_18915/*"front"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_18915/*"front"*/;
  sub_B2C2F8(static_fields, v10, v2, v3, v4, v5, v6, v7);
}


void __fastcall BattlePerformanceBg___ctor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v9; // x20
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v31; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x20
  System_String_array **v39; // x2
  System_String_array **v40; // x3
  System_Boolean_array **v41; // x4
  System_Int32_array **v42; // x5
  System_Int32_array *v43; // x6
  System_Int32_array *v44; // x7

  if ( (byte_4189DAD & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v5);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v6);
    sub_B2C35C(&System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo, v7);
    sub_B2C35C(&string_TypeInfo, v8);
    byte_4189DAD = 1;
  }
  *(_QWORD *)&this->fields.loadbgno = -1LL;
  v9 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v9,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.loadedChangeBgList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadedChangeBgList,
    (System_Int32_array **)v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.initLoadedBgPath = static_fields->Empty;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)Empty,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v24,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  this->fields.bgSpShadowList = (struct System_Collections_Generic_List_string__o *)v24;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgSpShadowList,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  v31 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v31,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState___ctor__);
  this->fields.historyBgState = (struct System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__o *)v31;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.historyBgState,
    (System_Int32_array **)v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattlePerformanceBg_BgInfo__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo___ctor__);
  this->fields.bgInfoList = (struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *)v38;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgInfoList,
    (System_Int32_array **)v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
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

  if ( (byte_4189DAB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo, callback);
    byte_4189DAB = 1;
  }
  onLoadBgFinished = (System_Delegate_o *)this->fields.onLoadBgFinished;
  p_onLoadBgFinished = (BattleServantConfConponent_o *)&this->fields.onLoadBgFinished;
  v7 = (System_Int32_array **)System_Delegate__Combine(onLoadBgFinished, (System_Delegate_o *)callback, 0LL);
  if ( v7 && *v7 != (System_Int32_array *)System_Action_BattlePerformanceBg_ChangedBgArgs__TypeInfo )
  {
    sub_B2C728(v7);
    BattlePerformanceBg__ResetBgAnimation(v14, v15);
  }
  else
  {
    p_onLoadBgFinished->klass = (BattleServantConfConponent_c *)v7;
    sub_B2C2F8(p_onLoadBgFinished, v7, v8, v9, v10, v11, v12, v13);
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
  __int64 v21; // x1
  BattlePerformanceBg_BgInfo_o *v22; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v23; // x25
  __int64 v24; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x0
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v15 = pos.fields.z;
  v16 = pos.fields.y;
  v17 = pos.fields.x;
  if ( (byte_4189D9E & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceBg_BgInfo_TypeInfo, *(_QWORD *)&No);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__, v21);
    byte_4189D9E = 1;
  }
  v22 = (BattlePerformanceBg_BgInfo_o *)sub_B2C42C(BattlePerformanceBg_BgInfo_TypeInfo);
  v26.fields.x = v17;
  v26.fields.y = v16;
  v26.fields.z = v15;
  v27.fields.x = x;
  v27.fields.y = y;
  v27.fields.z = z;
  v23 = (EventMissionProgressRequest_Argument_ProgressData_o *)v22;
  BattlePerformanceBg_BgInfo___ctor(v22, No, tp, v26, v27, changeDirect, parentCamera, callback, 0LL);
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B2C434(0LL, v24);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)bgInfoList,
    v23,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__Add__);
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
    sub_B2C434(this, 0LL);
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onLoadBgFinished, 0LL, v2, v3, v4, v5, v6, v7);
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
    sub_B2C434(this, data);
  bgRoot = (int)this->fields.bgRoot;
  if ( bgRoot >= 1 )
  {
    for ( i = 0; i < bgRoot; ++i )
    {
      if ( i >= (unsigned int)bgRoot )
      {
        v5 = sub_B2C460(this);
        sub_B2C400(v5, 0LL);
      }
    }
  }
}


bool __fastcall BattlePerformanceBg__ExistsLoadBgInfo(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  BattlePerformanceBg_o *v2; // x19
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x8

  v2 = this;
  if ( (byte_4189D9F & 1) == 0 )
  {
    this = (BattlePerformanceBg_o *)sub_B2C35C(
                                      &Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Count__,
                                      method);
    byte_4189D9F = 1;
  }
  bgInfoList = v2->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B2C434(this, method);
  return bgInfoList->fields._size > 0;
}


BattlePerformanceBg_BgInfo_o *__fastcall BattlePerformanceBg__FetchBgInfo(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  _BOOL8 exists; // x0
  __int64 v5; // x1
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *bgInfoList; // x20
  struct System_Collections_Generic_List_BattlePerformanceBg_BgInfo__o *v7; // x0
  BattlePerformanceBg_BgInfo_o *v8; // x19

  if ( (byte_4189DA0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__get_Item__, v3);
    byte_4189DA0 = 1;
  }
  exists = BattlePerformanceBg__ExistsLoadBgInfo(this, method);
  if ( !exists )
    return 0LL;
  bgInfoList = this->fields.bgInfoList;
  if ( !bgInfoList )
    sub_B2C434(exists, v5);
  v7 = this->fields.bgInfoList;
  if ( !bgInfoList->fields._size )
    System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
  v8 = bgInfoList->fields._items->m_Items[0];
  System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)v7,
    0,
    (const MethodInfo_2EF6150 *)Method_System_Collections_Generic_List_BattlePerformanceBg_BgInfo__RemoveAt__);
  return v8;
}


BattleBgComponent_o *__fastcall BattlePerformanceBg__FindComponentByKey(
        BattlePerformanceBg_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  const MethodInfo *v18; // x2
  BattleBgComponent_array *BattleBgComponents; // x19
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v20; // x20

  if ( (byte_4189DA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_BasicHelper_Find_BattleBgComponent___, key);
    sub_B2C35C(&Method_System_Func_BattleBgComponent__bool___ctor__, v5);
    sub_B2C35C(&System_Func_BattleBgComponent__bool__TypeInfo, v6);
    sub_B2C35C(&Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__, v7);
    sub_B2C35C(&BattlePerformanceBg___c__DisplayClass67_0_TypeInfo, v8);
    byte_4189DA8 = 1;
  }
  v9 = sub_B2C42C(BattlePerformanceBg___c__DisplayClass67_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass67_0___ctor((BattlePerformanceBg___c__DisplayClass67_0_o *)v9, 0LL);
  if ( !v9 )
    sub_B2C434(v10, v11);
  *(_QWORD *)(v9 + 16) = key;
  sub_B2C2F8((BattleServantConfConponent_o *)(v9 + 16), (System_Int32_array **)key, v12, v13, v14, v15, v16, v17);
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v18);
  v20 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B2C42C(System_Func_BattleBgComponent__bool__TypeInfo);
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
    v20,
    (Il2CppObject *)v9,
    Method_BattlePerformanceBg___c__DisplayClass67_0__FindComponentByKey_b__0__,
    (const MethodInfo_2711C04 *)Method_System_Func_BattleBgComponent__bool___ctor__);
  return (BattleBgComponent_o *)BasicHelper__Find_USFGOActorBattleActionEventConditional_OverwriteParamCondition_(
                                  (WellFired_USFGOActorBattleActionEventConditional_OverwriteParamCondition_array *)BattleBgComponents,
                                  (System_Func_T__bool__o *)v20,
                                  (const MethodInfo_1726BF0 *)Method_BasicHelper_Find_BattleBgComponent___);
}


System_String_o *__fastcall BattlePerformanceBg__GetAssetPass(int32_t bgNo, const MethodInfo *method)
{
  System_String_o *v2; // x0
  int32_t v4; // [xsp+Ch] [xbp-4h] BYREF

  v4 = bgNo;
  if ( (byte_4189D92 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2803/*"Bg/"*/, method);
    byte_4189D92 = 1;
  }
  v2 = System_Int32__ToString((int32_t)&v4, 0LL);
  return System_String__Concat_44305532((System_String_o *)StringLiteral_2803/*"Bg/"*/, v2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Texture2D_o *__fastcall BattlePerformanceBg__GetShadowTexture(
        BattlePerformanceBg_o *this,
        int32_t shadowId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  AssetData_o *BgAssetData; // x19
  System_String_o *v6; // x0
  System_String_o *v7; // x0
  int32_t v9; // [xsp+Ch] [xbp-14h] BYREF

  v9 = shadowId;
  if ( (byte_4189DA6 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_Texture2D____67377648, *(_QWORD *)&shadowId);
    sub_B2C35C(&StringLiteral_22092/*"shadow_"*/, v4);
    byte_4189DA6 = 1;
  }
  BgAssetData = this->fields.BgAssetData;
  if ( !BgAssetData )
    return 0LL;
  v6 = System_Int32__ToString((int32_t)&v9, 0LL);
  v7 = System_String__Concat_44305532((System_String_o *)StringLiteral_22092/*"shadow_"*/, v6, 0LL);
  return (UnityEngine_Texture2D_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                      BgAssetData,
                                      v7,
                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_Texture2D____67377648);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__LoadBgSpShadowEffect(
        BattlePerformanceBg_o *this,
        int32_t no,
        int32_t tp,
        System_Action_o *finishCallback,
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
  __int64 v17; // x20
  BattleBgMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v19; // x1
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t BgSpecialShadowEffectId; // w0
  int32_t v27; // w21
  System_String_o *v28; // x19
  AssetLoader_LoadEndDataHandler_o *v29; // x21
  System_String_o *effectPath; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189D9B & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B2C35C(&BattleEffectUtility_TypeInfo, v9);
    sub_B2C35C(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_B2C35C(&DataManager_TypeInfo, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v14);
    sub_B2C35C(&Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__, v15);
    sub_B2C35C(&BattlePerformanceBg___c__DisplayClass46_0_TypeInfo, v16);
    byte_4189D9B = 1;
  }
  effectPath = 0LL;
  v17 = sub_B2C42C(BattlePerformanceBg___c__DisplayClass46_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass46_0___ctor((BattlePerformanceBg___c__DisplayClass46_0_o *)v17, 0LL);
  if ( !v17 )
    goto LABEL_22;
  *(_QWORD *)(v17 + 16) = finishCallback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v17 + 16),
    (System_Int32_array **)finishCallback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  BgSpecialShadowEffectId = BattleBgMaster__GetBgSpecialShadowEffectId(Master_WarQuestSelectionMaster, no, tp, 0, 0LL);
  if ( BgSpecialShadowEffectId <= 0 )
    goto LABEL_15;
  v27 = BgSpecialShadowEffectId;
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  if ( !BattleEffectUtility__TryGetBattleCommonEffectPath(&effectPath, v27, 0LL) )
    goto LABEL_15;
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_22;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)Master_WarQuestSelectionMaster,
         (WarBoardManager_TaskList_o *)effectPath,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
LABEL_15:
    ActionExtensions__Call(*(System_Action_o **)(v17 + 16), 0LL);
    return;
  }
  Master_WarQuestSelectionMaster = (BattleBgMaster_o *)this->fields.bgSpShadowList;
  if ( !Master_WarQuestSelectionMaster )
LABEL_22:
    sub_B2C434(Master_WarQuestSelectionMaster, v19);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)Master_WarQuestSelectionMaster,
    (EventMissionProgressRequest_Argument_ProgressData_o *)effectPath,
    (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
  v28 = effectPath;
  v29 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v29,
    (Il2CppObject *)v17,
    Method_BattlePerformanceBg___c__DisplayClass46_0__LoadBgSpShadowEffect_b__0__,
    0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(v28, v29, 1, 0LL);
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

  if ( (byte_4189D95 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189D95 = 1;
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
      UnityEngine_Object__Destroy_35314896(v8, 0LL);
      *p_bgobject = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.bgobject, 0LL, v9, v10, v11, v12, v13, v14);
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
        sub_B2C434(0LL, v16);
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
      UnityEngine_Object__Destroy_35314896(v21, 0LL);
      *p_frontobject = 0LL;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.frontobject, 0LL, v22, v23, v24, v25, v26, v27);
    }
    BattlePerformanceBg__ReleaseBg_28999572(this, this->fields.nowBgId, v20);
  }
}


void __fastcall BattlePerformanceBg__ReleaseBgSpShadowEffect(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *bgSpShadowList; // x0
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189D99 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4189D99 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
    goto LABEL_12;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v10,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)bgSpShadowList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v10,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v10.fields.current;
    if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AssetManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    }
    AssetManager__releaseAssetStorage((System_String_o *)current, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v10,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  bgSpShadowList = this->fields.bgSpShadowList;
  if ( !bgSpShadowList )
LABEL_12:
    sub_B2C434(bgSpShadowList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)bgSpShadowList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__ReleaseBg_28999572(
        BattlePerformanceBg_o *this,
        int32_t no,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_WarBoardManager_TaskList__o *AssetPass; // x0
  __int64 v9; // x1
  WarBoardManager_TaskList_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_4189D98 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B2C35C(&BattlePerformanceBg_TypeInfo, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Remove__, v7);
    byte_4189D98 = 1;
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
  v10 = (WarBoardManager_TaskList_o *)AssetPass;
  if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
         (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
         (WarBoardManager_TaskList_o *)AssetPass,
         (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    AssetPass = (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList;
    if ( AssetPass )
    {
      System_Collections_Generic_List_WarBoardManager_TaskList___Remove(
        AssetPass,
        v10,
        (const MethodInfo_2EF5E0C *)Method_System_Collections_Generic_List_string__Remove__);
      goto LABEL_10;
    }
LABEL_14:
    sub_B2C434(AssetPass, v9);
  }
LABEL_10:
  this->fields.BgAssetData = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.BgAssetData, 0LL, v11, v12, v13, v14, v15, v16);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage((System_String_o *)v10, 0LL);
}


void __fastcall BattlePerformanceBg__ReleaseChangeBgAssets(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_string__o *loadedChangeBgList; // x0
  Il2CppObject *current; // x20
  AssetData_o *AssetStorage; // x20
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4189D97 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Clear__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__GetEnumerator__, v7);
    byte_4189D97 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
    goto LABEL_16;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v11,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)loadedChangeBgList,
    (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v11,
            (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    current = v11.fields.current;
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
      AssetManager__releaseAsset_30152684(AssetStorage, 0LL);
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v11,
    (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  loadedChangeBgList = this->fields.loadedChangeBgList;
  if ( !loadedChangeBgList )
LABEL_16:
    sub_B2C434(loadedChangeBgList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)loadedChangeBgList,
    (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_string__Clear__);
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

  if ( (byte_4189DAC & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Object_TypeInfo, method);
    byte_4189DAC = 1;
  }
  BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v2);
  if ( !BattleBgComponents )
LABEL_16:
    sub_B2C434(BattleBgComponents, v5);
  v6 = *(_QWORD *)&BattleBgComponents->max_length;
  v7 = BattleBgComponents;
  if ( (int)v6 >= 1 )
  {
    v8 = 0LL;
    do
    {
      if ( v8 >= (unsigned int)v6 )
      {
        v10 = sub_B2C460(BattleBgComponents);
        sub_B2C400(v10, 0LL);
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
  System_Action_o **p_EndCallback; // x25
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 v35; // x0
  __int64 v36; // x1
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Object_array *v43; // x20
  __int64 v44; // x0
  System_Int32_array **v45; // x1
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  System_Int32_array **v52; // x21
  System_String_array **v53; // x2
  System_String_array **v54; // x3
  System_Boolean_array **v55; // x4
  System_Int32_array **v56; // x5
  System_Int32_array *v57; // x6
  System_Int32_array *v58; // x7
  System_Int32_array **v59; // x1
  System_String_array **v60; // x2
  System_String_array **v61; // x3
  System_Boolean_array **v62; // x4
  System_Int32_array **v63; // x5
  System_Int32_array *v64; // x6
  System_Int32_array *v65; // x7
  System_Int32_array **v66; // x21
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  System_Int32_array **v73; // x1
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Int32_array **v80; // x21
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
  System_String_array **v102; // x2
  System_String_array **v103; // x3
  System_Boolean_array **v104; // x4
  System_Int32_array **v105; // x5
  System_Int32_array *v106; // x6
  System_Int32_array *v107; // x7
  System_Int32_array **v108; // x1
  System_Collections_Hashtable_o *v109; // x0
  __int64 v110; // x0
  __int64 v111; // x0
  int v112; // [xsp+Ch] [xbp-94h] BYREF
  UnityEngine_Color_o black; // [xsp+10h] [xbp-90h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+20h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v115; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v116; // 0:s3.4,4:s4.4,8:s5.4

  z = rot.fields.z;
  y = rot.fields.y;
  x = rot.fields.x;
  v16 = pos.fields.z;
  v17 = pos.fields.y;
  v18 = pos.fields.x;
  if ( (byte_4189DA1 & 1) == 0 )
  {
    sub_B2C35C(&UnityEngine_Color_TypeInfo, *(_QWORD *)&No);
    sub_B2C35C(&object___TypeInfo, v22);
    sub_B2C35C(&float_TypeInfo, v23);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v24);
    sub_B2C35C(&StringLiteral_18344/*"endChangeColor"*/, v25);
    sub_B2C35C(&StringLiteral_15060/*"UpdateColor"*/, v26);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v27);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v28);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v29);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v30);
    sub_B2C35C(&iTween_TypeInfo, v31);
    byte_4189DA1 = 1;
  }
  if ( this->fields.IsLoading )
  {
    v115.fields.x = v18;
    v115.fields.y = v17;
    v115.fields.z = v16;
    v116.fields.x = x;
    v116.fields.y = y;
    v116.fields.z = z;
    BattlePerformanceBg__AddChangeBgInfo(this, No, tp, v115, v116, changeDirect, parentCamera, callback, method);
    return;
  }
  this->fields.EndCallback = callback;
  p_EndCallback = &this->fields.EndCallback;
  this->fields.IsLoading = 1;
  sub_B2C2F8(
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
    BattlePerformanceBg__OnEndBgLoad(this, v33);
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
    BattlePerformanceBg__endChangeColor(this, v33);
    return;
  }
  this->fields.tmpcolor = UnityEngine_RenderSettings__get_ambientLight(0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  v35 = sub_B2C374(object___TypeInfo, 10LL);
  if ( !v35 )
    sub_B2C434(0LL, v36);
  v43 = (System_Object_array *)v35;
  v44 = StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_18914/*"from"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v45 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
  }
  else
  {
    v45 = 0LL;
  }
  if ( !v43->max_length )
    goto LABEL_61;
  v43->m_Items[0] = (Il2CppObject *)v45;
  sub_B2C2F8((BattleServantConfConponent_o *)v43->m_Items, v45, v37, v38, v39, v40, v41, v42);
  tmpcolor = this->fields.tmpcolor;
  v44 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v52 = (System_Int32_array **)v44;
  if ( v44 )
  {
    v44 = sub_B2C41C(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
  }
  if ( v43->max_length <= 1 )
    goto LABEL_61;
  v43->m_Items[1] = (Il2CppObject *)v52;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[1], v52, v46, v47, v48, v49, v50, v51);
  v44 = StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_22714/*"to"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v59 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
  }
  else
  {
    v59 = 0LL;
  }
  if ( v43->max_length <= 2 )
    goto LABEL_61;
  v43->m_Items[2] = (Il2CppObject *)v59;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[2], v59, v53, v54, v55, v56, v57, v58);
  black = UnityEngine_Color__get_black(0LL);
  v44 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v66 = (System_Int32_array **)v44;
  if ( v44 )
  {
    v44 = sub_B2C41C(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
  }
  if ( v43->max_length <= 3 )
    goto LABEL_61;
  v43->m_Items[3] = (Il2CppObject *)v66;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[3], v66, v60, v61, v62, v63, v64, v65);
  v44 = StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_22677/*"time"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v73 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v73 = 0LL;
  }
  if ( v43->max_length <= 4 )
    goto LABEL_61;
  v43->m_Items[4] = (Il2CppObject *)v73;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[4], v73, v67, v68, v69, v70, v71, v72);
  v112 = 1056964608;
  v44 = j_il2cpp_value_box_0(float_TypeInfo, &v112);
  v80 = (System_Int32_array **)v44;
  if ( v44 )
  {
    v44 = sub_B2C41C(v44, v43->obj.klass->_1.element_class);
    if ( !v44 )
    {
LABEL_62:
      v111 = sub_B2C454(v44);
      sub_B2C400(v111, 0LL);
    }
  }
  if ( v43->max_length <= 5 )
    goto LABEL_61;
  v43->m_Items[5] = (Il2CppObject *)v80;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[5], v80, v74, v75, v76, v77, v78, v79);
  v44 = StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v87 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v87 = 0LL;
  }
  if ( v43->max_length <= 6 )
    goto LABEL_61;
  v43->m_Items[6] = (Il2CppObject *)v87;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[6], v87, v81, v82, v83, v84, v85, v86);
  v44 = StringLiteral_15060/*"UpdateColor"*/;
  if ( StringLiteral_15060/*"UpdateColor"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_15060/*"UpdateColor"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v94 = (System_Int32_array **)StringLiteral_15060/*"UpdateColor"*/;
  }
  else
  {
    v94 = 0LL;
  }
  if ( v43->max_length <= 7 )
    goto LABEL_61;
  v43->m_Items[7] = (Il2CppObject *)v94;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[7], v94, v88, v89, v90, v91, v92, v93);
  v44 = StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v43->obj.klass->_1.element_class);
    if ( !v44 )
      goto LABEL_62;
    v101 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v101 = 0LL;
  }
  if ( v43->max_length <= 8 )
    goto LABEL_61;
  v43->m_Items[8] = (Il2CppObject *)v101;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[8], v101, v95, v96, v97, v98, v99, v100);
  v44 = StringLiteral_18344/*"endChangeColor"*/;
  if ( StringLiteral_18344/*"endChangeColor"*/ )
  {
    v44 = sub_B2C41C(StringLiteral_18344/*"endChangeColor"*/, v43->obj.klass->_1.element_class);
    if ( v44 )
    {
      v108 = (System_Int32_array **)StringLiteral_18344/*"endChangeColor"*/;
      goto LABEL_56;
    }
    goto LABEL_62;
  }
  v108 = 0LL;
LABEL_56:
  if ( v43->max_length <= 9 )
  {
LABEL_61:
    v110 = sub_B2C460(v44);
    sub_B2C400(v110, 0LL);
  }
  v43->m_Items[9] = (Il2CppObject *)v108;
  sub_B2C2F8((BattleServantConfConponent_o *)&v43->m_Items[9], v108, v102, v103, v104, v105, v106, v107);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v109 = iTween__Hash(v43, 0LL);
  iTween__ValueTo(gameObject, v109, 0LL);
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
  UnityEngine_GameObject_o *BgObject; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  struct BattlePerformanceBg_BgState_o *v26; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  BattlePerformanceBg_o *v33; // x0
  const MethodInfo *v34; // x3
  _BOOL4 parentCamera; // w22
  UnityEngine_GameObject_o *v36; // x21
  UnityEngine_Transform_o *transform; // x22
  int v38; // s0
  UnityEngine_Transform_o *v41; // x22
  int v42; // s0
  System_String_array **v45; // x2
  System_String_array **v46; // x3
  System_Boolean_array **v47; // x4
  System_Int32_array **v48; // x5
  System_Int32_array *v49; // x6
  System_Int32_array *v50; // x7
  BattlePerformanceBg_o *v51; // x0
  const MethodInfo *v52; // x3
  UnityEngine_Object_o *FrontObject; // x20
  const MethodInfo *v54; // x2
  UnityEngine_Transform_o *v55; // x21
  int v56; // s0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v69; // w23
  BattlePerformanceBg_ChangedBgArgs_o *v70; // x24
  const MethodInfo *v71; // x1
  System_Action_o *EndCallback; // x0
  UnityEngine_GameObject_o *gameObject; // x20
  System_String_array **v74; // x2
  System_String_array **v75; // x3
  System_Boolean_array **v76; // x4
  System_Int32_array **v77; // x5
  System_Int32_array *v78; // x6
  System_Int32_array *v79; // x7
  System_Object_array *v80; // x21
  __int64 v81; // x0
  System_Int32_array **v82; // x1
  System_String_array **v83; // x2
  System_String_array **v84; // x3
  System_Boolean_array **v85; // x4
  System_Int32_array **v86; // x5
  System_Int32_array *v87; // x6
  System_Int32_array *v88; // x7
  System_Int32_array **v89; // x22
  System_String_array **v90; // x2
  System_String_array **v91; // x3
  System_Boolean_array **v92; // x4
  System_Int32_array **v93; // x5
  System_Int32_array *v94; // x6
  System_Int32_array *v95; // x7
  System_Int32_array **v96; // x1
  System_String_array **v97; // x2
  System_String_array **v98; // x3
  System_Boolean_array **v99; // x4
  System_Int32_array **v100; // x5
  System_Int32_array *v101; // x6
  System_Int32_array *v102; // x7
  System_Int32_array **v103; // x19
  System_String_array **v104; // x2
  System_String_array **v105; // x3
  System_Boolean_array **v106; // x4
  System_Int32_array **v107; // x5
  System_Int32_array *v108; // x6
  System_Int32_array *v109; // x7
  System_Int32_array **v110; // x1
  System_String_array **v111; // x2
  System_String_array **v112; // x3
  System_Boolean_array **v113; // x4
  System_Int32_array **v114; // x5
  System_Int32_array *v115; // x6
  System_Int32_array *v116; // x7
  System_Int32_array **v117; // x19
  System_String_array **v118; // x2
  System_String_array **v119; // x3
  System_Boolean_array **v120; // x4
  System_Int32_array **v121; // x5
  System_Int32_array *v122; // x6
  System_Int32_array *v123; // x7
  System_Int32_array **v124; // x1
  System_String_array **v125; // x2
  System_String_array **v126; // x3
  System_Boolean_array **v127; // x4
  System_Int32_array **v128; // x5
  System_Int32_array *v129; // x6
  System_Int32_array *v130; // x7
  System_Int32_array **v131; // x1
  System_String_array **v132; // x2
  System_String_array **v133; // x3
  System_Boolean_array **v134; // x4
  System_Int32_array **v135; // x5
  System_Int32_array *v136; // x6
  System_Int32_array *v137; // x7
  System_Int32_array **v138; // x1
  System_String_array **v139; // x2
  System_String_array **v140; // x3
  System_Boolean_array **v141; // x4
  System_Int32_array **v142; // x5
  System_Int32_array *v143; // x6
  System_Int32_array *v144; // x7
  System_Int32_array **v145; // x1
  System_Collections_Hashtable_o *v146; // x0
  __int64 v147; // x0
  __int64 v148; // x0
  int v149; // [xsp+Ch] [xbp-54h] BYREF
  struct UnityEngine_Color_o tmpcolor; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_Color_o black; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Color_o white; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189DA4 & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_B2C35C(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v10);
    sub_B2C35C(&UnityEngine_Color_TypeInfo, v11);
    sub_B2C35C(&object___TypeInfo, v12);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v13);
    sub_B2C35C(&float_TypeInfo, v14);
    sub_B2C35C(&StringLiteral_18914/*"from"*/, v15);
    sub_B2C35C(&StringLiteral_18344/*"endChangeColor"*/, v16);
    sub_B2C35C(&StringLiteral_15060/*"UpdateColor"*/, v17);
    sub_B2C35C(&StringLiteral_22677/*"time"*/, v18);
    sub_B2C35C(&StringLiteral_21272/*"onupdate"*/, v19);
    sub_B2C35C(&StringLiteral_22714/*"to"*/, v20);
    sub_B2C35C(&StringLiteral_21263/*"oncomplete"*/, v21);
    sub_B2C35C(&iTween_TypeInfo, v22);
    byte_4189DA4 = 1;
  }
  this->fields.BgAssetData = data;
  sub_B2C2F8(
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
  v26 = BattlePerformanceBg__saveHistoryBgState(this, data->fields.name, v25);
  this->fields.nowBgState = v26;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.nowBgState,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  BgObject = BattlePerformanceBg__getBgObject(v33, data, this->fields.loadbgType, v34);
  if ( !BgObject )
    goto LABEL_78;
  parentCamera = this->fields.parentCamera;
  v36 = BgObject;
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BgObject, 0LL);
  if ( parentCamera )
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRootCamera, 0LL);
    BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)BgObject, this->fields.rot, 0LL);
  }
  else
  {
    if ( !BgObject )
      goto LABEL_78;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)BgObject, this->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v36, 0LL);
    *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_78;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v38, 0LL);
  }
  BgObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(v36, 0LL);
  if ( !BgObject )
    goto LABEL_78;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)BgObject, this->fields.pos, 0LL);
  v41 = UnityEngine_GameObject__get_transform(v36, 0LL);
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Vector3__get_one(0LL);
  if ( !v41 )
    goto LABEL_78;
  UnityEngine_Transform__set_localScale(v41, *(UnityEngine_Vector3_o *)&v42, 0LL);
  this->fields.bgobject = v36;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.bgobject,
    (System_Int32_array **)v36,
    v45,
    v46,
    v47,
    v48,
    v49,
    v50);
  FrontObject = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v51, data, this->fields.loadbgType, v52);
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
    v55 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)FrontObject, 0LL);
    *(UnityEngine_Vector3_o *)&v56 = UnityEngine_Vector3__get_one(0LL);
    if ( !v55 )
      goto LABEL_78;
    UnityEngine_Transform__set_localScale(v55, *(UnityEngine_Vector3_o *)&v56, 0LL);
    this->fields.frontobject = (struct UnityEngine_GameObject_o *)FrontObject;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.frontobject,
      (System_Int32_array **)FrontObject,
      v59,
      v60,
      v61,
      v62,
      v63,
      v64);
  }
  nowBgState = this->fields.nowBgState;
  BgObject = (UnityEngine_GameObject_o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v54);
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
  v69 = this->fields.parentCamera;
  v70 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B2C42C(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v70, loadbgno, loadbgType, v69, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v70,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
  if ( this->fields.changeDirect )
  {
    this->fields.fade = 0;
    white = UnityEngine_Color__get_white(0LL);
    UnityEngine_RenderSettings__set_ambientLight(white, 0LL);
    EndCallback = this->fields.EndCallback;
    if ( EndCallback )
      System_Action__Invoke(EndCallback, 0LL);
    BattlePerformanceBg__OnEndBgLoad(this, v71);
    return;
  }
  this->fields.fade = 2;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  BgObject = (UnityEngine_GameObject_o *)sub_B2C374(object___TypeInfo, 10LL);
  if ( !BgObject )
LABEL_78:
    sub_B2C434(BgObject, v24);
  v80 = (System_Object_array *)BgObject;
  v81 = StringLiteral_18914/*"from"*/;
  if ( StringLiteral_18914/*"from"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_18914/*"from"*/, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
    v82 = (System_Int32_array **)StringLiteral_18914/*"from"*/;
  }
  else
  {
    v82 = 0LL;
  }
  if ( !v80->max_length )
    goto LABEL_79;
  v80->m_Items[0] = (Il2CppObject *)v82;
  sub_B2C2F8((BattleServantConfConponent_o *)v80->m_Items, v82, v74, v75, v76, v77, v78, v79);
  black = UnityEngine_Color__get_black(0LL);
  v81 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &black);
  v89 = (System_Int32_array **)v81;
  if ( v81 )
  {
    v81 = sub_B2C41C(v81, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
  }
  if ( v80->max_length <= 1 )
    goto LABEL_79;
  v80->m_Items[1] = (Il2CppObject *)v89;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[1], v89, v83, v84, v85, v86, v87, v88);
  v81 = StringLiteral_22714/*"to"*/;
  if ( StringLiteral_22714/*"to"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_22714/*"to"*/, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
    v96 = (System_Int32_array **)StringLiteral_22714/*"to"*/;
  }
  else
  {
    v96 = 0LL;
  }
  if ( v80->max_length <= 2 )
    goto LABEL_79;
  v80->m_Items[2] = (Il2CppObject *)v96;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[2], v96, v90, v91, v92, v93, v94, v95);
  tmpcolor = this->fields.tmpcolor;
  v81 = j_il2cpp_value_box_0(UnityEngine_Color_TypeInfo, &tmpcolor);
  v103 = (System_Int32_array **)v81;
  if ( v81 )
  {
    v81 = sub_B2C41C(v81, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
  }
  if ( v80->max_length <= 3 )
    goto LABEL_79;
  v80->m_Items[3] = (Il2CppObject *)v103;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[3], v103, v97, v98, v99, v100, v101, v102);
  v81 = StringLiteral_22677/*"time"*/;
  if ( StringLiteral_22677/*"time"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_22677/*"time"*/, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
    v110 = (System_Int32_array **)StringLiteral_22677/*"time"*/;
  }
  else
  {
    v110 = 0LL;
  }
  if ( v80->max_length <= 4 )
    goto LABEL_79;
  v80->m_Items[4] = (Il2CppObject *)v110;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[4], v110, v104, v105, v106, v107, v108, v109);
  v149 = 1056964608;
  v81 = j_il2cpp_value_box_0(float_TypeInfo, &v149);
  v117 = (System_Int32_array **)v81;
  if ( v81 )
  {
    v81 = sub_B2C41C(v81, v80->obj.klass->_1.element_class);
    if ( !v81 )
    {
LABEL_80:
      v148 = sub_B2C454(v81);
      sub_B2C400(v148, 0LL);
    }
  }
  if ( v80->max_length <= 5 )
    goto LABEL_79;
  v80->m_Items[5] = (Il2CppObject *)v117;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[5], v117, v111, v112, v113, v114, v115, v116);
  v81 = StringLiteral_21272/*"onupdate"*/;
  if ( StringLiteral_21272/*"onupdate"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_21272/*"onupdate"*/, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
    v124 = (System_Int32_array **)StringLiteral_21272/*"onupdate"*/;
  }
  else
  {
    v124 = 0LL;
  }
  if ( v80->max_length <= 6 )
    goto LABEL_79;
  v80->m_Items[6] = (Il2CppObject *)v124;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[6], v124, v118, v119, v120, v121, v122, v123);
  v81 = StringLiteral_15060/*"UpdateColor"*/;
  if ( StringLiteral_15060/*"UpdateColor"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_15060/*"UpdateColor"*/, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
    v131 = (System_Int32_array **)StringLiteral_15060/*"UpdateColor"*/;
  }
  else
  {
    v131 = 0LL;
  }
  if ( v80->max_length <= 7 )
    goto LABEL_79;
  v80->m_Items[7] = (Il2CppObject *)v131;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[7], v131, v125, v126, v127, v128, v129, v130);
  v81 = StringLiteral_21263/*"oncomplete"*/;
  if ( StringLiteral_21263/*"oncomplete"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_21263/*"oncomplete"*/, v80->obj.klass->_1.element_class);
    if ( !v81 )
      goto LABEL_80;
    v138 = (System_Int32_array **)StringLiteral_21263/*"oncomplete"*/;
  }
  else
  {
    v138 = 0LL;
  }
  if ( v80->max_length <= 8 )
    goto LABEL_79;
  v80->m_Items[8] = (Il2CppObject *)v138;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[8], v138, v132, v133, v134, v135, v136, v137);
  v81 = StringLiteral_18344/*"endChangeColor"*/;
  if ( StringLiteral_18344/*"endChangeColor"*/ )
  {
    v81 = sub_B2C41C(StringLiteral_18344/*"endChangeColor"*/, v80->obj.klass->_1.element_class);
    if ( v81 )
    {
      v145 = (System_Int32_array **)StringLiteral_18344/*"endChangeColor"*/;
      goto LABEL_73;
    }
    goto LABEL_80;
  }
  v145 = 0LL;
LABEL_73:
  if ( v80->max_length <= 9 )
  {
LABEL_79:
    v147 = sub_B2C460(v81);
    sub_B2C400(v147, 0LL);
  }
  v80->m_Items[9] = (Il2CppObject *)v145;
  sub_B2C2F8((BattleServantConfConponent_o *)&v80->m_Items[9], v145, v139, v140, v141, v142, v143, v144);
  if ( (BYTE3(iTween_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !iTween_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
  v146 = iTween__Hash(v80, 0LL);
  iTween__ValueTo(gameObject, v146, 0LL);
}


void __fastcall BattlePerformanceBg__endChangeColor(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t fade; // w8
  const MethodInfo *v9; // x1
  const MethodInfo *v10; // x1
  int32_t loadbgno; // w20
  WarBoardManager_TaskList_o *AssetPass; // x0
  __int64 v13; // x1
  System_String_o *v14; // x20
  AssetLoader_LoadEndDataHandler_o *v15; // x21
  System_Action_o *EndCallback; // x0
  AssetLoader_LoadEndDataHandler_o *v17; // x21
  UnityEngine_Color_o black; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4189DA5 & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&Method_BattlePerformanceBg_endChangeBg__, v3);
    sub_B2C35C(&BattlePerformanceBg_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v6);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    byte_4189DA5 = 1;
  }
  fade = this->fields.fade;
  if ( fade != 2 )
  {
    if ( fade != 1 )
      return;
    black = UnityEngine_Color__get_black(0LL);
    UnityEngine_RenderSettings__set_ambientLight(black, 0LL);
    BattlePerformanceBg__ReleaseBg(this, v9);
    loadbgno = this->fields.loadbgno;
    if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    }
    AssetPass = (WarBoardManager_TaskList_o *)BattlePerformanceBg__GetAssetPass(loadbgno, v10);
    if ( this->fields.loadedChangeBgList )
    {
      v14 = (System_String_o *)AssetPass;
      if ( System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
             (System_Collections_Generic_List_WarBoardManager_TaskList__o *)this->fields.loadedChangeBgList,
             AssetPass,
             (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__) )
      {
        v15 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(v15, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        if ( AssetManager__getAsset_30151636(v14, v15, 0LL) )
          return;
LABEL_21:
        v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_BattlePerformanceBg_endChangeBg__, 0LL);
        if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !AssetManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
        }
        AssetManager__loadAssetStorage(v14, v17, 1, 0LL);
        return;
      }
      if ( !System_String__op_Inequality(v14, this->fields.initLoadedBgPath, 0LL) )
        goto LABEL_21;
      AssetPass = (WarBoardManager_TaskList_o *)this->fields.loadedChangeBgList;
      if ( AssetPass )
      {
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)AssetPass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v14,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        goto LABEL_21;
      }
    }
    sub_B2C434(AssetPass, v13);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  int32_t loadbgno; // w20
  int32_t loadbgType; // w22
  System_Action_o *v24; // x23
  const MethodInfo *v25; // x4

  if ( (byte_4189D9C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, data);
    sub_B2C35C(&Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, v5);
    sub_B2C35C(&BattlePerformanceBg___c__DisplayClass47_0_TypeInfo, v6);
    byte_4189D9C = 1;
  }
  v7 = sub_B2C42C(BattlePerformanceBg___c__DisplayClass47_0_TypeInfo);
  BattlePerformanceBg___c__DisplayClass47_0___ctor((BattlePerformanceBg___c__DisplayClass47_0_o *)v7, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 16), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = data;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 24), (System_Int32_array **)data, v16, v17, v18, v19, v20, v21);
  loadbgno = this->fields.loadbgno;
  loadbgType = this->fields.loadbgType;
  v24 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v7, Method_BattlePerformanceBg___c__DisplayClass47_0__endloadBg_b__0__, 0LL);
  BattlePerformanceBg__LoadBgSpShadowEffect(this, loadbgno, loadbgType, v24, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattlePerformanceBg__endloadBgAll(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  BattlePerformanceBg_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  System_Int32_array **v7; // x0
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  UnityEngine_Object_o **p_bgobject; // x21
  UnityEngine_Object_o *bgobject; // x22
  UnityEngine_Object_o *frontobject; // x22
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_Object_o *v23; // x22
  UnityEngine_Object_o *v24; // x22
  UnityEngine_Object_o *v25; // x22
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *actionCamera; // x22
  const MethodInfo *v28; // x2
  BattlePerformanceBg_o *v29; // x0
  const MethodInfo *v30; // x3
  _BOOL4 parentCamera; // w23
  UnityEngine_GameObject_o *v32; // x22
  UnityEngine_Transform_o *transform; // x23
  int v34; // s0
  UnityEngine_Transform_o *v37; // x23
  int v38; // s0
  int32_t newBgId; // w8
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  BattlePerformanceBg_o *v48; // x0
  const MethodInfo *v49; // x3
  UnityEngine_Object_o *v50; // x20
  const MethodInfo *v51; // x2
  UnityEngine_Transform_o *v52; // x21
  int v53; // s0
  System_String_array **v56; // x2
  System_String_array **v57; // x3
  System_Boolean_array **v58; // x4
  System_Int32_array **v59; // x5
  System_Int32_array *v60; // x6
  System_Int32_array *v61; // x7
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  System_Action_T__o *onLoadBgFinished; // x20
  int32_t loadbgno; // w21
  int32_t loadbgType; // w22
  bool v66; // w19
  BattlePerformanceBg_ChangedBgArgs_o *v67; // x23

  v4 = this;
  if ( (byte_4189D9D & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___, data);
    sub_B2C35C(&BattlePerformanceBg_ChangedBgArgs_TypeInfo, v5);
    this = (BattlePerformanceBg_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4189D9D = 1;
  }
  v4->fields.IsLoading = 0;
  if ( !data )
    goto LABEL_57;
  v7 = (System_Int32_array **)BattlePerformanceBg__saveHistoryBgState(v4, data->fields.name, method);
  v4->fields.nowBgState = (struct BattlePerformanceBg_BgState_o *)v7;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.nowBgState, v7, v8, v9, v10, v11, v12, v13);
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
    v23 = *p_bgobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
    {
      v24 = *p_bgobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v24, 0LL);
    }
    v25 = (UnityEngine_Object_o *)v4->fields.frontobject;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
    {
      v26 = (UnityEngine_Object_o *)v4->fields.frontobject;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      UnityEngine_Object__Destroy_35314896(v26, 0LL);
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
    BattlePerformanceBg__ReleaseBg_28999572(v4, v4->fields.nowBgId, v28);
  }
  v4->fields.BgAssetData = data;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v4->fields.BgAssetData,
    (System_Int32_array **)data,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBgObject(v29, data, v4->fields.loadbgType, v30);
  if ( !this )
    goto LABEL_57;
  parentCamera = v4->fields.parentCamera;
  v32 = (UnityEngine_GameObject_o *)this;
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
  if ( parentCamera )
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
    this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
  }
  else
  {
    if ( !this )
      goto LABEL_57;
    UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRoot, 0LL);
    transform = UnityEngine_GameObject__get_transform(v32, 0LL);
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_Vector3__get_zero(0LL);
    if ( !transform )
      goto LABEL_57;
    UnityEngine_Transform__set_eulerAngles(transform, *(UnityEngine_Vector3_o *)&v34, 0LL);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform(v32, 0LL);
  if ( !this )
    goto LABEL_57;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
  v37 = UnityEngine_GameObject__get_transform(v32, 0LL);
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Vector3__get_one(0LL);
  if ( !v37 )
    goto LABEL_57;
  UnityEngine_Transform__set_localScale(v37, *(UnityEngine_Vector3_o *)&v38, 0LL);
  newBgId = v4->fields.newBgId;
  v4->fields.bgobject = v32;
  v4->fields.nowBgId = newBgId;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v4->fields.bgobject,
    (System_Int32_array **)v32,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47);
  v50 = (UnityEngine_Object_o *)BattlePerformanceBg__getFrontObject(v48, data, v4->fields.loadbgType, v49);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  this = (BattlePerformanceBg_o *)UnityEngine_Object__op_Inequality(v50, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v50 )
    {
      this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
      if ( this )
      {
        UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.bgRootCamera, 0LL);
        this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
        if ( this )
        {
          UnityEngine_Transform__set_localEulerAngles((UnityEngine_Transform_o *)this, v4->fields.rot, 0LL);
          this = (BattlePerformanceBg_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
          if ( this )
          {
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v4->fields.pos, 0LL);
            v52 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v50, 0LL);
            *(UnityEngine_Vector3_o *)&v53 = UnityEngine_Vector3__get_one(0LL);
            if ( v52 )
            {
              UnityEngine_Transform__set_localScale(v52, *(UnityEngine_Vector3_o *)&v53, 0LL);
              v4->fields.frontobject = (struct UnityEngine_GameObject_o *)v50;
              sub_B2C2F8(
                (BattleServantConfConponent_o *)&v4->fields.frontobject,
                (System_Int32_array **)v50,
                v56,
                v57,
                v58,
                v59,
                v60,
                v61);
              goto LABEL_55;
            }
          }
        }
      }
    }
LABEL_57:
    sub_B2C434(this, data);
  }
LABEL_55:
  nowBgState = v4->fields.nowBgState;
  this = (BattlePerformanceBg_o *)BattlePerformanceBg__getBattleBgComponents(v4, 0, v51);
  if ( !nowBgState )
    goto LABEL_57;
  BattlePerformanceBg_BgState__loadSaveData(nowBgState, (BattleBgComponent_array *)this, v4->fields.actionCamera, 0LL);
  onLoadBgFinished = (System_Action_T__o *)v4->fields.onLoadBgFinished;
  loadbgno = v4->fields.loadbgno;
  loadbgType = v4->fields.loadbgType;
  v66 = v4->fields.parentCamera;
  v67 = (BattlePerformanceBg_ChangedBgArgs_o *)sub_B2C42C(BattlePerformanceBg_ChangedBgArgs_TypeInfo);
  BattlePerformanceBg_ChangedBgArgs___ctor(v67, loadbgno, loadbgType, v66, 0LL);
  ActionExtensions__Call_BlankEarth_QAARotateEarthResponse_(
    onLoadBgFinished,
    (BlankEarth_QAARotateEarthResponse_o *)v67,
    (const MethodInfo_2D65B10 *)Method_ActionExtensions_Call_BattlePerformanceBg_ChangedBgArgs___);
}


// local variable allocation has failed, the output may be wrong!
BattleBgComponent_array *__fastcall BattlePerformanceBg__getBattleBgComponents(
        BattlePerformanceBg_o *this,
        bool includeInactive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v10; // x21
  UnityEngine_Object_o *bgobject; // x22
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UnityEngine_Object_o *frontobject; // x22

  if ( (byte_4189D96 & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___, includeInactive);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBgComponent__AddRange__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBgComponent__ToArray__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_BattleBgComponent___ctor__, v7);
    sub_B2C35C(&System_Collections_Generic_List_BattleBgComponent__TypeInfo, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4189D96 = 1;
  }
  v10 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_BattleBgComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v10,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_BattleBgComponent___ctor__);
  bgobject = (UnityEngine_Object_o *)this->fields.bgobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(bgobject, 0LL, 0LL) )
  {
    v13 = this->fields.bgobject;
    if ( !v13 )
      goto LABEL_19;
    v13 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                        v13,
                                        includeInactive,
                                        (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
    if ( !v10 )
      goto LABEL_19;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
      (System_Collections_Generic_IEnumerable_T__o *)v13,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  }
  frontobject = (UnityEngine_Object_o *)this->fields.frontobject;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v13 = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(frontobject, 0LL, 0LL);
  if ( ((unsigned __int8)v13 & 1) == 0 )
  {
    if ( v10 )
      return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
LABEL_19:
    sub_B2C434(v13, v12);
  }
  v13 = this->fields.frontobject;
  if ( !v13 )
    goto LABEL_19;
  v13 = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                      v13,
                                      includeInactive,
                                      (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_BattleBgComponent___);
  if ( !v10 )
    goto LABEL_19;
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
    (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v10,
    (System_Collections_Generic_IEnumerable_T__o *)v13,
    (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_BattleBgComponent__AddRange__);
  return (BattleBgComponent_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v10,
                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_BattleBgComponent__ToArray__);
}


UnityEngine_GameObject_o *__fastcall BattlePerformanceBg__getBgObject(
        BattlePerformanceBg_o *this,
        AssetData_o *data,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_String_o *v10; // x1
  System_String_o *v11; // x0
  UnityEngine_UI_Dropdown_DropdownItem_o *v12; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *Object_WarBoardWaitTimeSetting; // x20
  UnityEngine_UI_Dropdown_DropdownItem_o *v15; // x19
  UnityEngine_UI_Dropdown_DropdownItem_o *v16; // x19
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = tp;
  if ( (byte_4189DA2 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    sub_B2C35C(&StringLiteral_16695/*"bg"*/, v8);
    this = (BattlePerformanceBg_o *)sub_B2C35C(&StringLiteral_16698/*"bg0"*/, v9);
    byte_4189DA2 = 1;
  }
  if ( tp < 1 )
  {
    if ( !data )
      sub_B2C434(this, data);
    Object_WarBoardWaitTimeSetting = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                                 data,
                                                                                 (System_String_o *)StringLiteral_16695/*"bg"*/,
                                                                                 (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
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
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v16 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16698/*"bg0"*/,
                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v16,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
  }
  else
  {
    v10 = System_Int32__ToString((int32_t)&v17, 0LL);
    v11 = System_String__Concat_44305532((System_String_o *)StringLiteral_16695/*"bg"*/, v10, 0LL);
    if ( !data )
      sub_B2C434(v11, v11);
    v12 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                      data,
                                                      v11,
                                                      (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0LL, 0LL) )
    {
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v12,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    }
    else
    {
      v15 = (UnityEngine_UI_Dropdown_DropdownItem_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                        data,
                                                        (System_String_o *)StringLiteral_16695/*"bg"*/,
                                                        (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                           v15,
                                           (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *v9; // x0
  System_String_o *v10; // x20
  System_String_o *v11; // x0
  System_String_o *v12; // x1
  UnityEngine_Object_o *Object_WarBoardWaitTimeSetting; // x20
  BattlePerformanceBg_c *v14; // x0
  bool v15; // w8
  UnityEngine_GameObject_o *result; // x0
  int32_t v17; // [xsp+Ch] [xbp-24h] BYREF

  v17 = tp;
  if ( (byte_4189DA3 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, data);
    sub_B2C35C(&BattlePerformanceBg_TypeInfo, v6);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    byte_4189DA3 = 1;
  }
  v9 = BattlePerformanceBg_TypeInfo;
  if ( tp > 0 )
  {
    if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
      v9 = BattlePerformanceBg_TypeInfo;
    }
    v10 = (System_String_o *)**((_QWORD **)v9 + 23);
    v11 = System_Int32__ToString((int32_t)&v17, 0LL);
    v9 = System_String__Concat_44305532(v10, v11, 0LL);
    v12 = (System_String_o *)v9;
    if ( data )
      goto LABEL_8;
LABEL_28:
    sub_B2C434(v9, v12);
  }
  if ( (WORD1(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v9 = BattlePerformanceBg_TypeInfo;
  }
  v12 = (System_String_o *)**((_QWORD **)v9 + 23);
  if ( !data )
    goto LABEL_28;
LABEL_8:
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v12,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL) )
    goto LABEL_19;
  v14 = BattlePerformanceBg_TypeInfo;
  if ( (BYTE3(BattlePerformanceBg_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformanceBg_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformanceBg_TypeInfo);
    v14 = BattlePerformanceBg_TypeInfo;
  }
  Object_WarBoardWaitTimeSetting = (UnityEngine_Object_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                             data,
                                                             v14->static_fields->Frontfile,
                                                             (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v15 = UnityEngine_Object__op_Inequality(Object_WarBoardWaitTimeSetting, 0LL, 0LL);
  result = 0LL;
  if ( v15 )
  {
LABEL_19:
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    return (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)Object_WarBoardWaitTimeSetting,
                                         (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  }
  return result;
}


BattlePerformanceBg_SaveData_o *__fastcall BattlePerformanceBg__getSaveData(
        BattlePerformanceBg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  __int64 v15; // x1
  struct BattlePerformanceBg_BgState_o *nowBgState; // x8
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  struct BattlePerformanceBg_BgState_o *v23; // x8
  System_Int32_array **bgName; // x1
  struct BattlePerformanceBg_BgState_o *v25; // x8
  unsigned int Count; // w0
  System_Int32_array **v27; // x0
  _DWORD **v28; // x21
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  struct BattlePerformanceBg_BgState_o *v35; // x8
  unsigned int v36; // w25
  System_Int32_array **value; // x23
  System_Int32_array **key; // x24
  __int64 v39; // x22
  __int64 v40; // x0
  __int64 v41; // x1
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_String_array **v48; // x2
  System_String_array **v49; // x3
  System_Boolean_array **v50; // x4
  System_Int32_array **v51; // x5
  System_Int32_array *v52; // x6
  System_Int32_array *v53; // x7
  __int64 v54; // x0
  __int64 v55; // x1
  _DWORD *v56; // x23
  __int64 v57; // x0
  System_String_array **v58; // x2
  System_String_array **v59; // x3
  System_Boolean_array **v60; // x4
  System_Int32_array **v61; // x5
  System_Int32_array *v62; // x6
  System_Int32_array *v63; // x7
  _DWORD *v64; // x0
  __int64 v65; // x0
  __int64 v66; // x0
  BattlePerformanceBg_SaveData_o *result; // x0
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v68; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl__o v69; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4189D93 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_B2C35C(&BattlePerformanceBg_SaveData_CompSaveData_TypeInfo, v4);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__, v6);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__,
      v7);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__,
      v8);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__get_Current__,
      v9);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Key__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_KeyValuePair_string__BattleBgComponent_SaveData__get_Value__, v11);
    sub_B2C35C(&BattlePerformanceBg_SaveData_TypeInfo, v12);
    byte_4189D93 = 1;
  }
  memset(&v69, 0, sizeof(v69));
  BattlePerformanceBg__saveHistoryBgState(this, 0LL, v2);
  v13 = sub_B2C42C(BattlePerformanceBg_SaveData_TypeInfo);
  BattlePerformanceBg_SaveData___ctor((BattlePerformanceBg_SaveData_o *)v13, 0LL);
  nowBgState = this->fields.nowBgState;
  if ( !nowBgState )
    goto LABEL_24;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)nowBgState->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
                                                                                                   compDictionary,
                                                                                                   (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  if ( (int)compDictionary < 1 )
  {
LABEL_24:
    if ( v13 )
      goto LABEL_25;
LABEL_26:
    sub_B2C434(compDictionary, v15);
  }
  v23 = this->fields.nowBgState;
  if ( !v23 )
    goto LABEL_26;
  if ( !v13 )
    goto LABEL_26;
  bgName = (System_Int32_array **)v23->fields.bgName;
  *(_QWORD *)(v13 + 16) = bgName;
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 16), bgName, v17, v18, v19, v20, v21, v22);
  v25 = this->fields.nowBgState;
  if ( !v25 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v25->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  Count = System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
            compDictionary,
            (const MethodInfo_2DB18BC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Count__);
  v27 = (System_Int32_array **)sub_B2C374(BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, Count);
  *(_QWORD *)(v13 + 24) = v27;
  v28 = (_DWORD **)(v13 + 24);
  sub_B2C2F8((BattleServantConfConponent_o *)(v13 + 24), v27, v29, v30, v31, v32, v33, v34);
  v35 = this->fields.nowBgState;
  if ( !v35 )
    goto LABEL_26;
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v35->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_26;
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl___GetEnumerator(
    (System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&v68,
    (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaElementDecl__o *)compDictionary,
    (const MethodInfo_2DB229C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__GetEnumerator__);
  v69 = v68;
  v36 = 0;
  while ( System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___MoveNext(
            &v69,
            (const MethodInfo_278B9EC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__MoveNext__) )
  {
    key = (System_Int32_array **)v69.fields.current.fields.key;
    value = (System_Int32_array **)v69.fields.current.fields.value;
    v39 = sub_B2C42C(BattlePerformanceBg_SaveData_CompSaveData_TypeInfo);
    BattlePerformanceBg_SaveData_CompSaveData___ctor((BattlePerformanceBg_SaveData_CompSaveData_o *)v39, 0LL);
    if ( !v39 )
      sub_B2C434(v40, v41);
    *(_QWORD *)(v39 + 16) = key;
    sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 16), key, v42, v43, v44, v45, v46, v47);
    *(_QWORD *)(v39 + 24) = value;
    sub_B2C2F8((BattleServantConfConponent_o *)(v39 + 24), value, v48, v49, v50, v51, v52, v53);
    v56 = *v28;
    if ( !*v28 )
      sub_B2C434(v54, v55);
    v57 = sub_B2C41C(v39, *(_QWORD *)(*(_QWORD *)v56 + 64LL));
    if ( !v57 )
    {
      v65 = sub_B2C454(0LL);
      sub_B2C400(v65, 0LL);
    }
    if ( v36 >= v56[6] )
    {
      v66 = sub_B2C460(v57);
      sub_B2C400(v66, 0LL);
    }
    v64 = &v56[2 * v36];
    *((_QWORD *)v64 + 4) = v39;
    sub_B2C2F8((BattleServantConfConponent_o *)(v64 + 8), (System_Int32_array **)v39, v58, v59, v60, v61, v62, v63);
    ++v36;
  }
  System_Collections_Generic_Dictionary_Enumerator_XmlQualifiedName__SchemaElementDecl___Dispose(
    &v69,
    (const MethodInfo_278BB54 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__BattleBgComponent_SaveData__Dispose__);
LABEL_25:
  result = (BattlePerformanceBg_SaveData_o *)v13;
  *(_DWORD *)(v13 + 32) = this->fields.loadbgno;
  *(_DWORD *)(v13 + 36) = this->fields.loadbgType;
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct System_String_o *AssetPass; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  AssetLoader_LoadEndDataHandler_o *v17; // x21

  if ( (byte_4189D9A & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, *(_QWORD *)&no);
    sub_B2C35C(&Method_BattlePerformanceBg_endloadBg__, v7);
    sub_B2C35C(&BattlePerformanceBg_TypeInfo, v8);
    sub_B2C35C(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    byte_4189D9A = 1;
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.initLoadedBgPath,
    (System_Int32_array **)AssetPass,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_B2C42C(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v17, (Il2CppObject *)this, Method_BattlePerformanceBg_endloadBg__, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage(AssetPass, v17, 1, 0LL) )
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
        v15 = sub_B2C460(BattleBgComponents);
        sub_B2C400(v15, 0LL);
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
    sub_B2C434(BattleBgComponents, v9);
  }
}


void __fastcall BattlePerformanceBg__playBgAnimationIn(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4189DAA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_21497/*"playerfield"*/, method);
    sub_B2C35C(&StringLiteral_2781/*"BattleIn"*/, v4);
    byte_4189DAA = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21497/*"playerfield"*/,
    (System_String_o *)StringLiteral_2781/*"BattleIn"*/,
    0.0,
    v2);
}


void __fastcall BattlePerformanceBg__playBgAnimationOut(BattlePerformanceBg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  __int64 v4; // x1

  if ( (byte_4189DA9 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2783/*"BattleOut"*/, method);
    sub_B2C35C(&StringLiteral_21497/*"playerfield"*/, v4);
    byte_4189DA9 = 1;
  }
  BattlePerformanceBg__playAnimation(
    this,
    (System_String_o *)StringLiteral_21497/*"playerfield"*/,
    (System_String_o *)StringLiteral_2783/*"BattleOut"*/,
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
        v8 = sub_B2C460(BattleBgComponents);
        sub_B2C400(v8, 0LL);
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
    sub_B2C434(BattleBgComponents, v4);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Object_o *bgobject; // x21
  const MethodInfo *v11; // x2
  UnityEngine_Object_o *frontobject; // x21
  BattlePerformanceBg_BgState_o *nowBgState; // x21
  BattleBgComponent_array *BattleBgComponents; // x0
  struct BattlePerformanceBg_BgState_o *v15; // x8
  struct BattlePerformanceBg_BgState_o *v16; // x8
  struct BattlePerformanceBg_BgState_o *v17; // x2
  __int64 v18; // x21

  if ( (byte_4189DA7 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceBg_BgState_TypeInfo, inName);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__, v8);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v9);
    byte_4189DA7 = 1;
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
      BattleBgComponents = BattlePerformanceBg__getBattleBgComponents(this, 0, v11);
      if ( !nowBgState )
        goto LABEL_32;
      BattlePerformanceBg_BgState__setSaveData(nowBgState, BattleBgComponents, 0LL);
      v15 = this->fields.nowBgState;
      if ( !v15 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                        (System_Xml_XmlQualifiedName_o *)v15->fields.bgName,
                                                        (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__);
      if ( ((unsigned __int8)BattleBgComponents & 1) != 0 )
      {
        v16 = this->fields.nowBgState;
        if ( !v16 )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
        if ( !BattleBgComponents )
          goto LABEL_32;
        BattleBgComponents = (BattleBgComponent_array *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Remove(
                                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
                                                          (System_Xml_XmlQualifiedName_o *)v16->fields.bgName,
                                                          (const MethodInfo_2DB372C *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Remove__);
      }
      v17 = this->fields.nowBgState;
      if ( !v17 )
        goto LABEL_32;
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( !BattleBgComponents )
        goto LABEL_32;
      System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
        (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
        (System_Xml_XmlQualifiedName_o *)v17->fields.bgName,
        (System_Xml_Schema_XmlSchemaObject_o *)v17,
        (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
    }
  }
  if ( !inName )
    return 0LL;
  BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
  if ( !BattleBgComponents )
LABEL_32:
    sub_B2C434(BattleBgComponents, inName);
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          (System_Xml_XmlQualifiedName_o *)inName,
          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__ContainsKey__) )
  {
    v18 = sub_B2C42C(BattlePerformanceBg_BgState_TypeInfo);
    BattlePerformanceBg_BgState___ctor((BattlePerformanceBg_BgState_o *)v18, inName, 0LL);
    if ( v18 )
    {
      BattleBgComponents = (BattleBgComponent_array *)this->fields.historyBgState;
      if ( BattleBgComponents )
      {
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponents,
          *(System_Xml_XmlQualifiedName_o **)(v18 + 16),
          (System_Xml_Schema_XmlSchemaObject_o *)v18,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__Add__);
        return (BattlePerformanceBg_BgState_o *)v18;
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
                                            (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__BattlePerformanceBg_BgState__get_Item__);
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
        v10 = sub_B2C460(BattleBgComponents);
        sub_B2C400(v10, 0LL);
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
    sub_B2C434(BattleBgComponents, v5);
  }
}


void __fastcall BattlePerformanceBg__setSaveData(
        BattlePerformanceBg_o *this,
        BattlePerformanceBg_SaveData_o *saveData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct BattlePerformanceBg_SaveData_CompSaveData_array *compSaveDataList; // x8
  struct BattlePerformanceBg_BgState_o *v7; // x0
  struct BattlePerformanceBg_BgState_o **p_nowBgState; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v18; // x21
  int max_length; // w8
  unsigned int v20; // w22
  BattlePerformanceBg_SaveData_CompSaveData_o *v21; // x25
  BattlePerformanceBg_BgState_o *nowBgState; // x20
  __int64 v23; // x0

  if ( (byte_4189D94 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, saveData);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, v5);
    byte_4189D94 = 1;
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
        v7 = BattlePerformanceBg__saveHistoryBgState(this, saveData->fields.bgName, method);
        p_nowBgState = &this->fields.nowBgState;
        this->fields.nowBgState = v7;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.nowBgState,
          (System_Int32_array **)v7,
          v9,
          v10,
          v11,
          v12,
          v13,
          v14);
        v18 = saveData->fields.compSaveDataList;
        if ( !v18 )
          goto LABEL_21;
        max_length = v18->max_length;
        if ( max_length >= 1 )
        {
          v20 = 0;
          while ( 1 )
          {
            if ( v20 >= max_length )
            {
              v23 = sub_B2C460(compDictionary);
              sub_B2C400(v23, 0LL);
            }
            if ( !*p_nowBgState )
              break;
            v21 = v18->m_Items[v20];
            if ( !v21 )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
            if ( !compDictionary )
              break;
            compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(compDictionary, (System_Xml_XmlQualifiedName_o *)v21->fields.bgCompName, (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
            if ( ((unsigned __int8)compDictionary & 1) == 0 )
            {
              if ( !*p_nowBgState )
                break;
              compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)(*p_nowBgState)->fields.compDictionary;
              if ( !compDictionary )
                break;
              System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
                compDictionary,
                (System_Xml_XmlQualifiedName_o *)v21->fields.bgCompName,
                (System_Xml_Schema_XmlSchemaObject_o *)v21->fields.bgCompData,
                (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
            }
            max_length = v18->max_length;
            if ( (int)++v20 >= max_length )
              goto LABEL_18;
          }
LABEL_21:
          sub_B2C434(compDictionary, v16);
        }
LABEL_18:
        nowBgState = this->fields.nowBgState;
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattlePerformanceBg__getBattleBgComponents(this, 0, v17);
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
  sub_B2C2F8(v20, callback);
}


void __fastcall BattlePerformanceBg_BgState___ctor(
        BattlePerformanceBg_BgState_o *this,
        System_String_o *inName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattlePerformanceBg_BgState_Fields *p_fields; // x19
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x20

  if ( (byte_4185074 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__, inName);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo, v5);
    byte_4185074 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.bgName = inName;
  p_fields = &this->fields;
  sub_B2C2F8(p_fields, inName);
  v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__TypeInfo);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
    v7,
    (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData___ctor__);
  p_fields->compDictionary = (struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *)v7;
  sub_B2C2F8(&p_fields->compDictionary, v7);
}


void __fastcall BattlePerformanceBg_BgState__loadSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        BattleActionCamera_o *actionCamera,
        const MethodInfo *method)
{
  BattlePerformanceBg_BgState_o *v6; // x21
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w24
  BattleBgComponent_o *v10; // x22
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x23
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *v12; // x23
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v14; // x0

  v6 = this;
  if ( (byte_4185076 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__, list);
    this = (BattlePerformanceBg_BgState_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__,
                                              v7);
    byte_4185076 = 1;
  }
  if ( !list )
    goto LABEL_15;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v14 = sub_B2C460(this);
        sub_B2C400(v14, 0LL);
      }
      v10 = list->m_Items[v9];
      if ( !v10 )
        break;
      v10[1].klass = (BattleBgComponent_c *)actionCamera;
      sub_B2C2F8(&v10[1], actionCamera);
      if ( LOBYTE(v10->fields.motionKey) )
      {
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v6->fields.compDictionary;
        this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
        if ( !compDictionary )
          break;
        this = (BattlePerformanceBg_BgState_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                  compDictionary,
                                                  (System_Xml_XmlQualifiedName_o *)this,
                                                  (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v12 = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.compDictionary;
          this = (BattlePerformanceBg_BgState_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)v10, 0LL);
          if ( !v12 )
            break;
          Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                   v12,
                   (System_Type_o *)this,
                   (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__get_Item__);
          BattleBgComponent__loadSaveData(v10, (BattleBgComponent_SaveData_o *)Item, 0LL);
        }
      }
      max_length = list->max_length;
      if ( (int)++v9 >= max_length )
        return;
    }
LABEL_15:
    sub_B2C434(this, list);
  }
}


void __fastcall BattlePerformanceBg_BgState__setSaveData(
        BattlePerformanceBg_BgState_o *this,
        BattleBgComponent_array *list,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *compDictionary; // x0
  signed int max_length; // w8
  unsigned int v8; // w24
  BattleBgComponent_o *v9; // x22
  struct System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__o *v10; // x21
  System_String_o *name; // x23
  __int64 v12; // x0

  if ( (byte_4185075 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__, list);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__, v5);
    byte_4185075 = 1;
  }
  compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.compDictionary;
  if ( !compDictionary )
    goto LABEL_14;
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    compDictionary,
    (const MethodInfo_2DB1E9C *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Clear__);
  if ( !list )
    goto LABEL_14;
  max_length = list->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
      {
        v12 = sub_B2C460(compDictionary);
        sub_B2C400(v12, 0LL);
      }
      v9 = list->m_Items[v8];
      if ( !v9 )
        break;
      if ( LOBYTE(v9->fields.motionKey) )
      {
        v10 = this->fields.compDictionary;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)v9, 0LL);
        compDictionary = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)BattleBgComponent__getSaveData(v9, 0LL);
        if ( !v10 )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v10,
          (System_Xml_XmlQualifiedName_o *)name,
          (System_Xml_Schema_XmlSchemaObject_o *)compDictionary,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__BattleBgComponent_SaveData__Add__);
      }
      max_length = list->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_B2C434(compDictionary, list);
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
  __int64 v3; // x1
  struct System_String_StaticFields *static_fields; // x8
  struct System_String_o *Empty; // x1
  struct BattlePerformanceBg_SaveData_CompSaveData_array *v6; // x1

  if ( (byte_4185077 & 1) == 0 )
  {
    sub_B2C35C(&BattlePerformanceBg_SaveData_CompSaveData___TypeInfo, method);
    sub_B2C35C(&string_TypeInfo, v3);
    byte_4185077 = 1;
  }
  *(_QWORD *)&this->fields.bgNo = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  static_fields = string_TypeInfo->static_fields;
  Empty = static_fields->Empty;
  this->fields.bgName = static_fields->Empty;
  sub_B2C2F8(&this->fields, Empty);
  v6 = (struct BattlePerformanceBg_SaveData_CompSaveData_array *)sub_B2C374(
                                                                   BattlePerformanceBg_SaveData_CompSaveData___TypeInfo,
                                                                   0LL);
  this->fields.compSaveDataList = v6;
  sub_B2C2F8(&this->fields.compSaveDataList, v6);
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
    sub_B2C434(0LL, method);
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
    sub_B2C434(this, 0LL);
  return BattleBgComponent__checkKey(x, this->fields.key, 0LL);
}