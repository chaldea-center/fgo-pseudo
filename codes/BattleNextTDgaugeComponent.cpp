void __fastcall BattleNextTDgaugeComponent___ctor(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  this->fields.width = 13.0;
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__changeGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t index,
        int32_t type,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v6; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  unsigned int max_length; // w9
  UnityEngine_GameObject_o *Component_srcLineSprite; // x0
  __int64 *v13; // x8
  __int64 v14; // x0

  v6 = this;
  if ( (byte_41843DC & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_UISprite___, *(_QWORD *)&index);
    sub_B2C35C(&StringLiteral_19324/*"icon_count_01"*/, v7);
    sub_B2C35C(&StringLiteral_19326/*"icon_count_bg"*/, v8);
    this = (BattleNextTDgaugeComponent_o *)sub_B2C35C(&StringLiteral_19325/*"icon_count_02"*/, v9);
    byte_41843DC = 1;
  }
  gaugeList = v6->fields.gaugeList;
  if ( gaugeList )
  {
    max_length = gaugeList->max_length;
    if ( (int)max_length > index )
    {
      if ( type == 2 )
      {
        if ( max_length > index )
        {
          Component_srcLineSprite = gaugeList->m_Items[index];
          if ( Component_srcLineSprite )
          {
            Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    Component_srcLineSprite,
                                                                    (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
            if ( Component_srcLineSprite )
            {
              v13 = &StringLiteral_19325/*"icon_count_02"*/;
LABEL_17:
              UISprite__set_spriteName((UISprite_o *)Component_srcLineSprite, (System_String_o *)*v13, 0LL);
              return;
            }
          }
          goto LABEL_18;
        }
      }
      else if ( max_length > index )
      {
        Component_srcLineSprite = gaugeList->m_Items[index];
        if ( Component_srcLineSprite )
        {
          Component_srcLineSprite = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                  Component_srcLineSprite,
                                                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
          if ( Component_srcLineSprite )
          {
            if ( type == 1 )
              v13 = &StringLiteral_19324/*"icon_count_01"*/;
            else
              v13 = &StringLiteral_19326/*"icon_count_bg"*/;
            goto LABEL_17;
          }
        }
LABEL_18:
        sub_B2C434(Component_srcLineSprite, *(_QWORD *)&index);
      }
      v14 = sub_B2C460(this);
      sub_B2C400(v14, 0LL);
    }
  }
}


void __fastcall BattleNextTDgaugeComponent__setHide(BattleNextTDgaugeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gaugeFrontRoot; // x0

  gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
  if ( !gaugeFrontRoot
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL),
        (gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeBackRoot) == 0LL)
    || (gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL)) == 0LL )
  {
    sub_B2C434(gaugeFrontRoot, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setInitGauge(
        BattleNextTDgaugeComponent_o *this,
        int32_t now,
        int32_t max,
        bool isTDSeraled,
        const MethodInfo *method)
{
  BattleNextTDgaugeComponent_o *v7; // x19
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x25
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  UnityEngine_Object_o *v15; // x21
  struct UnityEngine_GameObject_array *gaugebackList; // x26
  __int64 v17; // x8
  unsigned __int64 v18; // x27
  UnityEngine_Object_o *v19; // x25
  __int64 v20; // x1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  int32_t v22; // w26
  int32_t v23; // w22
  bool v24; // w1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v25; // x24
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x23
  int v27; // w27
  UnityEngine_GameObject_o *v28; // x25
  UnityEngine_GameObject_o *v29; // x25
  WarBoardUiData_SaveData_array *v30; // x0
  WarBoardUiData_SaveData_array *v31; // x0
  const MethodInfo *v32; // x2
  __int64 v33; // x0
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v36; // 0:s0.4,4:s1.4,8:s2.4

  v7 = this;
  if ( (byte_41843DA & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__Add__, *(_QWORD *)&now);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_GameObject___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_GameObject__TypeInfo, v10);
    this = (BattleNextTDgaugeComponent_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v11);
    byte_41843DA = 1;
  }
  gaugeList = v7->fields.gaugeList;
  if ( gaugeList )
  {
    v13 = *(_QWORD *)&gaugeList->max_length;
    if ( (int)v13 >= 1 )
    {
      v14 = 0LL;
      while ( v14 < (unsigned int)v13 )
      {
        v15 = (UnityEngine_Object_o *)gaugeList->m_Items[v14];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v15, 0LL);
        LODWORD(v13) = gaugeList->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          goto LABEL_11;
      }
LABEL_48:
      v33 = sub_B2C460(this);
      sub_B2C400(v33, 0LL);
    }
  }
LABEL_11:
  gaugebackList = v7->fields.gaugebackList;
  if ( gaugebackList )
  {
    v17 = *(_QWORD *)&gaugebackList->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( v18 < (unsigned int)v17 )
      {
        v19 = (UnityEngine_Object_o *)gaugebackList->m_Items[v18];
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35314896(v19, 0LL);
        LODWORD(v17) = gaugebackList->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_19;
      }
      goto LABEL_48;
    }
  }
