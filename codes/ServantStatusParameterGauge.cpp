void __fastcall ServantStatusParameterGauge___ctor(ServantStatusParameterGauge_o *this, const MethodInfo *method)
{
  struct UISprite_array *v3; // x0
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BD9FAE & 1) == 0 )
  {
    sub_1C21E38(&UISprite___TypeInfo);
    byte_4BD9FAE = 1;
  }
  v3 = (struct UISprite_array *)sub_1C21EE0(UISprite___TypeInfo, 5LL);
  this->fields.gaugeSpriteList = v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.gaugeSpriteList, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusParameterGauge__Set(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        int32_t rank,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x23
  __int64 v9; // x24
  unsigned __int64 v10; // x25
  System_String_o *v11; // x21
  __int64 *v12; // x8
  int v13; // w8
  System_String_o *v14; // x20
  char v15; // w27
  float v16; // s8
  float v17; // s9
  char v18; // w26
  char v19; // w22
  __int64 *v20; // x8
  __int64 *v21; // x8
  UISprite_o *evaluationSprite; // x0
  unsigned __int64 i; // x20
  struct UISprite_array *gaugeSpriteList; // x8
  System_String_o *v25; // x8
  System_String_o *v26; // x1
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD9FAC & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_20737/*"img_parameter_C"*/);
    sub_1C21E38(&StringLiteral_20752/*"img_parametergage_edge"*/);
    sub_1C21E38(&StringLiteral_20753/*"img_parametergage_edge_ex"*/);
    sub_1C21E38(&StringLiteral_20744/*"img_parameter_minus"*/);
    sub_1C21E38(&StringLiteral_20736/*"img_parameter_B"*/);
    sub_1C21E38(&StringLiteral_20738/*"img_parameter_D"*/);
    sub_1C21E38(&StringLiteral_20751/*"img_parametergage_bar_ex"*/);
    sub_1C21E38(&StringLiteral_20746/*"img_parameter_plus"*/);
    sub_1C21E38(&StringLiteral_20735/*"img_parameter_A"*/);
    sub_1C21E38(&StringLiteral_20750/*"img_parametergage_bar"*/);
    sub_1C21E38(&StringLiteral_20747/*"img_parameter_question"*/);
    sub_1C21E38(&StringLiteral_20739/*"img_parameter_E"*/);
    sub_1C21E38(&StringLiteral_20740/*"img_parameter_EX"*/);
    byte_4BD9FAC = 1;
  }
  ServantStatusParameterGauge__SetParameterTitleSprite(this, kind, *(const MethodInfo **)&rank);
  v8 = StringLiteral_20750/*"img_parametergage_bar"*/;
  v9 = StringLiteral_20752/*"img_parametergage_edge"*/;
  v10 = 0LL;
  v11 = 0LL;
  switch ( rank )
  {
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
      v12 = &StringLiteral_20735/*"img_parameter_A"*/;
      v10 = 5LL;
      goto LABEL_9;
    case 17:
    case 18:
    case 19:
    case 20:
    case 27:
    case 28:
    case 29:
    case 30:
    case 37:
    case 38:
    case 39:
    case 40:
    case 47:
    case 48:
    case 49:
    case 50:
    case 57:
    case 58:
    case 59:
    case 60:
      goto LABEL_10;
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
      v12 = &StringLiteral_20736/*"img_parameter_B"*/;
      v10 = 4LL;
      goto LABEL_9;
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
      v12 = &StringLiteral_20737/*"img_parameter_C"*/;
      v10 = 3LL;
      goto LABEL_9;
    case 41:
    case 42:
    case 43:
    case 44:
    case 45:
    case 46:
      v12 = &StringLiteral_20738/*"img_parameter_D"*/;
      v10 = 2LL;
      goto LABEL_9;
    case 51:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
      v12 = &StringLiteral_20739/*"img_parameter_E"*/;
      v10 = 1LL;
LABEL_9:
      v11 = (System_String_o *)*v12;
      goto LABEL_10;
    case 61:
      v14 = 0LL;
      v8 = StringLiteral_20751/*"img_parametergage_bar_ex"*/;
      v9 = StringLiteral_20753/*"img_parametergage_edge_ex"*/;
      v11 = (System_String_o *)StringLiteral_20740/*"img_parameter_EX"*/;
      v15 = 1;
      v16 = 0.0;
      v17 = 16.0;
      v10 = 5LL;
LABEL_15:
      v18 = 1;
LABEL_19:
      v19 = 1;
LABEL_20:
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      UISprite__set_spriteName(evaluationSprite, v11, 0LL);
      if ( !v11 )
        goto LABEL_24;
      evaluationSprite = this->fields.evaluationSprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
        evaluationSprite,
        evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
LABEL_24:
      evaluationSprite = this->fields.evaluationAdd1Sprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      if ( (v15 & 1) != 0 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      else
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        v27.fields.y = 0.0;
        v27.fields.z = 0.0;
        v27.fields.x = v16;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v27, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        UISprite__set_spriteName(evaluationSprite, v14, 0LL);
        evaluationSprite = this->fields.evaluationAdd1Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      evaluationSprite = this->fields.evaluationAdd2Sprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      if ( (v18 & 1) != 0 )
      {
        UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
      }
      else
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                           (UnityEngine_GameObject_o *)evaluationSprite,
                                           0LL);
        if ( !evaluationSprite )
          goto LABEL_67;
        v28.fields.x = v17 + v16;
        v28.fields.y = 0.0;
        v28.fields.z = 0.0;
        UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v28, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        UISprite__set_spriteName(evaluationSprite, v14, 0LL);
        evaluationSprite = this->fields.evaluationAdd2Sprite;
        if ( !evaluationSprite )
          goto LABEL_67;
        ((void (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
          evaluationSprite,
          evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
      }
      evaluationSprite = this->fields.evaluationAdd3Sprite;
      if ( !evaluationSprite )
        goto LABEL_67;
      if ( (v19 & 1) == 0 )
      {
        evaluationSprite = (UISprite_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)evaluationSprite,
                                           0LL);
        if ( evaluationSprite )
        {
          evaluationSprite = (UISprite_o *)UnityEngine_GameObject__get_transform(
                                             (UnityEngine_GameObject_o *)evaluationSprite,
                                             0LL);
          if ( evaluationSprite )
          {
            v29.fields.x = v16 + (float)(v17 + v17);
            v29.fields.y = 0.0;
            v29.fields.z = 0.0;
            UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)evaluationSprite, v29, 0LL);
            evaluationSprite = this->fields.evaluationAdd3Sprite;
            if ( evaluationSprite )
            {
              UISprite__set_spriteName(evaluationSprite, v14, 0LL);
              evaluationSprite = this->fields.evaluationAdd3Sprite;
              if ( evaluationSprite )
              {
                evaluationSprite = (UISprite_o *)((__int64 (__fastcall *)(UISprite_o *, Il2CppMethodPointer))evaluationSprite->klass->vtable._33_MakePixelPerfect.method)(
                                                   evaluationSprite,
                                                   evaluationSprite->klass->vtable._34_get_minWidth.methodPtr);
                goto LABEL_48;
              }
            }
          }
        }
LABEL_67:
        sub_1C22094(evaluationSprite, v7);
      }
      UISprite__set_spriteName(evaluationSprite, 0LL, 0LL);
