void CommonParticleControlComponent___ctor(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void CommonParticleControlComponent__Update(CommonParticleControlComponent_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  CommonParticleControlComponent_o *v3; // x19
  struct System_Collections_Generic_List_ParticleSystem__o *particleParent; // x8
  int32_t v5; // w20

  v3 = this;
  if ( (byte_4C3906E & 1) == 0 )
  {
    this = (CommonParticleControlComponent_o *)sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__);
    byte_4C3906E = 1;
  }
  particleParent = v3->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  v5 = 0;
  while ( v5 < particleParent->fields._size )
  {
    this = (CommonParticleControlComponent_o *)CommonParticleControlComponent__isAlive(v3, v5, 1, v2);
    if ( ((unsigned __int8)this & 1) != 0 )
      return;
    particleParent = v3->fields.particleParent;
    ++v5;
    if ( !particleParent )
      goto LABEL_8;
  }
  this = (CommonParticleControlComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v3, 0);
  if ( !this )
LABEL_8:
    sub_1C32E7C(this);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
}


void CommonParticleControlComponent__init(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v6; // x2

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C32E7C(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  CommonParticleControlComponent__setupLayer(this, layer, v6);
}


bool CommonParticleControlComponent__isAlive(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *particleParent; // x0

  if ( (byte_4C39072 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    byte_4C39072 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  if ( particleParent->fields._size > idx )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    idx,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
      return UnityEngine_ParticleSystem__IsAlive((UnityEngine_ParticleSystem_o *)particleParent, withChildren, 0);
LABEL_8:
    sub_1C32E7C(particleParent);
  }
  return 0;
}


void CommonParticleControlComponent__particleAllStop(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *particleParent; // x0
  int32_t v6; // w20
  bool v7; // w21

  if ( (byte_4C39070 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    byte_4C39070 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_11;
  v6 = 0;
  v7 = withChildren;
  while ( v6 < particleParent->fields._size )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    v6,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
    {
      UnityEngine_ParticleSystem__Stop_71507328((UnityEngine_ParticleSystem_o *)particleParent, v7, 0);
      particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
      ++v6;
      if ( particleParent )
        continue;
    }
    goto LABEL_11;
  }
  particleParent = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0);
  if ( !particleParent )
LABEL_11:
    sub_1C32E7C(particleParent);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)particleParent, 0, 0);
}


void CommonParticleControlComponent__particleStart(
        CommonParticleControlComponent_o *this,
        bool withChildren,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v6; // w21
  bool v7; // w20

  if ( (byte_4C3906F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    byte_4C3906F = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.particleParent) == 0) )
  {
LABEL_9:
    sub_1C32E7C(gameObject);
  }
  v6 = 0;
  v7 = withChildren;
  while ( v6 < SLODWORD(gameObject[1].klass) )
  {
    gameObject = (UnityEngine_GameObject_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)gameObject,
                                               v6,
                                               (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( gameObject )
    {
      UnityEngine_ParticleSystem__Play((UnityEngine_ParticleSystem_o *)gameObject, v7, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.particleParent;
      ++v6;
      if ( gameObject )
        continue;
    }
    goto LABEL_9;
  }
}


void CommonParticleControlComponent__particleStop(
        CommonParticleControlComponent_o *this,
        int32_t idx,
        bool withChildren,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *particleParent; // x0

  if ( (byte_4C39071 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    byte_4C39071 = 1;
  }
  particleParent = (System_Collections_Generic_List_object__o *)this->fields.particleParent;
  if ( !particleParent )
    goto LABEL_8;
  if ( particleParent->fields._size > idx )
  {
    particleParent = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                    particleParent,
                                                                    idx,
                                                                    (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_ParticleSystem__get_Item__);
    if ( particleParent )
    {
      UnityEngine_ParticleSystem__Stop_71507328((UnityEngine_ParticleSystem_o *)particleParent, withChildren, 0);
      return;
    }
LABEL_8:
    sub_1C32E7C(particleParent);
  }
}


void CommonParticleControlComponent__setupLayer(
        CommonParticleControlComponent_o *this,
        int32_t layer,
        const MethodInfo *method)
{
  void *gameObject; // x0
  UnityEngine_GameObject_o *v6; // x0
  int v7; // w8
  void *v8; // x20
  unsigned int v9; // w21

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_10;
  UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0);
  v6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  gameObject = GameObjectExtensions__GetChildren(v6, 1, 0);
  if ( !gameObject )
    goto LABEL_10;
  v7 = *((_DWORD *)gameObject + 6);
  v8 = gameObject;
  if ( v7 >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= v7 )
        sub_1C32E84(gameObject);
      gameObject = (void *)*((_QWORD *)v8 + (int)v9 + 4);
      if ( !gameObject )
        break;
      UnityEngine_GameObject__set_layer((UnityEngine_GameObject_o *)gameObject, layer, 0);
      v7 = *((_DWORD *)v8 + 6);
      if ( (int)++v9 >= v7 )
        return;
    }
LABEL_10:
    sub_1C32E7C(gameObject);
  }
}