LABEL_19:
  v7->fields.gaugeList = 0LL;
  sub_B2C2F8(&v7->fields.gaugeList, 0LL);
  v7->fields.gaugebackList = 0LL;
  sub_B2C2F8(&v7->fields.gaugebackList, 0LL);
  gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeFrontRoot;
  if ( isTDSeraled )
    v22 = 0;
  else
    v22 = max;
  if ( isTDSeraled )
    v23 = 0;
  else
    v23 = now;
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
  if ( !gaugeFrontRoot )
    goto LABEL_47;
  if ( v22 < 1 )
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 0, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    v24 = 0;
  }
  else
  {
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
    gaugeFrontRoot = (UnityEngine_Component_o *)v7->fields.gaugeBackRoot;
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gaugeFrontRoot, 0LL);
    if ( !gaugeFrontRoot )
      goto LABEL_47;
    v24 = 1;
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, v24, 0LL);
  v25 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v25,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v22 >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v7,
                                                    v7->fields.gaugeIcon,
                                                    v7->fields.gaugeFrontRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v28 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v28, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v35.fields.y = 0.0;
      v35.fields.z = 0.0;
      v35.fields.x = v7->fields.width * (float)v27;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v35, 0LL);
      if ( !v25 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v25,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v28,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      gaugeFrontRoot = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                    (BaseMonoBehaviour_o *)v7,
                                                    v7->fields.gaugebackIcon,
                                                    v7->fields.gaugeBackRoot,
                                                    0LL,
                                                    0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v29 = (UnityEngine_GameObject_o *)gaugeFrontRoot;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gaugeFrontRoot, 1, 0LL);
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(v29, 0LL);
      if ( !gaugeFrontRoot )
        goto LABEL_47;
      v36.fields.y = 0.0;
      v36.fields.z = 0.0;
      v36.fields.x = v7->fields.width * (float)v27;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)gaugeFrontRoot, v36, 0LL);
      if ( !v26 )
        goto LABEL_47;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        v26,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v29,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_GameObject__Add__);
      if ( ++v27 >= v22 )
        goto LABEL_45;
    }
  }
  if ( !v25 )
    goto LABEL_47;
LABEL_45:
  v30 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v25,
          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v7->fields.gaugeList = (struct UnityEngine_GameObject_array *)v30;
  sub_B2C2F8(&v7->fields.gaugeList, v30);
  if ( !v26 )