LABEL_48:
      for ( i = 0LL; i != 5; ++i )
      {
        gaugeSpriteList = this->fields.gaugeSpriteList;
        if ( !gaugeSpriteList )
          goto LABEL_67;
        if ( i >= gaugeSpriteList->max_length )
          sub_1C2209C(evaluationSprite, v7);
        evaluationSprite = gaugeSpriteList->m_Items[i];
        if ( i >= v10 )
        {
          if ( !evaluationSprite )
            goto LABEL_67;
          v26 = 0LL;
        }
        else
        {
          if ( !evaluationSprite )
            goto LABEL_67;
          if ( i >= 4 )
            v25 = (System_String_o *)v9;
          else
            v25 = (System_String_o *)v8;
          if ( i )
            v26 = v25;
          else
            v26 = (System_String_o *)v9;
        }
        UISprite__set_spriteName(evaluationSprite, v26, 0LL);
      }
      return;
    default:
      v10 = 0LL;
      if ( rank == 98 )
        v11 = (System_String_o *)StringLiteral_20747/*"img_parameter_question"*/;
      else
        v11 = 0LL;
LABEL_10:
      v13 = rank - 12;
      v14 = 0LL;
      v15 = 1;
      v16 = 0.0;
      v17 = 16.0;
      v18 = 1;
      v19 = 1;
      switch ( v13 )
      {
        case 0:
        case 10:
        case 20:
        case 30:
        case 40:
          v20 = &StringLiteral_20746/*"img_parameter_plus"*/;
          goto LABEL_14;
        case 1:
        case 11:
        case 21:
        case 31:
        case 41:
          v21 = &StringLiteral_20746/*"img_parameter_plus"*/;
          v15 = 0;
          v18 = 0;
          goto LABEL_18;
        case 2:
        case 12:
        case 22:
        case 32:
        case 42:
          v20 = &StringLiteral_20744/*"img_parameter_minus"*/;
LABEL_14:
          v15 = 0;
          v14 = (System_String_o *)*v20;
          goto LABEL_15;
        case 3:
        case 13:
        case 23:
        case 33:
        case 43:
          v15 = 0;
          v18 = 0;
          v19 = 0;
          v14 = (System_String_o *)StringLiteral_20746/*"img_parameter_plus"*/;
          v16 = -2.0;
          v17 = 10.0;
          goto LABEL_20;
        case 4:
        case 14:
        case 24:
        case 34:
        case 44:
          v21 = &StringLiteral_20747/*"img_parameter_question"*/;
          v15 = 0;
          v18 = 1;
          v16 = 5.0;
LABEL_18:
          v14 = (System_String_o *)*v21;
          goto LABEL_19;
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 15:
        case 16:
        case 17:
        case 18:
        case 19:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        case 35:
        case 36:
        case 37:
        case 38:
        case 39:
          goto LABEL_20;
        default:
          goto LABEL_15;
      }
  }
}


