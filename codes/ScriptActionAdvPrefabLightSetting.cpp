void ScriptActionAdvPrefabLightSetting___ctor(ScriptActionAdvPrefabLightSetting_o *this, const MethodInfo *method)
{
  this->fields.fog = 1;
  *(_QWORD *)&this->fields.fogMode = 0x3F80000000000001LL;
  this->fields.ambientColor = (struct UnityEngine_Color_o)xmmword_CEE9A0;
  this->fields.fogColor = (struct UnityEngine_Color_o)xmmword_CEE9A0;
  this->fields.fogEndDistance = 100.0;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ScriptActionAdvPrefabLightSetting__Awake(ScriptActionAdvPrefabLightSetting_o *this, const MethodInfo *method)
{
  this->fields.originalAmblentMode = UnityEngine_RenderSettings__get_ambientMode(0);
  this->fields.originalAmblentLight = UnityEngine_RenderSettings__get_ambientSkyColor(0);
  this->fields.originalFog = UnityEngine_RenderSettings__get_fog(0);
  this->fields.originalFogColor = UnityEngine_RenderSettings__get_fogColor(0);
  this->fields.originalFogMode = UnityEngine_RenderSettings__get_fogMode(0);
  this->fields.originalFogDensity = UnityEngine_RenderSettings__get_fogDensity(0);
  this->fields.originalFogStartDistance = UnityEngine_RenderSettings__get_fogStartDistance(0);
  this->fields.originalFogEndDistance = UnityEngine_RenderSettings__get_fogEndDistance(0);
}


void ScriptActionAdvPrefabLightSetting__OnDestroy(ScriptActionAdvPrefabLightSetting_o *this, const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientMode(this->fields.originalAmblentMode, 0);
  UnityEngine_RenderSettings__set_ambientSkyColor(this->fields.originalAmblentLight, 0);
  UnityEngine_RenderSettings__set_fog(this->fields.originalFog, 0);
  UnityEngine_RenderSettings__set_fogColor(this->fields.originalFogColor, 0);
  UnityEngine_RenderSettings__set_fogMode(this->fields.originalFogMode, 0);
  UnityEngine_RenderSettings__set_fogDensity(this->fields.originalFogDensity, 0);
  UnityEngine_RenderSettings__set_fogStartDistance(this->fields.originalFogStartDistance, 0);
  UnityEngine_RenderSettings__set_fogEndDistance(this->fields.originalFogEndDistance, 0);
}


void ScriptActionAdvPrefabLightSetting__Start(ScriptActionAdvPrefabLightSetting_o *this, const MethodInfo *method)
{
  UnityEngine_RenderSettings__set_ambientMode(3, 0);
  UnityEngine_RenderSettings__set_ambientSkyColor(this->fields.ambientColor, 0);
  UnityEngine_RenderSettings__set_fog(this->fields.fog, 0);
  UnityEngine_RenderSettings__set_fogColor(this->fields.fogColor, 0);
  UnityEngine_RenderSettings__set_fogMode(this->fields.fogMode, 0);
  UnityEngine_RenderSettings__set_fogDensity(this->fields.fogDensity, 0);
  UnityEngine_RenderSettings__set_fogStartDistance(this->fields.fogStartDistance, 0);
  UnityEngine_RenderSettings__set_fogEndDistance(this->fields.fogEndDistance, 0);
}