LABEL_47:
    sub_B2C434(gaugeFrontRoot, v20);
  v31 = System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v26,
          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_GameObject__ToArray__);
  v7->fields.gaugebackList = (struct UnityEngine_GameObject_array *)v31;
  sub_B2C2F8(&v7->fields.gaugebackList, v31);
  BattleNextTDgaugeComponent__setValue(v7, v23, v32);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleNextTDgaugeComponent__setValue(
        BattleNextTDgaugeComponent_o *this,
        int32_t nextVal,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  struct UnityEngine_GameObject_array *gaugeList; // x8
  struct UnityEngine_GameObject_array *v9; // x8
  int v10; // w21
  int v11; // w22
  int32_t v12; // w2
  BattleNextTDgaugeComponent_o *v13; // x0
  int32_t v14; // w1
  UnityEngine_Component_o *gaugeFrontRoot; // x0
  UnityEngine_Object_o *v16; // x21
  WebViewObject_o *Component_WebViewObject; // x20
  int v18; // w8
  bool v19; // w1
  UnityEngine_Behaviour_o *v20; // x0

  if ( (byte_41843DB & 1) == 0 )
  {
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_TweenAlpha___, *(_QWORD *)&nextVal);
    sub_B2C35C(&Method_UnityEngine_Component_GetComponent_UIWidget___, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_41843DB = 1;
  }
  gaugeList = this->fields.gaugeList;
  if ( gaugeList )
  {
    v9 = *(struct UnityEngine_GameObject_array **)&gaugeList->max_length;
    if ( v9 )
    {
      if ( (int)v9 >= 1 )
      {
        v10 = 0;
        v11 = (_DWORD)v9 - nextVal;
        do
        {
          if ( v11 == (_DWORD)v9 )
          {
            v12 = 2;
          }
          else
          {
            if ( v11 <= v10 )
            {
              v13 = this;
              v14 = v10;
              v12 = 0;
              goto LABEL_13;
            }
            v12 = 1;
          }
          v13 = this;
          v14 = v10;
LABEL_13:
          BattleNextTDgaugeComponent__changeGauge(v13, v14, v12, v3);
          v9 = this->fields.gaugeList;
          if ( !v9 )
            goto LABEL_37;
          LODWORD(v9) = v9->max_length;
          ++v10;
        }
        while ( v10 < (int)v9 );
      }
      gaugeFrontRoot = (UnityEngine_Component_o *)this->fields.gaugeFrontRoot;
      if ( !gaugeFrontRoot )
        goto LABEL_37;
      gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_WebViewObject_(
                                                    gaugeFrontRoot,
                                                    (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_UIWidget___);
      if ( !this->fields.gaugeFrontRoot )
        goto LABEL_37;
      v16 = (UnityEngine_Object_o *)gaugeFrontRoot;
      Component_WebViewObject = UnityEngine_Component__GetComponent_WebViewObject_(
                                  (UnityEngine_Component_o *)this->fields.gaugeFrontRoot,
                                  (const MethodInfo_172DB90 *)Method_UnityEngine_Component_GetComponent_TweenAlpha___);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(v16, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        gaugeFrontRoot = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                                      (UnityEngine_Object_o *)Component_WebViewObject,
                                                      0LL,
                                                      0LL);
        if ( ((unsigned __int8)gaugeFrontRoot & 1) != 0 )
        {
          if ( nextVal == 1 )
          {
            if ( Component_WebViewObject )
            {
              v18 = 1060320051;
              goto LABEL_32;
            }
          }
          else if ( nextVal )
          {
            if ( v16 )
            {
              gaugeFrontRoot = (UnityEngine_Component_o *)((__int64 (__fastcall *)(UnityEngine_Object_o *, Il2CppClass *, float))v16->klass[1]._1.castClass)(
                                                            v16,
                                                            v16->klass[1]._1.declaringType,
                                                            1.0);
              if ( Component_WebViewObject )
              {
                v20 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
                v19 = 0;
                goto LABEL_36;
              }
            }
          }
          else if ( Component_WebViewObject )
          {
            v18 = 1050253722;
LABEL_32:
            v19 = 1;
            LODWORD(Component_WebViewObject->fields.onStarted) = v18;
            v20 = (UnityEngine_Behaviour_o *)Component_WebViewObject;
LABEL_36:
            UnityEngine_Behaviour__set_enabled(v20, v19, 0LL);
            return;
          }
LABEL_37:
          sub_B2C434(gaugeFrontRoot, *(_QWORD *)&nextVal);
        }
      }
    }
  }
}