void __fastcall ServantStatusParameterGauge__SetParameterTitleSprite(
        ServantStatusParameterGauge_o *this,
        int32_t kind,
        const MethodInfo *method)
{
  UnityEngine_Object_o *parameterTitleSprite; // x21
  __int64 v6; // x1
  UISprite_o *v7; // x0
  __int64 *v8; // x8

  if ( (byte_4BD9FAD & 1) == 0 )
  {
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_20743/*"img_parameter_magic"*/);
    sub_1C21E38(&StringLiteral_20745/*"img_parameter_np"*/);
    sub_1C21E38(&StringLiteral_20749/*"img_parameter_strength"*/);
    sub_1C21E38(&StringLiteral_20742/*"img_parameter_luck"*/);
    sub_1C21E38(&StringLiteral_20741/*"img_parameter_endurance"*/);
    sub_1C21E38(&StringLiteral_20748/*"img_parameter_speed"*/);
    byte_4BD9FAD = 1;
  }
  parameterTitleSprite = (UnityEngine_Object_o *)this->fields.parameterTitleSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(parameterTitleSprite, 0LL, 0LL) )
  {
    switch ( kind )
    {
      case 0:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20749/*"img_parameter_strength"*/;
        goto LABEL_19;
      case 1:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20741/*"img_parameter_endurance"*/;
        goto LABEL_19;
      case 2:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20748/*"img_parameter_speed"*/;
        goto LABEL_19;
      case 3:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20743/*"img_parameter_magic"*/;
        goto LABEL_19;
      case 4:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
          goto LABEL_20;
        v8 = &StringLiteral_20742/*"img_parameter_luck"*/;
        goto LABEL_19;
      case 5:
        v7 = this->fields.parameterTitleSprite;
        if ( !v7 )
LABEL_20:
          sub_1C22094(v7, v6);
        v8 = &StringLiteral_20745/*"img_parameter_np"*/;
LABEL_19:
        UISprite__set_spriteName(v7, (System_String_o *)*v8, 0LL);
        break;
      default:
        return;
    }
  }
}